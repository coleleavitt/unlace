void __fastcall sub_F6D150(__m128i *a1, __int64 a2)
{
  __int64 v2; // rbx

  if ( a2 - (__int64)a1 <= 784 )
  {
    sub_F58ED0((__int64)a1, a2);
  }
  else
  {
    v2 = 56 * ((0x6DB6DB6DB6DB6DB7LL * ((a2 - (__int64)a1) >> 3)) >> 1);
    sub_F6D150(a1, &a1->m128i_i8[v2]);
    sub_F6D150(&a1->m128i_i8[v2], a2);
    sub_F6CD70(
      a1,
      (__m128i *)((char *)a1 + v2),
      a2,
      0x6DB6DB6DB6DB6DB7LL * (v2 >> 3),
      (__m128i *)(0x6DB6DB6DB6DB6DB7LL * ((a2 - (__int64)&a1->m128i_i64[(unsigned __int64)v2 / 8]) >> 3)));
  }
}

