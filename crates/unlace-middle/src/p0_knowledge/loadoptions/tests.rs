use super::*;

#[test]
fn overrides_set_and_remove_variables_for_one_read() {
    let mut overrides = BTreeMap::new();
    overrides.insert(crate::goabi::GOABI_ENV, Some("off".to_string()));
    overrides.insert(crate::ppcapu::PPCAPU_ENV, Some("on".to_string()));
    overrides.insert(MACHO_SLICE_ENV, None);
    overrides.insert(FLIRT_SIGS_ENV, Some("/a".to_string()));
    let options = LoadOptions::from_env_with(&overrides);
    assert!(!options.goabi);
    assert!(options.ppcapu);
    assert_eq!(options.macho_slice, None);
    assert_eq!(options.flirt_sigs, vec![PathBuf::from("/a")]);
}

#[test]
fn scopes_nest_and_restore_per_thread() {
    assert_eq!(scoped(|o| o.goabi), None);
    let outer = LoadOptions {
        goabi: false,
        ..LoadOptions::default()
    };
    let _outer = outer.enter();
    assert_eq!(scoped(|o| o.goabi), Some(false));
    {
        let _inner = LoadOptions::default().enter();
        assert_eq!(scoped(|o| o.goabi), Some(true));
        std::thread::spawn(|| assert_eq!(scoped(|o| o.goabi), None))
            .join()
            .unwrap();
    }
    assert_eq!(scoped(|o| o.goabi), Some(false));
    assert!(!LoadOptions::in_force().goabi);
}

#[test]
fn a_scope_restores_the_enclosing_options_after_a_panic() {
    let _outer = LoadOptions {
        dyldcrossrefs: false,
        ..LoadOptions::default()
    }
    .enter();
    let unwound = std::panic::catch_unwind(|| {
        let _inner = LoadOptions::default().enter();
        panic!("load failed");
    });
    assert!(unwound.is_err());
    assert_eq!(scoped(|o| o.dyldcrossrefs), Some(false));
}

#[test]
fn a_scope_dropped_out_of_order_leaves_the_live_ones_in_force() {
    let first = LoadOptions {
        goabi: false,
        ..LoadOptions::default()
    }
    .enter();
    let second = LoadOptions {
        ppcapu: true,
        ..LoadOptions::default()
    }
    .enter();
    let environment = enter_environment();
    drop(second);
    assert_eq!(
        scoped(|o| o.goabi),
        None,
        "the environment scope is still innermost"
    );
    drop(first);
    assert_eq!(scoped(|o| o.goabi), None);
    let third = LoadOptions {
        ppcapu: true,
        ..LoadOptions::default()
    }
    .enter();
    drop(environment);
    assert_eq!(scoped(|o| o.ppcapu), Some(true));
    drop(third);
    assert_eq!(scoped(|o| o.goabi), None, "no scope outlives its guard");
    assert!(!options_in_force());
}

#[test]
fn gates_read_the_scope_not_the_environment() {
    let options = LoadOptions {
        ifuncfpret: false,
        ppcapu: true,
        kernelcache: KernelcacheChoice::Off,
        kernelcache_boot: KernelcacheBoot::Off,
        symbolnamechars: NameChars::Ident,
        libctypes: LibcTypesLayout::Glibc,
        calltargettype: false,
        macho_arm64e: false,
        sourcelang: Some(SourceLang::Rust),
        ppc32picimports: Ppc32PicMode::Abi,
        objcivars: false,
        objcsdk: Some(PathBuf::from("/sdk")),
        dyldimage: Some("libfoo.dylib".into()),
        dyldcrossrefs: false,
        cil: false,
        codestrings: false,
        nameladder: false,
        swifttypes: false,
        delphiabi: false,
        debuglink: false,
        exporttrie: false,
        ruststdsigs: RustStdSigs::Nearest,
        ..LoadOptions::default()
    };
    let _scope = options.enter();
    assert!(!crate::delphiabi::delphiabi_enabled());
    assert!(!crate::debuglink::debuglink_enabled());
    assert!(!crate::exporttrie::exporttrie_enabled());
    assert_eq!(crate::ruststdsigs::ruststdsigs(), RustStdSigs::Nearest);
    assert!(!crate::loadoptions::codestrings_enabled());
    assert!(!crate::loadoptions::nameladder_enabled());
    assert!(!crate::loadoptions::swifttypes_enabled());
    assert!(!crate::ifuncfpret::ifuncfpret_enabled());
    assert!(crate::ppcapu::ppcapu_enabled());
    assert_eq!(KernelcacheChoice::in_force(), KernelcacheChoice::Off);
    assert_eq!(KernelcacheBoot::in_force(), KernelcacheBoot::Off);
    assert_eq!(
        crate::symbolnamechars::symbolnamechars_mode(),
        NameChars::Ident
    );
    assert_eq!(crate::libctypes::libctypes_layout(), LibcTypesLayout::Glibc);
    assert!(
        !crate::loadoptions::scoped(|o| o.calltargettype)
            .unwrap_or_else(crate::loadoptions::env::calltargettype)
    );
    assert!(!crate::macho_arm64e::macho_arm64e_enabled());
    assert_eq!(crate::sourcelang::forced(), Some(SourceLang::Rust));
    assert!(crate::ppc32picimports::abi_enabled());
    assert!(!crate::objcivars::objcivars_enabled());
    assert_eq!(crate::objcsdk::sdk_path(), Some(PathBuf::from("/sdk")));
    assert_eq!(
        crate::dyldcache::selected_image().as_deref(),
        Some("libfoo.dylib")
    );
    assert!(!crate::dyldcache::dyldcrossrefs_enabled());
    assert!(!crate::cil::cil_enabled());
}
