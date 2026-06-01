__int64 __fastcall dyld4::RuntimeState::notifyLoad(__int64 a1, __int64 a2)
{
  __int64 v4; // x19
  __int64 v5; // x8
  dyld4::Loader **v6; // x26
  __int64 v7; // x27
  dyld4::Loader *v8; // x23
  fsid Address; // x22
  dyld3 *v10; // x0
  stat *v11; // x2
  const unsigned __int8 *v12; // x24
  unsigned int v13; // w28
  unsigned int v14; // w0
  const mach_header *v15; // x6
  __int64 v16; // x24
  const mach_header **v17; // x22
  size_t v18; // x25
  char *v19; // x24
  const char **v20; // x4
  __int64 v21; // x8
  __int64 v22; // x25
  dyld4::Loader **v23; // x28
  __int64 v24; // x27
  dyld4::Loader *v25; // x26
  __int64 v26; // x26
  const char **v27; // x27
  const void **v28; // x28
  const void *v29; // x8
  const void *v30; // t1
  const char *v31; // t1
  __int64 v32; // x8
  dyld4::Loader **v33; // x26
  __int64 v34; // x27
  dyld4::Loader *v35; // x25
  __int64 v36; // x25
  _QWORD v39[6]; // [xsp+18h] [xbp-138h] BYREF
  int v40; // [xsp+48h] [xbp-108h]
  char v41[8]; // [xsp+50h] [xbp-100h] BYREF
  __int128 v42; // [xsp+58h] [xbp-F8h]
  __int128 v43; // [xsp+68h] [xbp-E8h]
  __int128 v44; // [xsp+78h] [xbp-D8h]
  __int128 v45; // [xsp+88h] [xbp-C8h]
  __int128 v46; // [xsp+98h] [xbp-B8h]
  __int128 v47; // [xsp+A8h] [xbp-A8h]
  __int64 v48; // [xsp+B8h] [xbp-98h]
  char v49[8]; // [xsp+E0h] [xbp-70h] BYREF
  __int64 v50; // [xsp+E8h] [xbp-68h]

  v4 = *(_QWORD *)(a2 + 8);
  if ( kdebug_is_enabled(0x1F050000u) )
  {
    v5 = *(_QWORD *)(a2 + 8);
    if ( v5 )
    {
      v6 = *(dyld4::Loader ***)a2;
      v7 = 8 * v5;
      do
      {
        v8 = *v6;
        Address = (fsid)dyld4::Loader::loadAddress(*v6, (dyld4::RuntimeState *)a1);
        if ( (*((_WORD *)v8 + 2) & 2) != 0
          || (v10 = (dyld3 *)dyld4::Loader::path(v8), (unsigned int)dyld3::stat(v10, v41, v11)) )
        {
          v12 = nullptr;
          v13 = 0;
        }
        else
        {
          v12 = (const unsigned __int8 *)v42;
          v13 = *(_DWORD *)v41;
        }
        *(_QWORD *)v49 = 0;
        v50 = 0;
        dyld3::MachOFile::getUuid(*(dyld3::MachOFile **)&Address, (unsigned __int8 *)v49);
        v14 = dyld4::Loader::path(v8);
        dyld3::kdebug_trace_dyld_image(
          nullptr,
          v14,
          v49,
          (const unsigned __int8 (*)[16])v12,
          (fsobj_id)v13,
          Address,
          v15);
        ++v6;
        v7 -= 8;
      }
      while ( v7 );
    }
  }
  v39[0] = _NSConcreteStackBlock;
  v39[1] = 0x40000000;
  v39[2] = ___ZN5dyld412RuntimeState10notifyLoadERKNSt3__14spanIPKNS_6LoaderELm18446744073709551615EEE_block_invoke;
  v39[3] = &__block_descriptor_tmp_70_0;
  v39[4] = a1;
  v39[5] = a2;
  v40 = v4;
  dyld4::RuntimeState::withNotifiersReadLock(a1, (__int64)v39);
  __chkstk_darwin();
  v16 = (8LL * (unsigned int)v4 + 15) & 0xFFFFFFFF0LL;
  v17 = (const mach_header **)((char *)&v39[-1] - v16);
  if ( 8 * (unsigned __int64)(unsigned int)v4 >= 0x200 )
    v18 = 512;
  else
    v18 = 8LL * (unsigned int)v4;
  __bzero((char *)&v39[-1] - v16, v18);
  __chkstk_darwin();
  v19 = (char *)&v39[-1] - v16;
  __bzero(v19, v18);
  if ( *(_QWORD *)(a1 + 360) )
  {
    v21 = *(_QWORD *)(a2 + 8);
    if ( v21 )
    {
      v22 = 0;
      v23 = *(dyld4::Loader ***)a2;
      v24 = 8 * v21;
      do
      {
        v25 = *v23;
        if ( (*((_WORD *)*v23 + 2) & 4) != 0 )
        {
          v17[(unsigned int)v22] = (const mach_header *)dyld4::Loader::path(*v23);
          *(_QWORD *)&v19[8 * (unsigned int)v22] = dyld4::Loader::loadAddress(v25, (dyld4::RuntimeState *)a1);
          v22 = (unsigned int)(v22 + 1);
          if ( (unsigned int)dyld4::Loader::hasConstantSegmentsToProtect(v25) )
          {
            if ( (*((_WORD *)v25 + 2) & 0x80) != 0 )
              dyld4::Loader::makeSegmentsReadWrite(v25, (dyld4::RuntimeState *)a1);
          }
        }
        ++v23;
        v24 -= 8;
      }
      while ( v24 );
      if ( (_DWORD)v22 )
      {
        *(_DWORD *)v41 = 520552484;
        v42 = 0u;
        v43 = 0u;
        v44 = 0u;
        v45 = 0u;
        v46 = 0u;
        v47 = 0u;
        v48 = 0;
        dyld3::ScopedTimer::startTimer((dyld3::ScopedTimer *)v41);
        (*(void (__fastcall **)(__int64, const mach_header **, char *))(a1 + 360))(v22, v17, v19);
        if ( *(_BYTE *)(*(_QWORD *)(a1 + 8) + 185LL) )
        {
          dyld4::RuntimeState::log((dyld4::RuntimeState *)a1, "objc-mapped-notifier called with %d images:\n", v22);
          v26 = (unsigned int)v22;
          v27 = (const char **)v17;
          v28 = (const void **)v19;
          do
          {
            v30 = *v28++;
            v29 = v30;
            v31 = *v27++;
            dyld4::RuntimeState::log((dyld4::RuntimeState *)a1, " objc-mapped: %p %s\n", v29, v31);
            --v26;
          }
          while ( v26 );
        }
        dyld3::ScopedTimer::endTimer((dyld3::ScopedTimer *)v41);
      }
      v32 = *(_QWORD *)(a2 + 8);
      if ( v32 )
      {
        v33 = *(dyld4::Loader ***)a2;
        v34 = 8 * v32;
        do
        {
          v35 = *v33;
          if ( (*((_WORD *)*v33 + 2) & 4) != 0
            && (unsigned int)dyld4::Loader::hasConstantSegmentsToProtect(*v33)
            && (*((_WORD *)v35 + 2) & 0x80) != 0 )
          {
            dyld4::Loader::makeSegmentsReadOnly(v35, (dyld4::RuntimeState *)a1);
          }
          ++v33;
          v34 -= 8;
        }
        while ( v34 );
      }
    }
  }
  if ( (_DWORD)v4 )
  {
    v36 = 0;
    do
    {
      v17[v36] = (const mach_header *)dyld4::Loader::path(*(dyld4::Loader **)(*(_QWORD *)a2 + v36 * 8));
      *(_QWORD *)&v19[v36 * 8] = dyld4::Loader::loadAddress(
                                   *(dyld4::Loader **)(*(_QWORD *)a2 + v36 * 8),
                                   (dyld4::RuntimeState *)a1);
      ++v36;
    }
    while ( (unsigned int)v4 != v36 );
  }
  return dyld4::notifyMonitoringDyld(nullptr, v4, (unsigned int)v19, v17, v20);
}
