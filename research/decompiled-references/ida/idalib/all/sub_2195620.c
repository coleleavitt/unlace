__m128i **__fastcall sub_2195620(__m128i **a1, __int64 a2, int a3)
{
  __m128i *v3; // rax
  __m128i v4; // xmm0
  __m128i **result; // rax
  __m128i *v6; // rax
  __m128i si128; // xmm0
  __m128i v8; // xmm0
  __m128i *v9; // rax
  __m128i v10; // xmm0
  __m128i v11; // xmm0
  __m128i *v12; // rax
  __m128i v13; // xmm0
  __m128i v14; // xmm0
  __m128i *v15; // rax
  __m128i v16; // xmm0
  __m128i v17; // xmm0
  __m128i v18; // xmm0
  __m128i *v19; // rax
  __m128i v20; // xmm0
  __m128i v21; // xmm0
  __m128i v22; // xmm0
  __m128i *v23; // rax
  __m128i v24; // xmm0
  __m128i v25; // xmm0
  __m128i *v26; // rax
  __m128i v27; // xmm0
  __m128i *v28; // rax
  __m128i v29; // xmm0
  __m128i v30; // xmm0

  switch ( a3 )
  {
    case 0:
    case 9:
      *a1 = (__m128i *)(a1 + 2);
      v6 = (__m128i *)operator new(0x2Fu);
      si128 = _mm_load_si128((const __m128i *)&xmmword_23AB720);
      *a1 = v6;
      *v6 = si128;
      v8 = _mm_load_si128((const __m128i *)&xmmword_23AB730);
      strcpy(v6[2].m128i_i8, "he object file");
      v6[1] = v8;
      a1[2] = (__m128i *)(&qword_28 + 6);
      a1[1] = (__m128i *)(&qword_28 + 6);
      result = a1;
      break;
    case 1:
      *a1 = (__m128i *)(a1 + 2);
      v9 = (__m128i *)operator new(0x2Au);
      v10 = _mm_load_si128((const __m128i *)&xmmword_23AB610);
      a1[2] = (__m128i *)(&qword_28 + 1);
      *a1 = v9;
      *v9 = v10;
      v11 = _mm_load_si128((const __m128i *)&xmmword_23AB620);
      strcpy(v9[2].m128i_i8, "hitecture");
      v9[1] = v11;
      a1[1] = (__m128i *)(&qword_28 + 1);
      result = a1;
      break;
    case 2:
      *a1 = (__m128i *)(a1 + 2);
      v12 = (__m128i *)operator new(0x33u);
      v13 = _mm_load_si128((const __m128i *)&xmmword_23AB630);
      a1[2] = (__m128i *)(&dword_30 + 2);
      *a1 = v12;
      *v12 = v13;
      v14 = _mm_load_si128((const __m128i *)&xmmword_23AB640);
      strcpy(v12[3].m128i_i8, "le");
      v12[1] = v14;
      v12[2] = _mm_load_si128((const __m128i *)&xmmword_23AB650);
      a1[1] = (__m128i *)(&dword_30 + 2);
      result = a1;
      break;
    case 3:
      *a1 = (__m128i *)(a1 + 2);
      v15 = (__m128i *)operator new(0x34u);
      v16 = _mm_load_si128((const __m128i *)&xmmword_23AB660);
      a1[2] = (__m128i *)(&dword_30 + 3);
      *a1 = v15;
      *v15 = v16;
      v17 = _mm_load_si128((const __m128i *)&xmmword_23AB670);
      v15[3].m128i_i16[0] = 27753;
      v15[1] = v17;
      v18 = _mm_load_si128((const __m128i *)&xmmword_23AB680);
      v15[3].m128i_i8[2] = 101;
      v15[2] = v18;
      v15[3].m128i_i8[3] = 0;
      a1[1] = (__m128i *)(&dword_30 + 3);
      result = a1;
      break;
    case 4:
      *a1 = (__m128i *)(a1 + 2);
      v19 = (__m128i *)operator new(0x31u);
      v20 = _mm_load_si128((const __m128i *)&xmmword_23AB690);
      a1[2] = (__m128i *)&dword_30;
      *a1 = v19;
      *v19 = v20;
      v21 = _mm_load_si128((const __m128i *)&xmmword_23AB6A0);
      v19[3].m128i_i8[0] = 0;
      v19[1] = v21;
      v22 = _mm_load_si128((const __m128i *)&xmmword_23AB6B0);
      a1[1] = (__m128i *)&dword_30;
      v19[2] = v22;
      result = a1;
      break;
    case 5:
      *a1 = (__m128i *)(a1 + 2);
      v23 = (__m128i *)operator new(0x2Du);
      v24 = _mm_load_si128((const __m128i *)&xmmword_23AB6C0);
      a1[2] = (__m128i *)(&qword_28 + 4);
      *a1 = v23;
      *v23 = v24;
      v25 = _mm_load_si128((const __m128i *)&xmmword_23AB6D0);
      strcpy(v23[2].m128i_i8, "l terminator");
      v23[1] = v25;
      a1[1] = (__m128i *)(&qword_28 + 4);
      result = a1;
      break;
    case 6:
      *a1 = (__m128i *)(a1 + 2);
      v26 = (__m128i *)operator new(0x16u);
      v27 = _mm_load_si128((const __m128i *)&xmmword_23AB6E0);
      a1[2] = (__m128i *)(&dword_14 + 1);
      *a1 = v26;
      *v26 = v27;
      v26[1].m128i_i32[0] = 1701080681;
      v26[1].m128i_i8[4] = 120;
      v26[1].m128i_i8[5] = 0;
      a1[1] = (__m128i *)(&dword_14 + 1);
      result = a1;
      break;
    case 7:
      *a1 = (__m128i *)(a1 + 2);
      v28 = (__m128i *)operator new(0x29u);
      v29 = _mm_load_si128((const __m128i *)&xmmword_23AB6F0);
      a1[2] = (__m128i *)&qword_28;
      *a1 = v28;
      *v28 = v29;
      v30 = _mm_load_si128((const __m128i *)&xmmword_23AB700);
      strcpy(v28[2].m128i_i8, "ect file");
      v28[1] = v30;
      a1[1] = (__m128i *)&qword_28;
      result = a1;
      break;
    case 8:
      *a1 = (__m128i *)(a1 + 2);
      v3 = (__m128i *)operator new(0x15u);
      v4 = _mm_load_si128((const __m128i *)&xmmword_23AB710);
      a1[2] = (__m128i *)&dword_14;
      *a1 = v3;
      *v3 = v4;
      strcpy(v3[1].m128i_i8, "ndex");
      a1[1] = (__m128i *)&dword_14;
      result = a1;
      break;
  }
  return result;
}
