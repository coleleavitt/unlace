_OWORD *__fastcall sub_B72D60(__int64 a1, __int64 a2, unsigned int a3, const void *a4, unsigned int a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v10; // r13
  __int64 v11; // rbx
  _OWORD *result; // rax
  _OWORD *v13; // rdx
  _OWORD *v14; // rcx
  unsigned __int64 i; // rdx
  char v16; // r13
  __m128i *v18; // rdi
  __int64 v19; // rax
  __m128i *v20; // rax
  __int64 v21; // rsi
  __m128i v22; // xmm0
  __m128i *v23; // rcx
  __m128i *v24; // rdx
  __int64 n; // [rsp+0h] [rbp-48h]
  unsigned __int64 v26; // [rsp+8h] [rbp-40h]

  v6 = a2 + 8400;
  *(_QWORD *)(a1 + 8) = 2;
  *(_QWORD *)a1 = qword_1C72D90;
  *(_DWORD *)(a1 + 12) = a3;
  if ( a3 )
  {
    v16 = a3;
    v26 = a3;
    n = 4LL * a3;
    v18 = (__m128i *)sub_180C100(a2 + 8400, n);
    v19 = v26 - 1;
    if ( v26 - 1 <= 2 )
    {
      v24 = v18;
    }
    else
    {
      v20 = v18;
      v21 = v26 >> 2;
      v22 = _mm_shuffle_epi32(_mm_cvtsi32_si128(0xFFFFFFFE), 0);
      v23 = &v18[v21];
      if ( ((v21 * 16) & 0x10) == 0 || (v20 = v18 + 1, *v18 = v22, &v18[1] != v23) )
      {
        do
        {
          *v20 = v22;
          v20 += 2;
          v20[-1] = v22;
        }
        while ( v20 != v23 );
      }
      v19 = v26 - 1 - ((unsigned int)v26 & 0xFFFFFFFC);
      v24 = (__m128i *)((char *)v18 + 4 * ((unsigned int)v26 & 0xFFFFFFFC));
      if ( (v16 & 3) == 0 )
        goto LABEL_18;
    }
    v24->m128i_i32[0] = -2;
    if ( v19 )
    {
      v24->m128i_i32[1] = -2;
      if ( v19 != 1 )
        v24->m128i_i32[2] = -2;
    }
LABEL_18:
    *(_QWORD *)(a1 + 16) = v18;
    memcpy(v18, a4, n);
  }
  v10 = a5;
  *(_DWORD *)(a1 + 24) = a5;
  *(_QWORD *)a1 = qword_1C72DE8;
  v11 = 16LL * a5;
  result = (_OWORD *)sub_180C100(v6, v11);
  if ( v10 )
  {
    v13 = result;
    v14 = &result[(unsigned __int64)v11 / 0x10];
    if ( (v11 & 0x10) == 0 || (v13 = result + 1, *result = 0, v14 != result + 1) )
    {
      do
      {
        *v13 = 0;
        v13 += 2;
        *(v13 - 1) = 0;
      }
      while ( v14 != v13 );
    }
  }
  *(_QWORD *)(a1 + 32) = result;
  if ( v11 )
  {
    for ( i = 0; i != v11; i += 16LL )
      result[i / 0x10] = _mm_loadu_si128((const __m128i *)(a6 + i));
  }
  return result;
}

