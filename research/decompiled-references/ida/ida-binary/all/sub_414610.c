void __fastcall sub_414610(__int64 a1)
{
  const char *v1; // r13
  __m128i *v2; // rbx
  __m128i v3; // xmm2
  const char *v4; // r14
  __int64 v5; // rdi
  __int64 v6; // rbp
  __m128i v7; // xmm0
  const char *v8; // rdi
  int v9; // ebp
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdi
  __m128i si128; // xmm3
  __m128i v16; // [rsp+0h] [rbp-48h] BYREF
  __m128i v17[3]; // [rsp+10h] [rbp-38h] BYREF

  v1 = &s1;
  v2 = (__m128i *)a1;
  v3 = _mm_loadu_si128((const __m128i *)(a1 + 8));
  v4 = *(const char **)a1;
  *(_OWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = 0;
  v17[0] = v3;
  if ( v3.m128i_i64[0] )
    v1 = v4;
  while ( 1 )
  {
    v8 = &s1;
    v9 = strtol(v1, nullptr, 10);
    if ( v2[-1].m128i_i64[0] )
      v8 = (const char *)v2[-2].m128i_i64[1];
    if ( v9 >= (int)strtol(v8, nullptr, 10) )
      break;
    v5 = v2->m128i_i64[0];
    v6 = v2[-2].m128i_i64[1];
    v2[-2].m128i_i64[1] = 0;
    v7 = _mm_loadu_si128(v2 - 1);
    v2[-1] = 0;
    if ( v5 )
    {
      v2->m128i_i64[1] = 0;
      qfree(v5, nullptr, v10, v11, v12, v13, *(_OWORD *)&v7, *(_OWORD *)v17);
      v7 = _mm_load_si128(&v16);
    }
    v2->m128i_i64[0] = v6;
    v2 = (__m128i *)((char *)v2 - 24);
    v2[2] = v7;
  }
  v14 = v2->m128i_i64[0];
  if ( v2->m128i_i64[0] )
  {
    v2->m128i_i64[1] = 0;
    qfree(v14, nullptr);
  }
  si128 = _mm_load_si128(v17);
  v2->m128i_i64[0] = (__int64)v4;
  *(__m128i *)((char *)v2 + 8) = si128;
}
