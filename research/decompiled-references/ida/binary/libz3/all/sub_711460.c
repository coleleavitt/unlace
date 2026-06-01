__m128i *__fastcall sub_711460(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r15
  int v7; // ecx
  __m128i *v8; // rbp
  unsigned int v9; // edi
  int v10; // r9d
  size_t v11; // r15
  __m128i *v12; // rbx
  __int64 v13; // rdi
  __m128i *v14; // rsi
  __m128i *result; // rax
  __int64 v16; // rdx
  unsigned int v17; // eax
  __int64 *v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rdx
  __m128i *v21; // rax
  int v22; // r8d
  __m128i *v23; // r9
  const __m128i *v24; // rcx
  int v25; // r10d
  __m128i *v26; // r11
  __int64 v27; // rax
  __m128i *v28; // rdx
  __m128i *v29; // rax
  int v30; // [rsp+10h] [rbp-48h]

  v6 = *(unsigned int *)(a1 + 72);
  v7 = *(_DWORD *)(a3 + 12);
  v8 = *(__m128i **)(a1 + 64);
  v9 = v6 - 1;
  v10 = v6;
  v11 = 16 * v6;
  v12 = &v8[v11 / 0x10];
  v13 = 16LL * (v7 & v9);
  v14 = &v8[(unsigned __int64)v13 / 0x10];
  if ( v13 != v11 )
  {
    for ( result = &v8[(unsigned __int64)v13 / 0x10]; v12 != result; ++result )
    {
      v16 = result->m128i_i64[0];
      if ( result->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v16 + 12) == v7 && a3 == v16 )
          return result;
      }
      else if ( !v16 )
      {
        goto LABEL_8;
      }
    }
  }
  if ( v8 != v14 )
  {
    for ( result = v8; v14 != result; ++result )
    {
      v20 = result->m128i_i64[0];
      if ( result->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v20 + 12) == v7 && a3 == v20 )
          return result;
      }
      else if ( !v20 )
      {
        break;
      }
    }
  }
LABEL_8:
  v17 = 4 * (*(_DWORD *)(a1 + 76) + *(_DWORD *)(a1 + 80));
  ++*(_DWORD *)(a3 + 8);
  if ( 3 * v10 < v17 )
  {
    v30 = 2 * v10;
    v11 = 16LL * (unsigned int)(2 * v10);
    v21 = (__m128i *)sub_186B270(v11);
    v22 = v30;
    v8 = v21;
    v23 = &v21[v11 / 0x10];
    if ( v30 )
    {
      if ( (v11 & 0x10) == 0 || (*v21 = 0, ++v21, v21 != v23) )
      {
        do
        {
          *v21 = 0;
          v21 += 2;
          v21[-1] = 0;
        }
        while ( v21 != v23 );
      }
    }
    v24 = *(const __m128i **)(a1 + 64);
    v25 = v30 - 1;
    v12 = v23;
    v26 = (__m128i *)&v24[*(unsigned int *)(a1 + 72)];
    if ( v24 != v26 )
    {
      do
      {
        if ( v24->m128i_i64[0] > 1uLL )
        {
          v27 = 16LL * (*(_DWORD *)(v24->m128i_i64[0] + 12) & (unsigned int)v25);
          v28 = &v8[(unsigned __int64)v27 / 0x10];
          if ( v11 == v27 )
          {
LABEL_50:
            if ( v8 == v28 )
            {
LABEL_59:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v29 = v8;
            while ( v29->m128i_i64[0] )
            {
              if ( v28 == ++v29 )
                goto LABEL_59;
            }
          }
          else
          {
            v29 = &v8[(unsigned __int64)v27 / 0x10];
            while ( v29->m128i_i64[0] )
            {
              if ( v23 == ++v29 )
                goto LABEL_50;
            }
          }
          *v29 = _mm_loadu_si128(v24);
        }
        ++v24;
      }
      while ( v26 != v24 );
      v26 = *(__m128i **)(a1 + 64);
    }
    if ( v26 )
    {
      sub_186B220(v26);
      v22 = v30;
      v25 = v30 - 1;
    }
    v7 = *(_DWORD *)(a3 + 12);
    *(_QWORD *)(a1 + 64) = v8;
    *(_DWORD *)(a1 + 72) = v22;
    *(_DWORD *)(a1 + 80) = 0;
    v13 = 16LL * (v7 & (unsigned int)v25);
    v14 = &v8[(unsigned __int64)v13 / 0x10];
  }
  if ( v13 != v11 )
  {
    result = v14;
    v18 = nullptr;
    while ( 1 )
    {
      v19 = result->m128i_i64[0];
      if ( result->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v19 + 12) == v7 && a3 == v19 )
        {
          result->m128i_i64[0] = a3;
          result->m128i_i64[1] = a2;
          return result;
        }
      }
      else
      {
        if ( !v19 )
        {
          if ( v18 )
            goto LABEL_18;
          v18 = (__int64 *)result;
          goto LABEL_19;
        }
        v18 = (__int64 *)result;
      }
      if ( ++result == v12 )
        goto LABEL_32;
    }
  }
  v18 = nullptr;
  while ( 1 )
  {
LABEL_32:
    if ( v8 == v14 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    result = (__m128i *)v8->m128i_i64[0];
    if ( v8->m128i_i64[0] <= 1uLL )
      break;
    if ( result->m128i_i32[3] == v7 && (__m128i *)a3 == result )
    {
      v8->m128i_i64[0] = a3;
      v8->m128i_i64[1] = a2;
      return result;
    }
LABEL_31:
    ++v8;
  }
  if ( result )
  {
    v18 = (__int64 *)v8;
    goto LABEL_31;
  }
  if ( v18 )
LABEL_18:
    --*(_DWORD *)(a1 + 80);
  else
    v18 = (__int64 *)v8;
LABEL_19:
  *v18 = a3;
  v18[1] = a2;
  ++*(_DWORD *)(a1 + 76);
  return result;
}

