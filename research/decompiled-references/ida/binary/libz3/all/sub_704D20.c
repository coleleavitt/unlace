char *__fastcall sub_704D20(__int64 a1, const __m128i *a2)
{
  __int64 v4; // rbp
  const __m128i *v5; // rbx
  unsigned int v6; // r9d
  __int64 v7; // r15
  __int64 v8; // rbp
  __int32 v9; // esi
  __int64 v10; // r9
  const __m128i *v11; // rdi
  char *result; // rax
  __m128i *v13; // rcx
  int v14; // edx
  __m128i v15; // xmm0
  __m128i v16; // xmm0
  __m128i v17; // xmm0
  const __m128i *v18; // rax
  int v19; // ecx
  const __m128i *v20; // rdx
  const __m128i *v21; // r14
  __m128i *v22; // r10
  __int64 v23; // rax
  __m128i *v24; // rdx
  __m128i *v25; // rax
  __m128i v26; // xmm0
  size_t v27; // [rsp+8h] [rbp-50h]
  unsigned int v28; // [rsp+8h] [rbp-50h]
  int v29; // [rsp+10h] [rbp-48h]

  v4 = *(unsigned int *)(a1 + 8);
  if ( 3 * (int)v4 < (unsigned int)(4 * (*(_DWORD *)(a1 + 12) + *(_DWORD *)(a1 + 16))) )
  {
    v27 = 24LL * (unsigned int)(2 * v4);
    v7 = v27;
    v18 = (const __m128i *)sub_186B270(v27);
    v19 = 2 * v4;
    v5 = v18;
    if ( 2 * (_DWORD)v4 )
    {
      v20 = &v18[3 * (v4 & 0x7FFFFFFF)];
      do
      {
        v18->m128i_i64[0] = 0;
        v18 += 3;
        v18[-2].m128i_i64[1] = 0;
      }
      while ( v20 != v18 );
    }
    v21 = *(const __m128i **)a1;
    v6 = v19 - 1;
    v8 = (__int64)&v5->m128i_i64[v27 / 8];
    v22 = (__m128i *)(*(_QWORD *)a1 + 24LL * *(unsigned int *)(a1 + 8));
    if ( *(__m128i **)a1 != v22 )
    {
      do
      {
        while ( v21->m128i_i32[1] != 2 )
        {
          v21 = (const __m128i *)((char *)v21 + 24);
          if ( v22 == v21 )
            goto LABEL_35;
        }
        v23 = 24LL * (v21->m128i_i32[0] & v6);
        v24 = (__m128i *)((char *)v5 + v23);
        if ( v27 == v23 )
        {
LABEL_40:
          if ( v5 == v24 )
          {
LABEL_47:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v25 = (__m128i *)v5;
          while ( v25->m128i_i32[1] )
          {
            v25 = (__m128i *)((char *)v25 + 24);
            if ( v24 == v25 )
              goto LABEL_47;
          }
        }
        else
        {
          v25 = (__m128i *)((char *)v5 + v23);
          while ( v25->m128i_i32[1] )
          {
            v25 = (__m128i *)((char *)v25 + 24);
            if ( (__m128i *)v8 == v25 )
              goto LABEL_40;
          }
        }
        v26 = _mm_loadu_si128(v21);
        v21 = (const __m128i *)((char *)v21 + 24);
        *v25 = v26;
        v25[1].m128i_i64[0] = v21[-1].m128i_i64[1];
      }
      while ( v22 != v21 );
LABEL_35:
      v22 = *(__m128i **)a1;
    }
    if ( v22 )
    {
      v29 = v19;
      v28 = v19 - 1;
      sub_186B220(v22);
      v19 = v29;
      v6 = v28;
    }
    *(_QWORD *)a1 = v5;
    *(_DWORD *)(a1 + 8) = v19;
    *(_DWORD *)(a1 + 16) = 0;
  }
  else
  {
    v5 = *(const __m128i **)a1;
    v6 = v4 - 1;
    v7 = 24 * v4;
    v8 = *(_QWORD *)a1 + 24 * v4;
  }
  v9 = a2->m128i_i32[0];
  v10 = a2->m128i_i32[0] & v6;
  v11 = (const __m128i *)((char *)v5 + 24 * v10);
  if ( 24 * v10 != v7 )
  {
    result = &v5->m128i_i8[24 * v10];
    v13 = nullptr;
    while ( 1 )
    {
      v14 = *((_DWORD *)result + 1);
      if ( v14 == 2 )
      {
        if ( v9 == *(_DWORD *)result && v9 == *((_DWORD *)result + 2) )
        {
          v15 = _mm_loadu_si128(a2);
          *((_DWORD *)result + 1) = 2;
          *(__m128i *)(result + 8) = v15;
          return result;
        }
      }
      else
      {
        if ( !v14 )
        {
          if ( v13 )
            goto LABEL_21;
          v13 = (__m128i *)result;
          goto LABEL_22;
        }
        v13 = (__m128i *)result;
      }
      result += 24;
      if ( result == (char *)v8 )
        goto LABEL_15;
    }
  }
  v13 = nullptr;
  while ( 1 )
  {
LABEL_15:
    if ( v11 == v5 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    result = (char *)v5->m128i_u32[1];
    if ( (_DWORD)result != 2 )
      break;
    if ( v9 == v5->m128i_i32[0] && v9 == v5->m128i_i32[2] )
    {
      v16 = _mm_loadu_si128(a2);
      v5->m128i_i32[1] = 2;
      *(__m128i *)((char *)v5 + 8) = v16;
      return result;
    }
LABEL_14:
    v5 = (const __m128i *)((char *)v5 + 24);
  }
  if ( (_DWORD)result )
  {
    v13 = (__m128i *)v5;
    goto LABEL_14;
  }
  if ( v13 )
LABEL_21:
    --*(_DWORD *)(a1 + 16);
  else
    v13 = (__m128i *)v5;
LABEL_22:
  v17 = _mm_loadu_si128(a2);
  v13->m128i_i32[1] = 2;
  v13->m128i_i32[0] = v9;
  *(__m128i *)((char *)v13 + 8) = v17;
  ++*(_DWORD *)(a1 + 12);
  return result;
}

