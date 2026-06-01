__int64 __fastcall sub_495840(__int64 a1, __int64 a2)
{
  __m128i v3; // xmm0
  size_t v4; // r12
  size_t v5; // r12
  __int64 v6; // rax
  __int64 v7; // rdx
  __m128i v8; // xmm0
  __int64 result; // rax
  __m128i v10; // xmm0
  void *v11; // rax
  const void *v12; // rsi
  void *v13; // rax
  const void *v14; // rsi

  v3 = _mm_loadu_si128((const __m128i *)a2);
  *(_QWORD *)(a1 + 16) = 0;
  *(__m128i *)a1 = v3;
  *(_OWORD *)(a1 + 24) = 0;
  v4 = *(_QWORD *)(a2 + 24);
  if ( v4 )
  {
    v11 = (void *)qalloc_or_throw(*(_QWORD *)(a2 + 24));
    *(_QWORD *)(a1 + 32) = v4;
    v12 = *(const void **)(a2 + 16);
    *(_QWORD *)(a1 + 16) = v11;
    memcpy(v11, v12, v4);
    *(_QWORD *)(a1 + 24) = v4;
  }
  *(_QWORD *)(a1 + 40) = 0;
  *(_OWORD *)(a1 + 48) = 0;
  v5 = *(_QWORD *)(a2 + 48);
  if ( v5 )
  {
    v13 = (void *)qalloc_or_throw(*(_QWORD *)(a2 + 48));
    *(_QWORD *)(a1 + 40) = v13;
    v14 = *(const void **)(a2 + 40);
    *(_QWORD *)(a1 + 56) = v5;
    memcpy(v13, v14, v5);
    *(_QWORD *)(a1 + 48) = v5;
  }
  *(_QWORD *)(a1 + 64) = 0;
  copy_tinfo_t(a1 + 64);
  v6 = *(_QWORD *)(a2 + 120);
  v7 = *(_QWORD *)(a2 + 128);
  *(__m128i *)(a1 + 72) = _mm_loadu_si128((const __m128i *)(a2 + 72));
  v8 = _mm_loadu_si128((const __m128i *)(a2 + 88));
  *(_QWORD *)(a1 + 120) = v6;
  result = *(unsigned __int8 *)(a2 + 136);
  *(__m128i *)(a1 + 88) = v8;
  v10 = _mm_loadu_si128((const __m128i *)(a2 + 104));
  *(_QWORD *)(a1 + 128) = v7;
  *(_BYTE *)(a1 + 136) = result;
  *(__m128i *)(a1 + 104) = v10;
  return result;
}
