char *__fastcall sub_4CF7E0(__int64 a1, const __m128i *a2)
{
  __int64 v4; // rbp
  const __m128i *v5; // rbx
  unsigned int v6; // r9d
  __int64 v7; // r15
  __int64 v8; // rbp
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // edi
  const __m128i *v12; // rsi
  char *result; // rax
  __m128i *v14; // rcx
  int v15; // edx
  __m128i v16; // xmm0
  __m128i v17; // xmm0
  __m128i v18; // xmm0
  const __m128i *v19; // rax
  int v20; // ecx
  const __m128i *v21; // rdx
  const __m128i *v22; // r12
  __m128i *v23; // r10
  __int64 v24; // rax
  __m128i *v25; // rdx
  __m128i *v26; // rax
  __m128i v27; // xmm0
  size_t v28; // [rsp+8h] [rbp-50h]
  unsigned int v29; // [rsp+8h] [rbp-50h]
  int v30; // [rsp+10h] [rbp-48h]

  v4 = *(unsigned int *)(a1 + 8);
  if ( 3 * (int)v4 < (unsigned int)(4 * (*(_DWORD *)(a1 + 12) + *(_DWORD *)(a1 + 16))) )
  {
    v28 = 24LL * (unsigned int)(2 * v4);
    v7 = v28;
    v19 = (const __m128i *)sub_186B270(v28);
    v20 = 2 * v4;
    v5 = v19;
    if ( 2 * (_DWORD)v4 )
    {
      v21 = &v19[3 * (v4 & 0x7FFFFFFF)];
      do
      {
        v19->m128i_i64[0] = 0;
        v19 += 3;
        v19[-2].m128i_i64[1] = 0;
      }
      while ( v21 != v19 );
    }
    v22 = *(const __m128i **)a1;
    v6 = v20 - 1;
    v8 = (__int64)&v5->m128i_i64[v28 / 8];
    v23 = (__m128i *)(*(_QWORD *)a1 + 24LL * *(unsigned int *)(a1 + 8));
    if ( *(__m128i **)a1 != v23 )
    {
      do
      {
        while ( v22->m128i_i32[1] != 2 )
        {
          v22 = (const __m128i *)((char *)v22 + 24);
          if ( v23 == v22 )
            goto LABEL_35;
        }
        v24 = 24LL * (v22->m128i_i32[0] & v6);
        v25 = (__m128i *)((char *)v5 + v24);
        if ( v28 == v24 )
        {
LABEL_40:
          if ( v5 == v25 )
          {
LABEL_47:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v26 = (__m128i *)v5;
          while ( v26->m128i_i32[1] )
          {
            v26 = (__m128i *)((char *)v26 + 24);
            if ( v25 == v26 )
              goto LABEL_47;
          }
        }
        else
        {
          v26 = (__m128i *)((char *)v5 + v24);
          while ( v26->m128i_i32[1] )
          {
            v26 = (__m128i *)((char *)v26 + 24);
            if ( (__m128i *)v8 == v26 )
              goto LABEL_40;
          }
        }
        v27 = _mm_loadu_si128(v22);
        v22 = (const __m128i *)((char *)v22 + 24);
        *v26 = v27;
        v26[1].m128i_i64[0] = v22[-1].m128i_i64[1];
      }
      while ( v23 != v22 );
LABEL_35:
      v23 = *(__m128i **)a1;
    }
    if ( v23 )
    {
      v30 = v20;
      v29 = v20 - 1;
      sub_186B220(v23);
      v20 = v30;
      v6 = v29;
    }
    *(_QWORD *)a1 = v5;
    *(_DWORD *)(a1 + 8) = v20;
    *(_DWORD *)(a1 + 16) = 0;
  }
  else
  {
    v5 = *(const __m128i **)a1;
    v6 = v4 - 1;
    v7 = 24 * v4;
    v8 = *(_QWORD *)a1 + 24 * v4;
  }
  v9 = a2->m128i_i64[0];
  v10 = (unsigned int)a2->m128i_i64[0] & v6;
  v11 = a2->m128i_i64[0];
  v12 = (const __m128i *)((char *)v5 + 24 * v10);
  if ( 24 * v10 != v7 )
  {
    result = &v5->m128i_i8[24 * v10];
    v14 = nullptr;
    while ( 1 )
    {
      v15 = *((_DWORD *)result + 1);
      if ( v15 == 2 )
      {
        if ( v11 == *(_DWORD *)result && v9 == *((_QWORD *)result + 1) )
        {
          v16 = _mm_loadu_si128(a2);
          *((_DWORD *)result + 1) = 2;
          *(__m128i *)(result + 8) = v16;
          return result;
        }
      }
      else
      {
        if ( !v15 )
        {
          if ( v14 )
            goto LABEL_21;
          v14 = (__m128i *)result;
          goto LABEL_22;
        }
        v14 = (__m128i *)result;
      }
      result += 24;
      if ( result == (char *)v8 )
        goto LABEL_15;
    }
  }
  v14 = nullptr;
  while ( 1 )
  {
LABEL_15:
    if ( v12 == v5 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    result = (char *)v5->m128i_u32[1];
    if ( (_DWORD)result != 2 )
      break;
    if ( v11 == v5->m128i_i32[0] && v9 == v5->m128i_i64[1] )
    {
      v17 = _mm_loadu_si128(a2);
      v5->m128i_i32[1] = 2;
      *(__m128i *)((char *)v5 + 8) = v17;
      return result;
    }
LABEL_14:
    v5 = (const __m128i *)((char *)v5 + 24);
  }
  if ( (_DWORD)result )
  {
    v14 = (__m128i *)v5;
    goto LABEL_14;
  }
  if ( v14 )
LABEL_21:
    --*(_DWORD *)(a1 + 16);
  else
    v14 = (__m128i *)v5;
LABEL_22:
  v18 = _mm_loadu_si128(a2);
  v14->m128i_i32[1] = 2;
  v14->m128i_i32[0] = v9;
  *(__m128i *)((char *)v14 + 8) = v18;
  ++*(_DWORD *)(a1 + 12);
  return result;
}

