void __fastcall sub_42AFE0(__int64 *a1, unsigned __int8 *a2, const __m128i *a3)
{
  __m128i v3; // xmm0
  __int64 v4; // rbx
  __int64 v5; // rdi
  const char *v6; // rsi
  __m128i v7; // [rsp+0h] [rbp-38h] BYREF
  __int64 v8; // [rsp+10h] [rbp-28h]
  unsigned __int64 v9; // [rsp+18h] [rbp-20h]

  v3 = _mm_loadu_si128(a3);
  v4 = a3[1].m128i_i64[0];
  v9 = __readfsqword(0x28u);
  v5 = *a1;
  a3[1].m128i_i64[0] = 0;
  v7 = v3;
  *a3 = 0;
  v6 = (const char *)*a2;
  v8 = v4;
  sub_42AB20(v5, v6, (unsigned int **)&v7);
  if ( v3.m128i_i64[0] )
    operator delete((void *)v3.m128i_i64[0], v4 - v3.m128i_i64[0]);
}

