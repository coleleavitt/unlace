void __fastcall ___ZN5dyld416JustInTimeLoader14loadDependentsER11DiagnosticsRNS_12RuntimeStateERKNS_6Loader11LoadOptionsE_block_invoke(
        __int64 a1,
        const char *a2,
        int a3,
        int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        _BYTE *a8)
{
  char v9; // w23
  __int64 v12; // x20
  char *v13; // x0
  char v14; // w8
  __int64 v15; // x9
  __int64 v16; // x8
  dyld4::Loader **v17; // x25
  __int64 v18; // x26
  dyld4::Loader **v19; // x27
  dyld4::Loader *v20; // x24
  __int128 *v21; // x8
  __int128 v22; // q0
  __int128 v23; // q1
  __int64 v24; // x0
  dyld4::Loader *Loader; // x0
  Diagnostics *v26; // x23
  const char *v27; // x27
  const char *v28; // x25
  const char *v29; // x0
  const char *v30; // x2
  vm_address_t v31; // [xsp+28h] [xbp-E8h] BYREF
  __int128 v32; // [xsp+30h] [xbp-E0h] BYREF
  __int128 v33; // [xsp+40h] [xbp-D0h]
  __int64 v34; // [xsp+50h] [xbp-C0h]
  vm_address_t v35; // [xsp+60h] [xbp-B0h] BYREF
  _QWORD v36[2]; // [xsp+68h] [xbp-A8h] BYREF
  char v37[64]; // [xsp+78h] [xbp-98h] BYREF

  v9 = a3;
  v12 = *(_QWORD *)(a1 + 40);
  if ( a5 )
  {
    v13 = (char *)dyld4::JustInTimeLoader::dependentKind(
                    *(dyld4::JustInTimeLoader **)(a1 + 40),
                    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 24LL));
    v14 = 3;
  }
  else if ( a4 )
  {
    v13 = (char *)dyld4::JustInTimeLoader::dependentKind(
                    *(dyld4::JustInTimeLoader **)(a1 + 40),
                    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 24LL));
    v14 = 2;
  }
  else
  {
    if ( !a3 )
    {
      if ( (*(_BYTE *)(v12 + 18) & 0x80) == 0 )
        *(_BYTE *)dyld4::JustInTimeLoader::dependentKind(
                    *(dyld4::JustInTimeLoader **)(a1 + 40),
                    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 24LL)) = 0;
      goto LABEL_8;
    }
    v13 = (char *)dyld4::JustInTimeLoader::dependentKind(
                    *(dyld4::JustInTimeLoader **)(a1 + 40),
                    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 24LL));
    v14 = 1;
  }
  *v13 = v14;
LABEL_8:
  if ( *a2 != 47 )
    goto LABEL_15;
  v15 = *(_QWORD *)(a1 + 48);
  v16 = *(_QWORD *)(v15 + 48);
  if ( !v16 )
    goto LABEL_15;
  v17 = *(dyld4::Loader ***)(v15 + 40);
  v18 = 8 * v16;
  v19 = v17;
  while ( 1 )
  {
    v20 = *v19;
    if ( dyld4::Loader::matchesPath(*v19, a2) )
      break;
    ++v19;
    ++v17;
    v18 -= 8;
    if ( !v18 )
      goto LABEL_15;
  }
  if ( !v20 )
  {
LABEL_15:
    v36[0] = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 16LL);
    v36[1] = v12;
    Diagnostics::Diagnostics((Diagnostics *)&v35);
    v21 = *(__int128 **)(a1 + 56);
    v22 = *v21;
    v23 = v21[1];
    v34 = *((_QWORD *)v21 + 4);
    v32 = v22;
    v33 = v23;
    BYTE11(v32) = *(_BYTE *)(v12 + 5) & 1;
    *(_QWORD *)&v33 = v36;
    BYTE2(v32) = v9;
    v24 = *((_QWORD *)v21 + 3);
    if ( v24 )
      Loader = (dyld4::Loader *)(*(__int64 (__fastcall **)(__int64, vm_address_t *, _QWORD, const char *, __int128 *))(v24 + 16))(
                                  v24,
                                  &v35,
                                  *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 8LL) + 68LL),
                                  a2,
                                  &v32);
    else
      Loader = dyld4::Loader::getLoader((Diagnostics *)&v35, *(_QWORD *)(a1 + 48), a2, &v32);
    v20 = Loader;
    if ( Diagnostics::hasError((Diagnostics *)&v35) )
    {
      dyld4::Loader::getUuidStr((dyld4::Loader *)v12, *(dyld4::RuntimeState **)(a1 + 48), v37);
      Diagnostics::Diagnostics((Diagnostics *)&v31);
      dyld4::Loader::tooNewErrorAddendum((dyld4::Loader *)v12, (Diagnostics *)&v31, *(dyld4::RuntimeState **)(a1 + 48));
      v26 = *(Diagnostics **)(a1 + 64);
      if ( *(_WORD *)(v12 + 16) )
        v27 = (const char *)(v12 + *(unsigned __int16 *)(v12 + 16));
      else
        v27 = nullptr;
      v28 = (const char *)Diagnostics::errorMessage((Diagnostics *)&v31);
      v29 = (const char *)Diagnostics::errorMessage((Diagnostics *)&v35);
      Diagnostics::error(
        v26,
        "Library not loaded: %s\n  Referenced from: <%s> %s%s\n  Reason: %s",
        a2,
        v37,
        v27,
        v28,
        v29);
      if ( **(_BYTE **)(a1 + 56) )
      {
        if ( *(_WORD *)(v12 + 16) )
          v30 = (const char *)(v12 + *(unsigned __int16 *)(v12 + 16));
        else
          v30 = nullptr;
        dyld4::RuntimeState::setLaunchMissingDylib(*(dyld4::RuntimeState **)(a1 + 48), a2, v30);
      }
      *a8 = 1;
      Diagnostics::~Diagnostics(&v31);
    }
    Diagnostics::~Diagnostics(&v35);
  }
  *(_QWORD *)(v12 + 8LL * (int)(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 24LL))++ + 88) = v20;
}
