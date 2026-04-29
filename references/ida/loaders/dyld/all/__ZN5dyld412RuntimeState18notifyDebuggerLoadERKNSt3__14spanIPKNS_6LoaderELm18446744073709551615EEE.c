void __fastcall dyld4::RuntimeState::notifyDebuggerLoad(__int64 a1, __int64 a2)
{
  size_t v4; // x21
  __int64 v5; // x8
  char *v6; // x22
  unsigned int v7; // w4
  __int64 v8; // x8
  dyld4::Loader **v9; // x25
  __int64 v10; // x26
  dyld4::Loader *v11; // x22
  __int64 v12; // x28
  __int64 Address; // x23
  __int64 v14; // x24
  __int64 v15; // x9
  __int64 *v16; // x8
  const dyld_uuid_info *v17; // x2
  __int64 v18[3]; // [xsp+0h] [xbp-120h] BYREF
  char v19; // [xsp+18h] [xbp-108h]
  _BYTE *v20; // [xsp+20h] [xbp-100h] BYREF
  __int64 v21; // [xsp+28h] [xbp-F8h]
  __int64 v22; // [xsp+30h] [xbp-F0h]
  __int64 v23; // [xsp+38h] [xbp-E8h]
  _BYTE v24[56]; // [xsp+40h] [xbp-E0h] BYREF
  void **v25; // [xsp+78h] [xbp-A8h]
  __int64 v26; // [xsp+80h] [xbp-A0h]
  __int64 (__fastcall *v27)(); // [xsp+88h] [xbp-98h]
  void *v28; // [xsp+90h] [xbp-90h]
  __int64 v29; // [xsp+98h] [xbp-88h]
  __int64 v30; // [xsp+A0h] [xbp-80h]
  dyld3::MachOFile *v31; // [xsp+A8h] [xbp-78h] BYREF
  unsigned __int8 v32[16]; // [xsp+B0h] [xbp-70h] BYREF

  if ( *(_QWORD *)(a2 + 8) )
  {
    v25 = _NSConcreteStackBlock;
    v26 = 0x40000000;
    v27 = ___ZN5dyld412RuntimeState18notifyDebuggerLoadERKNSt3__14spanIPKNS_6LoaderELm18446744073709551615EEE_block_invoke;
    v28 = &__block_descriptor_tmp_64;
    v29 = a1;
    v30 = a2;
    dyld4::RuntimeState::withCurrentProcessSnapshot();
    v4 = 24LL * *(_QWORD *)(a2 + 8) + 136;
    __chkstk_darwin();
    v6 = (char *)v18 - ((v5 + 151) & 0xFFFFFFFFFFFFFFF0LL);
    __bzero(v6, v4);
    lsl::EphemeralAllocator::EphemeralAllocator((lsl::EphemeralAllocator *)v24, v6, v4);
    v20 = v24;
    v21 = 0;
    v22 = 0;
    v23 = 0;
    lsl::Vector<dyld_image_info>::reserveExact(&v20, *(_QWORD *)(a2 + 8));
    v8 = *(_QWORD *)(a2 + 8);
    if ( v8 )
    {
      v9 = *(dyld4::Loader ***)a2;
      v10 = 8 * v8;
      do
      {
        v11 = *v9;
        dyld4::Loader::fileID(v18, *v9, (const dyld4::FileManager *)(a1 + 336));
        if ( v19 )
          v12 = v18[2];
        else
          v12 = 0;
        Address = dyld4::Loader::loadAddress(v11, (dyld4::RuntimeState *)a1);
        v14 = dyld4::Loader::path(v11);
        lsl::Vector<dyld_image_info>::reserve(&v20, v22 + 1);
        v15 = v22++;
        v16 = (__int64 *)(v21 + 24 * v15);
        *v16 = Address;
        v16[1] = v14;
        v16[2] = v12;
        if ( (*((_WORD *)v11 + 2) & 2) == 0 )
        {
          v31 = (dyld3::MachOFile *)dyld4::Loader::loadAddress(v11, (dyld4::RuntimeState *)a1);
          dyld3::MachOFile::getUuid(v31, v32);
          dyld4::addNonSharedCacheImageUUID(*(dyld4 **)(a1 + 16), (lsl::Allocator *)&v31, v17);
        }
        ++v9;
        v10 -= 8;
      }
      while ( v10 );
    }
    dyld4::addImagesToAllImages(
      (dyld4 *)a1,
      (dyld4::RuntimeState *)(unsigned int)v22,
      v21,
      (const dyld_image_info *)*(unsigned int *)(a1 + 708),
      v7);
    (*((void (__fastcall **)(_QWORD, _QWORD, __int64))gProcessInfo + 2))(0, (unsigned int)v22, v21);
    if ( v21 )
      lsl::Vector<dyld_image_info>::resize(&v20, 0);
    lsl::EphemeralAllocator::~EphemeralAllocator((lsl::EphemeralAllocator *)v24);
  }
}
