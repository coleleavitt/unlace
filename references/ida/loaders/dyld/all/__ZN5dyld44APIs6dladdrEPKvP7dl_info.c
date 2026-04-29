__int64 __fastcall dyld4::APIs::dladdr(dyld4::APIs *this, int *a2, dl_info *a3)
{
  dyld3::MachOLoaded *v6; // x0
  const char **p_dli_sname; // x21
  void *v8; // x8
  const char *v9; // x8
  __int64 v10; // x22
  const char *dli_sname; // x0
  unsigned __int64 v13; // [xsp+18h] [xbp-118h] BYREF
  _QWORD v14[7]; // [xsp+20h] [xbp-110h] BYREF
  unsigned __int64 v15; // [xsp+58h] [xbp-D8h] BYREF
  unsigned __int64 *v16; // [xsp+60h] [xbp-D0h]
  __int64 v17; // [xsp+68h] [xbp-C8h]
  char v18; // [xsp+70h] [xbp-C0h]
  char *v19; // [xsp+78h] [xbp-B8h] BYREF
  dyld3::MachOLoaded *v20; // [xsp+80h] [xbp-B0h] BYREF
  bool v21; // [xsp+8Fh] [xbp-A1h] BYREF
  int v22; // [xsp+90h] [xbp-A0h] BYREF
  int *v23; // [xsp+98h] [xbp-98h]
  __int128 v24; // [xsp+A0h] [xbp-90h]
  __int128 v25; // [xsp+B0h] [xbp-80h]
  __int128 v26; // [xsp+C0h] [xbp-70h]
  __int128 v27; // [xsp+D0h] [xbp-60h]
  __int128 v28; // [xsp+E0h] [xbp-50h]
  __int128 v29; // [xsp+F0h] [xbp-40h]

  v22 = 520618000;
  v23 = a2;
  v24 = 0u;
  v25 = 0u;
  v26 = 0u;
  v27 = 0u;
  v28 = 0u;
  v29 = 0u;
  dyld3::ScopedTimer::startTimer((dyld3::ScopedTimer *)&v22);
  if ( *(_BYTE *)(*((_QWORD *)this + 1) + 184LL) )
    dyld4::RuntimeState::log(this, "dladdr(%p, %p)\n", a2, a3);
  if ( a3 )
  {
    v21 = 0;
    v19 = nullptr;
    v20 = nullptr;
    if ( (unsigned int)dyld4::APIs::findImageMappedAt(
                         this,
                         a2,
                         &v20,
                         &v21,
                         (const char **)&v19,
                         nullptr,
                         nullptr,
                         nullptr) )
    {
      v6 = v20;
      a3->dli_fname = v19;
      a3->dli_fbase = v6;
      v15 = 0;
      if ( v6 == (dyld3::MachOLoaded *)a2 )
      {
        a3->dli_sname = "__dso_handle";
        a3->dli_saddr = a2;
      }
      else
      {
        p_dli_sname = &a3->dli_sname;
        if ( !(unsigned int)dyld3::MachOLoaded::findClosestSymbol(v6, (__int64)a2, &a3->dli_sname, &v15)
          || (v8 = (void *)v15, a3->dli_saddr = (void *)v15, a3->dli_fbase == v8) )
        {
          *p_dli_sname = nullptr;
          a3->dli_saddr = nullptr;
        }
        else
        {
          v9 = *p_dli_sname;
          if ( *p_dli_sname && *v9 == 95 )
            *p_dli_sname = v9 + 1;
        }
      }
      v10 = 1;
    }
    else
    {
      v10 = 0;
      if ( a2 >= &dword_0 && (unsigned __int64)a2 < 0x200000 )
      {
        v15 = 0;
        v16 = &v15;
        v17 = 0x2000000000LL;
        v18 = 0;
        v14[0] = _NSConcreteStackBlock;
        v14[1] = 0x40000000;
        v14[2] = ___ZN5dyld44APIs6dladdrEPKvP7dl_info_block_invoke;
        v14[3] = &unk_968B8;
        v14[5] = &dword_0;
        v14[6] = a2;
        v14[4] = &v15;
        dyld3::MachOFile::forEachSegment(&dword_0, v14);
        if ( *((_BYTE *)v16 + 24) )
        {
          a3->dli_fname = "/usr/lib/dyld";
          a3->dli_fbase = &dword_0;
          v13 = 0;
          if ( (unsigned int)dyld3::MachOLoaded::findClosestSymbol(
                               (dyld3::MachOLoaded *)&dword_0,
                               (__int64)a2,
                               &a3->dli_sname,
                               &v13) )
          {
            a3->dli_saddr = (void *)v13;
            dli_sname = a3->dli_sname;
            if ( *dli_sname == 95 )
              a3->dli_sname = ++dli_sname;
            if ( !_platform_strcmp(dli_sname, "_ZN5dyld45startEPKNS_10KernelArgsE") )
            {
              a3->dli_sname = "start";
              a3->dli_saddr = a2;
            }
          }
        }
        _Block_object_dispose(&v15, 8);
        v10 = 0;
      }
    }
    *((_QWORD *)&v26 + 1) = (unsigned int)v10;
    *(_QWORD *)&v27 = 0;
    *((_QWORD *)&v27 + 1) = a3->dli_fbase;
    *(_QWORD *)&v28 = 0;
    *((_QWORD *)&v28 + 1) = a3->dli_saddr;
    *(_QWORD *)&v29 = 0;
  }
  else
  {
    v10 = 0;
  }
  dyld3::ScopedTimer::endTimer((dyld3::ScopedTimer *)&v22);
  return v10;
}
