__int64 __fastcall sub_1DCC490(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  __int64 result; // rax
  __int64 v11; // rdi
  unsigned __int64 v12; // rsi

  result = (__int64)sub_1DC71F0(a1, *(_QWORD *)(a2 + 24), a3, a4, a5, a6, a7, a8);
  if ( result != 1 )
  {
    v11 = *a1;
    v12 = result & 0xFFFFFFFFFFFFFFFELL;
    if ( *(_DWORD *)(*a1 + 12632) )
      return sub_1E53EF0(v11, v12);
    result = a2;
    if ( *(_QWORD *)(a2 + 24) != v12 )
      return sub_1E53EF0(v11, v12);
  }
  return result;
}
