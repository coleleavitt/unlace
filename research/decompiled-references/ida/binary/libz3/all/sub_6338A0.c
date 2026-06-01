const __m128i *__fastcall sub_6338A0(__int64 a1, const __m128i **a2)
{
  unsigned int v4; // ecx
  __int64 v5; // r15
  const __m128i *v6; // rbx
  unsigned __int64 v7; // r8
  int v8; // ecx
  size_t v9; // r15
  size_t v10; // rbp
  unsigned __int64 v11; // rsi
  __int64 v12; // rax
  const __m128i *v13; // rdi
  const __m128i *result; // rax
  __m128i *v15; // rcx
  __int32 v16; // edx
  __int64 v17; // rdx
  __int32 v18; // eax
  const __m128i *v19; // rax
  int v20; // r8d
  __m128i *v21; // r9
  const __m128i *v22; // r12
  __m128i *v23; // r10
  __int64 v24; // rax
  const __m128i *v25; // rdx
  __m128i *v26; // rax
  __m128i v27; // xmm0
  int v28; // [rsp+8h] [rbp-50h]

  v4 = *(_DWORD *)(a1 + 8);
  if ( 3 * v4 < 4 * (*(_DWORD *)(a1 + 12) + *(_DWORD *)(a1 + 16)) )
  {
    v28 = 2 * v4;
    v9 = 32LL * v4;
    v19 = (const __m128i *)sub_186B270(v9);
    v20 = v28;
    v6 = v19;
    v21 = (__m128i *)&v19[v9 / 0x10];
    if ( v28 )
    {
      do
      {
        v19->m128i_i64[0] = 0;
        ++v19;
        v19[-1].m128i_i64[1] = 0;
      }
      while ( v19 != v21 );
    }
    v22 = *(const __m128i **)a1;
    v8 = v28 - 1;
    v10 = (size_t)v21;
    v23 = (__m128i *)(*(_QWORD *)a1 + 16LL * *(unsigned int *)(a1 + 8));
    if ( *(__m128i **)a1 != v23 )
    {
      do
      {
        while ( v22->m128i_i32[1] != 2 )
        {
          if ( v23 == ++v22 )
            goto LABEL_37;
        }
        v24 = 16LL * (v22->m128i_i32[0] & (unsigned int)v8);
        v25 = &v6[(unsigned __int64)v24 / 0x10];
        if ( v24 == v9 )
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
            if ( v25 == ++v26 )
              goto LABEL_50;
          }
        }
        else
        {
          v26 = (__m128i *)&v6[(unsigned __int64)v24 / 0x10];
          while ( v26->m128i_i32[1] )
          {
            if ( v21 == ++v26 )
              goto LABEL_43;
          }
        }
        v27 = _mm_loadu_si128(v22++);
        *v26 = v27;
      }
      while ( v23 != v22 );
LABEL_37:
      v23 = *(__m128i **)a1;
    }
    if ( v23 )
    {
      sub_186B220(v23);
      v20 = v28;
      v8 = v28 - 1;
    }
    *(_DWORD *)(a1 + 8) = v20;
    v7 = (unsigned __int64)*a2;
    *(_QWORD *)a1 = v6;
    *(_DWORD *)(a1 + 16) = 0;
    if ( v7 )
      goto LABEL_3;
  }
  else
  {
    v5 = v4;
    v6 = *(const __m128i **)a1;
    v7 = (unsigned __int64)*a2;
    v8 = v4 - 1;
    v9 = 16 * v5;
    v10 = *(_QWORD *)a1 + v9;
    if ( *a2 )
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
  v12 = 16LL * ((unsigned int)v11 & v8);
  v13 = &v6[(unsigned __int64)v12 / 0x10];
  if ( v12 != v9 )
  {
    result = &v6[(unsigned __int64)v12 / 0x10];
    v15 = nullptr;
    while ( 1 )
    {
      v16 = result->m128i_i32[1];
      if ( v16 == 2 )
      {
        if ( result->m128i_i32[0] == (_DWORD)v11 && v7 == result->m128i_i64[1] )
        {
          v17 = (__int64)*a2;
          result->m128i_i32[1] = 2;
          result->m128i_i64[1] = v17;
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
      if ( ++result == (const __m128i *)v10 )
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
      result = *a2;
      v6->m128i_i32[1] = 2;
      v6->m128i_i64[1] = (__int64)result;
      return result;
    }
LABEL_16:
    ++v6;
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
  result = *a2;
  v15->m128i_i32[1] = 2;
  v15->m128i_i32[0] = v11;
  v15->m128i_i64[1] = (__int64)result;
  ++*(_DWORD *)(a1 + 12);
  return result;
}

