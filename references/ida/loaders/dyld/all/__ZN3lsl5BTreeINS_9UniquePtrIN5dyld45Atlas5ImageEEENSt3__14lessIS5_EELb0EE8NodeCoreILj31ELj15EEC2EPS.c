__int64 __fastcall lsl::BTree<lsl::UniquePtr<dyld4::Atlas::Image>,std::less<lsl::UniquePtr<dyld4::Atlas::Image>>,false>::NodeCore<31u,15u>::NodeCore(
        __int64 result,
        __int64 a2)
{
  __int64 v2; // x8

  v2 = 0;
  *(_BYTE *)(result + 248) = 0;
  do
  {
    *(_QWORD *)(result + v2) = 0;
    v2 += 8;
  }
  while ( v2 != 120 );
  if ( *(char *)(result + 248) < 0 )
    lsl::BTree<lsl::UniquePtr<dyld4::Atlas::Image>,std::less<lsl::UniquePtr<dyld4::Atlas::Image>>,false>::NodeCore<31u,15u>::NodeCore();
  *(_QWORD *)(result + 120) = a2;
  return result;
}
