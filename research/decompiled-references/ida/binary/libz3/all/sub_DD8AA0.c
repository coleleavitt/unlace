unsigned __int64 __fastcall sub_DD8AA0(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __m128i si128; // xmm0
  __m128i v5; // xmm0
  __m128i v6; // xmm0
  __m128i v7; // xmm0
  __m128i v8; // xmm0
  __m128i v9; // xmm0
  __m128i v10; // xmm0

  *(_OWORD *)(a1 + 1392) = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_18B6900);
  *(_WORD *)(a1 + 16) = 0;
  *(__m128i *)(a1 + 76) = si128;
  v5 = _mm_load_si128((const __m128i *)&xmmword_18B6910);
  *(_BYTE *)(a1 + 44) &= 0xFCu;
  *(__m128i *)(a1 + 92) = v5;
  v6 = _mm_load_si128((const __m128i *)&xmmword_18B6920);
  *(_BYTE *)(a1 + 60) &= 0xFCu;
  *(_QWORD *)a1 = a2;
  *(_BYTE *)(a1 + 8) = a4;
  *(_DWORD *)(a1 + 12) = 0;
  *(_QWORD *)(a1 + 20) = 1;
  *(_QWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 56) = 1;
  *(_QWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 72) = -1;
  *(_QWORD *)(a1 + 1356) = 0;
  *(_QWORD *)(a1 + 1368) = 0;
  *(_QWORD *)(a1 + 1376) = a3;
  *(_BYTE *)(a1 + 1384) = 0;
  *(__m128i *)(a1 + 108) = v6;
  v7 = _mm_load_si128((const __m128i *)&xmmword_18B6930);
  *(_BYTE *)(a1 + 85) = 32;
  *(__m128i *)(a1 + 124) = v7;
  v8 = _mm_load_si128((const __m128i *)&xmmword_18B6940);
  *(_BYTE *)(a1 + 89) = 32;
  *(__m128i *)(a1 + 156) = v8;
  v9 = _mm_load_si128((const __m128i *)&xmmword_18B6950);
  *(_BYTE *)(a1 + 133) = 48;
  *(__m128i *)(a1 + 172) = v9;
  *(__m128i *)(a1 + 188) = _mm_load_si128((const __m128i *)&xmmword_18B6960);
  *(__m128i *)(a1 + 204) = _mm_load_si128((const __m128i *)&xmmword_18B6970);
  *(__m128i *)(a1 + 220) = _mm_load_si128((const __m128i *)&xmmword_18B6980);
  *(__m128i *)(a1 + 236) = _mm_load_si128((const __m128i *)&xmmword_18B6990);
  *(__m128i *)(a1 + 252) = _mm_load_si128((const __m128i *)&xmmword_18B69A0);
  *(__m128i *)(a1 + 268) = _mm_load_si128((const __m128i *)&xmmword_18B69B0);
  *(__m128i *)(a1 + 284) = _mm_load_si128((const __m128i *)&xmmword_18B69C0);
  *(__m128i *)(a1 + 300) = _mm_load_si128((const __m128i *)&xmmword_18B69D0);
  *(__m128i *)(a1 + 316) = _mm_load_si128((const __m128i *)&xmmword_18B69E0);
  v10 = _mm_shuffle_epi32(_mm_cvtsi32_si128(0x61616161u), 0);
  *(_QWORD *)(a1 + 125) = 0x3030303030303030LL;
  *(__m128i *)(a1 + 174) = v10;
  *(__m128i *)(a1 + 141) = v10;
  *(__m128i *)(a1 + 183) = v10;
  *(__m128i *)(a1 + 151) = v10;
  *(_BYTE *)(a1 + 202) = 97;
  *(_BYTE *)(a1 + 109) = 97;
  *(_BYTE *)(a1 + 140) = 97;
  *(_WORD *)(a1 + 112) = 24929;
  *(_BYTE *)(a1 + 114) = 97;
  *(_WORD *)(a1 + 170) = 24929;
  *(_WORD *)(a1 + 118) = 24929;
  *(_DWORD *)(a1 + 136) = 1633771873;
  *(_WORD *)(a1 + 122) = 24929;
  *(_BYTE *)(a1 + 120) = 97;
  return sub_DD7C60(a1);
}

