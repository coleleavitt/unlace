void __fastcall sub_2298870(__int64 a1)
{
  const __m128i *v1; // r12
  __int64 v2; // rax
  __m128i si128; // xmm0
  const __m128i *v4; // rbp
  __m128i v5; // xmm0
  __int64 v6; // rax
  __m128i v7[3]; // [rsp+0h] [rbp-38h] BYREF

  v1 = (const __m128i *)&off_2C76300;
  v2 = *(unsigned int *)(a1 + 8);
  do
  {
    while ( 1 )
    {
      si128 = _mm_load_si128(v1);
      if ( v2 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
        break;
      v1 += 3;
      *(__m128i *)(*(_QWORD *)a1 + 16 * v2) = si128;
      v2 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
      *(_DWORD *)(a1 + 8) = v2;
      if ( &off_2C77140 == (int (**)[6])v1 )
        goto LABEL_5;
    }
    v7[0] = si128;
    sub_2237220(a1, (const void *)(a1 + 16), v2 + 1, 16);
    v1 += 3;
    *(__m128i *)(*(_QWORD *)a1 + 16LL * *(unsigned int *)(a1 + 8)) = _mm_load_si128(v7);
    v2 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
    *(_DWORD *)(a1 + 8) = v2;
  }
  while ( v1 != (const __m128i *)&off_2C77140 );
LABEL_5:
  v4 = (const __m128i *)&off_2BEC060;
  do
  {
    if ( v4->m128i_i64[1] != 12
      || *(_QWORD *)v4->m128i_i64[0] != 0x616C2D656C707061LL
      || *(_DWORD *)(v4->m128i_i64[0] + 8) != 1953719668 )
    {
      v5 = _mm_load_si128(v4);
      if ( v2 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
      {
        v7[0] = v5;
        sub_2237220(a1, (const void *)(a1 + 16), v2 + 1, 16);
        v2 = *(unsigned int *)(a1 + 8);
        v5 = _mm_load_si128(v7);
      }
      *(__m128i *)(*(_QWORD *)a1 + 16 * v2) = v5;
      v2 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
      *(_DWORD *)(a1 + 8) = v2;
    }
    v4 += 2;
  }
  while ( off_2BEC260 != (char **)v4 );
  v6 = 16 * v2;
  if ( (unsigned __int64)v6 > 0x10 )
    qsort(*(void **)a1, v6 >> 4, 0x10u, (__compar_fn_t)sub_E39370);
}
