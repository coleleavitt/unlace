__int64 __fastcall sub_1CF0D30(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  __int64 result; // rax
  __int64 v10; // rdi
  unsigned __int64 v11; // rsi

  result = sub_1CE88F0(a1, *(unsigned __int16 **)(a2 + 24), a6, a7, a3, a4, a5);
  if ( result != 1 )
  {
    v10 = *a1;
    v11 = result & 0xFFFFFFFFFFFFFFFELL;
    if ( *(_DWORD *)(*a1 + 12632) )
      return sub_1E53EF0(v10, v11);
    result = a2;
    if ( *(_QWORD *)(a2 + 24) != v11 )
      return sub_1E53EF0(v10, v11);
  }
  return result;
}
