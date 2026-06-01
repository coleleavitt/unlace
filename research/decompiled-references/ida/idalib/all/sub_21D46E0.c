__int64 __fastcall sub_21D46E0(char **a1, __int64 *a2)
{
  char *v2; // rbp
  __int64 result; // rax
  char *v4; // r15
  signed __int64 v5; // r13
  char *v6; // rcx
  __m128i v7; // xmm0
  __m128i v8; // xmm1
  char *v9; // rax
  __m128i v10[4]; // [rsp+8h] [rbp-40h] BYREF

  v2 = a1[1];
  if ( v2 == a1[2] )
  {
    v4 = *a1;
    v5 = v2 - *a1;
    if ( *a1 == (char *)(a1 + 3) )
    {
      v9 = (char *)malloc(16 * ((v2 - *a1) >> 3));
      v6 = v9;
      if ( v9 )
      {
        if ( v2 != v4 )
          v6 = (char *)memmove(v9, v4, v5);
        *a1 = v6;
        goto LABEL_5;
      }
    }
    else
    {
      v6 = (char *)realloc(*a1, 16 * ((v2 - *a1) >> 3));
      *a1 = v6;
      if ( v6 )
      {
LABEL_5:
        v2 = &v6[v5];
        v10[0].m128i_i64[0] = 16 * (v5 >> 3);
        v7 = (__m128i)_mm_loadh_ps((const double *)v10[0].m128i_i64);
        v10[0].m128i_i64[0] = (__int64)v6;
        v8 = _mm_loadl_epi64(v10);
        *(__m128i *)(a1 + 1) = _mm_add_epi64(v7, _mm_unpacklo_epi64(v8, v8));
        goto LABEL_2;
      }
    }
    abort();
  }
LABEL_2:
  result = *a2;
  a1[1] = v2 + 8;
  *(_QWORD *)v2 = result;
  return result;
}
