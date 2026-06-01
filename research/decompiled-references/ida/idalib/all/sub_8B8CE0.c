__m128i *__fastcall sub_8B8CE0(_QWORD *a1, const __m128i *a2)
{
  unsigned __int64 *v3; // rax
  __int64 v4; // rsi
  __m128i *v5; // rbx
  char *v6; // r13
  __m128i v7; // xmm0
  __int64 v8; // rax
  __int64 v9; // rbp
  __m128i si128; // xmm1
  __int64 v11; // rax
  __int64 v13; // rax
  __m128i v14[3]; // [rsp+0h] [rbp-38h] BYREF

  v3 = sub_8B8C20(a1, a2->m128i_i64[0]);
  v4 = a1[2];
  if ( v3 == (unsigned __int64 *)a1[11] )
  {
    v5 = (__m128i *)a1[2];
    v6 = nullptr;
  }
  else
  {
    v5 = (__m128i *)(v3 + 3);
    v6 = (char *)v3 - v4 + 24;
  }
  v7 = _mm_loadu_si128(a2);
  v8 = a1[3];
  v9 = a2[1].m128i_i64[0];
  v14[0] = v7;
  if ( a1[4] < (unsigned __int64)(v8 + 1) )
  {
    v13 = qvector_reserve(a1 + 2, v4, v8 + 1, 24);
    a1[2] = v13;
    v5 = (__m128i *)&v6[v13];
    v8 = a1[3];
  }
  memmove(&v5[1].m128i_u64[1], v5, 24 * v8 - (_QWORD)v6);
  si128 = _mm_load_si128(v14);
  v5[1].m128i_i64[0] = v9;
  *v5 = si128;
  v11 = a1[3] + 1LL;
  a1[3] = v11;
  a1[11] = a1[2] + 24 * v11;
  return v5;
}
