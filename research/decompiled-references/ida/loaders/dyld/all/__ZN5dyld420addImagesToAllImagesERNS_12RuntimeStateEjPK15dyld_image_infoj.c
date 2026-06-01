void __fastcall dyld4::addImagesToAllImages(
        dyld4 *this,
        dyld4::RuntimeState *a2,
        __int128 *a3,
        const dyld_image_info *a4)
{
  unsigned int v5; // w20
  unsigned int v6; // w21
  lsl::Allocator *v7; // x22
  lsl::Allocator **v8; // x0
  __int64 v9; // x21
  __int64 v10; // x20
  __int64 v11; // x8
  __int64 v12; // x9
  __int64 v13; // x8
  __int128 v14; // q0
  uint64_t v15; // x0
  unsigned __int64 *v16; // x8

  v5 = (unsigned int)a2;
  atomic_store(0, (unsigned __int64 *)gProcessInfo + 1);
  if ( dyld4::sImageInfos )
  {
    if ( !(_DWORD)a2 )
      goto LABEL_7;
  }
  else
  {
    v6 = (unsigned int)a4;
    v7 = *((lsl::Allocator **)this + 2);
    v8 = (lsl::Allocator **)lsl::Allocator::malloc(v7, 0x20u);
    *v8 = v7;
    v8[1] = nullptr;
    v8[2] = nullptr;
    v8[3] = nullptr;
    dyld4::sImageInfos = (__int64)v8;
    lsl::Vector<dyld_image_info>::reserve((__int64)v8, v6);
    if ( !v5 )
      goto LABEL_7;
  }
  v9 = v5;
  do
  {
    v10 = dyld4::sImageInfos;
    lsl::Vector<dyld_image_info>::reserve(dyld4::sImageInfos, *(_QWORD *)(dyld4::sImageInfos + 16) + 1LL);
    v11 = *(_QWORD *)(v10 + 8);
    v12 = *(_QWORD *)(v10 + 16);
    *(_QWORD *)(v10 + 16) = v12 + 1;
    v13 = v11 + 24 * v12;
    v14 = *a3;
    *(_QWORD *)(v13 + 16) = *((_QWORD *)a3 + 2);
    *(_OWORD *)v13 = v14;
    a3 = (__int128 *)((char *)a3 + 24);
    --v9;
  }
  while ( v9 );
LABEL_7:
  *((_DWORD *)gProcessInfo + 1) = *(_QWORD *)(dyld4::sImageInfos + 16);
  v15 = mach_absolute_time();
  v16 = (unsigned __int64 *)gProcessInfo;
  atomic_store(v15, (unsigned __int64 *)gProcessInfo + 23);
  atomic_store(*(_QWORD *)(dyld4::sImageInfos + 8), v16 + 1);
}
