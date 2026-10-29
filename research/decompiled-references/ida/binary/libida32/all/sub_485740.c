__int64 __fastcall sub_485740(__int64 a1, __int64 a2)
{
  __m128i *v3; // rdi
  __int64 v5; // rsi
  __int64 v6; // rax
  __m128i v7; // xmm0
  __int64 v8; // rax
  __m128i v9; // xmm1
  __m128i v10; // xmm0
  __int64 v11; // rdx
  __int64 result; // rax
  __m128i v13; // xmm0

  v3 = (__m128i *)(a1 + 64);
  v5 = a2 + 64;
  v3[-4] = _mm_loadu_si128((const __m128i *)(v5 - 64));
  v6 = *(_QWORD *)(v5 - 48);
  v7 = _mm_loadu_si128((const __m128i *)(v5 - 40));
  *(_QWORD *)(v5 - 48) = 0;
  *(__m128i *)((char *)v3 - 40) = v7;
  v3[-3].m128i_i64[0] = v6;
  v8 = *(_QWORD *)(v5 - 24);
  *(_OWORD *)(v5 - 40) = 0;
  v9 = _mm_loadu_si128((const __m128i *)(v5 - 16));
  *(_QWORD *)(v5 - 24) = 0;
  *(_OWORD *)(v5 - 16) = 0;
  v3[-2].m128i_i64[1] = v8;
  v3->m128i_i64[0] = 0;
  v3[-1] = v9;
  copy_tinfo_t(v3);
  v10 = _mm_loadu_si128((const __m128i *)(a2 + 72));
  v11 = *(_QWORD *)(a2 + 112);
  *(_QWORD *)(a1 + 104) = *(_QWORD *)(a2 + 104);
  result = *(unsigned __int8 *)(a2 + 120);
  *(__m128i *)(a1 + 72) = v10;
  v13 = _mm_loadu_si128((const __m128i *)(a2 + 88));
  *(_QWORD *)(a1 + 112) = v11;
  *(_BYTE *)(a1 + 120) = result;
  *(__m128i *)(a1 + 88) = v13;
  return result;
}

