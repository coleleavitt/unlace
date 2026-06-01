int __fastcall sub_300900(__int64 a1, __int64 a2)
{
  size_t v2; // r15
  __int64 v3; // rax
  __int64 v4; // rcx
  size_t v5; // r15
  __int64 v6; // rax
  __int64 v7; // rcx
  __m128i si128; // xmm0
  size_t v9; // r15
  __int64 v10; // rax
  __int64 v11; // rcx
  size_t v12; // r15
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rsi
  __m128i v16; // xmm2
  size_t v17; // r15
  __int64 v18; // rax
  __int64 v19; // rcx
  __m128i v20; // xmm3
  __m128i v22; // [rsp+0h] [rbp-58h] BYREF
  __m128i v23[4]; // [rsp+10h] [rbp-48h] BYREF

  v2 = j__strlen("Report total allocation sizes of hinted allocations");
  unk_2CE0D50 = 0;
  qword_2CE0D40 = &off_2C758B0;
  *(_QWORD *)&dword_2CE0D48 = dword_2CE0D48 & 0x80000000;
  qword_2CE0D80[1] = 0x100000000LL;
  unk_2CE0D58 = 0;
  unk_2CE0D60 = 0;
  unk_2CE0D68 = 0;
  unk_2CE0D70 = 0;
  unk_2CE0D78 = 0;
  qword_2CE0D80[0] = &qword_2CE0D80[2];
  qword_2CE0D80[3] = &qword_2CE0D80[6];
  qword_2CE0D80[4] = 1;
  LODWORD(qword_2CE0D80[5]) = 0;
  BYTE4(qword_2CE0D80[5]) = 1;
  v3 = sub_2210FF0("Report total allocation sizes of hinted allocations", a2);
  v4 = LODWORD(qword_2CE0D80[1]);
  if ( (unsigned __int64)LODWORD(qword_2CE0D80[1]) + 1 > HIDWORD(qword_2CE0D80[1]) )
  {
    v22.m128i_i64[0] = v3;
    sub_2237220(qword_2CE0D80, &qword_2CE0D80[2], LODWORD(qword_2CE0D80[1]) + 1LL, 8);
    v4 = LODWORD(qword_2CE0D80[1]);
    v3 = v22.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CE0D80[0] + 8 * v4) = v3;
  qword_2CE0D80[8] = off_2C714E8;
  qword_2CE0D40 = off_2C75848;
  ++LODWORD(qword_2CE0D80[1]);
  LOWORD(qword_2CE0D80[9]) = 0;
  qword_2CE0D80[10] = off_2BEAB08;
  LOBYTE(qword_2CE0D80[7]) = 0;
  *(__m128 *)&qword_2CE0D80[13] = _mm_loadh_ps((const double *)off_2C78368);
  v22 = *(__m128i *)&qword_2CE0D80[13];
  sub_2217250(&qword_2CE0D40, "memprof-report-hinted-sizes", 27);
  unk_2CE0D68 = v2;
  LOBYTE(qword_2CE0D80[7]) = 0;
  LOWORD(qword_2CE0D80[9]) = 256;
  BYTE2(dword_2CE0D48) = BYTE2(dword_2CE0D48) & 0x9F | 0x20;
  unk_2CE0D60 = "Report total allocation sizes of hinted allocations";
  sub_2218140(&qword_2CE0D40);
  __cxa_atexit(sub_200E190, &qword_2CE0D40, &off_2B25620);
  v5 = j__strlen("Keep all non-cold contexts (increases cloning overheads)");
  qword_2CE0C80 = &off_2C758B0;
  *(_QWORD *)&dword_2CE0C88 = dword_2CE0C88 & 0x80000000;
  qword_2CE0CC0[1] = 0x100000000LL;
  unk_2CE0C90 = 0;
  unk_2CE0C98 = 0;
  unk_2CE0CA0 = 0;
  unk_2CE0CA8 = 0;
  unk_2CE0CB0 = 0;
  unk_2CE0CB8 = 0;
  qword_2CE0CC0[0] = &qword_2CE0CC0[2];
  qword_2CE0CC0[3] = &qword_2CE0CC0[6];
  qword_2CE0CC0[4] = 1;
  LODWORD(qword_2CE0CC0[5]) = 0;
  BYTE4(qword_2CE0CC0[5]) = 1;
  v6 = sub_2210FF0("Keep all non-cold contexts (increases cloning overheads)", &qword_2CE0D40);
  v7 = LODWORD(qword_2CE0CC0[1]);
  si128 = _mm_load_si128(&v22);
  if ( (unsigned __int64)LODWORD(qword_2CE0CC0[1]) + 1 > HIDWORD(qword_2CE0CC0[1]) )
  {
    v22.m128i_i64[0] = v6;
    v23[0] = si128;
    sub_2237220(qword_2CE0CC0, &qword_2CE0CC0[2], LODWORD(qword_2CE0CC0[1]) + 1LL, 8);
    v7 = LODWORD(qword_2CE0CC0[1]);
    si128 = _mm_load_si128(v23);
    v6 = v22.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CE0CC0[0] + 8 * v7) = v6;
  LOWORD(qword_2CE0CC0[9]) = 0;
  qword_2CE0CC0[8] = off_2C714E8;
  qword_2CE0C80 = off_2C75848;
  ++LODWORD(qword_2CE0CC0[1]);
  LOBYTE(qword_2CE0CC0[7]) = 0;
  qword_2CE0CC0[10] = off_2BEAB08;
  *(__m128i *)&qword_2CE0CC0[13] = si128;
  sub_2217250(&qword_2CE0C80, "memprof-keep-all-not-cold-contexts", 34);
  unk_2CE0CA8 = v5;
  LOBYTE(qword_2CE0CC0[7]) = 0;
  LOWORD(qword_2CE0CC0[9]) = 256;
  BYTE2(dword_2CE0C88) = BYTE2(dword_2CE0C88) & 0x9F | 0x20;
  unk_2CE0CA0 = "Keep all non-cold contexts (increases cloning overheads)";
  sub_2218140(&qword_2CE0C80);
  __cxa_atexit(sub_200E190, &qword_2CE0C80, &off_2B25620);
  v9 = j__strlen("Min percent of cold bytes to hint alloc cold during cloning");
  qword_2CE0BC0 = &off_2C758B0;
  *(_QWORD *)&dword_2CE0BC8 = dword_2CE0BC8 & 0x80000000;
  qword_2CE0C00[1] = 0x100000000LL;
  unk_2CE0BD0 = 0;
  unk_2CE0BD8 = 0;
  unk_2CE0BE0 = 0;
  unk_2CE0BE8 = 0;
  unk_2CE0BF0 = 0;
  unk_2CE0BF8 = 0;
  qword_2CE0C00[0] = &qword_2CE0C00[2];
  qword_2CE0C00[3] = &qword_2CE0C00[6];
  qword_2CE0C00[4] = 1;
  LODWORD(qword_2CE0C00[5]) = 0;
  BYTE4(qword_2CE0C00[5]) = 1;
  v10 = sub_2210FF0("Min percent of cold bytes to hint alloc cold during cloning", &qword_2CE0C80);
  v11 = LODWORD(qword_2CE0C00[1]);
  if ( (unsigned __int64)LODWORD(qword_2CE0C00[1]) + 1 > HIDWORD(qword_2CE0C00[1]) )
  {
    v22.m128i_i64[0] = v10;
    sub_2237220(qword_2CE0C00, &qword_2CE0C00[2], LODWORD(qword_2CE0C00[1]) + 1LL, 8);
    v11 = LODWORD(qword_2CE0C00[1]);
    v10 = v22.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CE0C00[0] + 8 * v11) = v10;
  qword_2CE0C00[8] = off_2C712D0;
  ++LODWORD(qword_2CE0C00[1]);
  qword_2CE0BC0 = off_2C75710;
  qword_2CE0C00[10] = off_2BEAB98;
  LODWORD(qword_2CE0C00[7]) = 0;
  LODWORD(qword_2CE0C00[9]) = 0;
  BYTE4(qword_2CE0C00[9]) = 0;
  *(__m128 *)&qword_2CE0C00[13] = _mm_loadh_ps((const double *)off_2C784F8);
  v22 = *(__m128i *)&qword_2CE0C00[13];
  sub_2217250(&qword_2CE0BC0, "memprof-cloning-cold-threshold", 30);
  unk_2CE0BE8 = v9;
  LODWORD(qword_2CE0C00[7]) = 100;
  BYTE4(qword_2CE0C00[9]) = 1;
  LODWORD(qword_2CE0C00[9]) = 100;
  BYTE2(dword_2CE0BC8) = BYTE2(dword_2CE0BC8) & 0x9F | 0x20;
  unk_2CE0BE0 = "Min percent of cold bytes to hint alloc cold during cloning";
  sub_2218140(&qword_2CE0BC0);
  __cxa_atexit(sub_1FED260, &qword_2CE0BC0, &off_2B25620);
  v12 = j__strlen("Min percent of cold bytes at a callsite to discard non-cold contexts");
  qword_2CE0B00 = &off_2C758B0;
  *(_QWORD *)&dword_2CE0B08 = dword_2CE0B08 & 0x80000000;
  qword_2CE0B40[1] = 0x100000000LL;
  qword_2CE0B40[0] = &qword_2CE0B40[2];
  unk_2CE0B10 = 0;
  unk_2CE0B18 = 0;
  unk_2CE0B20 = 0;
  unk_2CE0B28 = 0;
  unk_2CE0B30 = 0;
  unk_2CE0B38 = 0;
  qword_2CE0B40[3] = &qword_2CE0B40[6];
  qword_2CE0B40[4] = 1;
  LODWORD(qword_2CE0B40[5]) = 0;
  BYTE4(qword_2CE0B40[5]) = 1;
  v23[0].m128i_i64[0] = (__int64)&qword_2CE0B40[2];
  v13 = sub_2210FF0("Min percent of cold bytes at a callsite to discard non-cold contexts", &qword_2CE0B40[2]);
  v14 = LODWORD(qword_2CE0B40[1]);
  v15 = v23[0].m128i_i64[0];
  if ( (unsigned __int64)LODWORD(qword_2CE0B40[1]) + 1 > HIDWORD(qword_2CE0B40[1]) )
  {
    v23[0].m128i_i64[0] = v13;
    sub_2237220(qword_2CE0B40, v15, LODWORD(qword_2CE0B40[1]) + 1LL, 8);
    v14 = LODWORD(qword_2CE0B40[1]);
    v13 = v23[0].m128i_i64[0];
  }
  v16 = _mm_load_si128(&v22);
  *(_QWORD *)(qword_2CE0B40[0] + 8 * v14) = v13;
  qword_2CE0B40[8] = off_2C712D0;
  qword_2CE0B00 = off_2C75710;
  ++LODWORD(qword_2CE0B40[1]);
  qword_2CE0B40[10] = off_2BEAB98;
  LODWORD(qword_2CE0B40[7]) = 0;
  LODWORD(qword_2CE0B40[9]) = 0;
  BYTE4(qword_2CE0B40[9]) = 0;
  *(__m128i *)&qword_2CE0B40[13] = v16;
  sub_2217250(&qword_2CE0B00, "memprof-callsite-cold-threshold", 31);
  unk_2CE0B28 = v12;
  LODWORD(qword_2CE0B40[7]) = 100;
  BYTE4(qword_2CE0B40[9]) = 1;
  LODWORD(qword_2CE0B40[9]) = 100;
  BYTE2(dword_2CE0B08) = BYTE2(dword_2CE0B08) & 0x9F | 0x20;
  unk_2CE0B20 = "Min percent of cold bytes at a callsite to discard non-cold contexts";
  sub_2218140(&qword_2CE0B00);
  __cxa_atexit(sub_1FED260, &qword_2CE0B00, &off_2B25620);
  v17 = j__strlen("Min percent of max cold bytes for critical cold context");
  qword_2CE0A40 = &off_2C758B0;
  *(_QWORD *)&dword_2CE0A48 = dword_2CE0A48 & 0x80000000;
  qword_2CE0A80[1] = 0x100000000LL;
  unk_2CE0A50 = 0;
  unk_2CE0A58 = 0;
  unk_2CE0A60 = 0;
  unk_2CE0A68 = 0;
  unk_2CE0A70 = 0;
  unk_2CE0A78 = 0;
  qword_2CE0A80[0] = &qword_2CE0A80[2];
  qword_2CE0A80[3] = &qword_2CE0A80[6];
  qword_2CE0A80[4] = 1;
  LODWORD(qword_2CE0A80[5]) = 0;
  BYTE4(qword_2CE0A80[5]) = 1;
  v18 = sub_2210FF0("Min percent of max cold bytes for critical cold context", &qword_2CE0B00);
  v19 = LODWORD(qword_2CE0A80[1]);
  if ( (unsigned __int64)LODWORD(qword_2CE0A80[1]) + 1 > HIDWORD(qword_2CE0A80[1]) )
  {
    v23[0].m128i_i64[0] = v18;
    sub_2237220(qword_2CE0A80, &qword_2CE0A80[2], LODWORD(qword_2CE0A80[1]) + 1LL, 8);
    v19 = LODWORD(qword_2CE0A80[1]);
    v18 = v23[0].m128i_i64[0];
  }
  v20 = _mm_load_si128(&v22);
  *(_QWORD *)(qword_2CE0A80[0] + 8 * v19) = v18;
  qword_2CE0A80[8] = off_2C712D0;
  qword_2CE0A40 = off_2C75710;
  ++LODWORD(qword_2CE0A80[1]);
  qword_2CE0A80[10] = off_2BEAB98;
  LODWORD(qword_2CE0A80[7]) = 0;
  LODWORD(qword_2CE0A80[9]) = 0;
  BYTE4(qword_2CE0A80[9]) = 0;
  *(__m128i *)&qword_2CE0A80[13] = v20;
  sub_2217250(&qword_2CE0A40, "memprof-min-percent-max-cold-size", 33);
  unk_2CE0A68 = v17;
  LODWORD(qword_2CE0A80[7]) = 100;
  BYTE4(qword_2CE0A80[9]) = 1;
  LODWORD(qword_2CE0A80[9]) = 100;
  BYTE2(dword_2CE0A48) = BYTE2(dword_2CE0A48) & 0x9F | 0x20;
  unk_2CE0A60 = "Min percent of max cold bytes for critical cold context";
  sub_2218140(&qword_2CE0A40);
  return __cxa_atexit(sub_1FED260, &qword_2CE0A40, &off_2B25620);
}
