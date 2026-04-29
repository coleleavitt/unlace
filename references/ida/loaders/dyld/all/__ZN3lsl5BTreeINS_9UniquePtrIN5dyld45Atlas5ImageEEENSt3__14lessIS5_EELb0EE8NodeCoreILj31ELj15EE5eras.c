__int64 __fastcall lsl::BTree<lsl::UniquePtr<dyld4::Atlas::Image>,std::less<lsl::UniquePtr<dyld4::Atlas::Image>>,false>::NodeCore<31u,15u>::erase(
        __int64 result,
        unsigned int a2)
{
  int v2; // w8
  __int64 v3; // x11
  _QWORD *v4; // x9
  __int64 v5; // x10
  __int64 v6; // x11

  v2 = *(char *)(result + 248);
  if ( (v2 & 0x80000000) == 0 )
    lsl::BTree<lsl::UniquePtr<dyld4::Atlas::Image>,std::less<lsl::UniquePtr<dyld4::Atlas::Image>>,false>::NodeCore<31u,15u>::erase();
  v3 = v2 & 0x7F;
  if ( (unsigned int)v3 <= a2 )
    lsl::BTree<lsl::UniquePtr<dyld4::Atlas::Image>,std::less<lsl::UniquePtr<dyld4::Atlas::Image>>,false>::NodeCore<31u,15u>::erase();
  v4 = (_QWORD *)(result + 8LL * a2 + 8);
  if ( v4 != (_QWORD *)(result + 8LL * (v2 & 0x7F)) )
  {
    v5 = *(_QWORD *)(result + 8LL * a2);
    v6 = 8 * v3 - 8LL * a2 - 8;
    do
    {
      *(v4 - 1) = *v4;
      *v4++ = v5;
      v6 -= 8;
    }
    while ( v6 );
  }
  *(_BYTE *)(result + 248) = v2 - 1;
  return result;
}
