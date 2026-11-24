//! Raw firmware front end: a Cortex-M flash dump loads with no `--target`,
//! `--base` or `--entry`, from its vector table.

use crate::common;

#[test]
fn cortexm_dump_is_configured_from_its_vector_table() {
    let fixture = common::fixture("cortexm3_raw.bin");
    let (out, err, code) = common::run_unlace(&["decompile-all", &fixture]);
    assert_eq!(code, 0, "{err}");
    assert!(
        err.contains("Cortex-M vector table: base 0x8000000"),
        "{err}"
    );
    assert!(
        out.contains("// Function: Reset_Handler @ 0x8000174"),
        "{out}"
    );
    assert!(out.contains("void SysTick_Handler(void)"));
    assert!(out.contains("// Function: IRQ37_Handler @ 0x8000108"));
    assert!(
        out.contains("dat_40011004 = 0x78;"),
        "a peripheral store survives"
    );
}

#[test]
fn an_explicit_base_is_kept() {
    let fixture = common::fixture("cortexm3_raw.bin");
    let (_, err, code) = common::run_unlace(&[
        "functions",
        &fixture,
        "--raw-image",
        "--target",
        "ARM:LE:32:Cortex",
        "--base",
        "0x8000000",
        "--isa",
        "thumb",
        "--entry",
        "0x8000174",
    ]);
    assert_eq!(code, 0, "{err}");
    assert!(!err.contains("Cortex-M vector table"));
}

#[test]
fn cortexm_dump_gets_the_system_control_space() {
    let bin = common::fixture("cortexm3_scs.bin");
    let (out, err, code) = common::run_unlace(&["decompile-all", &bin]);
    assert_eq!(code, 0, "{err}");
    assert!(out.contains("SCB.VTOR = 0x8000000;"), "{out}");
    assert!(out.contains("NVIC.ISER[0] = 0x40;"), "{out}");
    assert!(out.contains("NVIC.ISER[a0 >> 5] ="), "{out}");
    assert!(out.contains("SysTick.CTRL = 7;"), "{out}");
    let (off, err, code) =
        common::run_unlace(&["decompile-all", &bin, "--option", "cortexmscs", "off"]);
    assert_eq!(code, 0, "{err}");
    assert!(
        off.contains("dat_e000ed08 = 0x8000000;") && !off.contains("SCB."),
        "{off}"
    );
}

#[test]
fn svd_peripheral_replaces_a_system_control_space_block() {
    let bin = common::fixture("cortexm3_scs.bin");
    let svd = common::fixture("cortexm3_scs.svd");
    let (out, err, code) = common::run_unlace(&["decompile-all", &bin, "--svd", &svd]);
    assert_eq!(code, 0, "{err}");
    assert!(
        out.contains("STK.RVR = a0 - 1U;") && !out.contains("SysTick."),
        "{out}"
    );
    assert!(out.contains("SCB.VTOR = 0x8000000;"), "{out}");
    assert!(
        out.contains("dat_e000ed23 = 0xf0;"),
        "the SVD's SCB has no SHPR: {out}"
    );
    assert!(out.contains("FPU_CPACR.CPACR"), "{out}");
    assert!(
        out.contains("NVIC.ISER[0] = 0x40;"),
        "a block the SVD omits stays built in: {out}"
    );
}

#[test]
fn unpack_protocols_indexes_what_each_module_installs() {
    let fv = common::fixture("uefi_tiano_efi_compressed.fv");
    let dir = tempfile::tempdir().unwrap();
    let out_dir = dir.path().to_string_lossy().into_owned();
    let (_, err, code) = common::run_unlace(&["unpack", &fv, "-o", &out_dir, "--protocols"]);
    assert_eq!(code, 0, "{err}");
    let index = std::fs::read_to_string(dir.path().join("kuna-uefi.index")).unwrap();
    assert!(
        index.starts_with("kuna-uefi-index 1\nmodule DiskIoDxe.efi 07\n"),
        "{index}"
    );
    let binding = "install DiskIoDxe.efi ab31a01843b41a4da5c00c09261e9f71 1920 EFI_DRIVER_BINDING_PROTOCOL \
                   Supported=24f Start=aac Stop=5b9";
    assert!(index.contains(binding), "{index}");
    let module = dir
        .path()
        .join("DiskIoDxe.efi")
        .to_string_lossy()
        .into_owned();
    let (out, err, code) = common::run_unlace(&["decompile", &module, "_ModuleEntryPoint"]);
    assert_eq!(code, 0, "{err}");
    assert!(
        out.contains("gEfiDevicePathUtilitiesProtocolGuid,NULL,&mDevicePathUtilities)"),
        "{out}"
    );
    assert!(
        !out.contains("installed by"),
        "nothing in this volume installs the located protocol: {out}"
    );
}

/// A call through a service-table member has the member's prototype when the
/// call is built, so the notify function it is handed is a function and the
/// function is analyzed once.
#[test]
fn a_uefi_service_call_is_built_with_its_prototype() {
    let module = common::fixture("uefi_diskio_x64.efi");
    let (out, err, code) = common::run_unlace(&["decompile", &module, "0x9c2"]);
    assert_eq!(code, 0, "{err}");
    assert!(
        out.contains("(*gBS->CreateEvent)(0x200,8,sub_52e,v1,"),
        "{out}"
    );
}

#[test]
fn intel_hex_with_svd_names_peripherals_and_interrupts() {
    let hex = common::fixture("cortexm3_raw.hex");
    let svd = common::fixture("cortexm3_raw.svd");
    let (out, err, code) = common::run_unlace(&["decompile-all", &hex, "--svd", &svd]);
    assert_eq!(code, 0, "{err}");
    assert!(err.contains("Intel HEX: 516 bytes at 0x8000000"), "{err}");
    assert!(out.contains("void USART1_IRQHandler(void)"), "{out}");
    assert!(out.contains("USART1.DR = 0x78;"));
    assert!(out.contains("GPIOA.ODR = GPIOA.ODR ^ 0x20;"));
}

/// `--svd` names a bundled device as well as a file: the STM32F401's own
/// description (ST, Apache-2.0) names the same peripherals as the test SVD.
#[test]
fn svd_names_a_bundled_device() {
    let hex = common::fixture("cortexm3_raw.hex");
    let (out, err, code) = common::run_unlace(&["decompile-all", &hex, "--svd", "STM32F401CC"]);
    assert_eq!(code, 0, "{err}");
    assert!(
        err.contains("bundled description STM32F401 for STM32F401CC"),
        "{err}"
    );
    assert!(out.contains("void USART1_IRQHandler(void)"), "{out}");
    assert!(out.contains("USART1.DR = 0x78;"), "{out}");
    assert!(out.contains("GPIOA.ODR = GPIOA.ODR ^ 0x20;"), "{out}");
    let (_, err, code) = common::run_unlace(&["decompile-all", &hex, "--svd", "STM32F103C8"]);
    assert_ne!(code, 0);
    assert!(err.contains("no bundled device of that name"), "{err}");
}

/// `cortexm3_raw.elf`: `clang --target=thumbv7m-none-eabi -mcpu=cortex-m3 -Os
/// -ffreestanding -nostdlib -fuse-ld=lld -Wl,-T,cortexm3_raw.ld
/// -Wl,-e,Reset_Handler -Wl,-z,max-page-size=4 cortexm3_raw.c -o
/// cortexm3_raw.elf && llvm-strip --strip-debug cortexm3_raw.elf`.
#[test]
fn svd_types_the_peripherals_of_an_elf() {
    let elf = common::fixture("cortexm3_raw.elf");
    let svd = common::fixture("cortexm3_raw.svd");
    let (out, err, code) = common::run_unlace(&["decompile-all", &elf, "--svd", &svd]);
    assert_eq!(code, 0, "{err}");
    assert!(
        err.contains("SVD MINI_F4: 3 peripherals, 1 interrupts"),
        "{err}"
    );
    assert!(out.contains("USART1.DR = "), "{out}");
    assert!(out.contains("GPIOA.ODR = GPIOA.ODR ^ 0x20;"), "{out}");
}

#[test]
fn a_mediatek_md1img_loads_its_modem_rom_with_debug_names() {
    let img = common::fixture("md1img_mipsel_test.img");
    let (out, err, code) = common::run_unlace(&["decompile-all", &img]);
    assert_eq!(code, 0, "{err}");
    assert!(
        err.contains("MediaTek md1img: 68 bytes at 0x90000000, target MIPS:LE:32:default"),
        "{err}"
    );
    assert!(out.contains("int scale(int a0)"), "{out}");
    assert!(out.contains("return scale(a0) ^ 0x5a;"), "{out}");
}

#[test]
fn a_bios_image_loads_in_real_mode_at_its_reset_vector() {
    let bin = common::fixture("bios_realmode_test.bin");
    let (out, err, code) = common::run_unlace(&["decompile-all", &bin]);
    assert_eq!(code, 0, "{err}");
    assert!(
        err.contains(
            "PC BIOS image: 65536 bytes at 0xf0000, target x86:LE:16:Real Mode, entries [ffff0]"
        ),
        "{err}"
    );
    assert!(
        out.contains("sub_fe000();"),
        "a near call resolves inside segment F000: {out}"
    );
}

#[test]
fn unpack_decodes_efi_standard_and_tiano_compressed_files() {
    let fv = common::fixture("uefi_tiano_efi_compressed.fv");
    let (out, err, code) = common::run_unlace(&["unpack", &fv, "--list"]);
    assert_eq!(code, 0, "{err}");
    assert!(out.contains("2 modules in 1 volumes"), "{out}");
    assert!(!out.contains("undecoded"), "{out}");
}

#[test]
fn an_esp_image_loads_its_segments_and_names_its_rom_calls() {
    let bin = common::fixture("esprom_esp32.bin");
    let (out, err, code) = common::run_unlace(&["decompile-all", &bin]);
    assert_eq!(code, 0, "{err}");
    assert!(
        err.contains("ESP application image (esp32, 2 segments, entry 0x40080010)"),
        "{err}"
    );
    assert!(out.contains("return memcpy(a0,a1,0x10);"), "{out}");
    assert!(
        out.contains("v1 = dat_3ff4001c;"),
        "a volatile register is read twice: {out}"
    );
    assert!(
        !out.contains("Function: memcpy"),
        "a ROM function has no body to decompile: {out}"
    );

    let (off, err, code) =
        common::run_unlace(&["decompile-all", &bin, "--option", "esprom", "off"]);
    assert_eq!(code, 0, "{err}");
    assert!(
        off.contains("0x4000c2c8)(a0,a1,0x10);") && !off.contains("memcpy"),
        "{off}"
    );
    assert!(off.contains("return dat_3ff4001c * 2;"), "{off}");

    let (other, err, code) =
        common::run_unlace(&["decompile-all", &bin, "--option", "esprom", "esp32c3"]);
    assert_eq!(code, 0, "{err}");
    assert!(
        !other.contains("memcpy"),
        "another chip's ROM has other addresses: {other}"
    );

    let (_, err, code) =
        common::run_unlace(&["decompile-all", &bin, "--option", "esprom", "esp33"]);
    assert_ne!(code, 0);
    assert!(err.contains("esprom takes auto, off or a chip"), "{err}");
}

#[test]
fn an_esp_segment_dump_takes_the_chip_from_the_option() {
    let bin = common::fixture("esprom_esp32.bin");
    let image = std::fs::read(&bin).unwrap();
    let dir = tempfile::tempdir().unwrap();
    let iram = dir.path().join("iram.bin");
    std::fs::write(&iram, &image[0x3c..0x8c]).unwrap();
    let args = [
        "decompile-all",
        iram.to_str().unwrap(),
        "--raw-image",
        "--target",
        "Xtensa:LE:32:default",
        "--base",
        "0x40080000",
        "--entry",
        "0x40080010",
        "--assert",
        "readonly 0x40080000+0x50",
    ];
    let (out, err, code) = common::run_unlace(&args);
    assert_eq!(code, 0, "{err}");
    assert!(!out.contains("memcpy"), "a raw dump names no chip: {out}");
    let (out, err, code) =
        common::run_unlace(&[&args[..], &["--option", "esprom", "esp32"]].concat());
    assert_eq!(code, 0, "{err}");
    assert!(out.contains("memcpy(a0,a1,0x10)"), "{out}");
}
