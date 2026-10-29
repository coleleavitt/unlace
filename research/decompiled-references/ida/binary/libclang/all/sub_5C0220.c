int __fastcall sub_5C0220(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __m128i v4; // xmm3
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 *v7; // rsi
  __m128i v8; // xmm4
  char v9; // al
  __int64 v10; // r12
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  __m128i v14; // [rsp+0h] [rbp-58h] BYREF
  __int64 *v15; // [rsp+18h] [rbp-40h]

  qword_4B0E2E0 = (__int64)&qword_4B0E2F0;
  qword_4B0E2B0 = 0;
  qword_4B0E2B8 = 0;
  qword_4B0E2A0 = (__int64)&off_4A6E058;
  qword_4B0E2A8 = (unsigned int)qword_4B0E2A8 & 0x80000000;
  qword_4B0E2F8 = (__int64)&qword_4B0E310;
  v14 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49EC3A8), (__m128i)(unsigned __int64)nullsub_266);
  qword_4B0E2C0 = 0;
  qword_4B0E2C8 = 0;
  qword_4B0E2D0 = 0;
  qword_4B0E2D8 = 0;
  qword_4B0E2E8 = 0x100000000LL;
  qword_4B0E300 = 1;
  dword_4B0E308 = 0;
  byte_4B0E30C = 1;
  v1 = sub_259AC30(a1, &qword_4B0E2F0);
  v2 = (unsigned int)qword_4B0E2E8;
  v3 = (unsigned int)qword_4B0E2E8 + 1LL;
  if ( HIDWORD(qword_4B0E2E8) < v3 )
  {
    sub_25D6060(&qword_4B0E2F0 - 2, &qword_4B0E2F0, v3, 8);
    v2 = (unsigned int)qword_4B0E2E8;
  }
  v4 = _mm_load_si128(&v14);
  *(_QWORD *)(qword_4B0E2E0 + 8 * v2) = v1;
  word_4B0E328 = 0;
  xmmword_4B0E338 = 0;
  qword_4B0E320 = (__int64)&off_4A64730;
  xmmword_4B0E348 = (__int128)v4;
  LODWORD(qword_4B0E2E8) = qword_4B0E2E8 + 1;
  qword_4B0E2A0 = (__int64)off_4A6DFF0;
  byte_4B0E318 = 0;
  qword_4B0E330 = (__int64)off_49D9168;
  sub_259F400(&qword_4B0E2A0, "partial-profile", 15);
  word_4B0E328 = 256;
  byte_4B0E318 = 0;
  qword_4B0E2C8 = 57;
  BYTE2(qword_4B0E2A8) = BYTE2(qword_4B0E2A8) & 0x9F | 0x20;
  qword_4B0E2C0 = (__int64)"Specify the current profile is used as a partial profile.";
  sub_259EC40(&qword_4B0E2A0);
  __cxa_atexit(sub_1F6C9D0, &qword_4B0E2A0, &off_47CFE00);
  qword_4B0E1E0[0] = (__int64)&off_4A6E058;
  qword_4B0E1E0[1] &= 0x80000000uLL;
  qword_4B0E1E0[8] = (__int64)&qword_4B0E1E0[10];
  v15 = &qword_4B0E1E0[10];
  qword_4B0E1E0[2] = 0;
  qword_4B0E1E0[3] = 0;
  qword_4B0E1E0[4] = 0;
  qword_4B0E1E0[5] = 0;
  qword_4B0E1E0[6] = 0;
  qword_4B0E1E0[7] = 0;
  qword_4B0E1E0[9] = 0x100000000LL;
  qword_4B0E1E0[11] = (__int64)&qword_4B0E1E0[14];
  qword_4B0E1E0[12] = 1;
  LODWORD(qword_4B0E1E0[13]) = 0;
  BYTE4(qword_4B0E1E0[13]) = 1;
  v5 = sub_259AC30(sub_1F6C9D0, &qword_4B0E1E0[10]);
  v6 = LODWORD(qword_4B0E1E0[9]);
  v7 = v15;
  if ( HIDWORD(qword_4B0E1E0[9]) < (unsigned __int64)(v6 + 1) )
  {
    v15 = (__int64 *)v5;
    sub_25D6060(&qword_4B0E1E0[8], v7, v6 + 1, 8);
    v6 = LODWORD(qword_4B0E1E0[9]);
    v5 = (__int64)v15;
  }
  v8 = _mm_load_si128(&v14);
  *(_QWORD *)(qword_4B0E1E0[8] + 8 * v6) = v5;
  LOWORD(qword_4B0E1E0[17]) = 0;
  *(_OWORD *)&qword_4B0E1E0[19] = 0;
  *(__m128i *)&qword_4B0E1E0[21] = v8;
  qword_4B0E1E0[16] = (__int64)&off_4A64730;
  ++LODWORD(qword_4B0E1E0[9]);
  LOBYTE(qword_4B0E1E0[15]) = 0;
  qword_4B0E1E0[0] = (__int64)off_4A6DFF0;
  qword_4B0E1E0[18] = (__int64)off_49D9168;
  sub_259F400(qword_4B0E1E0, "scale-partial-sample-profile-working-set-size", 45);
  v9 = BYTE2(qword_4B0E1E0[1]);
  LOWORD(qword_4B0E1E0[17]) = 257;
  LOBYTE(qword_4B0E1E0[15]) = 1;
  qword_4B0E1E0[5] = 145;
  BYTE2(qword_4B0E1E0[1]) = v9 & 0x9F | 0x20;
  qword_4B0E1E0[4] = (__int64)"If true, scale the working set size of the partial sample profile by the partial profile r"
                              "atio to reflect the size of the program being compiled.";
  sub_259EC40(qword_4B0E1E0);
  __cxa_atexit(sub_1F6C9D0, qword_4B0E1E0, &off_47CFE00);
  qword_4B0E168 = 0x100000000LL;
  qword_4B0E120 = (__int64)&off_4A6E058;
  qword_4B0E128 = (unsigned int)qword_4B0E128 & 0x80000000;
  qword_4B0E160 = (__int64)&qword_4B0E170;
  qword_4B0E130 = 0;
  qword_4B0E138 = 0;
  qword_4B0E140 = 0;
  qword_4B0E148 = 0;
  qword_4B0E150 = 0;
  qword_4B0E158 = 0;
  qword_4B0E178 = (__int64)&qword_4B0E190;
  qword_4B0E180 = 1;
  dword_4B0E188 = 0;
  byte_4B0E18C = 1;
  v10 = sub_259AC30(sub_1F6C9D0, &qword_4B0E170);
  v11 = (unsigned int)qword_4B0E168;
  v12 = (unsigned int)qword_4B0E168 + 1LL;
  if ( HIDWORD(qword_4B0E168) < v12 )
  {
    sub_25D6060(&qword_4B0E170 - 2, &qword_4B0E170, v12, 8);
    v11 = (unsigned int)qword_4B0E168;
  }
  *(_QWORD *)(qword_4B0E160 + 8 * v11) = v10;
  xmmword_4B0E1C0 = 0;
  LODWORD(qword_4B0E168) = qword_4B0E168 + 1;
  qword_4B0E1A0 = (__int64)off_4A76748;
  qword_4B0E198 = 0;
  byte_4B0E1B0 = 0;
  qword_4B0E120 = (__int64)off_4A76768;
  qword_4B0E1A8 = 0;
  qword_4B0E1B8 = (__int64)off_49D9288;
  xmmword_4B0E1D0 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EC3B0),
                                (__m128i)(unsigned __int64)nullsub_444);
  sub_259F400(&qword_4B0E120, "partial-sample-profile-working-set-size-scale-factor", 52);
  byte_4B0E1B0 = 1;
  qword_4B0E198 = 0x3F80624DD2F1A9FCLL;
  qword_4B0E1A8 = 0x3F80624DD2F1A9FCLL;
  BYTE2(qword_4B0E128) = BYTE2(qword_4B0E128) & 0x9F | 0x20;
  qword_4B0E140 = (__int64)"The scale factor used to scale the working set size of the partial sample profile along with "
                           "the partial profile ratio. This includes the factor of the profile counter per block and the "
                           "factor to scale the working set size to use the same shared thresholds as PGO.";
  qword_4B0E148 = 264;
  sub_259EC40(&qword_4B0E120);
  return __cxa_atexit(sub_2A4E990, &qword_4B0E120, &off_47CFE00);
}

