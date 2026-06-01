__int64 __fastcall sub_1CE8180(
        __int64 *a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 result; // rax
  unsigned __int64 v9; // rdx

  result = sub_1CE7590(a1, *(_WORD **)(a2 + 16), 0, a3, a4, a6, a7, a8);
  if ( result != 1 )
  {
    v9 = result & 0xFFFFFFFFFFFFFFFELL;
    if ( *(_DWORD *)(*a1 + 12632) )
      return sub_1A86230(*(__int64 **)(*a1 + 736), *(_DWORD *)(a2 + 8), v9);
    result = a2;
    if ( *(_QWORD *)(a2 + 16) != v9 )
      return sub_1A86230(*(__int64 **)(*a1 + 736), *(_DWORD *)(a2 + 8), v9);
  }
  return result;
}
