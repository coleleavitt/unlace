void __fastcall ___ZN5dyld46Loader9getLoaderER11DiagnosticsRNS_12RuntimeStateEPKcRKNS0_11LoadOptionsE_block_invoke(
        __int64 a1,
        char *a2,
        __int64 a3,
        _BYTE *a4)
{
  int v5; // w22
  dyld4::RuntimeState *v8; // x23
  const char *v9; // x0
  __int64 v10; // x8
  dyld4::Loader **v11; // x24
  __int64 v12; // x25
  dyld4::Loader **v13; // x26
  dyld4::Loader *v14; // x23
  __int64 v15; // x8
  __int64 v16; // x9
  __int64 v17; // x8
  dyld4::Loader **v18; // x24
  __int64 v19; // x25
  dyld4::Loader **v20; // x26
  dyld4::Loader *v21; // x23
  int v22; // w23
  dyld4::RuntimeState *v23; // x0
  int v24; // w9
  _BOOL4 v25; // w8
  Diagnostics *v26; // x0
  dyld4::RuntimeState *v27; // x20
  int v28; // w23
  unsigned int v29; // w0
  _QWORD *v30; // x8
  __int64 v31; // x9
  dyld4::Loader **v32; // x24
  __int64 v33; // x25
  dyld4::Loader **v34; // x26
  dyld4::Loader *v35; // x22
  bool v36; // zf
  dyld4::RuntimeState *v37; // x1
  __int64 v38; // x24
  const char *v39; // x22
  __int64 v40; // x0
  _BOOL4 v41; // w8
  Diagnostics *v42; // x0
  dyld4::RuntimeState *v43; // x1
  dyld4::RuntimeState *v44; // x1
  dyld4::RuntimeState *v45; // x23
  __int64 v46; // x0
  _BOOL4 v47; // w21
  Diagnostics *v48; // x20
  const char *v49; // x0
  dyld4::RuntimeState *v50; // x19
  __int64 v51[3]; // [xsp+20h] [xbp-90h] BYREF
  char v52; // [xsp+38h] [xbp-78h]
  __int128 v53; // [xsp+40h] [xbp-70h] BYREF
  __int128 v54; // [xsp+50h] [xbp-60h]
  int v55; // [xsp+68h] [xbp-48h] BYREF
  unsigned int v56; // [xsp+6Ch] [xbp-44h] BYREF

  v5 = a3;
  if ( *(_BYTE *)(a1 + 80) && *(_BYTE *)(a1 + 81) && !*(_BYTE *)(a1 + 82) && *(char **)(a1 + 48) != a2 )
    return;
  v8 = *(dyld4::RuntimeState **)(a1 + 56);
  if ( *(_BYTE *)(*((_QWORD *)v8 + 1) + 188LL) )
  {
    v9 = (const char *)dyld4::ProcessConfig::PathOverrides::typeName(a3);
    dyld4::RuntimeState::log(v8, "  possible path(%s): \"%s\"\n", v9, a2);
    v8 = *(dyld4::RuntimeState **)(a1 + 56);
  }
  v10 = *((_QWORD *)v8 + 6);
  if ( !v10 )
  {
LABEL_11:
    v15 = *((_QWORD *)v8 + 1);
    if ( !*(_BYTE *)(v15 + 171) )
    {
      v24 = (unsigned __int8)*a2;
      if ( v24 != 47 && v24 != 64 )
      {
        v25 = Diagnostics::noError(*(Diagnostics **)(a1 + 64));
        v26 = *(Diagnostics **)(a1 + 64);
        if ( v25 )
          Diagnostics::error(v26, "tried: '%s' (relative path not allowed in hardened program)", a2);
        else
          Diagnostics::appendError(v26, ", '%s' (relative path not allowed in hardened program)");
        return;
      }
    }
    v56 = 0;
    if ( (unsigned int)dyld4::ProcessConfig::DyldCache::indexOfPath((DyldSharedCache **)(v15 + 200), a2, &v56) )
    {
      v16 = *(_QWORD *)(a1 + 56);
      v17 = *(_QWORD *)(v16 + 48);
      if ( v17 )
      {
        v18 = *(dyld4::Loader ***)(v16 + 40);
        v19 = 8 * v17;
        v20 = v18;
        while ( 1 )
        {
          v21 = *v20;
          if ( (unsigned int)dyld4::Loader::representsCachedDylibIndex(*v20, v56) )
            break;
          ++v20;
          ++v18;
          v19 -= 8;
          if ( !v19 )
            goto LABEL_17;
        }
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 24LL) = v21;
        *a4 = 1;
        Diagnostics::clearError(*(Diagnostics **)(a1 + 64));
        v27 = *(dyld4::RuntimeState **)(a1 + 56);
        if ( *(_BYTE *)(*((_QWORD *)v27 + 1) + 188LL) )
        {
          dyld4::Loader::path(v21);
          dyld4::RuntimeState::log(v27, "  found: already-loaded-by-dylib-index: \"%s\" -> %s\n");
        }
        return;
      }
    }
LABEL_17:
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 72) + 5LL) )
      return;
    v55 = 0;
    v53 = 0u;
    v54 = 0u;
    if ( *(_BYTE *)(a1 + 80) )
    {
      if ( v5 != 3
        && v5 != 8
        && (unsigned int)dyld4::ProcessConfig::DyldCache::indexOfPath(
                           (DyldSharedCache **)(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 8LL) + 200LL),
                           a2,
                           (unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL) + 24LL)) )
      {
        if ( (unsigned int)dyld4::ProcessConfig::DyldCache::isOverridablePath(
                             (dyld4::ProcessConfig::DyldCache *)(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 8LL) + 200LL),
                             a2)
          && (dyld4::ProcessConfig::fileExists(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 8LL), a2, &v53, &v55) & 1) != 0 )
        {
          if ( !BYTE8(v54) )
          {
            Diagnostics::Diagnostics((Diagnostics *)v51);
            goto LABEL_79;
          }
          v22 = 1;
          goto LABEL_44;
        }
LABEL_59:
        Diagnostics::Diagnostics((Diagnostics *)v51);
        v37 = *(dyld4::RuntimeState **)(a1 + 56);
        if ( *(_BYTE *)(*((_QWORD *)v37 + 1) + 188LL) )
        {
          dyld4::RuntimeState::log(
            v37,
            "  found: dylib-from-cache: (0x%04X) \"%s\"\n",
            *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL) + 24LL),
            a2);
          v37 = *(dyld4::RuntimeState **)(a1 + 56);
        }
        v38 = a1 + 32;
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 24LL) = dyld4::Loader::makeDyldCacheLoader(
                                                                        (int)v51,
                                                                        v37,
                                                                        a2);
        if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 8LL) + 188LL) || !Diagnostics::hasError((Diagnostics *)v51) )
          goto LABEL_90;
        v39 = "  found: dylib-from-cache-error: \"%s\" => \"%s\"\n";
        goto LABEL_89;
      }
      if ( (unsigned int)dyld4::ProcessConfig::fileExists(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 8LL), a2, &v53, &v55) )
      {
        v22 = *(_BYTE *)(a1 + 82) != 0;
        goto LABEL_43;
      }
    }
    else
    {
      v28 = dyld4::ProcessConfig::fileExists(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 8LL), a2, &v53, &v55);
      v29 = 0;
      if ( v5 != 3 && v5 != 8 )
        v29 = (unsigned int)dyld4::ProcessConfig::DyldCache::indexOfPath(
                              (DyldSharedCache **)(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 8LL) + 200LL),
                              a2,
                              (unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL) + 24LL));
      if ( v28 )
      {
        v22 = (*(_BYTE *)(a1 + 81) != 0) | v29;
LABEL_43:
        if ( !BYTE8(v54) )
        {
          Diagnostics::Diagnostics((Diagnostics *)v51);
          if ( (v22 & 1) == 0 )
          {
LABEL_84:
            v44 = *(dyld4::RuntimeState **)(a1 + 56);
            if ( *(_BYTE *)(*((_QWORD *)v44 + 1) + 188LL) )
            {
              dyld4::RuntimeState::log(v44, "  found: dylib-from-disk: \"%s\"\n", a2);
              v44 = *(dyld4::RuntimeState **)(a1 + 56);
            }
            v38 = a1 + 32;
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 24LL) = dyld4::Loader::makeDiskLoader(
                                                                            (int)v51,
                                                                            v44,
                                                                            a2);
            if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 8LL) + 188LL)
              || !Diagnostics::hasError((Diagnostics *)v51) )
            {
              goto LABEL_90;
            }
            v39 = "  found: dylib-from-disk-error: \"%s\" => \"%s\"\n";
LABEL_89:
            v45 = *(dyld4::RuntimeState **)(a1 + 56);
            v46 = Diagnostics::errorMessage((Diagnostics *)v51);
            dyld4::RuntimeState::log(v45, v39, a2, v46);
LABEL_90:
            if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v38 + 8LL) + 24LL) )
            {
              *a4 = 1;
              Diagnostics::clearError(*(Diagnostics **)(a1 + 64));
            }
            else
            {
              v47 = Diagnostics::noError(*(Diagnostics **)(a1 + 64));
              v48 = *(Diagnostics **)(a1 + 64);
              v49 = (const char *)Diagnostics::errorMessage((Diagnostics *)v51);
              if ( v47 )
                Diagnostics::error(v48, "tried: '%s' (%s)", a2, v49);
              else
                Diagnostics::appendError(v48, ", '%s' (%s)", a2, v49);
            }
            Diagnostics::~Diagnostics((vm_address_t *)v51);
            return;
          }
LABEL_79:
          v43 = *(dyld4::RuntimeState **)(a1 + 56);
          if ( *(_BYTE *)(*((_QWORD *)v43 + 1) + 188LL) )
          {
            dyld4::RuntimeState::log(v43, "  found: dylib-from-disk-to-override-cache: \"%s\"\n", a2);
            v43 = *(dyld4::RuntimeState **)(a1 + 56);
          }
          v38 = a1 + 32;
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 24LL) = dyld4::Loader::makeDiskLoader((int)v51, v43, a2);
          if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 8LL) + 188LL)
            || !Diagnostics::hasError((Diagnostics *)v51) )
          {
            goto LABEL_90;
          }
          v39 = "  found: dylib-from-disk-to-override-cache-error: \"%s\" => \"%s\"\n";
          goto LABEL_89;
        }
LABEL_44:
        v30 = *(_QWORD **)(a1 + 56);
        v31 = v30[6];
        if ( v31 )
        {
          v32 = (dyld4::Loader **)v30[5];
          v33 = 8 * v31 - 8;
          v34 = v32;
          while ( 1 )
          {
            v35 = *v34;
            dyld4::Loader::fileID(v51, *v34, (const dyld4::FileManager *)(v30 + 42));
            if ( v52 )
            {
              v36 = *((_QWORD *)&v53 + 1) != v51[1] || BYTE8(v54) == 0;
              if ( !v36 && (_QWORD)v53 == v51[0] && (_QWORD)v54 == v51[2] )
                break;
            }
            if ( !v33 )
              goto LABEL_55;
            ++v34;
            v30 = *(_QWORD **)(a1 + 56);
            v33 -= 8;
            ++v32;
          }
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 24LL) = v35;
          *a4 = 1;
          Diagnostics::clearError(*(Diagnostics **)(a1 + 64));
          v50 = *(dyld4::RuntimeState **)(a1 + 56);
          if ( *(_BYTE *)(*((_QWORD *)v50 + 1) + 188LL) )
          {
            dyld4::Loader::path(v35);
            dyld4::RuntimeState::log(v50, "  found: already-loaded-by-inode-mtime: \"%s\"\n");
          }
          return;
        }
LABEL_55:
        Diagnostics::Diagnostics((Diagnostics *)v51);
        if ( !v22 )
          goto LABEL_84;
        goto LABEL_79;
      }
      if ( (v29 & 1) != 0 )
        goto LABEL_59;
    }
    v40 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 32LL);
    if ( v40 && v5 != 3 && v5 != 8 )
      (*(void (__fastcall **)(__int64, char *))(v40 + 16))(v40, a2);
    v41 = Diagnostics::noError(*(Diagnostics **)(a1 + 64));
    v42 = *(Diagnostics **)(a1 + 64);
    if ( v41 )
      Diagnostics::error(v42, "tried: ");
    else
      Diagnostics::appendError(v42, ", ");
    if ( v5 != 3
      && v5 != 8
      && _platform_strncmp(a2, "/usr/lib/", 9u)
      && _platform_strncmp(a2, "/System/Library/", 0x10u)
      && _platform_strncmp(a2, "/System/iOSSupport/usr/lib/", 0x1Bu)
      && _platform_strncmp(a2, "/System/iOSSupport/System/Library/", 0x22u) )
    {
      _platform_strncmp(a2, "/System/DriverKit/", 0x12u);
    }
    if ( v55 == 666 )
    {
      Diagnostics::appendError(*(Diagnostics **)(a1 + 64), "'%s' (not a file%s)");
    }
    else if ( v55 == 2 )
    {
      Diagnostics::appendError(*(Diagnostics **)(a1 + 64), "'%s' (no such file%s)");
    }
    else
    {
      Diagnostics::appendError(*(Diagnostics **)(a1 + 64), "'%s' (errno=%d%s)");
    }
    return;
  }
  v11 = *((dyld4::Loader ***)v8 + 5);
  v12 = 8 * v10;
  v13 = v11;
  while ( 1 )
  {
    v14 = *v13;
    if ( (unsigned int)dyld4::Loader::matchesPath(*v13, a2) )
      break;
    ++v13;
    ++v11;
    v12 -= 8;
    if ( !v12 )
    {
      v8 = *(dyld4::RuntimeState **)(a1 + 56);
      goto LABEL_11;
    }
  }
  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 24LL) = v14;
  *a4 = 1;
  Diagnostics::clearError(*(Diagnostics **)(a1 + 64));
  v23 = *(dyld4::RuntimeState **)(a1 + 56);
  if ( *(_BYTE *)(*((_QWORD *)v23 + 1) + 188LL) )
    dyld4::RuntimeState::log(v23, "  found: already-loaded-by-path: \"%s\"\n");
}
