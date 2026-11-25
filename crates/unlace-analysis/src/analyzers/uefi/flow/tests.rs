use super::*;

#[test]
fn signatures_split_and_join() {
    let (ret, params, varargs) =
        sig_parts("fn EFI_STATUS(EFI_GUID* Protocol, VOID*, VOID** Interface)").unwrap();
    assert_eq!(ret, "EFI_STATUS");
    assert_eq!(params[0], ("EFI_GUID*".to_string(), "Protocol".to_string()));
    assert_eq!(params[1], ("VOID*".to_string(), String::new()));
    assert!(!varargs);
    assert_eq!(
        sig_join(ret, &params, false),
        "EFI_STATUS(EFI_GUID* Protocol, VOID*, VOID** Interface)"
    );
    assert!(sig_parts("fn EFI_STATUS(EFI_HANDLE*, ...)").unwrap().2);
    assert!(sig_parts("FUNC").is_none());
}

#[test]
fn a_forwarding_function_takes_the_service_types() {
    let service = Rc::new(Service {
            owner: PEI_SERVICES.to_string(),
            member: "LocatePpi".to_string(),
            sig: "fn EFI_STATUS(EFI_PEI_SERVICES** PeiServices, EFI_GUID* Guid, UINTN Instance, VOID** PpiDescriptor, VOID** Ppi)".to_string(),
        });
    let wrapper = Wrapper {
        service,
        args: vec![
            Source::Unknown,
            Source::Param(0),
            Source::Const(0),
            Source::Param(2),
            Source::Param(3),
        ],
    };
    assert_eq!(
        wrapper_decl(&wrapper, Some((4, "PCD_PPI**".to_string()))).as_deref(),
        Some("EFI_STATUS(EFI_GUID* Guid, UINTN, VOID** PpiDescriptor, PCD_PPI** Ppi)")
    );
}

#[test]
fn roles_cover_the_three_phases() {
    assert!(matches!(
        role(BOOT_SERVICES, "OpenProtocol"),
        Some(Role::Locate { guid: 1, out: 2 })
    ));
    assert!(matches!(
        role("EFI_SMM_SYSTEM_TABLE2", "SmmLocateProtocol"),
        Some(Role::Locate { guid: 0, out: 2 })
    ));
    assert!(matches!(
        role("EFI_MM_SYSTEM_TABLE", "MmInstallProtocolInterface"),
        Some(Role::Install { .. })
    ));
    assert!(matches!(
        role(PEI_SERVICES, "NotifyPpi"),
        Some(Role::PpiList { notify: true, .. })
    ));
    assert!(role("EFI_RUNTIME_SERVICES", "LocateProtocol").is_none());
    assert!(matches!(
        role("EFI_SMM_SYSTEM_TABLE2", "SmmRegisterProtocolNotify"),
        Some(Role::MmNotify {
            guid: 0,
            function: 1
        })
    ));
    assert!(matches!(
        role("EFI_MM_SYSTEM_TABLE", "MmRegisterProtocolNotify"),
        Some(Role::MmNotify { .. })
    ));
    assert!(role(BOOT_SERVICES, "RegisterProtocolNotify").is_none());
}

#[test]
fn mm_notify_callbacks_take_the_interface_type() {
    let sw_dispatch2 = [
        0xdc, 0xc6, 0xa3, 0x18, 0xea, 0x5e, 0xc8, 0x48, 0xa1, 0xc1, 0xb5, 0x33, 0x89, 0xf9, 0x89,
        0x99,
    ];
    assert_eq!(
        guid_core(&sw_dispatch2, "Protocol"),
        "EfiSmmSwDispatch2Protocol"
    );
    assert!(guid_core(&[0xee; 16], "Protocol").starts_with("Protocol_"));
    let decl = mm_notify_decl(Some("EFI_SMM_SW_DISPATCH2_PROTOCOL"));
    let (ret, params, varargs) = sig_parts(&decl).unwrap();
    assert_eq!(ret, "EFI_STATUS");
    assert!(!varargs);
    assert_eq!(
        params[1],
        (
            "EFI_SMM_SW_DISPATCH2_PROTOCOL*".to_string(),
            "Interface".to_string()
        )
    );
    assert_eq!(
        sig_parts(&mm_notify_decl(None)).unwrap().1[1].0,
        "VOID*".to_string()
    );
}

#[test]
fn pointer_offsets_are_signed_and_checked() {
    assert_eq!(
        offset(Val::Stack(-8), 0xffff_ffff_ffff_fff8, 8, false),
        Some(Val::Stack(-16))
    );
    assert_eq!(offset(Val::Stack(0), 0x10, 8, true), Some(Val::Stack(-16)));
    assert_eq!(offset(Val::Stack(i64::MAX), 1, 8, false), None);
    assert_eq!(offset(Val::Param(0), 8, 8, false), None);
}

#[test]
fn a_core_takes_its_own_parameters() {
    assert_eq!(core_seeds(0x05, Kind::Dxe), Some([Some("VOID*"), None]));
    assert_eq!(
        core_seeds(0x04, Kind::Pei),
        Some([Some("VOID*"), Some("VOID*")])
    );
    assert_eq!(core_seeds(0x05, Kind::Pei), None);
    assert_eq!(core_seeds(0x06, Kind::Pei), None);
}
