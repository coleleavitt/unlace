__m128i *__fastcall sub_92B140(_QWORD *a1)
{
  __m128i *result; // rax
  __m128i *v2; // r12
  unsigned int v3; // ebx
  unsigned int v5; // eax
  unsigned int v6; // r14d
  size_t v7; // rdi
  unsigned int *v8; // rax
  __int64 v9; // rdi
  unsigned int *v10; // rbp
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  __m128i *v15; // rdx
  _QWORD *v16; // r9
  const __m128i *v17; // r10
  __m128i *v18; // r8
  int v19; // edi
  __int64 v20; // rdx
  int i; // eax
  __m128i v22; // xmm0
  int v23; // ecx
  _DWORD *v24; // rcx
  signed int v25; // esi
  __m128i v26; // xmm2
  unsigned int v27; // ebx
  _QWORD *v28; // rax
  char **exception; // rbx
  __int64 v30[9]; // [rsp+0h] [rbp-48h] BYREF

  result = (__m128i *)a1[4];
  v2 = (__m128i *)a1[36];
  if ( !result )
  {
    if ( !v2 )
      return result;
    goto LABEL_44;
  }
  v3 = result[-1].m128i_u32[3];
  if ( v2 )
  {
    v2[-1].m128i_i32[3] = 0;
    if ( v3 )
      goto LABEL_4;
LABEL_44:
    v2[-1].m128i_i32[3] = 0;
    return result;
  }
  if ( !v3 )
    return result;
  v28 = (_QWORD *)sub_186B270(0x18u);
  v2 = (__m128i *)(v28 + 1);
  *v28 = 2;
  a1[36] = v28 + 1;
LABEL_4:
  while ( 1 )
  {
    v5 = v2[-1].m128i_u32[2];
    if ( v5 >= v3 )
      break;
    while ( 1 )
    {
      v6 = (3 * v5 + 1) >> 1;
      v7 = 8 * v6 + 8;
      if ( 8 * v5 + 8 >= (unsigned int)v7 || v5 >= v6 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_91CD50(v30, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v30);
        sub_233E40((__int64)v30);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v8 = (unsigned int *)sub_186B270(v7);
      v9 = a1[36];
      v10 = v8;
      v2 = (__m128i *)(v8 + 2);
      if ( !v9 )
        break;
      v11 = *(unsigned int *)(v9 - 4);
      v12 = 0;
      v10[1] = v11;
      v13 = 8 * v11;
      if ( v13 )
      {
        do
        {
          *(_QWORD *)&v10[v12 / 4 + 2] = *(_QWORD *)(v9 + v12);
          v12 += 8LL;
        }
        while ( v13 != v12 );
      }
      sub_186B220((void *)(v9 - 8));
      *v10 = v6;
      v5 = v2[-1].m128i_u32[2];
      a1[36] = v2;
      if ( v5 >= v3 )
        goto LABEL_11;
    }
    v8[1] = 0;
    a1[36] = v2;
    *v8 = v6;
  }
LABEL_11:
  v2[-1].m128i_i32[3] = v3;
  result = v2;
  if ( v3 != 1 )
  {
    v14 = (unsigned __int64)v3 >> 1;
    v15 = &v2[v14];
    if ( ((v14 * 16) & 0x10) == 0 || (result = v2 + 1, *v2 = 0, &v2[1] != v15) )
    {
      do
      {
        *result = 0;
        result += 2;
        result[-1] = 0;
      }
      while ( result != v15 );
    }
    if ( (v3 & 1) == 0 )
      goto LABEL_18;
    result = (__m128i *)((char *)v2 + 8 * (v3 & 0xFFFFFFFE));
  }
  result->m128i_i64[0] = 0;
LABEL_18:
  if ( (int)v3 <= 0 )
    return result;
  v16 = (_QWORD *)a1[25];
  v17 = v2;
  v18 = v2;
  v19 = 0;
  while ( 2 )
  {
    v20 = 0;
    for ( i = 0; ; i = v23 )
    {
      if ( i != v19 )
      {
        v24 = (_DWORD *)(v20 + *v16);
        if ( *v24 != -1 )
        {
          v25 = v24[1];
          if ( v25 < v18->m128i_i32[0] )
          {
            v22 = _mm_cvtsi32_si128(v24[2]);
LABEL_22:
            v18->m128i_i64[0] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v25), v22).m128i_u64[0];
            goto LABEL_23;
          }
          if ( v25 == v18->m128i_i32[0] )
            break;
        }
      }
LABEL_23:
      v23 = i + 1;
      v20 += 24;
      if ( v3 == i + 1 )
        goto LABEL_31;
LABEL_24:
      ;
    }
    v22 = _mm_cvtsi32_si128(v24[2]);
    if ( _mm_cvtsi128_si32(v22) < v18->m128i_i32[1] )
      goto LABEL_22;
    v23 = i + 1;
    v20 += 24;
    if ( v3 != i + 1 )
      goto LABEL_24;
LABEL_31:
    ++v16;
    v18 = (__m128i *)((char *)v18 + 8);
    if ( i != v19 )
    {
      ++v19;
      continue;
    }
    break;
  }
  if ( v3 == 1 )
  {
    v27 = 0;
LABEL_39:
    result = (__m128i *)((char *)v2 + 8 * v27);
    result->m128i_i64[0] = _mm_sub_epi32((__m128i)0LL, _mm_loadl_epi64(result)).m128i_u64[0];
  }
  else
  {
    result = &v2[v3 >> 1];
    do
    {
      v26 = _mm_loadu_si128(v17++);
      v17[-1] = _mm_sub_epi32((__m128i)0LL, v26);
    }
    while ( v17 != result );
    if ( (v3 & 1) != 0 )
    {
      v27 = v3 & 0xFFFFFFFE;
      goto LABEL_39;
    }
  }
  return result;
}

