void *__fastcall sub_B72610(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, const void *a5)
{
  unsigned __int64 v6; // rbp
  size_t v7; // r14
  __m128i *v9; // rax
  unsigned __int64 v10; // rdx
  __m128i *v11; // rdi
  __int64 v12; // rsi
  __m128i v13; // xmm0
  __m128i *v14; // rcx
  __int64 v15; // rbp
  unsigned __int64 v16; // rax
  __m128i *v17; // rdx

  v6 = a4;
  v7 = 4LL * a4;
  *(_QWORD *)(a1 + 16) = a3;
  *(_QWORD *)(a1 + 8) = 2;
  *(_QWORD *)a1 = &off_1C57678;
  *(_DWORD *)(a1 + 24) = a4;
  v9 = (__m128i *)sub_180C100(a2 + 8400, v7);
  v10 = v6 - 1;
  v11 = v9;
  if ( !v6 )
    goto LABEL_11;
  if ( v10 <= 2 )
  {
    v16 = v6 - 1;
    v17 = v11;
    goto LABEL_8;
  }
  v12 = v6 >> 2;
  v13 = _mm_shuffle_epi32(_mm_cvtsi32_si128(0xFFFFFFFE), 0);
  v14 = &v9[v12];
  if ( ((v12 * 16) & 0x10) == 0 || (*v9 = v13, ++v9, v14 != v9) )
  {
    do
    {
      *v9 = v13;
      v9 += 2;
      v9[-1] = v13;
    }
    while ( v14 != v9 );
  }
  if ( (v6 & 3) != 0 )
  {
    v15 = (unsigned int)v6 & 0xFFFFFFFC;
    v16 = v10 - v15;
    v17 = (__m128i *)((char *)v11 + 4 * v15);
LABEL_8:
    v17->m128i_i32[0] = -2;
    if ( v16 )
    {
      v17->m128i_i32[1] = -2;
      if ( v16 != 1 )
        v17->m128i_i32[2] = -2;
    }
  }
LABEL_11:
  *(_QWORD *)(a1 + 32) = v11;
  return memcpy(v11, a5, v7);
}

