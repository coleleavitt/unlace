__int64 __fastcall sub_199A6E0(
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
  unsigned __int64 v9; // rax

  result = sub_1998500(a1, *(unsigned __int16 **)(a2 + 16), 0, a3, a4, a6, a7, a8);
  if ( result != 1 )
  {
    v9 = result & 0xFFFFFFFFFFFFFFFELL;
    if ( v9 == *(_QWORD *)(a2 + 16) )
      return a2;
    else
      return sub_1A86230(*(_QWORD *)(*a1 + 736), *(unsigned int *)(a2 + 8), v9);
  }
  return result;
}
