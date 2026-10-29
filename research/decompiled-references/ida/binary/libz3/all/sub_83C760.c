const __m128i *__fastcall sub_83C760(__int64 a1, __int32 *a2)
{
  __int64 v4; // rbp
  const __m128i *v5; // rbx
  unsigned int v6; // r8d
  size_t v7; // r15
  __int64 m128i_i64; // rbp
  __int32 v9; // esi
  __int64 v10; // rax
  const __m128i *v11; // rdi
  const __m128i *result; // rax
  __m128i *v13; // rcx
  __int32 v14; // edx
  __int64 v15; // rdx
  __int32 v16; // eax
  const __m128i *v17; // rax
  int v18; // ecx
  const __m128i *v19; // rdx
  const __m128i *v20; // r14
  __m128i *v21; // r9
  __int64 v22; // rax
  const __m128i *v23; // rdx
  __m128i *v24; // rax
  __m128i v25; // xmm0
  unsigned int v26; // [rsp+0h] [rbp-48h]
  int v27; // [rsp+8h] [rbp-40h]

  v4 = *(unsigned int *)(a1 + 8);
  if ( 3 * (int)v4 < (unsigned int)(4 * (*(_DWORD *)(a1 + 12) + *(_DWORD *)(a1 + 16))) )
  {
    v7 = 16LL * (unsigned int)(2 * v4);
    v17 = (const __m128i *)sub_186B270(v7);
    v18 = 2 * v4;
    v5 = v17;
    if ( 2 * (_DWORD)v4 )
    {
      v19 = &v17[2 * (v4 & 0x7FFFFFFF)];
      do
      {
        v17->m128i_i64[0] = 0;
        v17 += 2;
        v17[-1].m128i_i64[0] = 0;
      }
      while ( v19 != v17 );
    }
    v20 = *(const __m128i **)a1;
    v6 = v18 - 1;
    m128i_i64 = (__int64)v5[v7 / 0x10].m128i_i64;
    v21 = (__m128i *)(*(_QWORD *)a1 + 16LL * *(unsigned int *)(a1 + 8));
    if ( *(__m128i **)a1 != v21 )
    {
      do
      {
        while ( v20->m128i_i32[1] != 2 )
        {
          if ( v21 == ++v20 )
            goto LABEL_35;
        }
        v22 = 16LL * (v20->m128i_i32[0] & v6);
        v23 = &v5[(unsigned __int64)v22 / 0x10];
        if ( v7 == v22 )
        {
LABEL_40:
          if ( v5 == v23 )
          {
LABEL_47:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v24 = (__m128i *)v5;
          while ( v24->m128i_i32[1] )
          {
            if ( v23 == ++v24 )
              goto LABEL_47;
          }
        }
        else
        {
          v24 = (__m128i *)&v5[(unsigned __int64)v22 / 0x10];
          while ( v24->m128i_i32[1] )
          {
            if ( (__m128i *)m128i_i64 == ++v24 )
              goto LABEL_40;
          }
        }
        v25 = _mm_loadu_si128(v20++);
        *v24 = v25;
      }
      while ( v21 != v20 );
LABEL_35:
      v21 = *(__m128i **)a1;
    }
    if ( v21 )
    {
      v27 = v18;
      v26 = v18 - 1;
      sub_186B220(v21);
      v18 = v27;
      v6 = v26;
    }
    *(_QWORD *)a1 = v5;
    *(_DWORD *)(a1 + 8) = v18;
    *(_DWORD *)(a1 + 16) = 0;
  }
  else
  {
    v5 = *(const __m128i **)a1;
    v6 = v4 - 1;
    v7 = 16 * v4;
    m128i_i64 = *(_QWORD *)a1 + 16 * v4;
  }
  v9 = *a2;
  v10 = 16LL * (*a2 & v6);
  v11 = &v5[(unsigned __int64)v10 / 0x10];
  if ( v10 != v7 )
  {
    result = &v5[(unsigned __int64)v10 / 0x10];
    v13 = nullptr;
    while ( 1 )
    {
      v14 = result->m128i_i32[1];
      if ( v14 == 2 )
      {
        if ( v9 == result->m128i_i32[0] && v9 == result->m128i_i32[2] )
        {
          v15 = *(_QWORD *)a2;
          result->m128i_i32[1] = 2;
          result->m128i_i64[1] = v15;
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
      if ( ++result == (const __m128i *)m128i_i64 )
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
    v16 = v5->m128i_i32[1];
    if ( v16 != 2 )
      break;
    if ( v9 == v5->m128i_i32[0] && v9 == v5->m128i_i32[2] )
    {
      result = *(const __m128i **)a2;
      v5->m128i_i32[1] = 2;
      v5->m128i_i64[1] = (__int64)result;
      return result;
    }
LABEL_14:
    ++v5;
  }
  if ( v16 )
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
  result = *(const __m128i **)a2;
  v13->m128i_i32[1] = 2;
  v13->m128i_i32[0] = v9;
  v13->m128i_i64[1] = (__int64)result;
  ++*(_DWORD *)(a1 + 12);
  return result;
}

