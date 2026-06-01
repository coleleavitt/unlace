__int64 __fastcall sub_486910(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  __m128i v3; // xmm0
  __int64 *v5; // r8
  __int64 v6; // rax
  __m128i v7; // xmm1
  __int64 v8; // rax
  __m128i v9; // xmm1
  __int64 v10; // rax
  __m128i v11; // xmm1
  __int64 v12; // rax
  __m128i v13; // xmm1
  __int64 v14; // rax
  __m128i v15; // xmm1
  __int64 v16; // rax
  __m128i v17; // xmm1
  __int64 v18; // rax
  __int64 v19; // rax
  __m128i v20; // xmm1
  __int64 v21; // rax
  __m128i v22; // xmm1
  __int64 v23; // rax
  __m128i v24; // xmm1
  __int64 v25; // rax
  __m128i v26; // xmm1
  __int64 v27; // rax
  unsigned __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rdx
  __m128i v31; // xmm0
  __int64 v32; // rax
  __m128i v33; // xmm0
  __int64 v34; // rax
  __m128i v35; // xmm1
  __int64 result; // rax
  __int64 v37; // rdx

  v2 = *a2;
  v3 = _mm_loadu_si128((const __m128i *)(a2 + 1));
  *a2 = 0;
  v5 = a2 + 43;
  *(__m128i *)(a1 + 8) = v3;
  *(_QWORD *)a1 = v2;
  v6 = a2[3];
  v7 = _mm_loadu_si128((const __m128i *)a2 + 2);
  *(_OWORD *)(a2 + 1) = 0;
  *(_QWORD *)(a1 + 24) = v6;
  *(__m128i *)(a1 + 32) = v7;
  v8 = a2[6];
  v9 = _mm_loadu_si128((const __m128i *)(a2 + 7));
  *((_OWORD *)a2 + 2) = 0;
  a2[3] = 0;
  *(_QWORD *)(a1 + 48) = v8;
  *(__m128i *)(a1 + 56) = v9;
  v10 = a2[9];
  v11 = _mm_loadu_si128((const __m128i *)a2 + 5);
  *(_OWORD *)(a2 + 7) = 0;
  a2[6] = 0;
  *(_QWORD *)(a1 + 72) = v10;
  *(__m128i *)(a1 + 80) = v11;
  v12 = a2[12];
  v13 = _mm_loadu_si128((const __m128i *)(a2 + 13));
  *((_OWORD *)a2 + 5) = 0;
  a2[9] = 0;
  *(__m128i *)(a1 + 104) = v13;
  *(_QWORD *)(a1 + 96) = v12;
  LODWORD(v12) = *((_DWORD *)a2 + 30);
  *(_OWORD *)(a2 + 13) = 0;
  a2[12] = 0;
  *(_DWORD *)(a1 + 120) = v12;
  v14 = a2[16];
  v15 = _mm_loadu_si128((const __m128i *)(a2 + 17));
  a2[16] = 0;
  *(_QWORD *)(a1 + 128) = v14;
  *(__m128i *)(a1 + 136) = v15;
  v16 = a2[19];
  v17 = _mm_loadu_si128((const __m128i *)a2 + 10);
  *(_OWORD *)(a2 + 17) = 0;
  *(_QWORD *)(a1 + 152) = v16;
  *(__m128i *)(a1 + 160) = v17;
  v18 = a2[22];
  *((_OWORD *)a2 + 10) = 0;
  a2[19] = 0;
  *(_QWORD *)(a1 + 176) = v18;
  *(_BYTE *)(a1 + 184) = *((_BYTE *)a2 + 184);
  v19 = a2[24];
  v20 = _mm_loadu_si128((const __m128i *)(a2 + 25));
  a2[24] = 0;
  *(_QWORD *)(a1 + 192) = v19;
  *(__m128i *)(a1 + 200) = v20;
  v21 = a2[27];
  v22 = _mm_loadu_si128((const __m128i *)a2 + 14);
  *(_OWORD *)(a2 + 25) = 0;
  *(_QWORD *)(a1 + 216) = v21;
  *(__m128i *)(a1 + 224) = v22;
  v23 = a2[30];
  v24 = _mm_loadu_si128((const __m128i *)(a2 + 31));
  *((_OWORD *)a2 + 14) = 0;
  a2[27] = 0;
  a2[30] = 0;
  *(_QWORD *)(a1 + 240) = v23;
  *(__m128i *)(a1 + 248) = v24;
  LODWORD(v23) = *((_DWORD *)a2 + 66);
  *(_OWORD *)(a2 + 31) = 0;
  *(_DWORD *)(a1 + 264) = v23;
  *(_WORD *)(a1 + 268) = *((_WORD *)a2 + 134);
  *(_BYTE *)(a1 + 270) = *((_BYTE *)a2 + 270);
  v25 = a2[34];
  v26 = _mm_loadu_si128((const __m128i *)(a2 + 35));
  a2[34] = 0;
  *(_QWORD *)(a1 + 272) = v25;
  *(__m128i *)(a1 + 280) = v26;
  v27 = a2[37];
  *(_OWORD *)(a2 + 35) = 0;
  v28 = a2[38];
  *(_QWORD *)(a1 + 296) = v27;
  v29 = a2[39];
  *(_QWORD *)(a1 + 304) = v28;
  *(_QWORD *)(a1 + 312) = v29;
  v30 = a2[40];
  v31 = _mm_loadu_si128((const __m128i *)(a2 + 41));
  *(_QWORD *)(a1 + 344) = 0;
  *(_QWORD *)(a1 + 320) = v30;
  *(__m128i *)(a1 + 328) = v31;
  if ( (__int64 *)a2[37] == v5 )
  {
    *(_QWORD *)(a1 + 296) = a1 + 344;
    *(_QWORD *)(a1 + 344) = a2[43];
  }
  if ( v29 )
    *(_QWORD *)(*(_QWORD *)(a1 + 296) + 8 * (*(unsigned int *)(v29 + 8) % v28)) = a1 + 312;
  v32 = a2[44];
  v33 = _mm_loadu_si128((const __m128i *)(a2 + 45));
  a2[42] = 0;
  a2[38] = 1;
  a2[43] = 0;
  a2[37] = (__int64)v5;
  a2[39] = 0;
  a2[40] = 0;
  *(__m128i *)(a1 + 360) = v33;
  *(_QWORD *)(a1 + 352) = v32;
  v34 = a2[47];
  v35 = _mm_loadu_si128((const __m128i *)a2 + 24);
  a2[44] = 0;
  *(_OWORD *)(a2 + 45) = 0;
  *(_QWORD *)(a1 + 376) = v34;
  *(__m128i *)(a1 + 384) = v35;
  result = *((unsigned __int16 *)a2 + 204);
  v37 = a2[50];
  a2[47] = 0;
  *((_OWORD *)a2 + 24) = 0;
  *(_QWORD *)(a1 + 400) = v37;
  *(_WORD *)(a1 + 408) = result;
  return result;
}

