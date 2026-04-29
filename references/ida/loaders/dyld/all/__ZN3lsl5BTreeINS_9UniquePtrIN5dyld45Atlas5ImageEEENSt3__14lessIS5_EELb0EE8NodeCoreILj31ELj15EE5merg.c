__int64 __fastcall lsl::BTree<lsl::UniquePtr<dyld4::Atlas::Image>,std::less<lsl::UniquePtr<dyld4::Atlas::Image>>,false>::NodeCore<31u,15u>::merge(
        __int64 a1,
        lsl::Allocator *a2,
        unsigned int a3)
{
  __int64 v3; // x10
  _QWORD *v6; // x9
  unsigned __int8 *v7; // x21
  __int64 v8; // x22
  __int64 *v9; // x12
  __int64 *v10; // x11
  __int64 v11; // x13
  __int64 v12; // x11
  _QWORD *v13; // x12
  __int64 v14; // x13
  __int64 v15; // x10
  void *v16; // x0
  __int64 v17; // x8
  __int64 v18; // x9
  char v19; // w10
  __int64 v20; // x11
  unsigned __int8 *v21; // x12
  __int64 v22; // x13
  unsigned __int8 *v23; // x14
  __int64 v24; // x15
  __int64 _28; // [xsp+28h] [xbp+8h]

  if ( *(char *)(a1 + 248) < 0 )
    lsl::BTree<lsl::UniquePtr<dyld4::Atlas::Image>,std::less<lsl::UniquePtr<dyld4::Atlas::Image>>,false>::NodeCore<31u,15u>::merge();
  v3 = *(unsigned __int8 *)(a1 + 248);
  if ( *(unsigned __int8 *)(a1 + 248) <= a3 )
    lsl::BTree<lsl::UniquePtr<dyld4::Atlas::Image>,std::less<lsl::UniquePtr<dyld4::Atlas::Image>>,false>::NodeCore<31u,15u>::merge();
  v6 = (_QWORD *)(a1 + 120 + 8LL * a3);
  v8 = *v6;
  v7 = (unsigned __int8 *)v6[1];
  v9 = (__int64 *)(a1 + 8LL * a3);
  v10 = (__int64 *)(*v6 + 8LL * (*(_BYTE *)(*v6 + 248LL) & 0x7F));
  if ( v9 != v10 )
  {
    v11 = *v10;
    *v10 = *v9;
    *v9 = v11;
  }
  v12 = v3 + 1;
  v13 = v9 + 1;
  if ( v13 != (_QWORD *)(a1 + 8 * v3) )
  {
    v14 = *(_QWORD *)(a1 + 8LL * a3);
    v15 = 8 * v3 - 8LL * a3 - 8;
    do
    {
      *(v13 - 1) = *v13;
      *v13++ = v14;
      v15 -= 8;
    }
    while ( v15 );
  }
  v16 = _platform_memmove(
          (void *)(a1 + 120 + 8LL * a3 + 8),
          (const void *)(a1 + 120 + 8LL * a3 + 16),
          8 * v12 - (8LL * a3 + 16));
  v17 = v7[248];
  v18 = *(unsigned __int8 *)(v8 + 248);
  v19 = *(_BYTE *)(v8 + 248);
  v20 = v17 & 0x7F;
  if ( (v17 & 0x7F) != 0 )
  {
    v21 = (unsigned __int8 *)(v8 + 8 * (v18 & 0x7F) + 8);
    v22 = 8 * v20;
    v23 = v7;
    do
    {
      if ( v23 != v21 )
      {
        v24 = *(_QWORD *)v21;
        *(_QWORD *)v21 = *(_QWORD *)v23;
        *(_QWORD *)v23 = v24;
      }
      v23 += 8;
      v21 += 8;
      v22 -= 8;
    }
    while ( v22 );
  }
  if ( ((char)v18 & 0x80000000) == 0 )
  {
    if ( (v17 & 0x80) != 0 )
      lsl::BTree<lsl::UniquePtr<dyld4::Atlas::Image>,std::less<lsl::UniquePtr<dyld4::Atlas::Image>>,false>::NodeCore<31u,15u>::merge(v16);
    _platform_memmove((void *)(v8 + 8 * v18 + 128), v7 + 120, 8 * v17 + 8);
    v19 = *(_BYTE *)(v8 + 248);
    LOBYTE(v20) = v7[248] & 0x7F;
  }
  *(_BYTE *)(v8 + 248) = v20 + v19 + 1;
  --*(_BYTE *)(a1 + 248);
  if ( ((_28 ^ (2 * _28)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return lsl::Allocator::deallocate_buffer(a2, v7, 0x100u, 0x100u);
}
