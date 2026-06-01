__m128i *__fastcall sub_208CC30(__int64 a1, __m128i *a2)
{
  __m128i *v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  __m128i *result; // rax
  __m128i *v8; // rcx
  __m128i v9; // xmm0
  __int64 v10; // r13
  void *v11; // r12
  __int8 *v12; // rbx
  __m128i *v13; // r14
  void *v14; // rdi
  int v15; // r13d
  __int64 v16; // rax
  __m128i *v17; // r14
  void *v18; // rdi
  int v19; // r13d
  __int64 v20; // rax
  _DWORD v21[12]; // [rsp+8h] [rbp-30h] BYREF

  v3 = a2;
  v4 = *(unsigned int *)(a1 + 88);
  v5 = *(_QWORD *)(a1 + 80);
  v6 = v4 + 1;
  result = (__m128i *)(v5 + 80 * v4);
  if ( v6 > *(unsigned int *)(a1 + 92) )
  {
    v10 = a1 + 80;
    v11 = (void *)(a1 + 96);
    if ( v5 > (unsigned __int64)a2 || result <= a2 )
    {
      v17 = (__m128i *)sub_2237400(a1 + 80, v11, v6, 80, v21);
      sub_208C920(v10, v17);
      v18 = *(void **)(a1 + 80);
      v19 = v21[0];
      if ( v11 != v18 )
        free(v18);
      v20 = *(unsigned int *)(a1 + 88);
      *(_QWORD *)(a1 + 80) = v17;
      *(_DWORD *)(a1 + 92) = v19;
      result = &v17[5 * v20];
    }
    else
    {
      v12 = &a2->m128i_i8[-v5];
      v13 = (__m128i *)sub_2237400(a1 + 80, v11, v6, 80, v21);
      sub_208C920(v10, v13);
      v14 = *(void **)(a1 + 80);
      v15 = v21[0];
      if ( v11 != v14 )
        free(v14);
      v16 = *(unsigned int *)(a1 + 88);
      *(_QWORD *)(a1 + 80) = v13;
      v3 = (__m128i *)&v12[(_QWORD)v13];
      *(_DWORD *)(a1 + 92) = v15;
      result = &v13[5 * v16];
    }
  }
  result->m128i_i64[0] = (__int64)result[1].m128i_i64;
  if ( (__m128i *)v3->m128i_i64[0] == &v3[1] )
  {
    result[1] = _mm_loadu_si128(v3 + 1);
  }
  else
  {
    result->m128i_i64[0] = v3->m128i_i64[0];
    result[1].m128i_i64[0] = v3[1].m128i_i64[0];
  }
  result->m128i_i64[1] = v3->m128i_i64[1];
  v3->m128i_i64[0] = (__int64)v3[1].m128i_i64;
  v3->m128i_i64[1] = 0;
  v3[1].m128i_i8[0] = 0;
  result[2].m128i_i64[0] = (__int64)result[3].m128i_i64;
  v8 = (__m128i *)v3[2].m128i_i64[0];
  if ( v8 == &v3[3] )
  {
    result[3] = _mm_loadu_si128(v3 + 3);
  }
  else
  {
    result[2].m128i_i64[0] = (__int64)v8;
    result[3].m128i_i64[0] = v3[3].m128i_i64[0];
  }
  v9 = _mm_loadu_si128(v3 + 4);
  result[2].m128i_i64[1] = v3[2].m128i_i64[1];
  v3[2].m128i_i64[0] = (__int64)v3[3].m128i_i64;
  v3[2].m128i_i64[1] = 0;
  v3[3].m128i_i8[0] = 0;
  result[4] = v9;
  ++*(_DWORD *)(a1 + 88);
  return result;
}
