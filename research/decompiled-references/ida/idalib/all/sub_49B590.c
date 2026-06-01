__int64 __fastcall sub_49B590(__int64 a1, __int64 *a2)
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
  __int64 v26; // rax
  __m128i v27; // xmm1
  __int64 v28; // rax
  unsigned __int64 v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rdx
  __m128i v32; // xmm0
  __int64 v33; // rax
  __m128i v34; // xmm0
  __int64 v35; // rax
  __m128i v36; // xmm1
  __int64 result; // rax
  __int64 v38; // rdx

  v2 = *a2;
  v3 = _mm_loadu_si128((const __m128i *)(a2 + 1));
  *a2 = 0;
  v5 = a2 + 44;
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
  v25 = a2[33];
  *(_OWORD *)(a2 + 31) = 0;
  *(_QWORD *)(a1 + 264) = v25;
  *(_WORD *)(a1 + 272) = *((_WORD *)a2 + 136);
  *(_BYTE *)(a1 + 274) = *((_BYTE *)a2 + 274);
  v26 = a2[35];
  v27 = _mm_loadu_si128((const __m128i *)a2 + 18);
  a2[35] = 0;
  *(_QWORD *)(a1 + 280) = v26;
  *(__m128i *)(a1 + 288) = v27;
  v28 = a2[38];
  *((_OWORD *)a2 + 18) = 0;
  v29 = a2[39];
  *(_QWORD *)(a1 + 304) = v28;
  v30 = a2[40];
  *(_QWORD *)(a1 + 312) = v29;
  *(_QWORD *)(a1 + 320) = v30;
  v31 = a2[41];
  v32 = _mm_loadu_si128((const __m128i *)a2 + 21);
  *(_QWORD *)(a1 + 352) = 0;
  *(_QWORD *)(a1 + 328) = v31;
  *(__m128i *)(a1 + 336) = v32;
  if ( (__int64 *)a2[38] == v5 )
  {
    *(_QWORD *)(a1 + 304) = a1 + 352;
    *(_QWORD *)(a1 + 352) = a2[44];
  }
  if ( v30 )
    *(_QWORD *)(*(_QWORD *)(a1 + 304) + 8 * (*(_QWORD *)(v30 + 8) % v29)) = a1 + 320;
  v33 = a2[45];
  v34 = _mm_loadu_si128((const __m128i *)a2 + 23);
  a2[43] = 0;
  a2[39] = 1;
  a2[44] = 0;
  a2[38] = (__int64)v5;
  a2[40] = 0;
  a2[41] = 0;
  *(__m128i *)(a1 + 368) = v34;
  *(_QWORD *)(a1 + 360) = v33;
  v35 = a2[48];
  v36 = _mm_loadu_si128((const __m128i *)(a2 + 49));
  a2[45] = 0;
  *((_OWORD *)a2 + 23) = 0;
  *(_QWORD *)(a1 + 384) = v35;
  *(__m128i *)(a1 + 392) = v36;
  result = *((unsigned __int16 *)a2 + 208);
  v38 = a2[51];
  a2[48] = 0;
  *(_OWORD *)(a2 + 49) = 0;
  *(_QWORD *)(a1 + 408) = v38;
  *(_WORD *)(a1 + 416) = result;
  return result;
}
