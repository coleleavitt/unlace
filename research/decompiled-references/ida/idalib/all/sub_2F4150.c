int __fastcall sub_2F4150(__int64 a1, __int64 a2)
{
  size_t v2; // r15
  __int64 v3; // rax
  __int64 v4; // rcx
  size_t v5; // r15
  __int64 v6; // rax
  __int64 v7; // rcx
  __m128i si128; // xmm0
  size_t v9; // r12
  __int64 v10; // rax
  __int64 v11; // rcx
  size_t v12; // r12
  __int64 v13; // rax
  __int64 v14; // rcx
  __m128i v16; // [rsp+0h] [rbp-58h] BYREF
  __m128i v17[4]; // [rsp+10h] [rbp-48h] BYREF

  v2 = j__strlen("Check if block frequency is queried for an unknown block for debugging missed BFI updates");
  unk_2CDAAF0 = 0;
  qword_2CDAAE0 = &off_2C758B0;
  *(_QWORD *)&dword_2CDAAE8 = dword_2CDAAE8 & 0x80000000;
  qword_2CDAB20[1] = 0x100000000LL;
  unk_2CDAAF8 = 0;
  unk_2CDAB00 = 0;
  unk_2CDAB08 = 0;
  unk_2CDAB10 = 0;
  unk_2CDAB18 = 0;
  qword_2CDAB20[0] = &qword_2CDAB20[2];
  qword_2CDAB20[3] = &qword_2CDAB20[6];
  qword_2CDAB20[4] = 1;
  LODWORD(qword_2CDAB20[5]) = 0;
  BYTE4(qword_2CDAB20[5]) = 1;
  v3 = sub_2210FF0("Check if block frequency is queried for an unknown block for debugging missed BFI updates", a2);
  v4 = LODWORD(qword_2CDAB20[1]);
  if ( (unsigned __int64)LODWORD(qword_2CDAB20[1]) + 1 > HIDWORD(qword_2CDAB20[1]) )
  {
    v16.m128i_i64[0] = v3;
    sub_2237220(qword_2CDAB20, &qword_2CDAB20[2], LODWORD(qword_2CDAB20[1]) + 1LL, 8);
    v4 = LODWORD(qword_2CDAB20[1]);
    v3 = v16.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CDAB20[0] + 8 * v4) = v3;
  qword_2CDAB20[8] = off_2C714E8;
  qword_2CDAAE0 = off_2C75848;
  ++LODWORD(qword_2CDAB20[1]);
  LOWORD(qword_2CDAB20[9]) = 0;
  qword_2CDAB20[10] = off_2BEAB08;
  LOBYTE(qword_2CDAB20[7]) = 0;
  *(__m128 *)&qword_2CDAB20[13] = _mm_loadh_ps((const double *)off_2C78368);
  v16 = *(__m128i *)&qword_2CDAB20[13];
  sub_2217250(&qword_2CDAAE0, "check-bfi-unknown-block-queries", 31);
  unk_2CDAB08 = v2;
  LOBYTE(qword_2CDAB20[7]) = 0;
  LOWORD(qword_2CDAB20[9]) = 256;
  BYTE2(dword_2CDAAE8) = BYTE2(dword_2CDAAE8) & 0x9F | 0x20;
  unk_2CDAB00 = "Check if block frequency is queried for an unknown block for debugging missed BFI updates";
  sub_2218140(&qword_2CDAAE0);
  __cxa_atexit(sub_200E190, &qword_2CDAAE0, &off_2B25620);
  v5 = j__strlen("Apply an iterative post-processing to infer correct BFI counts");
  qword_2CDAA20 = &off_2C758B0;
  *(_QWORD *)&dword_2CDAA28 = dword_2CDAA28 & 0x80000000;
  qword_2CDAA60[1] = 0x100000000LL;
  unk_2CDAA30 = 0;
  unk_2CDAA38 = 0;
  unk_2CDAA40 = 0;
  unk_2CDAA48 = 0;
  unk_2CDAA50 = 0;
  unk_2CDAA58 = 0;
  qword_2CDAA60[0] = &qword_2CDAA60[2];
  qword_2CDAA60[3] = &qword_2CDAA60[6];
  qword_2CDAA60[4] = 1;
  LODWORD(qword_2CDAA60[5]) = 0;
  BYTE4(qword_2CDAA60[5]) = 1;
  v6 = sub_2210FF0("Apply an iterative post-processing to infer correct BFI counts", &qword_2CDAAE0);
  v7 = LODWORD(qword_2CDAA60[1]);
  si128 = _mm_load_si128(&v16);
  if ( (unsigned __int64)LODWORD(qword_2CDAA60[1]) + 1 > HIDWORD(qword_2CDAA60[1]) )
  {
    v16.m128i_i64[0] = v6;
    v17[0] = si128;
    sub_2237220(qword_2CDAA60, &qword_2CDAA60[2], LODWORD(qword_2CDAA60[1]) + 1LL, 8);
    v7 = LODWORD(qword_2CDAA60[1]);
    si128 = _mm_load_si128(v17);
    v6 = v16.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CDAA60[0] + 8 * v7) = v6;
  LOWORD(qword_2CDAA60[9]) = 0;
  qword_2CDAA60[8] = off_2C714E8;
  qword_2CDAA20 = off_2C75848;
  ++LODWORD(qword_2CDAA60[1]);
  LOBYTE(qword_2CDAA60[7]) = 0;
  qword_2CDAA60[10] = off_2BEAB08;
  *(__m128i *)&qword_2CDAA60[13] = si128;
  sub_2217250(&qword_2CDAA20, "use-iterative-bfi-inference", 27);
  unk_2CDAA48 = v5;
  BYTE2(dword_2CDAA28) = BYTE2(dword_2CDAA28) & 0x9F | 0x20;
  unk_2CDAA40 = "Apply an iterative post-processing to infer correct BFI counts";
  sub_2218140(&qword_2CDAA20);
  __cxa_atexit(sub_200E190, &qword_2CDAA20, &off_2B25620);
  v9 = j__strlen("Iterative inference: maximum number of update iterations per block");
  qword_2CDA960 = &off_2C758B0;
  *(_QWORD *)&dword_2CDA968 = dword_2CDA968 & 0x80000000;
  qword_2CDA9A0[1] = 0x100000000LL;
  unk_2CDA970 = 0;
  unk_2CDA978 = 0;
  unk_2CDA980 = 0;
  unk_2CDA988 = 0;
  unk_2CDA990 = 0;
  unk_2CDA998 = 0;
  qword_2CDA9A0[0] = &qword_2CDA9A0[2];
  qword_2CDA9A0[3] = &qword_2CDA9A0[6];
  qword_2CDA9A0[4] = 1;
  LODWORD(qword_2CDA9A0[5]) = 0;
  BYTE4(qword_2CDA9A0[5]) = 1;
  v10 = sub_2210FF0("Iterative inference: maximum number of update iterations per block", &qword_2CDAA20);
  v11 = LODWORD(qword_2CDA9A0[1]);
  if ( (unsigned __int64)LODWORD(qword_2CDA9A0[1]) + 1 > HIDWORD(qword_2CDA9A0[1]) )
  {
    v16.m128i_i64[0] = v10;
    sub_2237220(qword_2CDA9A0, &qword_2CDA9A0[2], LODWORD(qword_2CDA9A0[1]) + 1LL, 8);
    v11 = LODWORD(qword_2CDA9A0[1]);
    v10 = v16.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CDA9A0[0] + 8 * v11) = v10;
  ++LODWORD(qword_2CDA9A0[1]);
  LODWORD(qword_2CDA9A0[7]) = 0;
  qword_2CDA9A0[8] = off_2C712D0;
  LODWORD(qword_2CDA9A0[9]) = 0;
  BYTE4(qword_2CDA9A0[9]) = 0;
  qword_2CDA960 = off_2C75710;
  *(__m128 *)&qword_2CDA9A0[13] = _mm_loadh_ps((const double *)off_2C784F8);
  qword_2CDA9A0[10] = off_2BEAB98;
  sub_2217250(&qword_2CDA960, "iterative-bfi-max-iterations-per-block", 38);
  unk_2CDA988 = v9;
  LODWORD(qword_2CDA9A0[7]) = 1000;
  BYTE4(qword_2CDA9A0[9]) = 1;
  LODWORD(qword_2CDA9A0[9]) = 1000;
  BYTE2(dword_2CDA968) = BYTE2(dword_2CDA968) & 0x9F | 0x20;
  unk_2CDA980 = "Iterative inference: maximum number of update iterations per block";
  sub_2218140(&qword_2CDA960);
  __cxa_atexit(sub_1FED260, &qword_2CDA960, &off_2B25620);
  v12 = j__strlen(
          "Iterative inference: delta convergence precision; smaller values typically lead to better results at the cost "
          "of worsen runtime");
  qword_2CDA8A0 = &off_2C758B0;
  *(_QWORD *)&dword_2CDA8A8 = dword_2CDA8A8 & 0x80000000;
  qword_2CDA8E0[1] = 0x100000000LL;
  unk_2CDA8B0 = 0;
  unk_2CDA8B8 = 0;
  unk_2CDA8C0 = 0;
  unk_2CDA8C8 = 0;
  unk_2CDA8D0 = 0;
  unk_2CDA8D8 = 0;
  qword_2CDA8E0[0] = &qword_2CDA8E0[2];
  qword_2CDA8E0[3] = &qword_2CDA8E0[6];
  qword_2CDA8E0[4] = 1;
  LODWORD(qword_2CDA8E0[5]) = 0;
  BYTE4(qword_2CDA8E0[5]) = 1;
  v13 = sub_2210FF0(
          "Iterative inference: delta convergence precision; smaller values typically lead to better results at the cost "
          "of worsen runtime",
          &qword_2CDA960);
  v14 = LODWORD(qword_2CDA8E0[1]);
  if ( (unsigned __int64)LODWORD(qword_2CDA8E0[1]) + 1 > HIDWORD(qword_2CDA8E0[1]) )
  {
    v16.m128i_i64[0] = v13;
    sub_2237220(qword_2CDA8E0, &qword_2CDA8E0[2], LODWORD(qword_2CDA8E0[1]) + 1LL, 8);
    v14 = LODWORD(qword_2CDA8E0[1]);
    v13 = v16.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CDA8E0[0] + 8 * v14) = v13;
  ++LODWORD(qword_2CDA8E0[1]);
  qword_2CDA8E0[7] = 0;
  qword_2CDA8E0[8] = off_2C716B8;
  qword_2CDA8E0[9] = 0;
  LOBYTE(qword_2CDA8E0[10]) = 0;
  qword_2CDA8A0 = off_2C716D8;
  *(__m128 *)&qword_2CDA8E0[14] = _mm_loadh_ps((const double *)off_2C77C00);
  qword_2CDA8E0[11] = off_2BEABF8;
  sub_2217250(&qword_2CDA8A0, "iterative-bfi-precision", 23);
  unk_2CDA8C8 = v12;
  LOBYTE(qword_2CDA8E0[10]) = 1;
  qword_2CDA8E0[7] = 0x3D719799812DEA11LL;
  BYTE2(dword_2CDA8A8) = BYTE2(dword_2CDA8A8) & 0x9F | 0x20;
  unk_2CDA8C0 = "Iterative inference: delta convergence precision; smaller values typically lead to better results at the"
                " cost of worsen runtime";
  qword_2CDA8E0[9] = 0x3D719799812DEA11LL;
  sub_2218140(&qword_2CDA8A0);
  return __cxa_atexit(sub_20102F0, &qword_2CDA8A0, &off_2B25620);
}
