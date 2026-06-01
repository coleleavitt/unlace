__int64 __fastcall ___ZN5dyld412RuntimeState10notifyLoadERKNSt3__14spanIPKNS_6LoaderELm18446744073709551615EEE_block_invoke(
        __int64 result)
{
  __int64 v1; // x19
  dyld4::RuntimeState *v2; // x20
  __int64 v3; // x8
  const void **v4; // x25
  const void **v5; // x24
  __int64 v6; // x9
  __int64 v7; // x8
  const void *v8; // x28
  dyld4::Loader **v9; // x26
  __int64 v10; // x21
  dyld4::Loader *v11; // x23
  dyld3::MachOLoaded *Address; // x22
  __int64 Slide; // x1
  __int64 v14; // x8
  const void **v15; // x25
  __int64 v16; // x9
  __int64 v17; // x8
  const void *v18; // x28
  dyld4::Loader **v19; // x26
  __int64 v20; // x24
  dyld4::Loader *v21; // x22
  dyld3::MachOLoaded *v22; // x23
  __int64 v23; // x1
  __int64 v24; // x8
  const void **v25; // x25
  const void *v26; // x26
  unsigned __int64 v27; // x8
  dyld3::MachOLoaded **v28; // x22
  size_t v29; // x1
  int v30; // w24
  unsigned __int64 v31; // x8
  char *v32; // x23
  size_t v33; // x1
  unsigned __int64 v34; // x24
  dyld3::MachOLoaded *v35; // x8
  const void **v36; // [xsp+10h] [xbp-D0h] BYREF
  int v37; // [xsp+18h] [xbp-C8h] BYREF
  dyld3::MachOLoaded *v38; // [xsp+20h] [xbp-C0h]
  __int64 v39; // [xsp+28h] [xbp-B8h]
  const void *v40; // [xsp+30h] [xbp-B0h]
  __int128 v41; // [xsp+38h] [xbp-A8h]
  __int128 v42; // [xsp+48h] [xbp-98h]
  __int128 v43; // [xsp+58h] [xbp-88h]
  __int128 v44; // [xsp+68h] [xbp-78h]
  __int128 v45; // [xsp+78h] [xbp-68h]

  v1 = result;
  v2 = *(dyld4::RuntimeState **)(result + 32);
  v3 = *((_QWORD *)v2 + 52);
  if ( v3 )
  {
    v4 = *((const void ***)v2 + 51);
    v5 = &v4[v3];
    do
    {
      v6 = *(_QWORD *)(v1 + 40);
      v7 = *(_QWORD *)(v6 + 8);
      if ( v7 )
      {
        v8 = *v4;
        v9 = *(dyld4::Loader ***)v6;
        v10 = 8 * v7;
        do
        {
          v11 = *v9;
          Address = (dyld3::MachOLoaded *)dyld4::Loader::loadAddress(*v9, v2);
          v37 = 520552472;
          v38 = Address;
          v39 = 0;
          v40 = v8;
          v41 = 0u;
          v42 = 0u;
          v43 = 0u;
          v44 = 0u;
          v45 = 0u;
          dyld3::ScopedTimer::startTimer((dyld3::ScopedTimer *)&v37);
          if ( *(_BYTE *)(*((_QWORD *)v2 + 1) + 185LL) )
            dyld4::RuntimeState::log(v2, "notifier %p called with mh=%p\n", v8, Address);
          if ( (*((_WORD *)v11 + 2) & 2) != 0 )
            Slide = *(_QWORD *)(*((_QWORD *)v2 + 1) + 208LL);
          else
            Slide = dyld3::MachOLoaded::getSlide(Address);
          ((void (__fastcall *)(dyld3::MachOLoaded *, __int64))v8)(Address, Slide);
          result = dyld3::ScopedTimer::endTimer((dyld3::ScopedTimer *)&v37);
          ++v9;
          v10 -= 8;
        }
        while ( v10 );
      }
      ++v4;
    }
    while ( v4 != v5 );
  }
  v14 = *((_QWORD *)v2 + 60);
  if ( v14 )
  {
    v15 = *((const void ***)v2 + 59);
    v36 = &v15[v14];
    do
    {
      v16 = *(_QWORD *)(v1 + 40);
      v17 = *(_QWORD *)(v16 + 8);
      if ( v17 )
      {
        v18 = *v15;
        v19 = *(dyld4::Loader ***)v16;
        v20 = 8 * v17;
        do
        {
          v21 = *v19;
          v22 = (dyld3::MachOLoaded *)dyld4::Loader::loadAddress(*v19, v2);
          v37 = 520552472;
          v38 = v22;
          v39 = 0;
          v40 = v18;
          v41 = 0u;
          v42 = 0u;
          v43 = 0u;
          v44 = 0u;
          v45 = 0u;
          dyld3::ScopedTimer::startTimer((dyld3::ScopedTimer *)&v37);
          if ( *(_BYTE *)(*((_QWORD *)v2 + 1) + 185LL) )
            dyld4::RuntimeState::log(v2, "notifier %p called with mh=%p\n", v18, v22);
          v23 = dyld4::Loader::path(v21);
          ((void (__fastcall *)(dyld3::MachOLoaded *, __int64, bool))v18)(v22, v23, (*((_WORD *)v21 + 2) & 0x20) == 0);
          result = dyld3::ScopedTimer::endTimer((dyld3::ScopedTimer *)&v37);
          ++v19;
          v20 -= 8;
        }
        while ( v20 );
      }
      ++v15;
    }
    while ( v15 != v36 );
  }
  v24 = *((_QWORD *)v2 + 64);
  if ( v24 )
  {
    v25 = *((const void ***)v2 + 63);
    v36 = &v25[v24];
    do
    {
      v26 = *v25;
      __chkstk_darwin();
      v28 = (dyld3::MachOLoaded **)((char *)&v36 - ((v27 + 15) & 0xFFFFFFFF0LL));
      if ( v27 >= 0x200 )
        v29 = 512;
      else
        v29 = v27;
      __bzero((char *)&v36 - ((v27 + 15) & 0xFFFFFFFF0LL), v29);
      v30 = *(_DWORD *)(v1 + 48);
      __chkstk_darwin();
      v32 = (char *)&v36 - ((v31 + 15) & 0xFFFFFFFF0LL);
      if ( v31 >= 0x200 )
        v33 = 512;
      else
        v33 = v31;
      __bzero((char *)&v36 - ((v31 + 15) & 0xFFFFFFFF0LL), v33);
      if ( v30 )
      {
        v34 = 0;
        do
        {
          v28[v34] = (dyld3::MachOLoaded *)dyld4::Loader::loadAddress(
                                             *(dyld4::Loader **)(**(_QWORD **)(v1 + 40) + 8 * v34),
                                             v2);
          *(_QWORD *)&v32[8 * v34] = dyld4::Loader::path(*(dyld4::Loader **)(**(_QWORD **)(v1 + 40) + 8 * v34));
          ++v34;
        }
        while ( v34 < *(unsigned int *)(v1 + 48) );
      }
      v35 = *v28;
      v37 = 520552472;
      v38 = v35;
      v39 = 0;
      v40 = v26;
      v41 = 0u;
      v42 = 0u;
      v43 = 0u;
      v44 = 0u;
      v45 = 0u;
      dyld3::ScopedTimer::startTimer((dyld3::ScopedTimer *)&v37);
      if ( *(_BYTE *)(*((_QWORD *)v2 + 1) + 185LL) )
        dyld4::RuntimeState::log(v2, "bulk notifier %p called with %d images\n", v26, *(_DWORD *)(v1 + 48));
      ((void (__fastcall *)(_QWORD, dyld3::MachOLoaded **, char *))v26)(*(unsigned int *)(v1 + 48), v28, v32);
      result = dyld3::ScopedTimer::endTimer((dyld3::ScopedTimer *)&v37);
      ++v25;
    }
    while ( v25 != v36 );
  }
  return result;
}
