__int64 __fastcall sub_7B6A40(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rsi
  __int64 v3; // rbx
  __m128i si128; // xmm0
  __m128i v5; // xmm0
  __int64 v7; // rax
  __m128i v8[9]; // [rsp+30h] [rbp-B8h] BYREF
  unsigned __int64 v9; // [rsp+C8h] [rbp-20h]

  v1 = a1[1];
  v2 = *a1;
  v9 = __readfsqword(0x28u);
  if ( a1[2] < (unsigned __int64)(v1 + 1) )
  {
    v7 = qvector_reserve(a1, v2, v1 + 1, 280);
    v1 = a1[1];
    *a1 = v7;
    v2 = v7;
  }
  v3 = v2 + 280 * v1;
  memset(v8, 0, sizeof(v8));
  *(_QWORD *)v3 = 0;
  *(_OWORD *)(v3 + 8) = 0;
  *(_QWORD *)(v3 + 24) = 0;
  *(_OWORD *)(v3 + 32) = 0;
  *(_QWORD *)(v3 + 48) = 0;
  *(_OWORD *)(v3 + 56) = 0;
  *(_QWORD *)(v3 + 72) = 0;
  *(_QWORD *)(v3 + 96) = 0;
  *(_OWORD *)(v3 + 80) = 0;
  *(_OWORD *)(v3 + 104) = 0;
  si128 = _mm_load_si128(v8);
  *(_QWORD *)(v3 + 120) = -1;
  *(__m128i *)(v3 + 128) = si128;
  v5 = _mm_load_si128(&v8[1]);
  *(_DWORD *)(v3 + 272) = -1;
  *(__m128i *)(v3 + 144) = v5;
  *(__m128i *)(v3 + 160) = _mm_load_si128(&v8[2]);
  *(__m128i *)(v3 + 176) = _mm_load_si128(&v8[3]);
  *(__m128i *)(v3 + 192) = _mm_load_si128(&v8[4]);
  *(__m128i *)(v3 + 208) = _mm_load_si128(&v8[5]);
  *(__m128i *)(v3 + 224) = _mm_load_si128(&v8[6]);
  *(__m128i *)(v3 + 240) = _mm_load_si128(&v8[7]);
  *(__m128i *)(v3 + 256) = _mm_load_si128(&v8[8]);
  ++a1[1];
  return v3;
}

