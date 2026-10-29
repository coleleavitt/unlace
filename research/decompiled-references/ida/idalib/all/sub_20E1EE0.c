__int64 __fastcall sub_20E1EE0(__int64 a1, unsigned int *a2)
{
  __int64 v2; // r12
  __m128i *v3; // rdx
  __int64 v4; // rax
  _WORD *v5; // rdx
  __int64 v6; // rbx
  unsigned int v7; // eax
  void *v8; // rdx
  __int64 v9; // rax
  void *v10; // rdx
  __int64 v11; // rbx
  const __m128i *v12; // rax
  unsigned int v13; // ecx
  const __m128i *v14; // rsi
  __int64 v15; // rdx
  const __m128i *v16; // rdx
  const __m128i *v17; // rax
  _BYTE *v18; // rax
  _BYTE *v19; // rdi
  __m128i v21; // xmm2
  __m128i si128; // xmm0
  const __m128i *v23; // rax
  __m128i v24; // xmm1
  void *v25; // rdi

  v2 = a1;
  v3 = *(__m128i **)(a1 + 32);
  if ( *(_QWORD *)(a1 + 24) - (_QWORD)v3 > 0x21u )
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AB1B0);
    v3[2].m128i_i16[0] = 8253;
    *v3 = si128;
    v3[1] = _mm_load_si128((const __m128i *)&xmmword_23AB1C0);
    *(_QWORD *)(a1 + 32) += 34LL;
  }
  else
  {
    a1 = sub_227BF10(a1, "RootConstants(num32BitConstants = ", 34);
  }
  v4 = sub_227B910(a1, *a2);
  v5 = *(_WORD **)(v4 + 32);
  v6 = v4;
  if ( *(_QWORD *)(v4 + 24) - (_QWORD)v5 > 1u )
  {
    *v5 = 8236;
    *(_QWORD *)(v4 + 32) += 2LL;
  }
  else
  {
    v6 = sub_227BF10(v4, ", ", 2);
  }
  v7 = a2[1];
  if ( v7 )
  {
    switch ( v7 )
    {
      case 1u:
        v23 = (const __m128i *)&off_2BE88A8;
        break;
      case 2u:
        v23 = (const __m128i *)&off_2BE88D0;
        break;
      case 3u:
        v23 = (const __m128i *)&off_2BE88F8;
        break;
      default:
        goto LABEL_9;
    }
  }
  else
  {
    v23 = (const __m128i *)&off_2BE8880;
  }
  v24 = _mm_loadu_si128(v23);
  v25 = *(void **)(v6 + 32);
  if ( *(_QWORD *)(v6 + 24) - (_QWORD)v25 < v24.m128i_i64[1] )
  {
    sub_227BF10(v6, v24.m128i_i64[0], v24.m128i_i64[1]);
  }
  else if ( v24.m128i_i64[1] )
  {
    memcpy(v25, (const void *)v24.m128i_i64[0], v24.m128i_u64[1]);
    *(_QWORD *)(v6 + 32) += v24.m128i_i64[1];
  }
LABEL_9:
  sub_227B910(v6, a2[2]);
  v8 = *(void **)(v6 + 32);
  if ( *(_QWORD *)(v6 + 24) - (_QWORD)v8 > 9u )
  {
    qmemcpy(v8, ", space = ", 10);
    *(_QWORD *)(v6 + 32) += 10LL;
  }
  else
  {
    v6 = sub_227BF10(v6, ", space = ", 10);
  }
  v9 = sub_227B910(v6, a2[3]);
  v10 = *(void **)(v9 + 32);
  v11 = v9;
  if ( *(_QWORD *)(v9 + 24) - (_QWORD)v10 > 0xEu )
  {
    qmemcpy(v10, ", visibility = ", 15);
    *(_QWORD *)(v9 + 32) += 15LL;
  }
  else
  {
    v11 = sub_227BF10(v9, ", visibility = ", 15);
  }
  v12 = (const __m128i *)sub_201F500();
  v13 = a2[4];
  v14 = v12;
  v16 = (const __m128i *)((char *)v12 + 40 * v15);
  if ( v16 == v12 )
    goto LABEL_18;
  if ( v13 != v12[2].m128i_i32[0] )
  {
    v17 = (const __m128i *)((char *)v12 + 40);
    do
    {
      v14 = v17;
      if ( v16 == v17 )
        goto LABEL_18;
      v17 = (const __m128i *)((char *)v17 + 40);
    }
    while ( v13 != v17[-1].m128i_i32[2] );
  }
  v21 = _mm_loadu_si128(v14);
  v18 = *(_BYTE **)(v11 + 24);
  v19 = *(_BYTE **)(v11 + 32);
  if ( v21.m128i_i64[1] > (unsigned __int64)(v18 - v19) )
  {
    sub_227BF10(v11, v21.m128i_i64[0], v21.m128i_i64[1]);
LABEL_18:
    v18 = *(_BYTE **)(v11 + 24);
    v19 = *(_BYTE **)(v11 + 32);
    goto LABEL_19;
  }
  if ( v21.m128i_i64[1] )
  {
    memcpy(v19, (const void *)v21.m128i_i64[0], v21.m128i_u64[1]);
    v18 = *(_BYTE **)(v11 + 24);
    v19 = (_BYTE *)(v21.m128i_i64[1] + *(_QWORD *)(v11 + 32));
    *(_QWORD *)(v11 + 32) = v19;
  }
LABEL_19:
  if ( v18 == v19 )
  {
    sub_227BF10(v11, ")", 1);
    return v2;
  }
  else
  {
    *v19 = 41;
    ++*(_QWORD *)(v11 + 32);
    return v2;
  }
}
