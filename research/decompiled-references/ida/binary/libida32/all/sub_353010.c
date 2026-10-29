int sub_353010()
{
  size_t v0; // r13
  __int64 v1; // rax
  __int64 v2; // rcx
  size_t v3; // rax
  size_t v4; // rax
  size_t v5; // rax
  size_t v6; // rax
  size_t v7; // r15
  __int64 v8; // rax
  __int64 v9; // rcx
  size_t v10; // r15
  __int64 v11; // rax
  __int64 v12; // rcx
  __m128i v13; // xmm0
  __m128i v15; // [rsp+0h] [rbp-88h] BYREF
  __m128i v16; // [rsp+10h] [rbp-78h] BYREF
  int v17; // [rsp+24h] [rbp-64h] BYREF
  int *v18; // [rsp+28h] [rbp-60h] BYREF
  const char *v19; // [rsp+30h] [rbp-58h] BYREF
  size_t v20; // [rsp+38h] [rbp-50h]
  const char *v21; // [rsp+40h] [rbp-48h] BYREF
  size_t v22; // [rsp+48h] [rbp-40h]

  v0 = j__strlen("Maximum number of iterations to go through when propagating sample block/edge weights through the CFG.");
  unk_2CE56D0 = 0;
  qword_2CE56C0 = &off_2C4B8B0;
  *(_QWORD *)&dword_2CE56C8 = dword_2CE56C8 & 0x80000000;
  qword_2CE5700[1] = 0x100000000LL;
  unk_2CE56D8 = 0;
  unk_2CE56E0 = 0;
  unk_2CE56E8 = 0;
  unk_2CE56F0 = 0;
  unk_2CE56F8 = 0;
  qword_2CE5700[0] = &qword_2CE5700[2];
  qword_2CE5700[3] = &qword_2CE5700[6];
  qword_2CE5700[4] = 1;
  LODWORD(qword_2CE5700[5]) = 0;
  BYTE4(qword_2CE5700[5]) = 1;
  v1 = sub_21ED2B0("Maximum number of iterations to go through when propagating sample block/edge weights through the CFG.");
  v2 = LODWORD(qword_2CE5700[1]);
  if ( (unsigned __int64)LODWORD(qword_2CE5700[1]) + 1 > HIDWORD(qword_2CE5700[1]) )
  {
    v15.m128i_i64[0] = v1;
    sub_22134E0(qword_2CE5700, &qword_2CE5700[2], LODWORD(qword_2CE5700[1]) + 1LL, 8);
    v2 = LODWORD(qword_2CE5700[1]);
    v1 = v15.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CE5700[0] + 8 * v2) = v1;
  ++LODWORD(qword_2CE5700[1]);
  LODWORD(qword_2CE5700[7]) = 0;
  qword_2CE5700[8] = off_2C472D0;
  LODWORD(qword_2CE5700[9]) = 0;
  BYTE4(qword_2CE5700[9]) = 0;
  qword_2CE56C0 = off_2C4B710;
  *(__m128 *)&qword_2CE5700[13] = _mm_loadh_ps((const double *)off_2C4E4F8);
  qword_2CE5700[10] = off_2BC0BF8;
  sub_21F3510(&qword_2CE56C0, "sample-profile-max-propagate-iterations", 39);
  unk_2CE56E8 = v0;
  unk_2CE56E0 = "Maximum number of iterations to go through when propagating sample block/edge weights through the CFG.";
  LODWORD(qword_2CE5700[7]) = 100;
  BYTE4(qword_2CE5700[9]) = 1;
  LODWORD(qword_2CE5700[9]) = 100;
  sub_21F4400(&qword_2CE56C0);
  __cxa_atexit(sub_1FC9520, &qword_2CE56C0, &off_2AFC540);
  v3 = j__strlen("Emit a warning if less than N% of records in the input profile are matched to the IR.");
  v19 = "Emit a warning if less than N% of records in the input profile are matched to the IR.";
  v20 = v3;
  v4 = j__strlen("N");
  v21 = "N";
  v22 = v4;
  v18 = &v17;
  v17 = 0;
  sub_22A4CC0(&unk_2CE5600, "sample-profile-check-record-coverage", &v18, &v21, &v19);
  __cxa_atexit(sub_1FC9520, &unk_2CE5600, &off_2AFC540);
  v5 = j__strlen("Emit a warning if less than N% of samples in the input profile are matched to the IR.");
  v19 = "Emit a warning if less than N% of samples in the input profile are matched to the IR.";
  v20 = v5;
  v6 = j__strlen("N");
  v21 = "N";
  v22 = v6;
  v18 = &v17;
  v17 = 0;
  sub_22A4CC0(&unk_2CE5540, "sample-profile-check-sample-coverage", &v18, &v21, &v19);
  __cxa_atexit(sub_1FC9520, &unk_2CE5540, &off_2AFC540);
  v7 = j__strlen(
         "Use this option to turn off/on warnings about function with samples but without debug information to use those samples. ");
  qword_2CE5480 = &off_2C4B8B0;
  *(_QWORD *)&dword_2CE5488 = dword_2CE5488 & 0x80000000;
  qword_2CE54C0[1] = 0x100000000LL;
  unk_2CE5490 = 0;
  unk_2CE5498 = 0;
  unk_2CE54A0 = 0;
  unk_2CE54A8 = 0;
  unk_2CE54B0 = 0;
  unk_2CE54B8 = 0;
  qword_2CE54C0[0] = &qword_2CE54C0[2];
  qword_2CE54C0[3] = &qword_2CE54C0[6];
  qword_2CE54C0[4] = 1;
  LODWORD(qword_2CE54C0[5]) = 0;
  BYTE4(qword_2CE54C0[5]) = 1;
  v8 = sub_21ED2B0(
         "Use this option to turn off/on warnings about function with samples but without debug information to use those samples. ");
  v9 = LODWORD(qword_2CE54C0[1]);
  if ( (unsigned __int64)LODWORD(qword_2CE54C0[1]) + 1 > HIDWORD(qword_2CE54C0[1]) )
  {
    v15.m128i_i64[0] = v8;
    sub_22134E0(qword_2CE54C0, &qword_2CE54C0[2], LODWORD(qword_2CE54C0[1]) + 1LL, 8);
    v9 = LODWORD(qword_2CE54C0[1]);
    v8 = v15.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CE54C0[0] + 8 * v9) = v8;
  qword_2CE54C0[8] = off_2C474E8;
  ++LODWORD(qword_2CE54C0[1]);
  qword_2CE5480 = off_2C4B848;
  LOWORD(qword_2CE54C0[9]) = 0;
  qword_2CE54C0[10] = off_2BC0B68;
  LOBYTE(qword_2CE54C0[7]) = 0;
  *(__m128 *)&qword_2CE54C0[13] = _mm_loadh_ps((const double *)off_2C4E368);
  v15 = *(__m128i *)&qword_2CE54C0[13];
  sub_21F3510(&qword_2CE5480, "no-warn-sample-unused", 21);
  unk_2CE54A8 = v7;
  LOBYTE(qword_2CE54C0[7]) = 0;
  LOWORD(qword_2CE54C0[9]) = 256;
  BYTE2(dword_2CE5488) = BYTE2(dword_2CE5488) & 0x9F | 0x20;
  unk_2CE54A0 = "Use this option to turn off/on warnings about function with samples but without debug information to use"
                " those samples. ";
  sub_21F4400(&qword_2CE5480);
  __cxa_atexit(sub_1FEA450, &qword_2CE5480, &off_2AFC540);
  v10 = j__strlen("Use profi to infer block and edge counts.");
  qword_2CE53C0 = &off_2C4B8B0;
  *(_QWORD *)&dword_2CE53C8 = dword_2CE53C8 & 0x80000000;
  qword_2CE5400[1] = 0x100000000LL;
  unk_2CE53D0 = 0;
  unk_2CE53D8 = 0;
  unk_2CE53E0 = 0;
  unk_2CE53E8 = 0;
  unk_2CE53F0 = 0;
  unk_2CE53F8 = 0;
  qword_2CE5400[0] = &qword_2CE5400[2];
  qword_2CE5400[3] = &qword_2CE5400[6];
  qword_2CE5400[4] = 1;
  LODWORD(qword_2CE5400[5]) = 0;
  BYTE4(qword_2CE5400[5]) = 1;
  v11 = sub_21ED2B0("Use profi to infer block and edge counts.");
  v12 = LODWORD(qword_2CE5400[1]);
  v13 = _mm_load_si128(&v15);
  if ( (unsigned __int64)LODWORD(qword_2CE5400[1]) + 1 > HIDWORD(qword_2CE5400[1]) )
  {
    v15.m128i_i64[0] = v11;
    v16 = v13;
    sub_22134E0(qword_2CE5400, &qword_2CE5400[2], LODWORD(qword_2CE5400[1]) + 1LL, 8);
    v12 = LODWORD(qword_2CE5400[1]);
    v13 = _mm_load_si128(&v16);
    v11 = v15.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CE5400[0] + 8 * v12) = v11;
  LOWORD(qword_2CE5400[9]) = 0;
  qword_2CE5400[8] = off_2C474E8;
  qword_2CE53C0 = off_2C4B848;
  ++LODWORD(qword_2CE5400[1]);
  qword_2CE5400[10] = off_2BC0B68;
  LOBYTE(qword_2CE5400[7]) = 0;
  *(__m128i *)&qword_2CE5400[13] = v13;
  sub_21F3510(&qword_2CE53C0, "sample-profile-use-profi", 24);
  unk_2CE53E8 = v10;
  BYTE2(dword_2CE53C8) = BYTE2(dword_2CE53C8) & 0x9F | 0x20;
  unk_2CE53E0 = "Use profi to infer block and edge counts.";
  sub_21F4400(&qword_2CE53C0);
  return __cxa_atexit(sub_1FEA450, &qword_2CE53C0, &off_2AFC540);
}

