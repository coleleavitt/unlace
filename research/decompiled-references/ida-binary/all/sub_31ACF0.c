__int64 __fastcall sub_31ACF0(
        __int64 a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rax

  result = 0;
  if ( *(_QWORD *)(a1 + 56) )
  {
    v10 = *(_QWORD *)(a1 + 40);
    if ( v10 )
    {
      v11 = *(_QWORD *)(v10 + 184) + 24LL * **(_QWORD **)(a1 + 48);
      if ( *(_QWORD *)(v11 + 8) )
        sub_319590(*(const char **)v11, a2, a3, a4, a5, a6, a7, a8, a9);
      else
        sub_319590(&s1, a2, a3, a4, a5, a6, a7, a8, a9);
      return 1;
    }
  }
  return result;
}
