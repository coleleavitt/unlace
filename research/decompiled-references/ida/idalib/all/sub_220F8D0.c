__int64 __fastcall sub_220F8D0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __m128i *v5; // rcx
  __int64 v6; // rax
  _BYTE *v7; // rdx
  void *v8; // rcx
  __int64 v9; // rax
  _BYTE *v10; // rdx
  __m128i *v11; // rcx
  __int64 v12; // rax
  _BYTE *v13; // rdx
  void *v14; // rcx
  __int64 result; // rax
  __m128i *v16; // rcx
  __m128i v17; // xmm0
  __m128i si128; // xmm0
  __m128i v19; // xmm0

  v4 = sub_227D6D0(a1, a2);
  v5 = *(__m128i **)(v4 + 32);
  if ( *(_QWORD *)(v4 + 24) - (_QWORD)v5 > 0x1Au )
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AB960);
    qmemcpy(&v5[1], "y regions: ", 11);
    *v5 = si128;
    *(_QWORD *)(v4 + 32) += 27LL;
  }
  else
  {
    v4 = sub_227BF10(v4, "\nNumber of memory regions: ", 27);
  }
  v6 = sub_227B910(v4, (unsigned int)a1);
  v7 = *(_BYTE **)(v6 + 32);
  if ( (unsigned __int64)v7 >= *(_QWORD *)(v6 + 24) )
  {
    v6 = sub_227BA10(v6, 10);
  }
  else
  {
    *(_QWORD *)(v6 + 32) = v7 + 1;
    *v7 = 10;
  }
  v8 = *(void **)(v6 + 32);
  if ( *(_QWORD *)(v6 + 24) - (_QWORD)v8 > 0xBu )
  {
    qmemcpy(v8, "Bytes used: ", 12);
    *(_QWORD *)(v6 + 32) += 12LL;
  }
  else
  {
    v6 = sub_227BF10(v6, "Bytes used: ", 12);
  }
  v9 = sub_227B910(v6, a2);
  v10 = *(_BYTE **)(v9 + 32);
  if ( (unsigned __int64)v10 >= *(_QWORD *)(v9 + 24) )
  {
    v9 = sub_227BA10(v9, 10);
  }
  else
  {
    *(_QWORD *)(v9 + 32) = v10 + 1;
    *v10 = 10;
  }
  v11 = *(__m128i **)(v9 + 32);
  if ( *(_QWORD *)(v9 + 24) - (_QWORD)v11 > 0x10u )
  {
    v19 = _mm_load_si128((const __m128i *)&xmmword_23AB970);
    v11[1].m128i_i8[0] = 32;
    *v11 = v19;
    *(_QWORD *)(v9 + 32) += 17LL;
  }
  else
  {
    v9 = sub_227BF10(v9, "Bytes allocated: ", 17);
  }
  v12 = sub_227B910(v9, a3);
  v13 = *(_BYTE **)(v12 + 32);
  if ( (unsigned __int64)v13 >= *(_QWORD *)(v12 + 24) )
  {
    v12 = sub_227BA10(v12, 10);
  }
  else
  {
    *(_QWORD *)(v12 + 32) = v13 + 1;
    *v13 = 10;
  }
  v14 = *(void **)(v12 + 32);
  if ( *(_QWORD *)(v12 + 24) - (_QWORD)v14 > 0xDu )
  {
    qmemcpy(v14, "Bytes wasted: ", 14);
    *(_QWORD *)(v12 + 32) += 14LL;
  }
  else
  {
    v12 = sub_227BF10(v12, "Bytes wasted: ", 14);
  }
  result = sub_227B910(v12, a3 - a2);
  v16 = *(__m128i **)(result + 32);
  if ( *(_QWORD *)(result + 24) - (_QWORD)v16 <= 0x1Au )
    return sub_227BF10(result, " (includes alignment, etc)\n", 27);
  v17 = _mm_load_si128(xmmword_23AB980);
  qmemcpy(&v16[1], "ment, etc)\n", 11);
  *v16 = v17;
  *(_QWORD *)(result + 32) += 27LL;
  return result;
}
