__int64 __fastcall sub_3DDEB0(__m128i *a1, __m128i *a2, int a3, __int32 a4, __m128 a5)
{
  __m128i *v6; // r13
  __m128i *v8; // rax
  __m128i *v9; // rbp

  v6 = a2;
  sub_3DB660(a1);
  if ( a1[67].m128i_i16[2] != 40 )
    goto LABEL_8;
  sub_3DB660(a1);
  v8 = (__m128i *)sub_3DB740((__int64)a1, a3);
  a2->m128i_i8[0] = 4;
  a2->m128i_i64[1] = (__int64)v8;
  v9 = v8;
  if ( a3 > 62 )
    v8->m128i_i32[1] |= 0x10u;
  a2 = v8 + 2;
  sub_3DD1E0(a1, v8 + 2, 1, a5);
  if ( !a4 )
    a4 = v9[2].m128i_i32[1];
  v9[4].m128i_i32[1] = a4;
  v6->m128i_i32[1] = a4;
  if ( a1[67].m128i_i16[2] != 41 )
LABEL_8:
    sub_5880C(a1, a2, *(double *)a5.m128_u64);
  return sub_3DB660(a1);
}
