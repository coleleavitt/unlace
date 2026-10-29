char *__fastcall lsl::BTree<lsl::UniquePtr<dyld4::Atlas::Image>,std::less<lsl::UniquePtr<dyld4::Atlas::Image>>,false>::NodeCore<31u,15u>::splitChild(
        __int64 a1,
        unsigned int a2,
        lsl::Allocator *this)
{
  __int64 v4; // x23
  __int64 v5; // x21
  int v6; // w11
  int v7; // w24
  int v8; // w10
  __int64 v10; // x10
  __int64 v11; // x8
  __int64 v12; // x25
  __int64 v13; // x22
  _QWORD *v14; // x11
  __int64 v15; // x9
  _QWORD *v16; // x10
  __int64 v17; // t1
  __int64 v18; // x13
  __int64 *v19; // x26
  __int64 v20; // x8
  __int64 *v21; // x8
  __int64 v22; // x9
  char *result; // x0
  _BYTE *v24; // x20
  int v25; // w8
  __int128 v26; // q0
  unsigned __int8 v27; // w24
  __int64 *v28; // x9
  __int64 v29; // x9
  __int64 *v30; // x9
  __int64 v31; // x11
  __int64 *v32; // x12
  __int64 v33; // x13
  int v34; // w11
  int v35; // w12
  char v36; // w9
  int v37; // w11
  int v38; // w9
  int v39; // w8

  if ( *(char *)(a1 + 248) < 0 )
    lsl::BTree<lsl::UniquePtr<dyld4::Atlas::Image>,std::less<lsl::UniquePtr<dyld4::Atlas::Image>>,false>::NodeCore<31u,15u>::splitChild();
  if ( *(unsigned __int8 *)(a1 + 248) >= 0xFu )
    lsl::BTree<lsl::UniquePtr<dyld4::Atlas::Image>,std::less<lsl::UniquePtr<dyld4::Atlas::Image>>,false>::NodeCore<31u,15u>::splitChild();
  v4 = a1 + 120;
  v5 = a1 + 120 + 8LL * a2;
  v6 = *(char *)(*(_QWORD *)v5 + 248LL);
  v7 = *(_BYTE *)(*(_QWORD *)v5 + 248LL) & 0x7F;
  if ( v6 >= 0 )
    v8 = 15;
  else
    v8 = 31;
  if ( v7 != v8 )
    lsl::BTree<lsl::UniquePtr<dyld4::Atlas::Image>,std::less<lsl::UniquePtr<dyld4::Atlas::Image>>,false>::NodeCore<31u,15u>::splitChild();
  v10 = *(unsigned __int8 *)(a1 + 248);
  v11 = v10 + 1;
  v12 = a2;
  if ( v6 >= 0 )
    v13 = 7;
  else
    v13 = 15;
  if ( *(unsigned __int8 *)(a1 + 248) != a2 )
  {
    v14 = (_QWORD *)(a1 + 8 * v10);
    v15 = 8LL * a2 - 8 * v10;
    v16 = v14;
    do
    {
      v17 = *--v16;
      v18 = *v14;
      *v14 = v17;
      *v16 = v18;
      v14 = v16;
      v15 += 8;
    }
    while ( v15 );
  }
  v19 = (__int64 *)(a1 + 8LL * a2);
  v20 = v4 + 8 * v11;
  if ( v20 != v5 + 8 )
    _platform_memmove((void *)(v5 + 16), (const void *)(v5 + 8), v20 - (v5 + 8));
  v21 = (__int64 *)(*(_QWORD *)v5 + 8 * v13);
  if ( v21 != v19 )
  {
    v22 = *v19;
    *v19 = *v21;
    *v21 = v22;
  }
  result = (char *)lsl::Allocator::allocate_buffer(this, 0x100u, 0x100u);
  v24 = result;
  v25 = *(char *)(*(_QWORD *)v5 + 248LL);
  result[248] = *(_BYTE *)(*(_QWORD *)v5 + 248LL) & 0x80;
  if ( v25 < 0 )
  {
    *((_QWORD *)result + 30) = 0;
    v26 = 0u;
    *((_OWORD *)result + 13) = 0u;
    *((_OWORD *)result + 14) = 0u;
    *((_OWORD *)result + 11) = 0u;
    *((_OWORD *)result + 12) = 0u;
    *((_OWORD *)result + 9) = 0u;
    *((_OWORD *)result + 10) = 0u;
    *((_OWORD *)result + 7) = 0u;
    *((_OWORD *)result + 8) = 0u;
  }
  else
  {
    *((_QWORD *)result + 14) = 0;
    v26 = 0u;
  }
  *((_OWORD *)result + 5) = v26;
  *((_OWORD *)result + 6) = v26;
  *((_OWORD *)result + 3) = v26;
  *((_OWORD *)result + 4) = v26;
  *((_OWORD *)result + 1) = v26;
  *((_OWORD *)result + 2) = v26;
  *(_OWORD *)result = v26;
  if ( *(char *)(a1 + 248) < 0 )
    lsl::BTree<lsl::UniquePtr<dyld4::Atlas::Image>,std::less<lsl::UniquePtr<dyld4::Atlas::Image>>,false>::NodeCore<31u,15u>::splitChild();
  v27 = ~(_BYTE)v13 + v7;
  v28 = (__int64 *)(v4 + 8 * v12);
  v28[1] = (__int64)result;
  v29 = *v28;
  if ( v27 )
  {
    v30 = (__int64 *)(v29 + 8 * v13 + 8);
    v31 = 8LL * v27;
    v32 = (__int64 *)result;
    do
    {
      if ( v30 != v32 )
      {
        v33 = *v32;
        *v32 = *v30;
        *v30 = v33;
      }
      ++v30;
      ++v32;
      v31 -= 8;
    }
    while ( v31 );
    v29 = *(_QWORD *)v5;
  }
  v34 = *(char *)(v29 + 248);
  if ( (v34 & 0x80000000) == 0 )
  {
    if ( v25 < 0 )
      lsl::BTree<lsl::UniquePtr<dyld4::Atlas::Image>,std::less<lsl::UniquePtr<dyld4::Atlas::Image>>,false>::NodeCore<31u,15u>::splitChild();
    result = (char *)_platform_memmove(result + 120, (const void *)(v29 + 8 * v13 + 128), 8LL * v27 + 8);
    v29 = *(_QWORD *)v5;
    LOBYTE(v34) = *(_BYTE *)(*(_QWORD *)v5 + 248LL);
  }
  *(_BYTE *)(v29 + 248) = v34 + ~v27;
  v24[248] += v27;
  ++*(_BYTE *)(a1 + 248);
  if ( (char)v24[248] >= 0 )
    v35 = 15;
  else
    v35 = 31;
  if ( (v24[248] & 0x7F) == v35
    || ((v36 = *(_BYTE *)(v29 + 248), v37 = v36, v38 = v36 & 0x7F, v37 >= 0) ? (v39 = 15) : (v39 = 31), v38 == v39) )
  {
    lsl::BTree<lsl::UniquePtr<dyld4::Atlas::Image>,std::less<lsl::UniquePtr<dyld4::Atlas::Image>>,false>::NodeCore<31u,15u>::splitChild();
  }
  return result;
}
