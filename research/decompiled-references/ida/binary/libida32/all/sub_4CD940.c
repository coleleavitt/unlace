int __fastcall sub_4CD940(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, unsigned __int64 a5)
{
  __int64 v5; // rax
  __int64 v7; // r12
  __int64 i; // r14
  __int64 v9; // rbp
  __m128i *v10; // rbx
  __int64 v11; // r14
  const __m128i *v12; // r12
  __int64 v13; // rdx
  __m128i v15; // [rsp+8h] [rbp-58h] BYREF
  __int64 v16; // [rsp+18h] [rbp-48h]
  __int64 v17; // [rsp+20h] [rbp-40h]

  LODWORD(v5) = a3 - 1;
  v7 = (a3 - 1) / 2;
  v17 = a3;
  v16 = a3 & 1;
  v15 = _mm_unpacklo_epi64((__m128i)a4, (__m128i)a5);
  if ( a2 >= v7 )
  {
    v10 = (__m128i *)(a1 + 16 * a2);
    if ( v16 )
      goto LABEL_13;
    v5 = (v17 - 2) / 2;
    if ( a2 != v5 )
      goto LABEL_13;
    v9 = a2;
    goto LABEL_15;
  }
  for ( i = a2; ; i = v9 )
  {
    v9 = 2 * (i + 1);
    v10 = (__m128i *)(a1 + 32 * (i + 1));
    if ( strcmp(*(const char **)(v10->m128i_i64[0] + 24), *(const char **)(v10[-1].m128i_i64[0] + 24)) < 0 )
    {
      --v9;
      v10 = (__m128i *)(a1 + 16 * v9);
    }
    *(__m128i *)(a1 + 16 * i) = _mm_loadu_si128(v10);
    if ( v9 >= v7 )
      break;
  }
  if ( !v16 && v9 == (v17 - 2) / 2 )
  {
LABEL_15:
    v13 = v9 + 1;
    v9 = 2 * (v9 + 1) - 1;
    *v10 = _mm_loadu_si128((const __m128i *)(a1 + 32 * v13 - 16));
    v10 = (__m128i *)(a1 + 16 * v9);
  }
  LODWORD(v5) = a2;
  v11 = (v9 - 1) / 2;
  if ( v9 > a2 )
  {
    while ( 1 )
    {
      v12 = (const __m128i *)(a1 + 16 * v11);
      v10 = (__m128i *)(a1 + 16 * v9);
      LODWORD(v5) = strcmp(*(const char **)(v12->m128i_i64[0] + 24), *(const char **)(a4 + 24));
      if ( (int)v5 >= 0 )
        break;
      v9 = v11;
      *v10 = _mm_loadu_si128(v12);
      v5 = (v11 - 1) / 2;
      if ( a2 >= v11 )
      {
        v10 = (__m128i *)(a1 + 16 * v11);
        break;
      }
      v11 = (v11 - 1) / 2;
    }
  }
LABEL_13:
  *v10 = _mm_load_si128(&v15);
  return v5;
}

