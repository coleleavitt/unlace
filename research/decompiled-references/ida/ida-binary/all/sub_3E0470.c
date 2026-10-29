__int64 __fastcall jumpto_watch_ah_t__::vfunc_1(__int64 a1, __int64 a2)
{
  int v2; // edx
  __int64 result; // rax

  v2 = *(_DWORD *)(a2 + 8);
  if ( v2 == 33 )
  {
    if ( *(_BYTE *)(a1 + 12) )
      return sub_3E0310(*(QT::QAbstractItemView **)a2) == 0 ? 7 : 3;
    return 6;
  }
  else
  {
    result = 6;
    if ( v2 == 32 )
      return sub_3E0310(*(QT::QAbstractItemView **)a2) == 0 ? 7 : 3;
  }
  return result;
}
