__int64 __fastcall sub_20E1A60(__int64 a1, int *a2)
{
  __int64 v2; // rdi
  __m128i *v3; // rdx
  __int64 v4; // rax
  void *v5; // rdx
  __int64 v6; // rbx
  const __m128i *v7; // rax
  int v8; // ecx
  const __m128i *v9; // rsi
  __int64 v10; // rdx
  const __m128i *v11; // rdx
  const __m128i *v12; // rax
  __int64 result; // rax
  _BYTE *v14; // rdi
  __m128i v15; // xmm1
  __m128i si128; // xmm0

  v2 = *(_QWORD *)(a1 + 32);
  v3 = *(__m128i **)(v2 + 32);
  if ( *(_QWORD *)(v2 + 24) - (_QWORD)v3 > 0x1Cu )
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AB1A0);
    qmemcpy(&v3[1], "numClauses = ", 13);
    *v3 = si128;
    *(_QWORD *)(v2 + 32) += 29LL;
  }
  else
  {
    v2 = sub_227BF10(v2, "DescriptorTable(numClauses = ", 29);
  }
  v4 = sub_227B910(v2, (unsigned int)a2[1]);
  v5 = *(void **)(v4 + 32);
  v6 = v4;
  if ( *(_QWORD *)(v4 + 24) - (_QWORD)v5 > 0xEu )
  {
    qmemcpy(v5, ", visibility = ", 15);
    *(_QWORD *)(v4 + 32) += 15LL;
  }
  else
  {
    v6 = sub_227BF10(v4, ", visibility = ", 15);
  }
  v7 = (const __m128i *)sub_201F500();
  v8 = *a2;
  v9 = v7;
  v11 = (const __m128i *)((char *)v7 + 40 * v10);
  if ( v11 == v7 )
    goto LABEL_10;
  if ( v8 != v7[2].m128i_i32[0] )
  {
    v12 = (const __m128i *)((char *)v7 + 40);
    do
    {
      v9 = v12;
      if ( v11 == v12 )
        goto LABEL_10;
      v12 = (const __m128i *)((char *)v12 + 40);
    }
    while ( v8 != v12[-1].m128i_i32[2] );
  }
  v15 = _mm_loadu_si128(v9);
  result = *(_QWORD *)(v6 + 24);
  v14 = *(_BYTE **)(v6 + 32);
  if ( v15.m128i_i64[1] > (unsigned __int64)(result - (_QWORD)v14) )
  {
    sub_227BF10(v6, v15.m128i_i64[0], v15.m128i_i64[1]);
LABEL_10:
    result = *(_QWORD *)(v6 + 24);
    v14 = *(_BYTE **)(v6 + 32);
    goto LABEL_11;
  }
  if ( v15.m128i_i64[1] )
  {
    memcpy(v14, (const void *)v15.m128i_i64[0], v15.m128i_u64[1]);
    result = *(_QWORD *)(v6 + 24);
    v14 = (_BYTE *)(v15.m128i_i64[1] + *(_QWORD *)(v6 + 32));
    *(_QWORD *)(v6 + 32) = v14;
  }
LABEL_11:
  if ( v14 == (_BYTE *)result )
    return sub_227BF10(v6, ")", 1);
  *v14 = 41;
  ++*(_QWORD *)(v6 + 32);
  return result;
}
