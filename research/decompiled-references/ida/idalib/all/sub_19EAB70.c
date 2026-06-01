unsigned __int64 __fastcall sub_19EAB70(void ***a1, const __m128i *a2)
{
  const __m128i *v2; // rbp
  void **v3; // rbx
  const __m128i *v4; // rdi
  __int8 v5; // si
  __int64 v6; // rcx
  __m128i *v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  unsigned __int64 result; // rax
  _BYTE *v11; // r9
  const __m128i *v12; // rcx
  unsigned __int64 v13; // rdx
  __m128i *v15; // rax
  void **v16; // r13
  __int64 v17; // r8
  void **v18; // rsi

  v2 = a2;
  v3 = *a1;
  if ( !*a1 )
  {
    v15 = (__m128i *)operator new(0x30u);
    v16 = *a1;
    v7 = v15 + 1;
    v3 = (void **)v15;
    v15->m128i_i64[0] = (__int64)v15[1].m128i_i64;
    result = 0x100000000LL;
    v3[1] = (void *)0x100000000LL;
    *a1 = v3;
    if ( !v16 )
    {
LABEL_21:
      *v7 = _mm_loadu_si128(v2);
      v7[1] = _mm_loadu_si128(v2 + 1);
      ++*((_DWORD *)v3 + 2);
      return result;
    }
    if ( *v16 != v16 + 2 )
      free(*v16);
    operator delete(v16, 0x30u);
    v3 = *a1;
    v17 = *((unsigned int *)*a1 + 2);
    v4 = (const __m128i *)**a1;
    result = *((unsigned int *)*a1 + 3);
    v13 = v17 + 1;
    v7 = (__m128i *)&v4[2 * v17];
LABEL_20:
    if ( v13 > result )
    {
      v18 = v3 + 2;
      if ( v4 > v2 || v7 <= v2 )
      {
        result = sub_2237220(v3, v18, v13, 32);
        v7 = (__m128i *)((char *)*v3 + 32 * *((unsigned int *)v3 + 2));
      }
      else
      {
        sub_2237220(v3, v18, v13, 32);
        result = (unsigned __int64)*v3;
        v2 = (const __m128i *)((char *)*v3 + (char *)v2 - (char *)v4);
        v7 = (__m128i *)((char *)*v3 + 32 * *((unsigned int *)v3 + 2));
      }
    }
    goto LABEL_21;
  }
  v4 = (const __m128i *)*v3;
  v5 = a2->m128i_i8[0];
  v6 = 32LL * *((unsigned int *)v3 + 2);
  v7 = (__m128i *)((char *)*v3 + v6);
  v8 = v6 >> 5;
  v9 = v6 >> 7;
  if ( !v9 )
  {
    result = (unsigned __int64)*v3;
LABEL_15:
    if ( v8 != 2 )
    {
      if ( v8 != 3 )
      {
        if ( v8 != 1 )
          goto LABEL_19;
        goto LABEL_18;
      }
      if ( v5 == *(_BYTE *)result )
        goto LABEL_23;
      result += 32LL;
    }
    if ( v5 == *(_BYTE *)result )
      goto LABEL_23;
    result += 32LL;
LABEL_18:
    if ( v5 == *(_BYTE *)result )
      goto LABEL_23;
    goto LABEL_19;
  }
  if ( v5 == v4->m128i_i8[0] )
  {
    result = (unsigned __int64)*v3;
    goto LABEL_23;
  }
  if ( v5 != v4[2].m128i_i8[0] )
  {
    result = (unsigned __int64)&v4[4];
    if ( v5 == v4[4].m128i_i8[0]
      || (v11 = *v3, result = (unsigned __int64)&v4[6], v12 = &v4[8 * v9], v5 == v4[6].m128i_i8[0]) )
    {
LABEL_23:
      if ( v7 != (__m128i *)result )
        return result;
      goto LABEL_19;
    }
    while ( 1 )
    {
      result = (unsigned __int64)(v11 + 128);
      if ( v12 == (const __m128i *)(v11 + 128) )
      {
        v8 = (__int64)((__int64)v7->m128i_i64 - result) >> 5;
        goto LABEL_15;
      }
      if ( v5 == v11[128] )
        goto LABEL_23;
      if ( v5 == v11[160] )
        break;
      if ( v5 == v11[192] )
      {
        result = (unsigned __int64)(v11 + 192);
        goto LABEL_23;
      }
      if ( v5 == v11[224] )
      {
        result = (unsigned __int64)(v11 + 224);
        goto LABEL_23;
      }
      v11 += 128;
    }
    if ( v7 != (__m128i *)(v11 + 160) )
      return result;
LABEL_19:
    result = *((unsigned int *)v3 + 3);
    v13 = *((unsigned int *)v3 + 2) + 1LL;
    goto LABEL_20;
  }
  result = (unsigned __int64)&v4[2];
  if ( v7 == &v4[2] || v4 == (const __m128i *)-32LL )
    goto LABEL_19;
  return result;
}
