__int64 __fastcall sub_F909D0(__m128i *a1, __m128i *a2, const __m128i *a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // r15

  v6 = (0x6DB6DB6DB6DB6DB7LL * (((char *)a2 - (char *)a1) >> 3) + 1) / 2;
  v7 = 56 * v6;
  v8 = (__int64)&a1->m128i_i64[7 * v6];
  if ( v6 <= a4 )
  {
    sub_F7CF70((__int64)a1, (__m128i *)((char *)a1 + 56 * v6), a3);
    sub_F7CF70(v8, a2, a3);
  }
  else
  {
    sub_F909D0(a1, (char *)a1 + 56 * v6, a3);
    sub_F909D0(v8, a2, a3);
  }
  return sub_F90190(
           a1,
           v8,
           a2,
           0x6DB6DB6DB6DB6DB7LL * (v7 >> 3),
           0x6DB6DB6DB6DB6DB7LL * (((__int64)a2->m128i_i64 - v8) >> 3),
           a3,
           a4);
}
