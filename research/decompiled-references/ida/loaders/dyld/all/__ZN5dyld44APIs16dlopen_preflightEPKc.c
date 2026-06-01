bool __fastcall dyld4::APIs::dlopen_preflight(dyld4::APIs *this, char *a2)
{
  __int64 v4; // x0
  DyldSharedCache *v5; // x21
  _BOOL8 v6; // x19
  __int64 v7; // x8
  unsigned int v8; // w2
  const char *v9; // x1
  const char *v10; // x0
  dyld4::Loader *v11; // x0
  _QWORD v13[8]; // [xsp+10h] [xbp-540h] BYREF
  __int64 v14; // [xsp+50h] [xbp-500h] BYREF
  __int64 *v15; // [xsp+58h] [xbp-4F8h]
  __int64 v16; // [xsp+60h] [xbp-4F0h]
  __int64 (__fastcall *v17)(); // [xsp+68h] [xbp-4E8h]
  __int64 (__fastcall *v18)(); // [xsp+70h] [xbp-4E0h]
  vm_address_t v19; // [xsp+78h] [xbp-4D8h] BYREF
  __int64 v20; // [xsp+80h] [xbp-4D0h] BYREF
  __int64 *v21; // [xsp+88h] [xbp-4C8h]
  __int64 v22; // [xsp+90h] [xbp-4C0h]
  char v23; // [xsp+98h] [xbp-4B8h]
  char v24; // [xsp+A3h] [xbp-4ADh] BYREF
  unsigned int v25; // [xsp+A4h] [xbp-4ACh] BYREF
  int v26; // [xsp+A8h] [xbp-4A8h] BYREF
  __int64 v27; // [xsp+B0h] [xbp-4A0h]
  char *v28; // [xsp+B8h] [xbp-498h]
  __int128 v29; // [xsp+C0h] [xbp-490h]
  __int128 v30; // [xsp+D0h] [xbp-480h]
  __int128 v31; // [xsp+E0h] [xbp-470h]
  __int128 v32; // [xsp+F0h] [xbp-460h]
  __int128 v33; // [xsp+100h] [xbp-450h]
  __int64 v34; // [xsp+110h] [xbp-440h]
  char __s2[1024]; // [xsp+118h] [xbp-438h] BYREF

  v26 = 520617988;
  v27 = 0;
  v28 = a2;
  v29 = 0u;
  v30 = 0u;
  v31 = 0u;
  v32 = 0u;
  v33 = 0u;
  v34 = 0;
  dyld3::ScopedTimer::startTimer((dyld3::ScopedTimer *)&v26);
  v4 = *((_QWORD *)this + 1);
  if ( *(_BYTE *)(v4 + 184) )
  {
    dyld4::RuntimeState::log(this, "dlopen_preflight(%s)\n", a2);
    v4 = *((_QWORD *)this + 1);
  }
  v25 = 0;
  v5 = *(DyldSharedCache **)(v4 + 200);
  if ( v5 )
  {
    if ( (DyldSharedCache::hasImagePath(*(DyldSharedCache **)(v4 + 200), a2, &v25) & 1) != 0 )
    {
LABEL_10:
      v31 = xmmword_7BB60;
      v6 = 1;
      goto LABEL_17;
    }
    v4 = *((_QWORD *)this + 1);
  }
  if ( dyld4::SyscallDelegate::realpath((dyld4::SyscallDelegate *)v4, (dyld3 *)a2, __s2)
    && _platform_strcmp(a2, __s2)
    && v5
    && (unsigned int)DyldSharedCache::hasImagePath(v5, __s2, &v25) )
  {
    goto LABEL_10;
  }
  v24 = 0;
  v20 = 0;
  v21 = &v20;
  v22 = 0x2000000000LL;
  v23 = 0;
  v14 = 0;
  v15 = &v14;
  v16 = 0x3002000000LL;
  v17 = __Block_byref_object_copy__7;
  v18 = __Block_byref_object_dispose__7;
  Diagnostics::Diagnostics((Diagnostics *)&v19);
  v7 = *((_QWORD *)this + 1);
  v8 = *(_DWORD *)(v7 + 68);
  v13[0] = _NSConcreteStackBlock;
  v13[1] = 0x40000000;
  v13[2] = ___ZN5dyld44APIs16dlopen_preflightEPKc_block_invoke;
  v13[3] = &unk_96930;
  v13[6] = this;
  v13[7] = a2;
  v13[4] = &v20;
  v13[5] = &v14;
  dyld4::ProcessConfig::PathOverrides::forEachPathVariant(v7 + 344, (dyld4::Utils *)a2, v8, 0, 1, &v24, (__int64)v13);
  if ( !*((_BYTE *)v21 + 24) && Diagnostics::hasError((Diagnostics *)(v15 + 5)) )
  {
    v10 = (const char *)Diagnostics::errorMessage((Diagnostics *)(v15 + 5));
    dyld4::APIs::setErrorString((__int64)this, "dlopen_preflight(%s) => false, %s", a2, v10);
  }
  if ( *(_BYTE *)(*((_QWORD *)this + 1) + 184LL) )
  {
    v11 = dyld4::Loader::leafName((dyld4::Loader *)a2, v9);
    dyld4::RuntimeState::log(
      this,
      "      dlopen_preflight(%s) => %d\n",
      (const char *)v11,
      *((unsigned __int8 *)v21 + 24));
  }
  v31 = *((unsigned __int8 *)v21 + 24);
  v6 = *((_BYTE *)v21 + 24) != 0;
  _Block_object_dispose(&v14, 8);
  Diagnostics::~Diagnostics(&v19);
  _Block_object_dispose(&v20, 8);
LABEL_17:
  dyld3::ScopedTimer::endTimer((dyld3::ScopedTimer *)&v26);
  return v6;
}
