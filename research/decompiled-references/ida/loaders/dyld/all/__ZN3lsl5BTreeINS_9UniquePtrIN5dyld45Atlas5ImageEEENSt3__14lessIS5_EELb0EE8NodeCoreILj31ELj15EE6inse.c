__int64 __fastcall lsl::BTree<lsl::UniquePtr<dyld4::Atlas::Image>,std::less<lsl::UniquePtr<dyld4::Atlas::Image>>,false>::NodeCore<31u,15u>::insert(
        __int64 result,
        unsigned int a2,
        __int64 *a3)
{
  int v3; // w8
  int v4; // w10
  int v5; // w9
  __int64 *v6; // x9
  _QWORD *v7; // x12
  __int64 v8; // x10
  _QWORD *v9; // x11
  __int64 v10; // t1
  __int64 v11; // x14
  __int64 v12; // x10

  v3 = *(char *)(result + 248);
  v4 = v3 & 0x7F;
  if ( v3 >= 0 )
    v5 = 15;
  else
    v5 = 31;
  if ( v4 == v5 )
    lsl::BTree<lsl::UniquePtr<dyld4::Atlas::Image>,std::less<lsl::UniquePtr<dyld4::Atlas::Image>>,false>::NodeCore<31u,15u>::insert();
  if ( v5 == a2 )
    lsl::BTree<lsl::UniquePtr<dyld4::Atlas::Image>,std::less<lsl::UniquePtr<dyld4::Atlas::Image>>,false>::NodeCore<31u,15u>::insert();
  v6 = (__int64 *)(result + 8LL * a2);
  if ( v4 != a2 )
  {
    v7 = (_QWORD *)(result + 8LL * (v3 & 0x7F));
    v8 = 8LL * a2 - 8LL * (v3 & 0x7F);
    v9 = v7;
    do
    {
      v10 = *--v9;
      v11 = *v7;
      *v7 = v10;
      *v9 = v11;
      v7 = v9;
      v8 += 8;
    }
    while ( v8 );
  }
  if ( v6 != a3 )
  {
    v12 = *v6;
    *v6 = *a3;
    *a3 = v12;
  }
  *(_BYTE *)(result + 248) = v3 + 1;
  return result;
}
