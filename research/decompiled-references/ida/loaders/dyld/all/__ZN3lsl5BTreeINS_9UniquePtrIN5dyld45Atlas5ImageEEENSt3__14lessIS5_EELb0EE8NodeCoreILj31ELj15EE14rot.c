_QWORD *__fastcall lsl::BTree<lsl::UniquePtr<dyld4::Atlas::Image>,std::less<lsl::UniquePtr<dyld4::Atlas::Image>>,false>::NodeCore<31u,15u>::rotateFromLeft(
        _QWORD *result,
        unsigned int a2)
{
  __int64 v2; // x11
  __int64 v3; // x21
  __int64 v4; // x20
  char v5; // w9
  __int64 v6; // x10
  __int64 v7; // x8
  __int64 v8; // x22
  __int64 v9; // x12
  __int64 v10; // x13
  __int64 v11; // x16
  __int64 v12; // x12
  __int64 v13; // x13
  __int64 *v14; // x14
  __int64 v15; // x15
  __int64 *v16; // x11
  __int64 *v17; // x12
  __int64 v18; // x13
  __int64 *v19; // x10
  __int64 v20; // x12
  void *v21; // x0

  if ( (char)result[31] < 0 )
    lsl::BTree<lsl::UniquePtr<dyld4::Atlas::Image>,std::less<lsl::UniquePtr<dyld4::Atlas::Image>>,false>::NodeCore<31u,15u>::rotateFromLeft();
  v2 = a2 - 1LL;
  v3 = result[v2 + 15];
  v4 = result[a2 + 15];
  v5 = *(_BYTE *)(v3 + 248);
  v6 = v5 & 0x7F;
  v7 = *(unsigned __int8 *)(v4 + 248);
  v8 = (unsigned __int8)((v5 & 0x7F) - ((unsigned __int64)((v7 & 0x7F) + (v5 & 0x7F)) >> 1));
  if ( (v7 & 0x7F) != 0 )
  {
    v9 = 8 * (v7 & 0x7F);
    v10 = v4 + 8 * v8;
    do
    {
      if ( v4 != v10 )
      {
        v11 = *(_QWORD *)(v10 + v9 - 8);
        *(_QWORD *)(v10 + v9 - 8) = *(_QWORD *)(v4 + v9 - 8);
        *(_QWORD *)(v4 + v9 - 8) = v11;
      }
      v9 -= 8;
    }
    while ( v9 );
  }
  v12 = v3 + 8 * v6;
  if ( v12 - 8 * v8 + 8 != v12 )
  {
    v13 = 8 - 8 * v8;
    v14 = (__int64 *)v4;
    do
    {
      if ( (__int64 *)(v12 + v13) != v14 )
      {
        v15 = *v14;
        *v14 = *(_QWORD *)(v12 + v13);
        *(_QWORD *)(v12 + v13) = v15;
      }
      ++v14;
      v13 += 8;
    }
    while ( v13 );
  }
  v16 = &result[v2];
  v17 = (__int64 *)(v4 + 8 * v8 - 8);
  if ( v16 != v17 )
  {
    v18 = *v17;
    *v17 = *v16;
    *v16 = v18;
  }
  v19 = (__int64 *)(v3 + 8LL * ((int)v6 - (int)v8));
  if ( v19 != v16 )
  {
    v20 = *v16;
    *v16 = *v19;
    *v19 = v20;
  }
  if ( (v5 & 0x80000000) == 0 )
  {
    if ( (v7 & 0x80) != 0 )
      lsl::BTree<lsl::UniquePtr<dyld4::Atlas::Image>,std::less<lsl::UniquePtr<dyld4::Atlas::Image>>,false>::NodeCore<31u,15u>::rotateFromLeft();
    v21 = _platform_memmove((void *)(v4 + 120 + 8 * v7 + 8 + 8 * v8 + 8 * ~v7), (const void *)(v4 + 120), 8 * v7 + 8);
    if ( *(char *)(v3 + 248) < 0 )
      lsl::BTree<lsl::UniquePtr<dyld4::Atlas::Image>,std::less<lsl::UniquePtr<dyld4::Atlas::Image>>,false>::NodeCore<31u,15u>::rotateFromLeft(v21);
    if ( *(char *)(v4 + 248) < 0 )
      lsl::BTree<lsl::UniquePtr<dyld4::Atlas::Image>,std::less<lsl::UniquePtr<dyld4::Atlas::Image>>,false>::NodeCore<31u,15u>::rotateFromLeft(v21);
    result = _platform_memmove(
               (void *)(v4 + 120),
               (const void *)(v3 + 8LL * *(unsigned __int8 *)(v3 + 248) + 128 - 8 * v8),
               8 * v8);
    v5 = *(_BYTE *)(v3 + 248);
  }
  *(_BYTE *)(v3 + 248) = v5 - v8;
  *(_BYTE *)(v4 + 248) += v8;
  return result;
}
