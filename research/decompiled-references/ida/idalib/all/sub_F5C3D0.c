char *__fastcall sub_F5C3D0(int a1)
{
  char *v1; // rcx

  switch ( a1 )
  {
    case 0:
      j__strlen("cdecl");
      v1 = "cdecl";
      break;
    case 1:
      j__strlen("stdcall");
      v1 = "stdcall";
      break;
    case 2:
      j__strlen("fastcall");
      v1 = "fastcall";
      break;
    case 3:
      j__strlen("thiscall");
      v1 = "thiscall";
      break;
    case 4:
      j__strlen("vectorcall");
      v1 = "vectorcall";
      break;
    case 5:
      j__strlen("pascal");
      v1 = "pascal";
      break;
    case 6:
      j__strlen("ms_abi");
      v1 = "ms_abi";
      break;
    case 7:
      j__strlen("sysv_abi");
      v1 = "sysv_abi";
      break;
    case 8:
      j__strlen("regcall");
      v1 = "regcall";
      break;
    case 9:
      j__strlen("aapcs");
      v1 = "aapcs";
      break;
    case 10:
      j__strlen("aapcs-vfp");
      v1 = "aapcs-vfp";
      break;
    case 11:
      j__strlen("intel_ocl_bicc");
      v1 = "intel_ocl_bicc";
      break;
    case 12:
      j__strlen("spir_function");
      v1 = "spir_function";
      break;
    case 13:
      j__strlen("device_kernel");
      v1 = "device_kernel";
      break;
    case 14:
      j__strlen("swiftcall");
      v1 = "swiftcall";
      break;
    case 15:
      j__strlen("swiftasynccall");
      v1 = "swiftasynccall";
      break;
    case 16:
      j__strlen("preserve_most");
      v1 = "preserve_most";
      break;
    case 17:
      j__strlen("preserve_all");
      v1 = "preserve_all";
      break;
    case 18:
      j__strlen("aarch64_vector_pcs");
      v1 = "aarch64_vector_pcs";
      break;
    case 19:
      j__strlen("aarch64_sve_pcs");
      v1 = "aarch64_sve_pcs";
      break;
    case 20:
      j__strlen("m68k_rtd");
      v1 = "m68k_rtd";
      break;
    case 21:
      j__strlen("preserve_none");
      v1 = "preserve_none";
      break;
    case 22:
      j__strlen("riscv_vector_cc");
      v1 = "riscv_vector_cc";
      break;
    case 23:
      j__strlen("riscv_vls_cc(32)");
      v1 = "riscv_vls_cc(32)";
      break;
    case 24:
      j__strlen("riscv_vls_cc(64)");
      v1 = "riscv_vls_cc(64)";
      break;
    case 25:
      j__strlen("riscv_vls_cc(128)");
      v1 = "riscv_vls_cc(128)";
      break;
    case 26:
      j__strlen("riscv_vls_cc(256)");
      v1 = "riscv_vls_cc(256)";
      break;
    case 27:
      j__strlen("riscv_vls_cc(512)");
      v1 = "riscv_vls_cc(512)";
      break;
    case 28:
      j__strlen("riscv_vls_cc(1024)");
      v1 = "riscv_vls_cc(1024)";
      break;
    case 29:
      j__strlen("riscv_vls_cc(2048)");
      v1 = "riscv_vls_cc(2048)";
      break;
    case 30:
      j__strlen("riscv_vls_cc(4096)");
      v1 = "riscv_vls_cc(4096)";
      break;
    case 31:
      j__strlen("riscv_vls_cc(8192)");
      v1 = "riscv_vls_cc(8192)";
      break;
    case 32:
      j__strlen("riscv_vls_cc(16384)");
      v1 = "riscv_vls_cc(16384)";
      break;
    case 33:
      j__strlen("riscv_vls_cc(32768)");
      v1 = "riscv_vls_cc(32768)";
      break;
    case 34:
      j__strlen("riscv_vls_cc(65536)");
      v1 = "riscv_vls_cc(65536)";
      break;
  }
  return v1;
}
