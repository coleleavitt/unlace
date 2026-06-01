__m128i *__fastcall sub_4C2C80(__int64 a1, __int64 a2, __int32 a3)
{
  __int64 v6; // rcx
  __m128i *v7; // rbx
  unsigned int v8; // r10d
  __int64 v9; // rcx
  __m128i *v10; // rbp
  int v11; // esi
  __int64 v12; // r10
  __m128i *v13; // rdi
  __m128i *result; // rax
  __m128i *v15; // rcx
  __int64 v16; // rdx
  __m128i *v17; // rax
  int v18; // r9d
  __m128i *v19; // r8
  const __m128i *v20; // r15
  __m128i *v21; // r11
  __int64 v22; // rax
  __m128i *v23; // rdx
  __m128i *v24; // rax
  __m128i v25; // xmm0
  size_t v26; // [rsp+8h] [rbp-60h]
  unsigned int v27; // [rsp+8h] [rbp-60h]
  int v28; // [rsp+10h] [rbp-58h]
  size_t v29; // [rsp+10h] [rbp-58h]
  int v30; // [rsp+18h] [rbp-50h]

  v6 = *(unsigned int *)(a1 + 184);
  if ( 3 * (int)v6 < (unsigned int)(4 * (*(_DWORD *)(a1 + 188) + *(_DWORD *)(a1 + 192))) )
  {
    v28 = 2 * v6;
    v26 = 16LL * (unsigned int)(2 * v6);
    v17 = (__m128i *)sub_186B270(v26);
    v9 = v26;
    v18 = v28;
    v7 = v17;
    v19 = &v17[v26 / 0x10];
    if ( v28 )
    {
      do
      {
        v17->m128i_i64[0] = 0;
        ++v17;
        v17[-1].m128i_i32[2] = 0;
      }
      while ( v17 != v19 );
    }
    v20 = *(const __m128i **)(a1 + 176);
    v8 = v28 - 1;
    v10 = v19;
    v21 = (__m128i *)&v20[*(unsigned int *)(a1 + 184)];
    if ( v20 != v21 )
    {
      do
      {
        while ( v20->m128i_i64[0] <= 1uLL )
        {
          if ( v21 == ++v20 )
            goto LABEL_30;
        }
        v22 = 16LL * (*(_DWORD *)(v20->m128i_i64[0] + 12) & v8);
        v23 = &v7[(unsigned __int64)v22 / 0x10];
        if ( v26 == v22 )
        {
LABEL_34:
          if ( v7 == v23 )
          {
LABEL_42:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v24 = v7;
          while ( v24->m128i_i64[0] )
          {
            if ( v23 == ++v24 )
              goto LABEL_42;
          }
        }
        else
        {
          v24 = &v7[(unsigned __int64)v22 / 0x10];
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
      v21 = *(__m128i **)(a1 + 176);
    }
    if ( v21 )
    {
      v30 = v28;
      v29 = v26;
      v27 = v18 - 1;
      sub_186B220(v21);
      v18 = v30;
      v9 = v29;
      v8 = v27;
    }
    *(_QWORD *)(a1 + 176) = v7;
    *(_DWORD *)(a1 + 184) = v18;
    *(_DWORD *)(a1 + 192) = 0;
  }
  else
  {
    v7 = *(__m128i **)(a1 + 176);
    v8 = v6 - 1;
    v9 = 16 * v6;
    v10 = (__m128i *)((char *)v7 + v9);
  }
  v11 = *(_DWORD *)(a2 + 12);
  v12 = 16LL * (v11 & v8);
  v13 = &v7[(unsigned __int64)v12 / 0x10];
  if ( v12 != v9 )
  {
    result = &v7[(unsigned __int64)v12 / 0x10];
    v15 = nullptr;
    while ( 1 )
    {
      v16 = result->m128i_i64[0];
      if ( result->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v16 + 12) == v11 && a2 == v16 )
        {
          result->m128i_i64[0] = a2;
          result->m128i_i32[2] = a3;
          return result;
        }
      }
      else
      {
        if ( !v16 )
        {
          if ( v15 )
            goto LABEL_40;
          v15 = result;
          goto LABEL_41;
        }
        v15 = result;
      }
      if ( ++result == v10 )
        goto LABEL_14;
    }
  }
  v15 = nullptr;
  while ( 1 )
  {
LABEL_14:
    if ( v13 == v7 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    result = (__m128i *)v7->m128i_i64[0];
    if ( v7->m128i_i64[0] <= 1uLL )
      break;
    if ( result->m128i_i32[3] == v11 && (__m128i *)a2 == result )
    {
      v7->m128i_i64[0] = a2;
      v7->m128i_i32[2] = a3;
      return result;
    }
LABEL_13:
    ++v7;
  }
  if ( result )
  {
    v15 = v7;
    goto LABEL_13;
  }
  if ( v15 )
LABEL_40:
    --*(_DWORD *)(a1 + 192);
  else
    v15 = v7;
LABEL_41:
  v15->m128i_i64[0] = a2;
  v15->m128i_i32[2] = a3;
  ++*(_DWORD *)(a1 + 188);
  return result;
}

