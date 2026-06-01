__m128i *__fastcall sub_7118A0(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v5; // r15
  __int64 v6; // r11
  unsigned int v7; // r8d
  __m128i *v8; // rbx
  unsigned int v9; // r9d
  size_t v10; // r15
  __m128i *v11; // rbp
  int v12; // esi
  __int64 v13; // rax
  __m128i *v14; // rdi
  __m128i *result; // rax
  __int64 *v16; // rcx
  __int64 v17; // rdx
  __m128i *v18; // rax
  unsigned int v19; // r8d
  __m128i *v20; // rcx
  const __m128i *v21; // r14
  __m128i *v22; // r10
  __int64 v23; // rax
  __m128i *v24; // rdx
  __m128i *v25; // rax
  __m128i v26; // xmm0
  unsigned int v27; // [rsp+0h] [rbp-58h]
  __int64 v28; // [rsp+0h] [rbp-58h]
  __int64 v29; // [rsp+8h] [rbp-50h]
  unsigned int v30; // [rsp+8h] [rbp-50h]
  unsigned int v31; // [rsp+10h] [rbp-48h]

  v5 = *(unsigned int *)(a1 + 200);
  v6 = *a3;
  v7 = 2 * v5;
  if ( 3 * (int)v5 < (unsigned int)(4 * (*(_DWORD *)(a1 + 204) + *(_DWORD *)(a1 + 208))) )
  {
    v29 = *a3;
    v10 = 16LL * v7;
    v27 = v7;
    v18 = (__m128i *)sub_186B270(v10);
    v19 = v27;
    v6 = v29;
    v8 = v18;
    v20 = &v18[v10 / 0x10];
    if ( v27 )
    {
      do
      {
        v18->m128i_i64[0] = 0;
        ++v18;
        v18[-1].m128i_i64[1] = -1;
      }
      while ( v18 != v20 );
    }
    v21 = *(const __m128i **)(a1 + 192);
    v9 = v27 - 1;
    v11 = v20;
    v22 = (__m128i *)&v21[*(unsigned int *)(a1 + 200)];
    if ( v21 != v22 )
    {
      do
      {
        while ( v21->m128i_i64[0] <= 1uLL )
        {
          if ( v22 == ++v21 )
            goto LABEL_30;
        }
        v23 = 16LL * (*(_DWORD *)(v21->m128i_i64[0] + 12) & v9);
        v24 = &v8[(unsigned __int64)v23 / 0x10];
        if ( v23 == v10 )
        {
LABEL_34:
          if ( v24 == v8 )
          {
LABEL_42:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v25 = v8;
          while ( v25->m128i_i64[0] )
          {
            if ( v24 == ++v25 )
              goto LABEL_42;
          }
        }
        else
        {
          v25 = &v8[(unsigned __int64)v23 / 0x10];
          while ( v25->m128i_i64[0] )
          {
            if ( v20 == ++v25 )
              goto LABEL_34;
          }
        }
        v26 = _mm_loadu_si128(v21++);
        *v25 = v26;
      }
      while ( v22 != v21 );
LABEL_30:
      v22 = *(__m128i **)(a1 + 192);
    }
    if ( v22 )
    {
      v31 = v27;
      v30 = v27 - 1;
      v28 = v6;
      sub_186B220(v22);
      v19 = v31;
      v9 = v30;
      v6 = v28;
    }
    *(_QWORD *)(a1 + 192) = v8;
    *(_DWORD *)(a1 + 200) = v19;
    *(_DWORD *)(a1 + 208) = 0;
  }
  else
  {
    v8 = *(__m128i **)(a1 + 192);
    v9 = v5 - 1;
    v10 = 16 * v5;
    v11 = &v8[v10 / 0x10];
  }
  v12 = *(_DWORD *)(a2 + 12);
  v13 = 16LL * (v12 & v9);
  v14 = &v8[(unsigned __int64)v13 / 0x10];
  if ( v13 != v10 )
  {
    result = &v8[(unsigned __int64)v13 / 0x10];
    v16 = nullptr;
    while ( 1 )
    {
      v17 = result->m128i_i64[0];
      if ( result->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v17 + 12) == v12 && a2 == v17 )
        {
          result->m128i_i64[0] = a2;
          result->m128i_i64[1] = v6;
          return result;
        }
      }
      else
      {
        if ( !v17 )
        {
          if ( v16 )
            goto LABEL_40;
          v16 = (__int64 *)result;
          goto LABEL_41;
        }
        v16 = (__int64 *)result;
      }
      if ( ++result == v11 )
        goto LABEL_14;
    }
  }
  v16 = nullptr;
  while ( 1 )
  {
LABEL_14:
    if ( v14 == v8 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    result = (__m128i *)v8->m128i_i64[0];
    if ( v8->m128i_i64[0] <= 1uLL )
      break;
    if ( result->m128i_i32[3] == v12 && (__m128i *)a2 == result )
    {
      v8->m128i_i64[0] = a2;
      v8->m128i_i64[1] = v6;
      return result;
    }
LABEL_13:
    ++v8;
  }
  if ( result )
  {
    v16 = (__int64 *)v8;
    goto LABEL_13;
  }
  if ( v16 )
LABEL_40:
    --*(_DWORD *)(a1 + 208);
  else
    v16 = (__int64 *)v8;
LABEL_41:
  *v16 = a2;
  v16[1] = v6;
  ++*(_DWORD *)(a1 + 204);
  return result;
}

