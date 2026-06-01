__int64 sub_14BF00()
{
  __m128 v0; // xmm0
  __int64 v1; // rbp
  __int64 v2; // rbx
  __m128i v4; // [rsp+0h] [rbp-58h] BYREF
  __int64 v5; // [rsp+10h] [rbp-48h] BYREF
  __int64 v6; // [rsp+18h] [rbp-40h] BYREF
  __m128i v7; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v8; // [rsp+38h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_161C80(0, &v5, &v6) )
  {
    sub_15E150(0, &v5);
    v0 = _mm_loadh_ps((const double *)&v6);
  }
  else
  {
    v5 = -1;
    v0 = (__m128)-1LL;
    v6 = -1;
  }
  v4 = (__m128i)v0;
  v1 = xmmword_2528A0;
  v2 = qalloc_or_throw();
  v7 = _mm_load_si128(&v4);
  sub_14BCB0(v2, &v7);
  sub_14B6C0(v2, v1);
  return 1;
}

