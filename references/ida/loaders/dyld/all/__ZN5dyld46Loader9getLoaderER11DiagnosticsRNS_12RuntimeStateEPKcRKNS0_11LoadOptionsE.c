dyld4::Loader *__fastcall dyld4::Loader::getLoader(Diagnostics *a1, __int64 a2, const char *a3, _BYTE *a4)
{
  char *v5; // x23
  __int64 v8; // x8
  bool v9; // w26
  int v10; // w0
  int v11; // w8
  int v12; // w9
  __int64 v13; // x8
  dyld4::Loader **v14; // x25
  __int64 v15; // x28
  dyld4::Loader **v16; // x21
  dyld4::Loader *v17; // x24
  _BOOL4 v18; // w9
  const char *v19; // x0
  const char *v20; // x24
  unsigned int v21; // w24
  int isOverridablePath; // w0
  dyld4::SyscallDelegate *v23; // x24
  size_t v24; // x0
  __int64 Loader; // x0
  size_t v26; // x24
  char *v27; // x25
  __int64 v28; // x8
  dyld4::Loader **v29; // x27
  __int64 v30; // x21
  dyld4::Loader **v31; // x28
  __int64 v32; // x8
  dyld4::Loader **v33; // x25
  __int64 v34; // x21
  dyld4::Loader **v35; // x26
  dyld4::Loader *v36; // x24
  const char *v37; // x0
  const char *v39; // x0
  const char *v40; // x0
  _QWORD v41[2]; // [xsp+10h] [xbp-520h] BYREF
  _BOOL4 v42; // [xsp+24h] [xbp-50Ch]
  void **v43; // [xsp+28h] [xbp-508h]
  __int64 v44; // [xsp+30h] [xbp-500h]
  void (__fastcall *v45)(__int64, char *, __int64, _BYTE *); // [xsp+38h] [xbp-4F8h]
  void *v46; // [xsp+40h] [xbp-4F0h]
  __int64 *v47; // [xsp+48h] [xbp-4E8h]
  _QWORD *v48; // [xsp+50h] [xbp-4E0h]
  char *v49; // [xsp+58h] [xbp-4D8h]
  __int64 v50; // [xsp+60h] [xbp-4D0h]
  Diagnostics *v51; // [xsp+68h] [xbp-4C8h]
  _BYTE *v52; // [xsp+70h] [xbp-4C0h]
  bool v53; // [xsp+78h] [xbp-4B8h]
  char v54; // [xsp+79h] [xbp-4B7h]
  char v55; // [xsp+7Ah] [xbp-4B6h]
  _QWORD v56[3]; // [xsp+80h] [xbp-4B0h] BYREF
  unsigned int v57; // [xsp+98h] [xbp-498h] BYREF
  __int64 v58; // [xsp+A0h] [xbp-490h] BYREF
  __int64 *v59; // [xsp+A8h] [xbp-488h]
  __int64 v60; // [xsp+B0h] [xbp-480h]
  __int64 v61; // [xsp+B8h] [xbp-478h]
  char v62[1024]; // [xsp+C0h] [xbp-470h] BYREF

  v5 = (char *)a3;
  v58 = 0;
  v59 = &v58;
  v60 = 0x2000000000LL;
  v61 = 0;
  v8 = *(_QWORD *)(a2 + 8);
  if ( *(_QWORD *)(v8 + 200) )
    v9 = *(_BYTE *)(v8 + 340) == 0;
  else
    v9 = 0;
  if ( *(_BYTE *)(v8 + 188) )
    dyld4::RuntimeState::log((dyld4::RuntimeState *)a2, "find path \"%s\"\n", a3);
  v10 = _platform_strncmp(v5, "@rpath/", 7u);
  v11 = (unsigned __int8)*v5;
  if ( v11 == 47 )
  {
    v18 = 1;
  }
  else
  {
    if ( v11 == 46 )
    {
      v12 = (unsigned __int8)v5[1];
      if ( v12 == 47 || v12 == 46 && v5[2] == 47 )
      {
        v42 = 0;
        if ( !v10 )
          goto LABEL_12;
        goto LABEL_20;
      }
    }
    v18 = v11 == 64;
  }
  v42 = v18;
  if ( !v10 )
  {
LABEL_12:
    v13 = *(_QWORD *)(a2 + 48);
    if ( v13 )
    {
      v14 = *(dyld4::Loader ***)(a2 + 40);
      v15 = 8 * v13;
      v16 = v14;
      while ( 1 )
      {
        v17 = *v16;
        if ( (unsigned int)dyld4::Loader::matchesPath(*v16, v5) )
          break;
        ++v16;
        ++v14;
        v15 -= 8;
        if ( !v15 )
          goto LABEL_21;
      }
      if ( *(_BYTE *)(*(_QWORD *)(a2 + 8) + 188LL) )
      {
        v37 = (const char *)dyld4::Loader::path(v17);
        dyld4::RuntimeState::log((dyld4::RuntimeState *)a2, "  found: already-loaded-by-rpath: %s\n", v37);
      }
      goto LABEL_64;
    }
LABEL_21:
    v19 = (const char *)dyld4::ProcessConfig::canonicalDylibPathInCache(*(dyld4::ProcessConfig **)(a2 + 8), v5);
    if ( v19 )
    {
      v20 = v19;
      if ( _platform_strcmp(v19, v5) )
      {
        if ( *(_BYTE *)(*(_QWORD *)(a2 + 8) + 188LL) )
          dyld4::RuntimeState::log((dyld4::RuntimeState *)a2, "  switch to canonical cache path: %s\n", v20);
        v5 = (char *)v20;
      }
    }
    v56[0] = 0;
    v56[1] = v56;
    v56[2] = 0x2000000000LL;
    v57 = 0;
    v21 = (unsigned int)dyld4::ProcessConfig::DyldCache::indexOfPath(
                          (DyldSharedCache **)(*(_QWORD *)(a2 + 8) + 200LL),
                          v5,
                          &v57);
    isOverridablePath = 0;
    if ( v21 )
      isOverridablePath = dyld4::ProcessConfig::DyldCache::isOverridablePath(
                            (dyld4::ProcessConfig::DyldCache *)(*(_QWORD *)(a2 + 8) + 200LL),
                            v5);
    v43 = _NSConcreteStackBlock;
    v44 = 0x40000000;
    v45 = ___ZN5dyld46Loader9getLoaderER11DiagnosticsRNS_12RuntimeStateEPKcRKNS0_11LoadOptionsE_block_invoke;
    v46 = &unk_95A98;
    v53 = v9;
    v54 = v21;
    v55 = isOverridablePath;
    v49 = v5;
    v50 = a2;
    v51 = a1;
    v52 = a4;
    v47 = &v58;
    v48 = v56;
    dyld4::Loader::forEachPath(isOverridablePath, a2, v5);
    if ( !v59[3] )
    {
      v23 = *(dyld4::SyscallDelegate **)(a2 + 8);
      if ( *((_BYTE *)v23 + 171) != 0 || v42 )
      {
        if ( (a4[1] || _platform_strchr(v5, 47)) && *v5 != 64 )
        {
          if ( (unsigned int)dyld4::SyscallDelegate::realpath(v23, (dyld3 *)v5, v62) )
          {
            v24 = _platform_strlen(v62);
            if ( _platform_strncmp(v5, v62, v24) )
            {
              if ( *(_BYTE *)(*(_QWORD *)(a2 + 8) + 188LL) )
                dyld4::RuntimeState::log((dyld4::RuntimeState *)a2, "  switch to realpath: \"%s\"\n", v62);
              Loader = dyld4::Loader::getLoader(a1, a2, v62, a4);
              v59[3] = Loader;
            }
          }
        }
      }
      else
      {
        v32 = *(_QWORD *)(a2 + 48);
        if ( v32 )
        {
          v33 = *(dyld4::Loader ***)(a2 + 40);
          v34 = 8 * v32;
          v35 = v33;
          while ( 1 )
          {
            v36 = *v35;
            if ( (unsigned int)dyld4::Loader::matchesPath(*v35, v5) )
              break;
            ++v35;
            ++v33;
            v34 -= 8;
            if ( !v34 )
              goto LABEL_29;
          }
          if ( *(_BYTE *)(*(_QWORD *)(a2 + 8) + 188LL) )
          {
            v39 = (const char *)dyld4::Loader::path(v36);
            dyld4::RuntimeState::log((dyld4::RuntimeState *)a2, "  found existing image by install name: \"%s\"\n", v39);
          }
          v59[3] = (__int64)v36;
          Diagnostics::clearError(a1);
        }
      }
    }
LABEL_29:
    if ( *(_BYTE *)(*(_QWORD *)(a2 + 8) + 188LL) && !v59[3] )
      dyld4::RuntimeState::log((dyld4::RuntimeState *)a2, "  not found: \"%s\"\n", v5);
    v17 = (dyld4::Loader *)v59[3];
    if ( !v17 )
    {
      if ( *v5 != 64
        || *(_BYTE *)(*(_QWORD *)(a2 + 8) + 169LL)
        || (Diagnostics::appendError(a1, ", (security policy does not allow @ path expansion)"),
            (v17 = (dyld4::Loader *)v59[3]) == nullptr) )
      {
        if ( (unsigned __int8)a4[2] | (unsigned __int8)a4[5] )
        {
          Diagnostics::clearError(a1);
          v17 = (dyld4::Loader *)v59[3];
        }
        else
        {
          v17 = nullptr;
        }
      }
    }
    _Block_object_dispose(v56, 8);
    goto LABEL_64;
  }
LABEL_20:
  if ( a4[1] || v11 == 47 || v11 == 64 || _platform_strchr(v5, 47) )
    goto LABEL_21;
  v41[0] = a1;
  v41[1] = v41;
  v26 = _platform_strlen(v5) + 8;
  v27 = (char *)v41 - ((__chkstk_darwin() + 23) & 0xFFFFFFFFFFFFFFF0LL);
  strlcpy(v27, "@rpath/", v26);
  strlcat(v27, v5, v26);
  v28 = *(_QWORD *)(a2 + 48);
  if ( !v28 )
  {
LABEL_53:
    a1 = (Diagnostics *)v41[0];
    goto LABEL_21;
  }
  v29 = *(dyld4::Loader ***)(a2 + 40);
  v30 = 8 * v28;
  v31 = v29;
  while ( 1 )
  {
    v17 = *v31;
    if ( (unsigned int)dyld4::Loader::matchesPath(*v31, v27) )
      break;
    ++v31;
    ++v29;
    v30 -= 8;
    if ( !v30 )
      goto LABEL_53;
  }
  if ( *(_BYTE *)(*(_QWORD *)(a2 + 8) + 188LL) )
  {
    v40 = (const char *)dyld4::Loader::path(v17);
    dyld4::RuntimeState::log((dyld4::RuntimeState *)a2, "  found: already-loaded-by-rpath: %s\n", v40);
  }
LABEL_64:
  _Block_object_dispose(&v58, 8);
  return v17;
}
