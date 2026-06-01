__m128i *__fastcall sub_87E760(__int64 a1)
{
  __int64 v1; // r13
  __int64 v2; // r12
  __int32 v3; // r14d
  __int64 v4; // rcx
  __m128i *v5; // rbx
  unsigned int v6; // r10d
  __int64 v7; // rcx
  __int64 v8; // rbp
  int v9; // esi
  __int64 v10; // r10
  __m128i *v11; // rdi
  __m128i *result; // rax
  __m128i *v13; // rcx
  __int64 v14; // rdx
  __m128i *v15; // rax
  int v16; // r9d
  __m128i *v17; // r8
  const __m128i *v18; // r15
  __m128i *v19; // r11
  __int64 v20; // rax
  __m128i *v21; // rdx
  __m128i *v22; // rax
  __m128i v23; // xmm0
  size_t v24; // [rsp+8h] [rbp-60h]
  unsigned int v25; // [rsp+8h] [rbp-60h]
  int v26; // [rsp+10h] [rbp-58h]
  size_t v27; // [rsp+10h] [rbp-58h]
  int v28; // [rsp+18h] [rbp-50h]

  v1 = *(_QWORD *)(a1 + 8);
  v2 = *(_QWORD *)(a1 + 16);
  v3 = *(_DWORD *)(a1 + 24);
  v4 = *(unsigned int *)(v1 + 8);
  if ( 3 * (int)v4 < (unsigned int)(4 * (*(_DWORD *)(v1 + 12) + *(_DWORD *)(v1 + 16))) )
  {
    v26 = 2 * v4;
    v24 = 16LL * (unsigned int)(2 * v4);
    v15 = (__m128i *)sub_186B270(v24);
    v7 = v24;
    v16 = v26;
    v5 = v15;
    v17 = &v15[v24 / 0x10];
    if ( v26 )
    {
      do
      {
        v15->m128i_i64[0] = 0;
        ++v15;
        v15[-1].m128i_i32[2] = 0;
      }
      while ( v15 != v17 );
    }
    v18 = *(const __m128i **)v1;
    v6 = v26 - 1;
    v8 = (__int64)v17;
    v19 = (__m128i *)(*(_QWORD *)v1 + 16LL * *(unsigned int *)(v1 + 8));
    if ( *(__m128i **)v1 != v19 )
    {
      do
      {
        while ( v18->m128i_i64[0] <= 1uLL )
        {
          if ( v19 == ++v18 )
            goto LABEL_30;
        }
        v20 = 16LL * (*(_DWORD *)(v18->m128i_i64[0] + 12) & v6);
        v21 = &v5[(unsigned __int64)v20 / 0x10];
        if ( v24 == v20 )
        {
LABEL_34:
          if ( v5 == v21 )
          {
LABEL_42:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v22 = v5;
          while ( v22->m128i_i64[0] )
          {
            if ( v21 == ++v22 )
              goto LABEL_42;
          }
        }
        else
        {
          v22 = &v5[(unsigned __int64)v20 / 0x10];
          while ( v22->m128i_i64[0] )
          {
            if ( v17 == ++v22 )
              goto LABEL_34;
          }
        }
        v23 = _mm_loadu_si128(v18++);
        *v22 = v23;
      }
      while ( v19 != v18 );
LABEL_30:
      v19 = *(__m128i **)v1;
    }
    if ( v19 )
    {
      v28 = v26;
      v27 = v24;
      v25 = v16 - 1;
      sub_186B220(v19);
      v16 = v28;
      v7 = v27;
      v6 = v25;
    }
    *(_QWORD *)v1 = v5;
    *(_DWORD *)(v1 + 8) = v16;
    *(_DWORD *)(v1 + 16) = 0;
  }
  else
  {
    v5 = *(__m128i **)v1;
    v6 = v4 - 1;
    v7 = 16 * v4;
    v8 = *(_QWORD *)v1 + v7;
  }
  v9 = *(_DWORD *)(v2 + 12);
  v10 = 16LL * (v9 & v6);
  v11 = &v5[(unsigned __int64)v10 / 0x10];
  if ( v10 != v7 )
  {
    result = &v5[(unsigned __int64)v10 / 0x10];
    v13 = nullptr;
    while ( 1 )
    {
      v14 = result->m128i_i64[0];
      if ( result->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v14 + 12) == v9 && v2 == v14 )
        {
          result->m128i_i64[0] = v2;
          result->m128i_i32[2] = v3;
          return result;
        }
      }
      else
      {
        if ( !v14 )
        {
          if ( v13 )
            goto LABEL_40;
          v13 = result;
          goto LABEL_41;
        }
        v13 = result;
      }
      if ( ++result == (__m128i *)v8 )
        goto LABEL_14;
    }
  }
  v13 = nullptr;
  while ( 1 )
  {
LABEL_14:
    if ( v11 == v5 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    result = (__m128i *)v5->m128i_i64[0];
    if ( v5->m128i_i64[0] <= 1uLL )
      break;
    if ( result->m128i_i32[3] == v9 && (__m128i *)v2 == result )
    {
      v5->m128i_i64[0] = v2;
      v5->m128i_i32[2] = v3;
      return result;
    }
LABEL_13:
    ++v5;
  }
  if ( result )
  {
    v13 = v5;
    goto LABEL_13;
  }
  if ( v13 )
LABEL_40:
    --*(_DWORD *)(v1 + 16);
  else
    v13 = v5;
LABEL_41:
  v13->m128i_i64[0] = v2;
  v13->m128i_i32[2] = v3;
  ++*(_DWORD *)(v1 + 12);
  return result;
}

