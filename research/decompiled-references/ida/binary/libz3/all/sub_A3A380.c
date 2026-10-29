__m128i *__fastcall sub_A3A380(__int64 a1, _DWORD *a2)
{
  __int64 v4; // r15
  __m128i *v5; // rbx
  unsigned int v6; // r9d
  size_t v7; // r15
  size_t v8; // rbp
  __int64 v9; // r8
  int v10; // esi
  __int64 v11; // r9
  __m128i *v12; // rdi
  __m128i *result; // rax
  __m128i *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rax
  __m128i *v17; // rax
  int v18; // r8d
  __m128i *v19; // rcx
  const __m128i *v20; // r14
  __m128i *v21; // r10
  __int64 v22; // rax
  __m128i *v23; // rdx
  __m128i *v24; // rax
  __m128i v25; // xmm0
  int v26; // [rsp+8h] [rbp-50h]

  v4 = *(unsigned int *)(a1 + 8);
  if ( 3 * (int)v4 < (unsigned int)(4 * (*(_DWORD *)(a1 + 12) + *(_DWORD *)(a1 + 16))) )
  {
    v26 = 2 * v4;
    v7 = 16LL * (unsigned int)(2 * v4);
    v17 = (__m128i *)sub_186B270(v7);
    v18 = v26;
    v5 = v17;
    v19 = &v17[v7 / 0x10];
    if ( v26 )
    {
      do
      {
        v17->m128i_i64[0] = 0;
        ++v17;
        v17[-1].m128i_i32[2] = 0;
      }
      while ( v17 != v19 );
    }
    v20 = *(const __m128i **)a1;
    v6 = v26 - 1;
    v8 = (size_t)v19;
    v21 = (__m128i *)(*(_QWORD *)a1 + 16LL * *(unsigned int *)(a1 + 8));
    if ( *(__m128i **)a1 != v21 )
    {
      do
      {
        while ( v20->m128i_i64[0] <= 1uLL )
        {
          if ( v21 == ++v20 )
            goto LABEL_30;
        }
        v22 = 16LL * (*(_DWORD *)(v20->m128i_i64[0] + 12) & v6);
        v23 = &v5[(unsigned __int64)v22 / 0x10];
        if ( v7 == v22 )
        {
LABEL_34:
          if ( v5 == v23 )
          {
LABEL_42:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v24 = v5;
          while ( v24->m128i_i64[0] )
          {
            if ( v23 == ++v24 )
              goto LABEL_42;
          }
        }
        else
        {
          v24 = &v5[(unsigned __int64)v22 / 0x10];
          while ( v24->m128i_i64[0] )
          {
            if ( v19 == ++v24 )
              goto LABEL_34;
          }
        }
        v25 = _mm_loadu_si128(v20++);
        *v24 = v25;
      }
      while ( v21 != v20 );
LABEL_30:
      v21 = *(__m128i **)a1;
    }
    if ( v21 )
    {
      sub_186B220(v21);
      v18 = v26;
      v6 = v26 - 1;
    }
    *(_QWORD *)a1 = v5;
    *(_DWORD *)(a1 + 8) = v18;
    *(_DWORD *)(a1 + 16) = 0;
  }
  else
  {
    v5 = *(__m128i **)a1;
    v6 = v4 - 1;
    v7 = 16 * v4;
    v8 = *(_QWORD *)a1 + v7;
  }
  v9 = *(_QWORD *)a2;
  v10 = *(_DWORD *)(*(_QWORD *)a2 + 12LL);
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
          result->m128i_i64[0] = *(_QWORD *)a2;
          result->m128i_i32[2] = a2[2];
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
    v16 = v5->m128i_i64[0];
    if ( v5->m128i_i64[0] <= 1uLL )
      break;
    if ( *(_DWORD *)(v16 + 12) == v10 && v16 == v9 )
    {
      v5->m128i_i64[0] = *(_QWORD *)a2;
      result = (__m128i *)(unsigned int)a2[2];
      v5->m128i_i32[2] = (int)result;
      return result;
    }
LABEL_13:
    ++v5;
  }
  if ( v16 )
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
  v14->m128i_i64[0] = *(_QWORD *)a2;
  result = (__m128i *)(unsigned int)a2[2];
  v14->m128i_i32[2] = (int)result;
  ++*(_DWORD *)(a1 + 12);
  return result;
}

