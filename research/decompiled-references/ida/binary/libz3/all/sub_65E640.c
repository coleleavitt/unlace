__m128 *__fastcall sub_65E640(__int64 a1, __m128 *a2)
{
  __int64 v4; // r15
  __m128i v5; // xmm1
  __m128 *v6; // rbx
  __int32 v7; // r8d
  size_t v8; // r15
  __m128 *v9; // rbp
  __int32 v10; // ecx
  __int64 v11; // rax
  __m128 *v12; // rdi
  __m128 *result; // rax
  __m128 *v14; // rsi
  unsigned __int64 v15; // rdx
  __m128 *v16; // rax
  __int32 v17; // r9d
  __m128i *v18; // rcx
  const __m128i *v19; // r14
  __m128i *v20; // r10
  __int64 v21; // rax
  __m128 *v22; // rdx
  __m128i *v23; // rax
  __m128i v24; // xmm0
  __m128i v25; // [rsp+0h] [rbp-68h] BYREF
  __m128i v26; // [rsp+10h] [rbp-58h] BYREF
  __int32 v27; // [rsp+20h] [rbp-48h]
  __int32 v28; // [rsp+24h] [rbp-44h]
  __m128i *v29; // [rsp+28h] [rbp-40h]

  v4 = *(unsigned int *)(a1 + 192);
  v5 = (__m128i)_mm_loadh_ps((const double *)(a1 + 176));
  if ( 3 * (int)v4 < (unsigned int)(4 * (*(_DWORD *)(a1 + 196) + *(_DWORD *)(a1 + 200))) )
  {
    v25.m128i_i32[0] = 2 * v4;
    v8 = 16LL * (unsigned int)(2 * v4);
    v26 = v5;
    v16 = (__m128 *)sub_186B270(v8);
    v17 = v25.m128i_i32[0];
    v5 = _mm_load_si128(&v26);
    v6 = v16;
    v18 = (__m128i *)&v16[v8 / 0x10];
    if ( v25.m128i_i32[0] )
    {
      if ( (v8 & 0x10) == 0 || (*v16 = 0, ++v16, v18 != (__m128i *)v16) )
      {
        do
        {
          *v16 = 0;
          v16 += 2;
          v16[-1] = 0;
        }
        while ( v18 != (__m128i *)v16 );
      }
    }
    v19 = *(const __m128i **)(a1 + 184);
    v7 = v17 - 1;
    v9 = (__m128 *)v18;
    v20 = (__m128i *)&v19[*(unsigned int *)(a1 + 192)];
    if ( v19 != v20 )
    {
      do
      {
        while ( v19->m128i_i64[0] <= 1uLL )
        {
          if ( v20 == ++v19 )
            goto LABEL_32;
        }
        v21 = 16LL * (*(_DWORD *)(v19->m128i_i64[0] + 12) & (unsigned int)v7);
        v22 = &v6[(unsigned __int64)v21 / 0x10];
        if ( v8 == v21 )
        {
LABEL_36:
          if ( v6 == v22 )
          {
LABEL_45:
            v29 = v18;
            v28 = v17;
            v27 = v17 - 1;
            v26.m128i_i64[0] = (__int64)v20;
            v25 = v5;
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v23 = (__m128i *)v6;
          while ( v23->m128i_i64[0] )
          {
            if ( v22 == (__m128 *)++v23 )
              goto LABEL_45;
          }
        }
        else
        {
          v23 = (__m128i *)&v6[(unsigned __int64)v21 / 0x10];
          while ( v23->m128i_i64[0] )
          {
            if ( v18 == ++v23 )
              goto LABEL_36;
          }
        }
        v24 = _mm_loadu_si128(v19++);
        *v23 = v24;
      }
      while ( v20 != v19 );
LABEL_32:
      v20 = *(__m128i **)(a1 + 184);
    }
    if ( v20 )
    {
      v27 = v17;
      v26.m128i_i32[0] = v17 - 1;
      v25 = v5;
      sub_186B220(v20);
      v17 = v27;
      v7 = v26.m128i_i32[0];
      v5 = _mm_load_si128(&v25);
    }
    *(_QWORD *)(a1 + 184) = v6;
    *(_DWORD *)(a1 + 192) = v17;
    *(_DWORD *)(a1 + 200) = 0;
  }
  else
  {
    v6 = *(__m128 **)(a1 + 184);
    v7 = v4 - 1;
    v8 = 16 * v4;
    v9 = &v6[v8 / 0x10];
  }
  v10 = a2->m128_i32[3];
  v11 = 16LL * (v10 & (unsigned int)v7);
  v12 = &v6[(unsigned __int64)v11 / 0x10];
  if ( v11 != v8 )
  {
    result = &v6[(unsigned __int64)v11 / 0x10];
    v14 = nullptr;
    while ( 1 )
    {
      v15 = result->m128_u64[0];
      if ( result->m128_u64[0] > 1 )
      {
        if ( *(_DWORD *)(v15 + 12) == v10 && a2 == (__m128 *)v15 )
        {
          *result = (__m128)v5;
          return result;
        }
      }
      else
      {
        if ( !v15 )
        {
          if ( v14 )
            goto LABEL_42;
          v14 = result;
          goto LABEL_43;
        }
        v14 = result;
      }
      if ( ++result == v9 )
        goto LABEL_14;
    }
  }
  v14 = nullptr;
  while ( 1 )
  {
LABEL_14:
    if ( v12 == v6 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    result = (__m128 *)v6->m128_u64[0];
    if ( v6->m128_u64[0] <= 1 )
      break;
    if ( result->m128_i32[3] == v10 && a2 == result )
    {
      *v6 = (__m128)v5;
      return result;
    }
LABEL_13:
    ++v6;
  }
  if ( result )
  {
    v14 = v6;
    goto LABEL_13;
  }
  if ( v14 )
LABEL_42:
    --*(_DWORD *)(a1 + 200);
  else
    v14 = v6;
LABEL_43:
  *v14 = (__m128)v5;
  ++*(_DWORD *)(a1 + 196);
  return result;
}

