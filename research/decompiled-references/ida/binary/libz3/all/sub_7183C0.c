__m128i *__fastcall sub_7183C0(__int64 a1, const __m128i *a2)
{
  __int64 v4; // r15
  __m128i *v5; // rbx
  unsigned int v6; // r9d
  size_t v7; // r15
  size_t v8; // rbp
  __int64 v9; // r8
  int v10; // ecx
  __int64 v11; // r9
  __m128i *v12; // rdi
  __m128i *result; // rax
  __m128i *v14; // rsi
  __int64 v15; // rdx
  __m128i *v16; // rax
  int v17; // r8d
  __m128i *v18; // rcx
  const __m128i *v19; // r14
  __m128i *v20; // r10
  __int64 v21; // rax
  __m128i *v22; // rdx
  __m128i *v23; // rax
  __m128i v24; // xmm0
  int v25; // [rsp+8h] [rbp-50h]

  v4 = *(unsigned int *)(a1 + 8);
  if ( 3 * (int)v4 < (unsigned int)(4 * (*(_DWORD *)(a1 + 12) + *(_DWORD *)(a1 + 16))) )
  {
    v25 = 2 * v4;
    v7 = 16LL * (unsigned int)(2 * v4);
    v16 = (__m128i *)sub_186B270(v7);
    v17 = v25;
    v5 = v16;
    v18 = &v16[v7 / 0x10];
    if ( v25 )
    {
      do
      {
        v16->m128i_i64[0] = 0;
        ++v16;
        v16[-1].m128i_i64[1] = -1;
      }
      while ( v16 != v18 );
    }
    v19 = *(const __m128i **)a1;
    v6 = v25 - 1;
    v8 = (size_t)v18;
    v20 = (__m128i *)(*(_QWORD *)a1 + 16LL * *(unsigned int *)(a1 + 8));
    if ( *(__m128i **)a1 != v20 )
    {
      do
      {
        while ( v19->m128i_i64[0] <= 1uLL )
        {
          if ( v20 == ++v19 )
            goto LABEL_30;
        }
        v21 = 16LL * (*(_DWORD *)(v19->m128i_i64[0] + 12) & v6);
        v22 = &v5[(unsigned __int64)v21 / 0x10];
        if ( v21 == v7 )
        {
LABEL_34:
          if ( v22 == v5 )
          {
LABEL_42:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v23 = v5;
          while ( v23->m128i_i64[0] )
          {
            if ( v22 == ++v23 )
              goto LABEL_42;
          }
        }
        else
        {
          v23 = &v5[(unsigned __int64)v21 / 0x10];
          while ( v23->m128i_i64[0] )
          {
            if ( v18 == ++v23 )
              goto LABEL_34;
          }
        }
        v24 = _mm_loadu_si128(v19++);
        *v23 = v24;
      }
      while ( v20 != v19 );
LABEL_30:
      v20 = *(__m128i **)a1;
    }
    if ( v20 )
    {
      sub_186B220(v20);
      v17 = v25;
      v6 = v25 - 1;
    }
    *(_QWORD *)a1 = v5;
    *(_DWORD *)(a1 + 8) = v17;
    *(_DWORD *)(a1 + 16) = 0;
  }
  else
  {
    v5 = *(__m128i **)a1;
    v6 = v4 - 1;
    v7 = 16 * v4;
    v8 = *(_QWORD *)a1 + v7;
  }
  v9 = a2->m128i_i64[0];
  v10 = *(_DWORD *)(a2->m128i_i64[0] + 12);
  v11 = 16LL * (v10 & v6);
  v12 = &v5[(unsigned __int64)v11 / 0x10];
  if ( v11 != v7 )
  {
    result = &v5[(unsigned __int64)v11 / 0x10];
    v14 = nullptr;
    while ( 1 )
    {
      v15 = result->m128i_i64[0];
      if ( result->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v15 + 12) == v10 && v9 == v15 )
        {
          *result = _mm_loadu_si128(a2);
          return result;
        }
      }
      else
      {
        if ( !v15 )
        {
          if ( v14 )
            goto LABEL_40;
          v14 = result;
          goto LABEL_41;
        }
        v14 = result;
      }
      if ( ++result == (__m128i *)v8 )
        goto LABEL_14;
    }
  }
  v14 = nullptr;
  while ( 1 )
  {
LABEL_14:
    if ( v12 == v5 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    result = (__m128i *)v5->m128i_i64[0];
    if ( v5->m128i_i64[0] <= 1uLL )
      break;
    if ( result->m128i_i32[3] == v10 && result == (__m128i *)v9 )
    {
      *v5 = _mm_loadu_si128(a2);
      return result;
    }
LABEL_13:
    ++v5;
  }
  if ( result )
  {
    v14 = v5;
    goto LABEL_13;
  }
  if ( v14 )
LABEL_40:
    --*(_DWORD *)(a1 + 16);
  else
    v14 = v5;
LABEL_41:
  *v14 = _mm_loadu_si128(a2);
  ++*(_DWORD *)(a1 + 12);
  return result;
}

