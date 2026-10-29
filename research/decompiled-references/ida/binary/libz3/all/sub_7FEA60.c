char *__fastcall sub_7FEA60(__int64 a1, const __m128i *a2)
{
  unsigned int v4; // r15d
  __int64 v5; // rax
  const __m128i *v6; // rbx
  unsigned __int64 v7; // r8
  int v8; // r15d
  __int64 v9; // rcx
  __int64 m128i_i64; // rbp
  unsigned __int64 v11; // rsi
  __int64 v12; // r15
  const __m128i *v13; // rdi
  char *result; // rax
  __m128i *v15; // rcx
  int v16; // edx
  __m128i v17; // xmm0
  __m128i v18; // xmm0
  __m128i v19; // xmm0
  const __m128i *v20; // rax
  int v21; // r8d
  const __m128i *v22; // rdx
  const __m128i *v23; // r12
  __m128i *v24; // r10
  __int64 v25; // rax
  __m128i *v26; // rdx
  __m128i *v27; // rax
  __m128i v28; // xmm0
  __int64 v29; // [rsp+0h] [rbp-58h]
  size_t v30; // [rsp+8h] [rbp-50h]
  int v31; // [rsp+8h] [rbp-50h]

  v4 = *(_DWORD *)(a1 + 8);
  if ( 3 * v4 < 4 * (*(_DWORD *)(a1 + 12) + *(_DWORD *)(a1 + 16)) )
  {
    v30 = 48LL * v4;
    v20 = (const __m128i *)sub_186B270(v30);
    v21 = 2 * v4;
    v9 = v30;
    v6 = v20;
    v22 = &v20[v30 / 0x10];
    if ( 2 * v4 )
    {
      do
      {
        v20->m128i_i64[0] = 0;
        v20 = (const __m128i *)((char *)v20 + 24);
        v20[-1].m128i_i64[0] = 0;
      }
      while ( v20 != v22 );
    }
    v23 = *(const __m128i **)a1;
    v8 = v21 - 1;
    m128i_i64 = (__int64)v6[v30 / 0x10].m128i_i64;
    v24 = (__m128i *)(*(_QWORD *)a1 + 24LL * *(unsigned int *)(a1 + 8));
    if ( *(__m128i **)a1 != v24 )
    {
      do
      {
        while ( v23->m128i_i32[1] != 2 )
        {
          v23 = (const __m128i *)((char *)v23 + 24);
          if ( v24 == v23 )
            goto LABEL_37;
        }
        v25 = 24LL * (v23->m128i_i32[0] & (unsigned int)v8);
        v26 = (__m128i *)((char *)v6 + v25);
        if ( v25 == v30 )
        {
LABEL_43:
          if ( v26 == v6 )
          {
LABEL_50:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v27 = (__m128i *)v6;
          while ( v27->m128i_i32[1] )
          {
            v27 = (__m128i *)((char *)v27 + 24);
            if ( v26 == v27 )
              goto LABEL_50;
          }
        }
        else
        {
          v27 = (__m128i *)((char *)v6 + v25);
          while ( v27->m128i_i32[1] )
          {
            v27 = (__m128i *)((char *)v27 + 24);
            if ( (__m128i *)m128i_i64 == v27 )
              goto LABEL_43;
          }
        }
        v28 = _mm_loadu_si128(v23);
        v23 = (const __m128i *)((char *)v23 + 24);
        *v27 = v28;
        v27[1].m128i_i64[0] = v23[-1].m128i_i64[1];
      }
      while ( v24 != v23 );
LABEL_37:
      v24 = *(__m128i **)a1;
    }
    if ( v24 )
    {
      v31 = v21;
      v29 = v9;
      sub_186B220(v24);
      v21 = v31;
      v9 = v29;
    }
    *(_DWORD *)(a1 + 8) = v21;
    v7 = a2->m128i_i64[0];
    *(_QWORD *)a1 = v6;
    *(_DWORD *)(a1 + 16) = 0;
    if ( v7 )
      goto LABEL_3;
  }
  else
  {
    v5 = v4;
    v6 = *(const __m128i **)a1;
    v7 = a2->m128i_i64[0];
    v8 = v4 - 1;
    v9 = 24 * v5;
    m128i_i64 = *(_QWORD *)a1 + 24 * v5;
    if ( a2->m128i_i64[0] )
    {
LABEL_3:
      if ( (v7 & 7) == 1 )
        v11 = v7 >> 3;
      else
        LODWORD(v11) = *(_DWORD *)(v7 - 8);
      goto LABEL_5;
    }
  }
  LODWORD(v11) = -1640531495;
LABEL_5:
  v12 = (unsigned int)v11 & v8;
  v13 = (const __m128i *)((char *)v6 + 24 * v12);
  if ( 24 * v12 != v9 )
  {
    result = &v6->m128i_i8[24 * v12];
    v15 = nullptr;
    while ( 1 )
    {
      v16 = *((_DWORD *)result + 1);
      if ( v16 == 2 )
      {
        if ( *(_DWORD *)result == (_DWORD)v11 && v7 == *((_QWORD *)result + 1) )
        {
          v17 = _mm_loadu_si128(a2);
          *((_DWORD *)result + 1) = 2;
          *(__m128i *)(result + 8) = v17;
          return result;
        }
      }
      else
      {
        if ( !v16 )
        {
          if ( v15 )
            goto LABEL_24;
          v15 = (__m128i *)result;
          goto LABEL_25;
        }
        v15 = (__m128i *)result;
      }
      result += 24;
      if ( result == (char *)m128i_i64 )
        goto LABEL_17;
    }
  }
  v15 = nullptr;
  while ( 1 )
  {
LABEL_17:
    if ( v13 == v6 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    result = (char *)v6->m128i_u32[1];
    if ( (_DWORD)result != 2 )
      break;
    if ( (_DWORD)v11 == v6->m128i_i32[0] && v7 == v6->m128i_i64[1] )
    {
      v18 = _mm_loadu_si128(a2);
      v6->m128i_i32[1] = 2;
      *(__m128i *)((char *)v6 + 8) = v18;
      return result;
    }
LABEL_16:
    v6 = (const __m128i *)((char *)v6 + 24);
  }
  if ( (_DWORD)result )
  {
    v15 = (__m128i *)v6;
    goto LABEL_16;
  }
  if ( v15 )
LABEL_24:
    --*(_DWORD *)(a1 + 16);
  else
    v15 = (__m128i *)v6;
LABEL_25:
  v19 = _mm_loadu_si128(a2);
  v15->m128i_i32[1] = 2;
  v15->m128i_i32[0] = v11;
  *(__m128i *)((char *)v15 + 8) = v19;
  ++*(_DWORD *)(a1 + 12);
  return result;
}

