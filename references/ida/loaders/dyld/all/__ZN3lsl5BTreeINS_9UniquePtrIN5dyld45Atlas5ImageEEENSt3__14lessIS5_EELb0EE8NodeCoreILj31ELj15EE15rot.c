char *__fastcall lsl::BTree<lsl::UniquePtr<dyld4::Atlas::Image>,std::less<lsl::UniquePtr<dyld4::Atlas::Image>>,false>::NodeCore<31u,15u>::rotateFromRight(
        char *result,
        int a2)
{
  char *v2; // x13
  __int64 v3; // x20
  __int64 v4; // x21
  __int64 v5; // x8
  int v6; // w9
  __int64 v7; // x10
  unsigned int v8; // w11
  int v9; // w22
  char *v10; // x14
  __int64 v11; // x15
  __int64 v12; // x23
  char *v13; // x15
  __int64 v14; // x16
  size_t v15; // x2
  __int64 *v16; // x12
  __int64 v17; // x13
  __int64 *v18; // x14
  __int64 v19; // x15
  char v20; // w12
  __int64 v21; // x10
  __int64 *v22; // x11
  __int64 v23; // x13
  void *v24; // x0

  if ( result[248] < 0 )
    lsl::BTree<lsl::UniquePtr<dyld4::Atlas::Image>,std::less<lsl::UniquePtr<dyld4::Atlas::Image>>,false>::NodeCore<31u,15u>::rotateFromRight();
  v2 = &result[8 * a2];
  v4 = *((_QWORD *)v2 + 15);
  v3 = *((_QWORD *)v2 + 16);
  v5 = *(unsigned __int8 *)(v4 + 248);
  v6 = *(char *)(v3 + 248);
  v7 = v6 & 0x7F;
  v8 = v7 + (v5 & 0x7F);
  v9 = v7 - (v8 >> 1);
  v10 = (char *)(v4 + 8 * (v5 & 0x7F));
  if ( v2 != v10 )
  {
    v11 = *(_QWORD *)v10;
    *(_QWORD *)v10 = *(_QWORD *)v2;
    *(_QWORD *)v2 = v11;
  }
  v12 = (unsigned __int8)((v6 & 0x7F) - (v8 >> 1));
  v13 = (char *)(v3 + 8LL * (unsigned __int8)v9 - 8);
  if ( v13 != v2 )
  {
    v14 = *(_QWORD *)v2;
    *(_QWORD *)v2 = *(_QWORD *)v13;
    *(_QWORD *)v13 = v14;
  }
  v15 = 8 * v12;
  if ( (_DWORD)v7 != v8 >> 1 )
  {
    v16 = (__int64 *)(v4 + 8 * (v5 & 0x7F) + 8);
    v17 = 8 * v12;
    v18 = (__int64 *)v3;
    do
    {
      if ( v18 != v16 )
      {
        v19 = *v16;
        *v16 = *v18;
        *v18 = v19;
      }
      ++v18;
      ++v16;
      v17 -= 8;
    }
    while ( v17 );
  }
  v20 = v5;
  if ( v8 >= 2 )
  {
    v21 = 8 * v7;
    v22 = (__int64 *)v3;
    do
    {
      if ( v15 )
      {
        v23 = *v22;
        *v22 = v22[v12];
        v22[v12] = v23;
      }
      ++v22;
      v21 -= 8;
    }
    while ( v15 != v21 );
  }
  if ( ((char)v5 & 0x80000000) == 0 )
  {
    if ( v6 < 0 )
      lsl::BTree<lsl::UniquePtr<dyld4::Atlas::Image>,std::less<lsl::UniquePtr<dyld4::Atlas::Image>>,false>::NodeCore<31u,15u>::rotateFromRight();
    v24 = _platform_memmove((void *)(v4 + 8 * v5 + 128), (const void *)(v3 + 120), v15);
    if ( *(char *)(v3 + 248) < 0 )
      lsl::BTree<lsl::UniquePtr<dyld4::Atlas::Image>,std::less<lsl::UniquePtr<dyld4::Atlas::Image>>,false>::NodeCore<31u,15u>::rotateFromRight(v24);
    result = (char *)_platform_memmove(
                       (void *)(v3 + 120),
                       (const void *)(v3 + 120 + 8 * v12),
                       8 * (*(unsigned __int8 *)(v3 + 248) - v12) + 8);
    v20 = *(_BYTE *)(v4 + 248);
  }
  *(_BYTE *)(v4 + 248) = v20 + v9;
  *(_BYTE *)(v3 + 248) -= v9;
  return result;
}
