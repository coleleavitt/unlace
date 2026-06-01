__int64 *__fastcall sub_7155C0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r15
  int v7; // ecx
  __int64 *v8; // rbp
  unsigned int v9; // edi
  int v10; // r9d
  size_t v11; // r15
  __int64 *v12; // rbx
  __int64 v13; // rdi
  __int64 *v14; // rsi
  __int64 *result; // rax
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
  int v30; // [rsp+10h] [rbp-58h]
  __m128i v31; // [rsp+20h] [rbp-48h] BYREF

  if ( a2 )
    ++*(_DWORD *)(a2 + 8);
  v31.m128i_i64[0] = a2;
  v31.m128i_i64[1] = a3;
  sub_686B20(a1 + 40, &v31);
  v6 = *(unsigned int *)(a1 + 72);
  v7 = *(_DWORD *)(a3 + 12);
  v8 = *(__int64 **)(a1 + 64);
  v9 = v6 - 1;
  v10 = *(_DWORD *)(a1 + 72);
  v11 = 16 * v6;
  v12 = &v8[v11 / 8];
  v13 = 16LL * (v7 & v9);
  v14 = &v8[(unsigned __int64)v13 / 8];
  if ( v13 != v11 )
  {
    for ( result = &v8[(unsigned __int64)v13 / 8]; v12 != result; result += 2 )
    {
      v16 = *result;
      if ( (unsigned __int64)*result > 1 )
      {
        if ( *(_DWORD *)(v16 + 12) == v7 && a3 == v16 )
          return result;
      }
      else if ( !v16 )
      {
        goto LABEL_10;
      }
    }
  }
  if ( v8 != v14 )
  {
    for ( result = *(__int64 **)(a1 + 64); v14 != result; result += 2 )
    {
      v20 = *result;
      if ( (unsigned __int64)*result > 1 )
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
LABEL_10:
  v17 = 4 * (*(_DWORD *)(a1 + 76) + *(_DWORD *)(a1 + 80));
  ++*(_DWORD *)(a3 + 8);
  if ( 3 * v10 < v17 )
  {
    v30 = 2 * v10;
    v11 = 16LL * (unsigned int)(2 * v10);
    v21 = (__m128i *)sub_186B270(v11);
    v22 = v30;
    v8 = (__int64 *)v21;
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
    v12 = (__int64 *)v23;
    v26 = (__m128i *)&v24[*(unsigned int *)(a1 + 72)];
    if ( v24 != v26 )
    {
      do
      {
        if ( v24->m128i_i64[0] > 1uLL )
        {
          v27 = 16LL * (*(_DWORD *)(v24->m128i_i64[0] + 12) & (unsigned int)v25);
          v28 = (__m128i *)&v8[(unsigned __int64)v27 / 8];
          if ( v11 == v27 )
          {
LABEL_52:
            if ( v8 == (__int64 *)v28 )
            {
LABEL_61:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v29 = (__m128i *)v8;
            while ( v29->m128i_i64[0] )
            {
              if ( v28 == ++v29 )
                goto LABEL_61;
            }
          }
          else
          {
            v29 = (__m128i *)&v8[(unsigned __int64)v27 / 8];
            while ( v29->m128i_i64[0] )
            {
              if ( v23 == ++v29 )
                goto LABEL_52;
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
    v14 = &v8[(unsigned __int64)v13 / 8];
  }
  if ( v13 != v11 )
  {
    result = v14;
    v18 = nullptr;
    while ( 1 )
    {
      v19 = *result;
      if ( (unsigned __int64)*result > 1 )
      {
        if ( *(_DWORD *)(v19 + 12) == v7 && a3 == v19 )
        {
          *result = a3;
          result[1] = a2;
          return result;
        }
      }
      else
      {
        if ( !v19 )
        {
          if ( v18 )
            goto LABEL_20;
          v18 = result;
          goto LABEL_21;
        }
        v18 = result;
      }
      result += 2;
      if ( result == v12 )
        goto LABEL_34;
    }
  }
  v18 = nullptr;
  while ( 1 )
  {
LABEL_34:
    if ( v8 == v14 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    result = (__int64 *)*v8;
    if ( (unsigned __int64)*v8 <= 1 )
      break;
    if ( *((_DWORD *)result + 3) == v7 && (__int64 *)a3 == result )
    {
      *v8 = a3;
      v8[1] = a2;
      return result;
    }
LABEL_33:
    v8 += 2;
  }
  if ( result )
  {
    v18 = v8;
    goto LABEL_33;
  }
  if ( v18 )
LABEL_20:
    --*(_DWORD *)(a1 + 80);
  else
    v18 = v8;
LABEL_21:
  *v18 = a3;
  v18[1] = a2;
  ++*(_DWORD *)(a1 + 76);
  return result;
}

