__int64 __fastcall dyld4::Atlas::ProcessSnapshot::Serializer::deserialize(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // w9
  int v4; // w8
  int v5; // w10
  __int64 v6; // x21
  __int64 v7; // x22
  __int64 v8; // x20
  __int64 v10; // x0
  __int64 v11; // x20
  __int64 v12; // x22
  __int64 v13; // x23
  __int64 v14; // x8
  __int64 v15; // x9
  __int64 v16; // x20
  unsigned __int8 *v17; // x22
  __int64 v18; // x23
  char v19; // t1
  __int64 v20; // x8
  __int64 v21; // x9
  __int64 v22; // x9
  void *v23; // x1
  lsl::AllocationMetadata *v24; // x20
  __int64 v25; // x0
  void *v26; // x1
  lsl::AllocationMetadata **v27; // x8
  lsl::AllocationMetadata *v28; // x9
  lsl::AllocationMetadata **v29; // x8
  lsl::AllocationMetadata *v30; // x9
  void *v31; // x1
  __int64 v32; // x0
  __int64 v33; // x21
  lsl::AllocationMetadata *v34; // x27
  __int128 v35; // q0
  __int64 v36; // x9
  lsl::Allocator *v37; // x25
  __int64 v38; // x0
  lsl::AllocationMetadata *v39; // x8
  void *v40; // x1
  void *v41; // x1
  __int64 v42; // x0
  __int64 v43; // x25
  void *v44; // x1
  void *v45; // x1
  void *v46; // x1
  lsl::Allocator *v47; // x20
  __int64 v48; // x0
  lsl::AllocationMetadata *v49; // x8
  void *v50; // x1
  lsl::AllocationMetadata *v52; // [xsp+8h] [xbp-248h] BYREF
  lsl::AllocationMetadata *v53; // [xsp+10h] [xbp-240h] BYREF
  lsl::AllocationMetadata *v54; // [xsp+18h] [xbp-238h] BYREF
  unsigned int v55[4]; // [xsp+20h] [xbp-230h] BYREF
  unsigned __int8 *v56; // [xsp+30h] [xbp-220h] BYREF
  __int64 v57; // [xsp+38h] [xbp-218h]
  _QWORD v58[14]; // [xsp+40h] [xbp-210h] BYREF
  _OWORD v59[4]; // [xsp+B0h] [xbp-1A0h] BYREF
  __int64 v60; // [xsp+F0h] [xbp-160h]
  __int16 v61; // [xsp+F8h] [xbp-158h]
  char v62; // [xsp+FAh] [xbp-156h]
  dyld4::Atlas::Mapper *v63; // [xsp+108h] [xbp-148h] BYREF
  __int128 v64; // [xsp+110h] [xbp-140h]
  _BYTE v65[48]; // [xsp+120h] [xbp-130h] BYREF
  lsl::AllocationMetadata *v66; // [xsp+150h] [xbp-100h]
  __int64 v67; // [xsp+158h] [xbp-F8h]
  _QWORD v68[2]; // [xsp+160h] [xbp-F0h]
  _OWORD v69[4]; // [xsp+170h] [xbp-E0h] BYREF
  __int64 v70; // [xsp+1B0h] [xbp-A0h]
  __int16 v71; // [xsp+1B8h] [xbp-98h]
  char v72; // [xsp+1BAh] [xbp-96h]
  __int128 v73; // [xsp+1C8h] [xbp-88h] BYREF

  v3 = *(_DWORD *)a2;
  *(_DWORD *)(a1 + 176) = *(_DWORD *)a2;
  v4 = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(a1 + 180) = v4;
  *(_QWORD *)(a1 + 184) = *(_QWORD *)(a2 + 8);
  *(_DWORD *)(a1 + 192) = *(_DWORD *)(a2 + 16);
  *(_DWORD *)(a1 + 208) = *(_DWORD *)(a2 + 20);
  *(_QWORD *)(a1 + 200) = *(_QWORD *)(a2 + 24);
  v5 = *(_DWORD *)(a2 + 32);
  v6 = a3 - 36;
  v7 = a2 + 36;
  v56 = (unsigned __int8 *)(a2 + 36);
  v57 = a3 - 36;
  *(_DWORD *)(a1 + 212) = v5;
  if ( v3 != -1491447450 )
    dyld4::Atlas::ProcessSnapshot::Serializer::deserialize();
  if ( v4 )
    dyld4::Atlas::ProcessSnapshot::Serializer::deserialize();
  v8 = a2;
  lsl::CRC32c::CRC32c((__int64)v55);
  lsl::CRC32c::operator()(v55, v8, 32);
  lsl::CRC32c::operator()(v55, 0);
  lsl::CRC32c::operator()(v55, v7, v6);
  LODWORD(v8) = *(_DWORD *)(a1 + 212);
  if ( (_DWORD)v8 != (unsigned int)lsl::CRC32c::operator unsigned int((__int64)v55) )
    dyld4::Atlas::ProcessSnapshot::Serializer::deserialize();
  *(_QWORD *)(a1 + 216) = lsl::readPVLEUInt64(&v56);
  **(_QWORD **)(a1 + 224) = lsl::readPVLEUInt64(&v56);
  **(_QWORD **)(a1 + 232) = lsl::readPVLEUInt64(&v56);
  **(_QWORD **)(a1 + 240) = lsl::readPVLEUInt64(&v56);
  v10 = lsl::readPVLEUInt64(&v56);
  v11 = v10;
  if ( v10 )
  {
    v12 = 0;
    v13 = v10;
    do
    {
      v59[0] = *(_OWORD *)&v56[v12];
      lsl::Vector<lsl::UUID>::reserve(a1 + 48, *(_QWORD *)(a1 + 64) + 1LL);
      v14 = *(_QWORD *)(a1 + 56);
      v15 = *(_QWORD *)(a1 + 64);
      *(_QWORD *)(a1 + 64) = v15 + 1;
      *(_OWORD *)(v14 + 16 * v15) = v59[0];
      v12 += 16;
      --v13;
    }
    while ( v13 );
  }
  v56 += 16 * v11;
  v57 -= 16 * v11;
  v16 = lsl::readPVLEUInt64(&v56);
  lsl::Vector<char>::reserve(a1 + 112, v16);
  v17 = v56;
  if ( v16 )
  {
    v18 = v16;
    do
    {
      v19 = *v17++;
      lsl::Vector<char>::reserve(a1 + 112, *(_QWORD *)(a1 + 128) + 1LL);
      v20 = *(_QWORD *)(a1 + 120);
      v21 = *(_QWORD *)(a1 + 128);
      *(_QWORD *)(a1 + 128) = v21 + 1;
      *(_BYTE *)(v20 + v21) = v19;
      --v18;
    }
    while ( v18 );
    v17 = v56;
  }
  v56 = &v17[v16];
  v57 -= v16;
  if ( (*(_BYTE *)(a1 + 216) & 1) == 0 )
    goto LABEL_21;
  *(_QWORD *)&v69[0] = 0;
  v58[0] = 0;
  v58[1] = 0;
  memset(v59, 0, sizeof(v59));
  v60 = 0x1FFFFFFFFLL;
  v61 = 0;
  v62 = 1;
  dyld4::Atlas::ProcessSnapshot::Serializer::readMappedFileInfo(a1, &v56, v69, v58, v59);
  v22 = 0x4000;
  if ( (*(_QWORD *)(a1 + 216) & 4LL) == 0 )
    v22 = 4096;
  *(_QWORD *)&v69[0] *= v22;
  *(_QWORD *)&v73 = 0;
  if ( !*(_BYTE *)(*(_QWORD *)a1 + 104LL) )
  {
    v47 = *(lsl::Allocator **)(a1 + 8);
    v48 = lsl::Allocator::aligned_alloc(v47, 8u, 0x30u);
    *(_QWORD *)v48 = v47;
    *(_OWORD *)(v48 + 8) = 0u;
    *(_OWORD *)(v48 + 24) = 0u;
    *(_QWORD *)(v48 + 40) = v47;
    lsl::SharedPtr<dyld4::Atlas::Mapper>::SharedPtr((int)&v54, (lsl::AllocationMetadata *)v48);
    v49 = (lsl::AllocationMetadata *)v73;
    v24 = v54;
    *(_QWORD *)&v73 = v54;
    v54 = v49;
    lsl::SharedPtr<dyld4::Atlas::Mapper>::~SharedPtr(&v54, v50);
    if ( v24 )
      goto LABEL_16;
LABEL_33:
    lsl::SharedPtr<dyld4::Atlas::Mapper>::~SharedPtr((dyld4::Atlas::Mapper **)&v73, v23);
    dyld4::FileRecord::~FileRecord((dyld4::FileRecord *)v59);
    return (__int64)v24;
  }
  lsl::SharedPtr<dyld4::Atlas::Mapper>::operator=(&v73, *(_QWORD *)a1 + 72LL);
  v24 = (lsl::AllocationMetadata *)v73;
  if ( !(_QWORD)v73 )
    goto LABEL_33;
LABEL_16:
  v25 = *(_QWORD *)(a1 + 8);
  v53 = (lsl::AllocationMetadata *)(*(_QWORD *)(a1 + 216) & 2LL);
  lsl::Allocator::makeUnique<dyld4::Atlas::SharedCache,lsl::Allocator&,dyld4::FileRecord,lsl::SharedPtr<dyld4::Atlas::Mapper> &,unsigned long long &,unsigned long long>(
    &v54,
    v25,
    v25,
    v59,
    &v73,
    v69,
    &v53);
  v27 = *(lsl::AllocationMetadata ***)(a1 + 32);
  if ( &v54 != v27 )
  {
    v28 = *v27;
    *v27 = v54;
    v54 = v28;
  }
  lsl::UniquePtr<dyld4::Atlas::SharedCache>::~UniquePtr(&v54, v26);
  lsl::Allocator::makeUnique<dyld4::Atlas::Bitmap,lsl::Allocator&,std::span<std::byte,18446744073709551615ul> &>(
    &v54,
    *(_QWORD *)(a1 + 8),
    *(_QWORD *)(a1 + 8),
    &v56);
  v29 = *(lsl::AllocationMetadata ***)(a1 + 40);
  if ( &v54 != v29 )
  {
    v30 = *v29;
    *v29 = v54;
    v54 = v30;
  }
  ((void (__fastcall *)(lsl::AllocationMetadata **))lsl::UniquePtr<dyld4::Atlas::Bitmap>::~UniquePtr)(&v54);
  lsl::SharedPtr<dyld4::Atlas::Mapper>::~SharedPtr((dyld4::Atlas::Mapper **)&v73, v31);
  dyld4::FileRecord::~FileRecord((dyld4::FileRecord *)v59);
LABEL_21:
  v32 = lsl::readPVLEUInt64(&v56);
  v24 = (lsl::AllocationMetadata *)(&dword_0 + 1);
  if ( v32 )
  {
    v33 = v32;
    v34 = nullptr;
    v35 = 0u;
    do
    {
      v54 = nullptr;
      v73 = 0u;
      v69[2] = v35;
      v69[3] = v35;
      v69[0] = v35;
      v69[1] = v35;
      v70 = 0x1FFFFFFFFLL;
      v71 = 0;
      v72 = 1;
      dyld4::Atlas::ProcessSnapshot::Serializer::readMappedFileInfo(a1, &v56, &v54, &v73, v69);
      v36 = 0x4000;
      if ( (*(_QWORD *)(a1 + 216) & 4LL) == 0 )
        v36 = 4096;
      v34 = (lsl::AllocationMetadata *)((char *)v34 + v36 * (_QWORD)v54);
      v53 = nullptr;
      v54 = v34;
      if ( *(_BYTE *)(*(_QWORD *)a1 + 104LL) )
      {
        lsl::SharedPtr<dyld4::Atlas::Mapper>::operator=(&v53, *(_QWORD *)a1 + 72LL);
      }
      else
      {
        v37 = *(lsl::Allocator **)(a1 + 8);
        v38 = lsl::Allocator::aligned_alloc(v37, 8u, 0x30u);
        *(_QWORD *)v38 = v37;
        *(_OWORD *)(v38 + 8) = 0u;
        *(_OWORD *)(v38 + 24) = 0u;
        *(_QWORD *)(v38 + 40) = v37;
        lsl::SharedPtr<dyld4::Atlas::Mapper>::SharedPtr((int)v59, (lsl::AllocationMetadata *)v38);
        v39 = v53;
        v53 = *(lsl::AllocationMetadata **)&v59[0];
        *(_QWORD *)&v59[0] = v39;
        lsl::SharedPtr<dyld4::Atlas::Mapper>::~SharedPtr((dyld4::Atlas::Mapper **)v59, v40);
      }
      *(_QWORD *)&v59[0] = *(_QWORD *)(a1 + 8);
      dyld4::FileRecord::FileRecord((__int64)v59 + 8, (dyld4::FileRecord *)v69);
      v63 = v53;
      if ( v53 )
      {
        v42 = lsl::AllocationMetadata::getForPointer(v53, v41);
        lsl::AllocationMetadata::incrementRefCount(v42);
      }
      v64 = v73;
      memset(v65, 0, 25);
      v65[32] = 0;
      v65[40] = 0;
      v66 = v34;
      v67 = 0;
      v68[0] = 0;
      *(_DWORD *)((char *)v68 + 7) = 0;
      v43 = *(_QWORD *)(a1 + 24);
      lsl::Allocator::makeUnique<dyld4::Atlas::Image,dyld4::Atlas::Image>(&v52, *(_QWORD *)(a1 + 8), v59);
      lsl::OrderedSet<lsl::UniquePtr<dyld4::Atlas::Image>,std::less<lsl::UniquePtr<dyld4::Atlas::Image>>>::insert(
        v58,
        v43,
        &v52);
      lsl::UniquePtr<dyld4::Atlas::Image>::~UniquePtr(&v52, v44);
      dyld4::Atlas::Mapper::Pointer<dyld3::MachOLoaded>::~Pointer((__int64)v65);
      lsl::SharedPtr<dyld4::Atlas::Mapper>::~SharedPtr(&v63, v45);
      dyld4::FileRecord::~FileRecord((dyld4::FileRecord *)((char *)v59 + 8));
      lsl::SharedPtr<dyld4::Atlas::Mapper>::~SharedPtr(&v53, v46);
      dyld4::FileRecord::~FileRecord((dyld4::FileRecord *)v69);
      --v33;
      v35 = 0u;
    }
    while ( v33 );
    return 1;
  }
  return (__int64)v24;
}
