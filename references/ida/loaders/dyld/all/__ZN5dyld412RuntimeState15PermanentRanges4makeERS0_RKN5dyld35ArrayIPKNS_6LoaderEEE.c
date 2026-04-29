unsigned __int64 *__fastcall dyld4::RuntimeState::PermanentRanges::make(lsl::Allocator **a1)
{
  dyld4::Loader ***v2; // x1
  __int64 v3; // x8
  __int64 v4; // x23
  __int64 v5; // x12
  dyld4::Loader **v6; // x24
  dyld4::Loader *v7; // t1
  dyld3::MachOLoaded *Address; // x0
  __int64 Slide; // x21
  _DWORD *v10; // x0
  unsigned __int64 v11; // x20
  unsigned __int64 *v12; // x0
  unsigned __int64 *v13; // x19
  unsigned __int64 v14; // x8
  __int64 v15; // x9
  unsigned __int64 *v16; // x11
  __int128 *v17; // x10
  __int128 v18; // q1
  _QWORD v21[9]; // [xsp+8h] [xbp-148h] BYREF
  _QWORD v22[3]; // [xsp+50h] [xbp-100h] BYREF
  char v23; // [xsp+68h] [xbp-E8h]
  _QWORD v24[4]; // [xsp+70h] [xbp-E0h] BYREF
  __int64 v25; // [xsp+90h] [xbp-C0h] BYREF
  __int64 *v26; // [xsp+98h] [xbp-B8h]
  __int64 v27; // [xsp+A0h] [xbp-B0h]
  __int64 (__fastcall *v28)(); // [xsp+A8h] [xbp-A8h]
  __int64 (__fastcall *v29)(); // [xsp+B0h] [xbp-A0h]
  char *v30; // [xsp+B8h] [xbp-98h]
  __int64 v31; // [xsp+C0h] [xbp-90h]
  __int64 v32; // [xsp+C8h] [xbp-88h]
  vm_address_t v33; // [xsp+D0h] [xbp-80h]
  vm_size_t v34; // [xsp+D8h] [xbp-78h]

  __chkstk_darwin();
  v25 = 0;
  v26 = &v25;
  v27 = 0x5002000000LL;
  v28 = __Block_byref_object_copy__1;
  v4 = 8 * v3;
  v29 = __Block_byref_object_dispose__1;
  v30 = (char *)&v21[-1] - v5;
  v31 = 8 * v3;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  if ( v3 )
  {
    v6 = *v2;
    do
    {
      v7 = *v6++;
      Address = (dyld3::MachOLoaded *)dyld4::Loader::loadAddress(v7, (dyld4::RuntimeState *)a1);
      Slide = dyld3::MachOLoaded::getSlide(Address);
      v24[0] = 0;
      v24[1] = v24;
      v24[2] = 0x2000000000LL;
      v24[3] = 0;
      v22[0] = 0;
      v22[1] = v22;
      v22[2] = 0x2000000000LL;
      v23 = 0;
      v10 = (_DWORD *)dyld4::Loader::loadAddress(v7, (dyld4::RuntimeState *)a1);
      v21[0] = _NSConcreteStackBlock;
      v21[1] = 0x40000000;
      v21[2] = ___ZN5dyld412RuntimeState15PermanentRanges4makeERS0_RKN5dyld35ArrayIPKNS_6LoaderEEE_block_invoke;
      v21[3] = &unk_95690;
      v21[4] = v24;
      v21[5] = v22;
      v21[7] = Slide;
      v21[6] = &v25;
      v21[8] = v7;
      dyld3::MachOFile::forEachSegment(v10, (__int64)v21);
      _Block_object_dispose(v22, 8);
      _Block_object_dispose(v24, 8);
      v4 -= 8;
    }
    while ( v4 );
    v11 = *((unsigned int *)v26 + 14);
  }
  else
  {
    v11 = 0;
  }
  v12 = (unsigned __int64 *)lsl::Allocator::malloc(a1[2], (32LL * (unsigned int)v11) | 0x10);
  v13 = v12;
  atomic_store(0, v12);
  v12[1] = v11;
  if ( (_DWORD)v11 )
  {
    v14 = 0;
    v15 = 2;
    do
    {
      if ( v26[7] <= v14 )
        dyld4::RuntimeState::PermanentRanges::make();
      v16 = &v12[v15];
      v17 = (__int128 *)(v26[5] + v15 * 8);
      v18 = *v17;
      *(_OWORD *)v16 = *(v17 - 1);
      *((_OWORD *)v16 + 1) = v18;
      ++v14;
      v15 += 4;
    }
    while ( v11 != v14 );
  }
  _Block_object_dispose(&v25, 8);
  v32 = 0;
  if ( v33 )
    vm_deallocate(mach_task_self_, v33, v34);
  return v13;
}
