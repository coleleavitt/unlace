__m128i *__fastcall sub_1400880(__int64 a1, __m128i *a2)
{
  __m128i *v2; // rbx
  __int64 v3; // rax
  __m128i *v4; // rcx
  unsigned __int64 v5; // rdx
  __m128i *result; // rax
  __m128i *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r12
  signed __int64 v10; // rbx
  __m128i *v11; // r13
  int v12; // r14d
  __int64 v13; // rax
  __m128i *v14; // r13
  int v15; // r14d
  __int64 v16; // rax
  _DWORD v17[12]; // [rsp+8h] [rbp-30h] BYREF

  v2 = a2;
  v3 = *(unsigned int *)(a1 + 8);
  v4 = *(__m128i **)a1;
  v5 = v3 + 1;
  result = (__m128i *)(*(_QWORD *)a1 + 72 * v3);
  if ( v5 > *(unsigned int *)(a1 + 12) )
  {
    v9 = a1 + 16;
    if ( v4 > a2 || result <= a2 )
    {
      v14 = (__m128i *)sub_2237400(a1, a1 + 16, v5, 72, v17);
      sub_1400730(a1, v14);
      v15 = v17[0];
      if ( v9 != *(_QWORD *)a1 )
        free(*(void **)a1);
      v16 = *(unsigned int *)(a1 + 8);
      *(_QWORD *)a1 = v14;
      *(_DWORD *)(a1 + 12) = v15;
      result = (__m128i *)((char *)v14 + 72 * v16);
    }
    else
    {
      v10 = (char *)a2 - (char *)v4;
      v11 = (__m128i *)sub_2237400(a1, a1 + 16, v5, 72, v17);
      sub_1400730(a1, v11);
      v12 = v17[0];
      if ( v9 != *(_QWORD *)a1 )
        free(*(void **)a1);
      v13 = *(unsigned int *)(a1 + 8);
      *(_QWORD *)a1 = v11;
      v2 = (__m128i *)((char *)v11 + v10);
      *(_DWORD *)(a1 + 12) = v12;
      result = (__m128i *)((char *)v11 + 72 * v13);
    }
  }
  result->m128i_i64[0] = (__int64)result[1].m128i_i64;
  if ( (__m128i *)v2->m128i_i64[0] == &v2[1] )
  {
    result[1] = _mm_loadu_si128(v2 + 1);
  }
  else
  {
    result->m128i_i64[0] = v2->m128i_i64[0];
    result[1].m128i_i64[0] = v2[1].m128i_i64[0];
  }
  result->m128i_i64[1] = v2->m128i_i64[1];
  v2->m128i_i64[0] = (__int64)v2[1].m128i_i64;
  v2->m128i_i64[1] = 0;
  v2[1].m128i_i8[0] = 0;
  result[2].m128i_i64[0] = (__int64)result[3].m128i_i64;
  v7 = (__m128i *)v2[2].m128i_i64[0];
  if ( v7 == &v2[3] )
  {
    result[3] = _mm_loadu_si128(v2 + 3);
  }
  else
  {
    result[2].m128i_i64[0] = (__int64)v7;
    result[3].m128i_i64[0] = v2[3].m128i_i64[0];
  }
  result[2].m128i_i64[1] = v2[2].m128i_i64[1];
  v2[2].m128i_i64[0] = (__int64)v2[3].m128i_i64;
  v8 = v2[4].m128i_i64[0];
  v2[2].m128i_i64[1] = 0;
  v2[3].m128i_i8[0] = 0;
  result[4].m128i_i64[0] = v8;
  ++*(_DWORD *)(a1 + 8);
  return result;
}
