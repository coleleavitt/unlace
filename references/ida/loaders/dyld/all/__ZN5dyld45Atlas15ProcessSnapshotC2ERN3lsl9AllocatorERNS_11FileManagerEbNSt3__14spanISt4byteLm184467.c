__int64 *__fastcall dyld4::Atlas::ProcessSnapshot::ProcessSnapshot(
        __int64 *a1,
        lsl::Allocator *this,
        __int64 a3,
        char a4,
        __int64 a5,
        __int64 a6)
{
  unsigned __int8 **v11; // x27
  lsl::AllocationMetadata **v12; // x26
  int v13; // w24
  lsl::AllocationMetadata **v14; // x25
  __int64 v15; // x0
  __int64 v16; // x10
  __int64 v17; // x11
  lsl::AllocationMetadata *v18; // x8
  void *v19; // x1
  lsl::AllocationMetadata *v20; // x8
  lsl::AllocationMetadata *v22; // [xsp+8h] [xbp-158h] BYREF
  _QWORD v23[6]; // [xsp+10h] [xbp-150h] BYREF
  __int64 v24; // [xsp+40h] [xbp-120h] BYREF
  __int64 v25; // [xsp+48h] [xbp-118h]
  __int64 v26; // [xsp+50h] [xbp-110h]
  __int64 v27; // [xsp+58h] [xbp-108h]
  __int64 v28; // [xsp+60h] [xbp-100h] BYREF
  __int64 v29; // [xsp+68h] [xbp-F8h]
  __int64 v30; // [xsp+70h] [xbp-F0h]
  __int64 v31; // [xsp+78h] [xbp-E8h]
  __int64 v32; // [xsp+80h] [xbp-E0h] BYREF
  __int64 v33; // [xsp+88h] [xbp-D8h]
  __int64 v34; // [xsp+90h] [xbp-D0h]
  __int64 v35; // [xsp+98h] [xbp-C8h]
  __int64 v36; // [xsp+A0h] [xbp-C0h] BYREF
  __int64 v37; // [xsp+A8h] [xbp-B8h]
  __int64 v38; // [xsp+B0h] [xbp-B0h]
  __int64 v39; // [xsp+B8h] [xbp-A8h]
  int v40; // [xsp+C0h] [xbp-A0h]
  __int64 v41; // [xsp+C4h] [xbp-9Ch]
  __int64 v42; // [xsp+CCh] [xbp-94h]
  __int64 v43; // [xsp+D8h] [xbp-88h]
  __int64 v44; // [xsp+E0h] [xbp-80h]
  __int64 v45; // [xsp+E8h] [xbp-78h]
  __int64 *v46; // [xsp+F0h] [xbp-70h]
  __int64 *v47; // [xsp+F8h] [xbp-68h]
  __int64 *v48; // [xsp+100h] [xbp-60h]

  *a1 = (__int64)this;
  a1[1] = a3;
  a1[2] = 0;
  v11 = (unsigned __int8 **)(a1 + 2);
  a1[3] = (__int64)this;
  a1[5] = 0;
  *((_BYTE *)a1 + 48) = 0;
  a1[7] = 0;
  v12 = (lsl::AllocationMetadata **)(a1 + 7);
  v13 = (_DWORD)a1 + 72;
  a1[8] = 0;
  v14 = (lsl::AllocationMetadata **)(a1 + 8);
  v15 = lsl::Allocator::aligned_alloc(this, 8u, 0x30u);
  *(_QWORD *)v15 = this;
  *(_OWORD *)(v15 + 8) = 0u;
  *(_OWORD *)(v15 + 24) = 0u;
  *(_QWORD *)(v15 + 40) = this;
  lsl::SharedPtr<dyld4::Atlas::Mapper>::SharedPtr(v13, (lsl::AllocationMetadata *)v15);
  a1[10] = 0;
  a1[12] = 0;
  a1[11] = 0;
  *((_BYTE *)a1 + 104) = a4;
  *((_BYTE *)a1 + 105) = 1;
  v16 = *a1;
  v17 = a1[1];
  v23[0] = a1;
  v23[1] = v16;
  v23[2] = v17;
  v23[3] = v11;
  v23[4] = v14;
  v23[5] = v12;
  v24 = v16;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v28 = v16;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v32 = v16;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v36 = v16;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v40 = -1491447450;
  v42 = 0;
  v41 = 0;
  v43 = 0;
  v44 = 0;
  v45 = 0;
  v46 = a1 + 10;
  v47 = a1 + 11;
  v48 = a1 + 12;
  if ( (dyld4::Atlas::ProcessSnapshot::Serializer::deserialize(v23, a5, a6) & 1) == 0 )
  {
    if ( *v11 )
    {
      lsl::BTree<lsl::UniquePtr<dyld4::Atlas::Image>,std::less<lsl::UniquePtr<dyld4::Atlas::Image>>,false>::NodeCore<31u,15u>::deallocate(
        *v11,
        (lsl::Allocator *)a1[3]);
      a1[2] = 0;
    }
    a1[5] = 0;
    *((_BYTE *)a1 + 48) = 0;
    v22 = nullptr;
    if ( &v22 != v12 )
    {
      v18 = *v12;
      *v12 = nullptr;
      v22 = v18;
    }
    ((void (__fastcall *)(lsl::AllocationMetadata **))lsl::UniquePtr<dyld4::Atlas::Bitmap>::~UniquePtr)(&v22);
    v22 = nullptr;
    if ( &v22 != v14 )
    {
      v20 = *v14;
      *v14 = nullptr;
      v22 = v20;
    }
    lsl::UniquePtr<dyld4::Atlas::SharedCache>::~UniquePtr(&v22, v19);
    *((_BYTE *)a1 + 105) = 0;
    a1[11] = 0;
    a1[12] = 0;
    a1[10] = 0;
  }
  if ( v37 )
    lsl::Vector<unsigned int>::resize(&v36, 0);
  if ( v33 )
    lsl::Vector<char>::resize((int)&v32, 0);
  if ( v29 )
    lsl::Vector<char const*>::resize(&v28, 0);
  if ( v25 )
    lsl::Vector<lsl::UUID>::resize(&v24, 0);
  return a1;
}
