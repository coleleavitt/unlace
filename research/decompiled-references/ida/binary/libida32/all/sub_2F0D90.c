int __fastcall sub_2F0D90(__int64 a1, __int64 a2)
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
  unk_2CB0BD0 = 0;
  qword_2CB0BC0 = &off_2C4B8B0;
  *(_QWORD *)&dword_2CB0BC8 = dword_2CB0BC8 & 0x80000000;
  qword_2CB0C00[1] = 0x100000000LL;
  unk_2CB0BD8 = 0;
  unk_2CB0BE0 = 0;
  unk_2CB0BE8 = 0;
  unk_2CB0BF0 = 0;
  unk_2CB0BF8 = 0;
  qword_2CB0C00[0] = &qword_2CB0C00[2];
  qword_2CB0C00[3] = &qword_2CB0C00[6];
  qword_2CB0C00[4] = 1;
  LODWORD(qword_2CB0C00[5]) = 0;
  BYTE4(qword_2CB0C00[5]) = 1;
  v3 = sub_21ED2B0("Check if block frequency is queried for an unknown block for debugging missed BFI updates", a2);
  v4 = LODWORD(qword_2CB0C00[1]);
  if ( (unsigned __int64)LODWORD(qword_2CB0C00[1]) + 1 > HIDWORD(qword_2CB0C00[1]) )
  {
    v16.m128i_i64[0] = v3;
    sub_22134E0(qword_2CB0C00, &qword_2CB0C00[2], LODWORD(qword_2CB0C00[1]) + 1LL, 8);
    v4 = LODWORD(qword_2CB0C00[1]);
    v3 = v16.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CB0C00[0] + 8 * v4) = v3;
  qword_2CB0C00[8] = off_2C474E8;
  qword_2CB0BC0 = off_2C4B848;
  ++LODWORD(qword_2CB0C00[1]);
  LOWORD(qword_2CB0C00[9]) = 0;
  qword_2CB0C00[10] = off_2BC0B68;
  LOBYTE(qword_2CB0C00[7]) = 0;
  *(__m128 *)&qword_2CB0C00[13] = _mm_loadh_ps((const double *)off_2C4E368);
  v16 = *(__m128i *)&qword_2CB0C00[13];
  sub_21F3510(&qword_2CB0BC0, "check-bfi-unknown-block-queries", 31);
  unk_2CB0BE8 = v2;
  LOBYTE(qword_2CB0C00[7]) = 0;
  LOWORD(qword_2CB0C00[9]) = 256;
  BYTE2(dword_2CB0BC8) = BYTE2(dword_2CB0BC8) & 0x9F | 0x20;
  unk_2CB0BE0 = "Check if block frequency is queried for an unknown block for debugging missed BFI updates";
  sub_21F4400(&qword_2CB0BC0);
  __cxa_atexit(sub_1FEA450, &qword_2CB0BC0, &off_2AFC540);
  v5 = j__strlen("Apply an iterative post-processing to infer correct BFI counts");
  qword_2CB0B00 = &off_2C4B8B0;
  *(_QWORD *)&dword_2CB0B08 = dword_2CB0B08 & 0x80000000;
  qword_2CB0B40[1] = 0x100000000LL;
  unk_2CB0B10 = 0;
  unk_2CB0B18 = 0;
  unk_2CB0B20 = 0;
  unk_2CB0B28 = 0;
  unk_2CB0B30 = 0;
  unk_2CB0B38 = 0;
  qword_2CB0B40[0] = &qword_2CB0B40[2];
  qword_2CB0B40[3] = &qword_2CB0B40[6];
  qword_2CB0B40[4] = 1;
  LODWORD(qword_2CB0B40[5]) = 0;
  BYTE4(qword_2CB0B40[5]) = 1;
  v6 = sub_21ED2B0("Apply an iterative post-processing to infer correct BFI counts", &qword_2CB0BC0);
  v7 = LODWORD(qword_2CB0B40[1]);
  si128 = _mm_load_si128(&v16);
  if ( (unsigned __int64)LODWORD(qword_2CB0B40[1]) + 1 > HIDWORD(qword_2CB0B40[1]) )
  {
    v16.m128i_i64[0] = v6;
    v17[0] = si128;
    sub_22134E0(qword_2CB0B40, &qword_2CB0B40[2], LODWORD(qword_2CB0B40[1]) + 1LL, 8);
    v7 = LODWORD(qword_2CB0B40[1]);
    si128 = _mm_load_si128(v17);
    v6 = v16.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CB0B40[0] + 8 * v7) = v6;
  LOWORD(qword_2CB0B40[9]) = 0;
  qword_2CB0B40[8] = off_2C474E8;
  qword_2CB0B00 = off_2C4B848;
  ++LODWORD(qword_2CB0B40[1]);
  LOBYTE(qword_2CB0B40[7]) = 0;
  qword_2CB0B40[10] = off_2BC0B68;
  *(__m128i *)&qword_2CB0B40[13] = si128;
  sub_21F3510(&qword_2CB0B00, "use-iterative-bfi-inference", 27);
  unk_2CB0B28 = v5;
  BYTE2(dword_2CB0B08) = BYTE2(dword_2CB0B08) & 0x9F | 0x20;
  unk_2CB0B20 = "Apply an iterative post-processing to infer correct BFI counts";
  sub_21F4400(&qword_2CB0B00);
  __cxa_atexit(sub_1FEA450, &qword_2CB0B00, &off_2AFC540);
  v9 = j__strlen("Iterative inference: maximum number of update iterations per block");
  qword_2CB0A40 = &off_2C4B8B0;
  *(_QWORD *)&dword_2CB0A48 = dword_2CB0A48 & 0x80000000;
  qword_2CB0A80[1] = 0x100000000LL;
  unk_2CB0A50 = 0;
  unk_2CB0A58 = 0;
  unk_2CB0A60 = 0;
  unk_2CB0A68 = 0;
  unk_2CB0A70 = 0;
  unk_2CB0A78 = 0;
  qword_2CB0A80[0] = &qword_2CB0A80[2];
  qword_2CB0A80[3] = &qword_2CB0A80[6];
  qword_2CB0A80[4] = 1;
  LODWORD(qword_2CB0A80[5]) = 0;
  BYTE4(qword_2CB0A80[5]) = 1;
  v10 = sub_21ED2B0("Iterative inference: maximum number of update iterations per block", &qword_2CB0B00);
  v11 = LODWORD(qword_2CB0A80[1]);
  if ( (unsigned __int64)LODWORD(qword_2CB0A80[1]) + 1 > HIDWORD(qword_2CB0A80[1]) )
  {
    v16.m128i_i64[0] = v10;
    sub_22134E0(qword_2CB0A80, &qword_2CB0A80[2], LODWORD(qword_2CB0A80[1]) + 1LL, 8);
    v11 = LODWORD(qword_2CB0A80[1]);
    v10 = v16.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CB0A80[0] + 8 * v11) = v10;
  ++LODWORD(qword_2CB0A80[1]);
  LODWORD(qword_2CB0A80[7]) = 0;
  qword_2CB0A80[8] = off_2C472D0;
  LODWORD(qword_2CB0A80[9]) = 0;
  BYTE4(qword_2CB0A80[9]) = 0;
  qword_2CB0A40 = off_2C4B710;
  *(__m128 *)&qword_2CB0A80[13] = _mm_loadh_ps((const double *)off_2C4E4F8);
  qword_2CB0A80[10] = off_2BC0BF8;
  sub_21F3510(&qword_2CB0A40, "iterative-bfi-max-iterations-per-block", 38);
  unk_2CB0A68 = v9;
  LODWORD(qword_2CB0A80[7]) = 1000;
  BYTE4(qword_2CB0A80[9]) = 1;
  LODWORD(qword_2CB0A80[9]) = 1000;
  BYTE2(dword_2CB0A48) = BYTE2(dword_2CB0A48) & 0x9F | 0x20;
  unk_2CB0A60 = "Iterative inference: maximum number of update iterations per block";
  sub_21F4400(&qword_2CB0A40);
  __cxa_atexit(sub_1FC9520, &qword_2CB0A40, &off_2AFC540);
  v12 = j__strlen(
          "Iterative inference: delta convergence precision; smaller values typically lead to better results at the cost "
          "of worsen runtime");
  qword_2CB0980 = &off_2C4B8B0;
  *(_QWORD *)&dword_2CB0988 = dword_2CB0988 & 0x80000000;
  qword_2CB09C0[1] = 0x100000000LL;
  unk_2CB0990 = 0;
  unk_2CB0998 = 0;
  unk_2CB09A0 = 0;
  unk_2CB09A8 = 0;
  unk_2CB09B0 = 0;
  unk_2CB09B8 = 0;
  qword_2CB09C0[0] = &qword_2CB09C0[2];
  qword_2CB09C0[3] = &qword_2CB09C0[6];
  qword_2CB09C0[4] = 1;
  LODWORD(qword_2CB09C0[5]) = 0;
  BYTE4(qword_2CB09C0[5]) = 1;
  v13 = sub_21ED2B0(
          "Iterative inference: delta convergence precision; smaller values typically lead to better results at the cost "
          "of worsen runtime",
          &qword_2CB0A40);
  v14 = LODWORD(qword_2CB09C0[1]);
  if ( (unsigned __int64)LODWORD(qword_2CB09C0[1]) + 1 > HIDWORD(qword_2CB09C0[1]) )
  {
    v16.m128i_i64[0] = v13;
    sub_22134E0(qword_2CB09C0, &qword_2CB09C0[2], LODWORD(qword_2CB09C0[1]) + 1LL, 8);
    v14 = LODWORD(qword_2CB09C0[1]);
    v13 = v16.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CB09C0[0] + 8 * v14) = v13;
  ++LODWORD(qword_2CB09C0[1]);
  qword_2CB09C0[7] = 0;
  qword_2CB09C0[8] = off_2C476B8;
  qword_2CB09C0[9] = 0;
  LOBYTE(qword_2CB09C0[10]) = 0;
  qword_2CB0980 = off_2C476D8;
  *(__m128 *)&qword_2CB09C0[14] = _mm_loadh_ps((const double *)off_2C4DC00);
  qword_2CB09C0[11] = off_2BC0C58;
  sub_21F3510(&qword_2CB0980, "iterative-bfi-precision", 23);
  unk_2CB09A8 = v12;
  LOBYTE(qword_2CB09C0[10]) = 1;
  qword_2CB09C0[7] = 0x3D719799812DEA11LL;
  BYTE2(dword_2CB0988) = BYTE2(dword_2CB0988) & 0x9F | 0x20;
  unk_2CB09A0 = "Iterative inference: delta convergence precision; smaller values typically lead to better results at the"
                " cost of worsen runtime";
  qword_2CB09C0[9] = 0x3D719799812DEA11LL;
  sub_21F4400(&qword_2CB0980);
  return __cxa_atexit(sub_1FEC5B0, &qword_2CB0980, &off_2AFC540);
}

