__int64 __fastcall sub_33DD80(
        double a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        double a5,
        double a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  __int64 *v12; // rbx
  __int64 v13; // rbp
  __int64 v14; // rdi

  v12 = *(__int64 **)a12;
  v13 = *(_QWORD *)a12 + 8LL * *(_QWORD *)(a12 + 8);
  if ( v13 != *(_QWORD *)a12 )
  {
    do
    {
      v14 = *v12++;
      sub_33D630(v14, a1, a2, a3, a4, a5, a6, a7, a8);
    }
    while ( (__int64 *)v13 != v12 );
  }
  return 2;
}
