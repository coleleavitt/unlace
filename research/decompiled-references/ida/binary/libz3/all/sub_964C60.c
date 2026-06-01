void __fastcall sub_964C60(
        __m128i *a1,
        __m128i *a2,
        __m128i *a3,
        __int64 a4,
        __int64 **a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  __int64 v10; // r14
  __m128i *v11; // r12
  __int64 v12; // r14

  v10 = (a2 - a1 + 1) / 2;
  v11 = &a1[v10];
  v12 = (v10 * 16) >> 4;
  if ( (a2 - a1 + 1) / 2 <= a4 )
  {
    sub_9649F0(a1, v11, a3, a5, a6, a7, a8, a9);
    sub_9649F0(v11, a2, a3, a5, a6, a7, a8, a9);
    sub_9636E0(
      (unsigned __int64 *)a1,
      (unsigned __int64 *)v11,
      a2,
      v12,
      a2 - v11,
      a3->m128i_i8,
      a6,
      a7,
      a8,
      a9,
      (__int64)a5);
  }
  else
  {
    sub_964C60(a1, v11, a3, a4, a5);
    sub_964C60(v11, a2, a3, a4, a5);
    sub_963FE0((unsigned __int64 *)a1, (unsigned __int64 *)v11, a2, v12, a2 - v11, a3->m128i_i8, a6, a7, a8, a9, a4, a5);
  }
}

