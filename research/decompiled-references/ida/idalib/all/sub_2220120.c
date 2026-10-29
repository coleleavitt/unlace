__int64 __fastcall sub_2220120(__int64 a1, __int64 a2, int a3)
{
  __m128i *v3; // rax
  __m128i si128; // xmm0
  __m128i v5; // xmm0
  __m128i v6; // xmm0
  __m128i v7; // xmm0
  __m128i *v9; // rax
  __m128i v10; // xmm0

  switch ( a3 )
  {
    case 2:
      goto LABEL_5;
    case 3:
      *(_QWORD *)a1 = a1 + 16;
      v3 = (__m128i *)operator new(0x7Cu);
      si128 = _mm_load_si128((const __m128i *)&xmmword_23ABA80);
      *(_QWORD *)a1 = v3;
      *v3 = si128;
      v5 = _mm_load_si128((const __m128i *)&xmmword_23ABA90);
      strcpy(v3[7].m128i_i8, "file a bug.");
      v3[1] = v5;
      v3[2] = _mm_load_si128((const __m128i *)&xmmword_23ABAA0);
      v3[3] = _mm_load_si128((const __m128i *)&xmmword_23ABAB0);
      v3[4] = _mm_load_si128((const __m128i *)&xmmword_23ABAC0);
      v6 = _mm_load_si128((const __m128i *)&xmmword_23ABAD0);
      *(_QWORD *)(a1 + 16) = 123;
      v3[5] = v6;
      v7 = _mm_load_si128((const __m128i *)&xmmword_23ABAE0);
      *(_QWORD *)(a1 + 8) = 123;
      v3[6] = v7;
      return a1;
    case 1:
      *(_QWORD *)a1 = a1 + 16;
      strcpy((char *)(a1 + 16), "Multiple errors");
      *(_QWORD *)(a1 + 8) = 15;
      return a1;
    default:
LABEL_5:
      *(_QWORD *)a1 = a1 + 16;
      v9 = (__m128i *)operator new(0x17u);
      v10 = _mm_load_si128((const __m128i *)&xmmword_23ABAF0);
      *(_QWORD *)(a1 + 16) = 22;
      *(_QWORD *)a1 = v9;
      *v9 = v10;
      strcpy(v9[1].m128i_i8, "urred.");
      *(_QWORD *)(a1 + 8) = 22;
      return a1;
  }
}
