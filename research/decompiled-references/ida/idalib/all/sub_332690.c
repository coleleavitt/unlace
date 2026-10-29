__m128i *sub_332690()
{
  size_t v0; // r15
  __int64 v1; // rax
  __int64 v2; // rcx
  size_t v3; // rax
  size_t v4; // r15
  __int64 v5; // rax
  __int64 v6; // rcx
  __m128i si128; // xmm0
  size_t v8; // rax
  __m128i v10; // [rsp+0h] [rbp-58h] BYREF
  __m128i v11[4]; // [rsp+10h] [rbp-48h] BYREF

  v0 = j__strlen("Enable adding flow sensitive discriminators");
  unk_2CFCED0 = 0;
  qword_2CFCEC0 = &off_2C758B0;
  *(_QWORD *)&dword_2CFCEC8 = dword_2CFCEC8 & 0x80000000;
  qword_2CFCF00[1] = 0x100000000LL;
  unk_2CFCED8 = 0;
  unk_2CFCEE0 = 0;
  unk_2CFCEE8 = 0;
  unk_2CFCEF0 = 0;
  unk_2CFCEF8 = 0;
  qword_2CFCF00[0] = &qword_2CFCF00[2];
  qword_2CFCF00[3] = &qword_2CFCF00[6];
  qword_2CFCF00[4] = 1;
  LODWORD(qword_2CFCF00[5]) = 0;
  BYTE4(qword_2CFCF00[5]) = 1;
  v1 = sub_2210FF0("Enable adding flow sensitive discriminators");
  v2 = LODWORD(qword_2CFCF00[1]);
  if ( (unsigned __int64)LODWORD(qword_2CFCF00[1]) + 1 > HIDWORD(qword_2CFCF00[1]) )
  {
    v10.m128i_i64[0] = v1;
    sub_2237220(qword_2CFCF00, &qword_2CFCF00[2], LODWORD(qword_2CFCF00[1]) + 1LL, 8);
    v2 = LODWORD(qword_2CFCF00[1]);
    v1 = v10.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CFCF00[0] + 8 * v2) = v1;
  qword_2CFCF00[8] = off_2C714E8;
  ++LODWORD(qword_2CFCF00[1]);
  qword_2CFCEC0 = off_2C75848;
  LOWORD(qword_2CFCF00[9]) = 0;
  LOBYTE(qword_2CFCF00[7]) = 0;
  qword_2CFCF00[10] = off_2BEAB08;
  *(__m128 *)&qword_2CFCF00[13] = _mm_loadh_ps((const double *)off_2C78368);
  v10 = *(__m128i *)&qword_2CFCF00[13];
  v3 = j__strlen("enable-fs-discriminator");
  sub_2217250(&qword_2CFCEC0, "enable-fs-discriminator", v3);
  unk_2CFCEE8 = v0;
  BYTE2(dword_2CFCEC8) = BYTE2(dword_2CFCEC8) & 0x9F | 0x20;
  unk_2CFCEE0 = "Enable adding flow sensitive discriminators";
  sub_2218140(&qword_2CFCEC0);
  __cxa_atexit(sub_200E190, &qword_2CFCEC0, &off_2B25620);
  v4 = j__strlen("Preserve line and column number when merging locations.");
  qword_2CFCE00 = &off_2C758B0;
  *(_QWORD *)&dword_2CFCE08 = dword_2CFCE08 & 0x80000000;
  qword_2CFCE40[1] = 0x100000000LL;
  unk_2CFCE10 = 0;
  unk_2CFCE18 = 0;
  unk_2CFCE20 = 0;
  unk_2CFCE28 = 0;
  unk_2CFCE30 = 0;
  unk_2CFCE38 = 0;
  qword_2CFCE40[0] = &qword_2CFCE40[2];
  qword_2CFCE40[3] = &qword_2CFCE40[6];
  qword_2CFCE40[4] = 1;
  LODWORD(qword_2CFCE40[5]) = 0;
  BYTE4(qword_2CFCE40[5]) = 1;
  v5 = sub_2210FF0("Preserve line and column number when merging locations.");
  v6 = LODWORD(qword_2CFCE40[1]);
  si128 = _mm_load_si128(&v10);
  if ( (unsigned __int64)LODWORD(qword_2CFCE40[1]) + 1 > HIDWORD(qword_2CFCE40[1]) )
  {
    v10.m128i_i64[0] = v5;
    v11[0] = si128;
    sub_2237220(qword_2CFCE40, &qword_2CFCE40[2], LODWORD(qword_2CFCE40[1]) + 1LL, 8);
    v6 = LODWORD(qword_2CFCE40[1]);
    si128 = _mm_load_si128(v11);
    v5 = v10.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CFCE40[0] + 8 * v6) = v5;
  LOWORD(qword_2CFCE40[9]) = 0;
  qword_2CFCE40[8] = off_2C714E8;
  ++LODWORD(qword_2CFCE40[1]);
  qword_2CFCE00 = off_2C75848;
  LOBYTE(qword_2CFCE40[7]) = 0;
  qword_2CFCE40[10] = off_2BEAB08;
  *(__m128i *)&qword_2CFCE40[13] = si128;
  v8 = j__strlen("pick-merged-source-locations");
  sub_2217250(&qword_2CFCE00, "pick-merged-source-locations", v8);
  unk_2CFCE28 = v4;
  LOBYTE(qword_2CFCE40[7]) = 0;
  LOWORD(qword_2CFCE40[9]) = 256;
  BYTE2(dword_2CFCE08) = BYTE2(dword_2CFCE08) & 0x9F | 0x20;
  unk_2CFCE20 = "Preserve line and column number when merging locations.";
  sub_2218140(&qword_2CFCE00);
  __cxa_atexit(sub_200E190, &qword_2CFCE00, &off_2B25620);
  xmmword_2CFCDE0[0] = _mm_load_si128((const __m128i *)&xmmword_23A7890);
  return xmmword_2CFCDE0;
}
