__m128i *__fastcall sub_DCB4E0(__int64 a1, __int64 a2)
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
  __m128i *result; // rax
  __m128i *v15; // rcx
  int v16; // edx
  int v17; // edx
  __int32 v18; // eax
  const __m128i *v19; // rax
  int v20; // r8d
  const __m128i *v21; // rdx
  const __m128i *v22; // r12
  __m128i *v23; // r10
  __int64 v24; // rax
  __m128i *v25; // rdx
  __m128i *v26; // rax
  __m128i v27; // xmm0
  __int64 v28; // [rsp+0h] [rbp-58h]
  size_t v29; // [rsp+8h] [rbp-50h]
  int v30; // [rsp+8h] [rbp-50h]

  v4 = *(_DWORD *)(a1 + 8);
  if ( 3 * v4 < 4 * (*(_DWORD *)(a1 + 12) + *(_DWORD *)(a1 + 16)) )
  {
    v29 = 48LL * v4;
    v19 = (const __m128i *)sub_186B270(v29);
    v20 = 2 * v4;
    v9 = v29;
    v6 = v19;
    v21 = &v19[v29 / 0x10];
    if ( 2 * v4 )
    {
      do
      {
        v19->m128i_i64[0] = 0;
        v19 = (const __m128i *)((char *)v19 + 24);
        v19[-1].m128i_i64[0] = 0;
      }
      while ( v19 != v21 );
    }
    v22 = *(const __m128i **)a1;
    v8 = v20 - 1;
    m128i_i64 = (__int64)v6[v29 / 0x10].m128i_i64;
    v23 = (__m128i *)(*(_QWORD *)a1 + 24LL * *(unsigned int *)(a1 + 8));
    if ( *(__m128i **)a1 != v23 )
    {
      do
      {
        while ( v22->m128i_i32[1] != 2 )
        {
          v22 = (const __m128i *)((char *)v22 + 24);
          if ( v23 == v22 )
            goto LABEL_37;
        }
        v24 = 24LL * (v22->m128i_i32[0] & (unsigned int)v8);
        v25 = (__m128i *)((char *)v6 + v24);
        if ( v24 == v29 )
        {
LABEL_43:
          if ( v25 == v6 )
          {
LABEL_50:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v26 = (__m128i *)v6;
          while ( v26->m128i_i32[1] )
          {
            v26 = (__m128i *)((char *)v26 + 24);
            if ( v25 == v26 )
              goto LABEL_50;
          }
        }
        else
        {
          v26 = (__m128i *)((char *)v6 + v24);
          while ( v26->m128i_i32[1] )
          {
            v26 = (__m128i *)((char *)v26 + 24);
            if ( (__m128i *)m128i_i64 == v26 )
              goto LABEL_43;
          }
        }
        v27 = _mm_loadu_si128(v22);
        v22 = (const __m128i *)((char *)v22 + 24);
        *v26 = v27;
        v26[1].m128i_i64[0] = v22[-1].m128i_i64[1];
      }
      while ( v23 != v22 );
LABEL_37:
      v23 = *(__m128i **)a1;
    }
    if ( v23 )
    {
      v30 = v20;
      v28 = v9;
      sub_186B220(v23);
      v20 = v30;
      v9 = v28;
    }
    *(_DWORD *)(a1 + 8) = v20;
    v7 = *(_QWORD *)a2;
    *(_QWORD *)a1 = v6;
    *(_DWORD *)(a1 + 16) = 0;
    if ( v7 )
      goto LABEL_3;
  }
  else
  {
    v5 = v4;
    v6 = *(const __m128i **)a1;
    v7 = *(_QWORD *)a2;
    v8 = v4 - 1;
    v9 = 24 * v5;
    m128i_i64 = *(_QWORD *)a1 + 24 * v5;
    if ( *(_QWORD *)a2 )
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
    result = (__m128i *)((char *)v6 + 24 * v12);
    v15 = nullptr;
    while ( 1 )
    {
      v16 = result->m128i_i32[1];
      if ( v16 == 2 )
      {
        if ( result->m128i_i32[0] == (_DWORD)v11 && v7 == result->m128i_i64[1] )
        {
          result->m128i_i64[1] = *(_QWORD *)a2;
          v17 = *(_DWORD *)(a2 + 8);
          result->m128i_i32[1] = 2;
          result[1].m128i_i32[0] = v17;
          return result;
        }
      }
      else
      {
        if ( !v16 )
        {
          if ( v15 )
            goto LABEL_24;
          v15 = result;
          goto LABEL_25;
        }
        v15 = result;
      }
      result = (__m128i *)((char *)result + 24);
      if ( result == (__m128i *)m128i_i64 )
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
    v18 = v6->m128i_i32[1];
    if ( v18 != 2 )
      break;
    if ( (_DWORD)v11 == v6->m128i_i32[0] && v7 == v6->m128i_i64[1] )
    {
      v6->m128i_i64[1] = *(_QWORD *)a2;
      result = (__m128i *)*(unsigned int *)(a2 + 8);
      v6->m128i_i32[1] = 2;
      v6[1].m128i_i32[0] = (int)result;
      return result;
    }
LABEL_16:
    v6 = (const __m128i *)((char *)v6 + 24);
  }
  if ( v18 )
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
  v15->m128i_i64[1] = *(_QWORD *)a2;
  result = (__m128i *)*(unsigned int *)(a2 + 8);
  v15->m128i_i32[1] = 2;
  v15[1].m128i_i32[0] = (int)result;
  v15->m128i_i32[0] = v11;
  ++*(_DWORD *)(a1 + 12);
  return result;
}

