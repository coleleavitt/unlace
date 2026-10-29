__int64 __fastcall sub_1BAD680(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  __int64 result; // rax
  __int64 v10; // rdi
  unsigned __int64 v11; // rsi

  result = sub_1B73BE0(a1, *(_QWORD *)(a2 + 24), a3, a6, a7, a4, a5);
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
