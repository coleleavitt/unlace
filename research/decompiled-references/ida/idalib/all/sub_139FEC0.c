__m128i **__fastcall sub_139FEC0(__m128i **a1, __int64 a2, int a3)
{
  __m128i *v3; // rax
  __m128i v4; // xmm0
  __m128i v5; // xmm0
  __m128i v6; // xmm0
  __m128i *v8; // rax
  __m128i si128; // xmm0
  __m128i v10; // xmm0
  __m128i *v11; // rax
  __m128i v12; // xmm0
  __m128i *v13; // rax
  __m128i v14; // xmm0
  __m128i *v15; // rax
  __m128i v16; // xmm0
  __m128i *v17; // rax
  __m128i v18; // xmm0
  __m128i v19; // xmm0
  __m128i *v20; // rax
  __m128i v21; // xmm0
  __m128i v22; // xmm0
  __m128i *v23; // rax
  __m128i v24; // xmm0
  __m128i *v25; // rax
  __m128i v26; // xmm0
  __m128i *v27; // rax
  __m128i v28; // xmm0
  __m128i *v29; // rax
  __m128i v30; // xmm0
  __m128i *v31; // rax
  __m128i v32; // xmm0
  __m128i v33; // xmm0
  __m128i *v34; // rax
  __m128i v35; // xmm0

  switch ( a3 )
  {
    case 0:
    case 13:
      *a1 = (__m128i *)(a1 + 2);
      v8 = (__m128i *)operator new(0x2Fu);
      si128 = _mm_load_si128((const __m128i *)&xmmword_23AA3C0);
      *a1 = v8;
      *v8 = si128;
      v10 = _mm_load_si128((const __m128i *)&xmmword_23AA3D0);
      a1[2] = (__m128i *)(&qword_28 + 6);
      v8[1] = v10;
      strcpy(v8[2].m128i_i8, "dling a record");
      a1[1] = (__m128i *)(&qword_28 + 6);
      break;
    case 1:
      *a1 = (__m128i *)(a1 + 2);
      v11 = (__m128i *)operator new(0x20u);
      v12 = _mm_load_si128((const __m128i *)&xmmword_23AA2C0);
      *a1 = v11;
      a1[2] = (__m128i *)(&qword_18 + 7);
      a1[1] = (__m128i *)(&qword_18 + 7);
      *v11 = v12;
      strcpy(v11[1].m128i_i8, "iagnostics file");
      break;
    case 2:
      *a1 = (__m128i *)(a1 + 2);
      v13 = (__m128i *)operator new(0x1Eu);
      v14 = _mm_load_si128((const __m128i *)&xmmword_23AA2D0);
      a1[2] = (__m128i *)(&qword_18 + 5);
      *a1 = v13;
      *v13 = v14;
      strcpy(v13[1].m128i_i8, "ics signature");
      a1[1] = (__m128i *)(&qword_18 + 5);
      break;
    case 3:
      *a1 = (__m128i *)(a1 + 2);
      v15 = (__m128i *)operator new(0x20u);
      v16 = _mm_load_si128((const __m128i *)&xmmword_23AA2E0);
      *a1 = v15;
      a1[2] = (__m128i *)(&qword_18 + 7);
      a1[1] = (__m128i *)(&qword_18 + 7);
      *v15 = v16;
      strcpy(v15[1].m128i_i8, "ing diagnostics");
      break;
    case 4:
      *a1 = (__m128i *)(a1 + 2);
      v17 = (__m128i *)operator new(0x2Cu);
      v18 = _mm_load_si128((const __m128i *)&xmmword_23AA2F0);
      *a1 = v17;
      *v17 = v18;
      v19 = _mm_load_si128((const __m128i *)&xmmword_23AA300);
      a1[2] = (__m128i *)(&qword_28 + 3);
      v17[1] = v19;
      strcpy(v17[2].m128i_i8, "diagnostics");
      a1[1] = (__m128i *)(&qword_28 + 3);
      break;
    case 5:
      *a1 = (__m128i *)(a1 + 2);
      v20 = (__m128i *)operator new(0x24u);
      v21 = _mm_load_si128((const __m128i *)&xmmword_23AA310);
      a1[2] = (__m128i *)(&qword_20 + 3);
      *a1 = v20;
      *v20 = v21;
      v22 = _mm_load_si128((const __m128i *)&xmmword_23AA320);
      v20[2].m128i_i16[0] = 26996;
      v20[1] = v22;
      v20[2].m128i_i8[2] = 99;
      a1[1] = (__m128i *)(&qword_20 + 3);
      v20[2].m128i_i8[3] = 0;
      break;
    case 6:
      *a1 = (__m128i *)(a1 + 2);
      v23 = (__m128i *)operator new(0x1Au);
      v24 = _mm_load_si128((const __m128i *)&xmmword_23AA330);
      a1[2] = (__m128i *)(&qword_18 + 1);
      *a1 = v23;
      *v23 = v24;
      strcpy(v23[1].m128i_i8, "nfo block");
      a1[1] = (__m128i *)(&qword_18 + 1);
      break;
    case 7:
      *a1 = (__m128i *)(a1 + 2);
      v25 = (__m128i *)operator new(0x19u);
      v26 = _mm_load_si128((const __m128i *)&xmmword_23AA340);
      a1[2] = (__m128i *)&qword_18;
      *a1 = v25;
      *v25 = v26;
      strcpy(v25[1].m128i_i8, "ta block");
      a1[1] = (__m128i *)&qword_18;
      break;
    case 8:
      *a1 = (__m128i *)(a1 + 2);
      v27 = (__m128i *)operator new(0x1Bu);
      v28 = _mm_load_si128((const __m128i *)&xmmword_23AA350);
      *a1 = v27;
      a1[2] = (__m128i *)(&qword_18 + 2);
      *v27 = v28;
      strcpy(v27[1].m128i_i8, "stic block");
      a1[1] = (__m128i *)(&qword_18 + 2);
      break;
    case 9:
      *a1 = (__m128i *)(a1 + 2);
      v29 = (__m128i *)operator new(0x1Cu);
      v30 = _mm_load_si128((const __m128i *)&xmmword_23AA350);
      *a1 = v29;
      a1[2] = (__m128i *)(&qword_18 + 3);
      *v29 = v30;
      strcpy(v29[1].m128i_i8, "stic record");
      a1[1] = (__m128i *)(&qword_18 + 3);
      break;
    case 10:
      *a1 = (__m128i *)(a1 + 2);
      v31 = (__m128i *)operator new(0x23u);
      v32 = _mm_load_si128((const __m128i *)&xmmword_23AA360);
      a1[2] = (__m128i *)(&qword_20 + 2);
      *a1 = v31;
      *v31 = v32;
      v33 = _mm_load_si128((const __m128i *)&xmmword_23AA370);
      strcpy(v31[2].m128i_i8, "cs");
      v31[1] = v33;
      a1[1] = (__m128i *)(&qword_20 + 2);
      break;
    case 11:
      *a1 = (__m128i *)(a1 + 2);
      v34 = (__m128i *)operator new(0x20u);
      v35 = _mm_load_si128((const __m128i *)&xmmword_23AA380);
      a1[2] = (__m128i *)(&qword_18 + 7);
      strcpy(v34[1].m128i_i8, "nostics version");
      *a1 = v34;
      a1[1] = (__m128i *)(&qword_18 + 7);
      *v34 = v35;
      break;
    case 12:
      *a1 = (__m128i *)(a1 + 2);
      v3 = (__m128i *)operator new(0x40u);
      v4 = _mm_load_si128((const __m128i *)&xmmword_23AA390);
      *a1 = v3;
      *v3 = v4;
      v5 = _mm_load_si128((const __m128i *)&xmmword_23AA3A0);
      a1[2] = (__m128i *)(&word_3E + 1);
      v3[1] = v5;
      v6 = _mm_load_si128((const __m128i *)&xmmword_23AA3B0);
      strcpy(v3[3].m128i_i8, "gnostics appear");
      a1[1] = (__m128i *)(&word_3E + 1);
      v3[2] = v6;
      break;
  }
  return a1;
}
