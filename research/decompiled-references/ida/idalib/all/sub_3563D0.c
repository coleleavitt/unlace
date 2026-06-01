int sub_3563D0()
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
  unk_2D0F5F0 = 0;
  qword_2D0F5E0 = &off_2C758B0;
  *(_QWORD *)&dword_2D0F5E8 = dword_2D0F5E8 & 0x80000000;
  qword_2D0F620[1] = 0x100000000LL;
  unk_2D0F5F8 = 0;
  unk_2D0F600 = 0;
  unk_2D0F608 = 0;
  unk_2D0F610 = 0;
  unk_2D0F618 = 0;
  qword_2D0F620[0] = &qword_2D0F620[2];
  qword_2D0F620[3] = &qword_2D0F620[6];
  qword_2D0F620[4] = 1;
  LODWORD(qword_2D0F620[5]) = 0;
  BYTE4(qword_2D0F620[5]) = 1;
  v1 = sub_2210FF0("Maximum number of iterations to go through when propagating sample block/edge weights through the CFG.");
  v2 = LODWORD(qword_2D0F620[1]);
  if ( (unsigned __int64)LODWORD(qword_2D0F620[1]) + 1 > HIDWORD(qword_2D0F620[1]) )
  {
    v15.m128i_i64[0] = v1;
    sub_2237220(qword_2D0F620, &qword_2D0F620[2], LODWORD(qword_2D0F620[1]) + 1LL, 8);
    v2 = LODWORD(qword_2D0F620[1]);
    v1 = v15.m128i_i64[0];
  }
  *(_QWORD *)(qword_2D0F620[0] + 8 * v2) = v1;
  ++LODWORD(qword_2D0F620[1]);
  LODWORD(qword_2D0F620[7]) = 0;
  qword_2D0F620[8] = off_2C712D0;
  LODWORD(qword_2D0F620[9]) = 0;
  BYTE4(qword_2D0F620[9]) = 0;
  qword_2D0F5E0 = off_2C75710;
  *(__m128 *)&qword_2D0F620[13] = _mm_loadh_ps((const double *)off_2C784F8);
  qword_2D0F620[10] = off_2BEAB98;
  sub_2217250(&qword_2D0F5E0, "sample-profile-max-propagate-iterations", 39);
  unk_2D0F608 = v0;
  unk_2D0F600 = "Maximum number of iterations to go through when propagating sample block/edge weights through the CFG.";
  LODWORD(qword_2D0F620[7]) = 100;
  BYTE4(qword_2D0F620[9]) = 1;
  LODWORD(qword_2D0F620[9]) = 100;
  sub_2218140(&qword_2D0F5E0);
  __cxa_atexit(sub_1FED260, &qword_2D0F5E0, &off_2B25620);
  v3 = j__strlen("Emit a warning if less than N% of records in the input profile are matched to the IR.");
  v19 = "Emit a warning if less than N% of records in the input profile are matched to the IR.";
  v20 = v3;
  v4 = j__strlen("N");
  v21 = "N";
  v22 = v4;
  v18 = &v17;
  v17 = 0;
  sub_22C8A00(&unk_2D0F520, "sample-profile-check-record-coverage", &v18, &v21, &v19);
  __cxa_atexit(sub_1FED260, &unk_2D0F520, &off_2B25620);
  v5 = j__strlen("Emit a warning if less than N% of samples in the input profile are matched to the IR.");
  v19 = "Emit a warning if less than N% of samples in the input profile are matched to the IR.";
  v20 = v5;
  v6 = j__strlen("N");
  v21 = "N";
  v22 = v6;
  v18 = &v17;
  v17 = 0;
  sub_22C8A00(&unk_2D0F460, "sample-profile-check-sample-coverage", &v18, &v21, &v19);
  __cxa_atexit(sub_1FED260, &unk_2D0F460, &off_2B25620);
  v7 = j__strlen(
         "Use this option to turn off/on warnings about function with samples but without debug information to use those samples. ");
  qword_2D0F3A0 = &off_2C758B0;
  *(_QWORD *)&dword_2D0F3A8 = dword_2D0F3A8 & 0x80000000;
  qword_2D0F3E0[1] = 0x100000000LL;
  unk_2D0F3B0 = 0;
  unk_2D0F3B8 = 0;
  unk_2D0F3C0 = 0;
  unk_2D0F3C8 = 0;
  unk_2D0F3D0 = 0;
  unk_2D0F3D8 = 0;
  qword_2D0F3E0[0] = &qword_2D0F3E0[2];
  qword_2D0F3E0[3] = &qword_2D0F3E0[6];
  qword_2D0F3E0[4] = 1;
  LODWORD(qword_2D0F3E0[5]) = 0;
  BYTE4(qword_2D0F3E0[5]) = 1;
  v8 = sub_2210FF0(
         "Use this option to turn off/on warnings about function with samples but without debug information to use those samples. ");
  v9 = LODWORD(qword_2D0F3E0[1]);
  if ( (unsigned __int64)LODWORD(qword_2D0F3E0[1]) + 1 > HIDWORD(qword_2D0F3E0[1]) )
  {
    v15.m128i_i64[0] = v8;
    sub_2237220(qword_2D0F3E0, &qword_2D0F3E0[2], LODWORD(qword_2D0F3E0[1]) + 1LL, 8);
    v9 = LODWORD(qword_2D0F3E0[1]);
    v8 = v15.m128i_i64[0];
  }
  *(_QWORD *)(qword_2D0F3E0[0] + 8 * v9) = v8;
  qword_2D0F3E0[8] = off_2C714E8;
  ++LODWORD(qword_2D0F3E0[1]);
  qword_2D0F3A0 = off_2C75848;
  LOWORD(qword_2D0F3E0[9]) = 0;
  qword_2D0F3E0[10] = off_2BEAB08;
  LOBYTE(qword_2D0F3E0[7]) = 0;
  *(__m128 *)&qword_2D0F3E0[13] = _mm_loadh_ps((const double *)off_2C78368);
  v15 = *(__m128i *)&qword_2D0F3E0[13];
  sub_2217250(&qword_2D0F3A0, "no-warn-sample-unused", 21);
  unk_2D0F3C8 = v7;
  LOBYTE(qword_2D0F3E0[7]) = 0;
  LOWORD(qword_2D0F3E0[9]) = 256;
  BYTE2(dword_2D0F3A8) = BYTE2(dword_2D0F3A8) & 0x9F | 0x20;
  unk_2D0F3C0 = "Use this option to turn off/on warnings about function with samples but without debug information to use"
                " those samples. ";
  sub_2218140(&qword_2D0F3A0);
  __cxa_atexit(sub_200E190, &qword_2D0F3A0, &off_2B25620);
  v10 = j__strlen("Use profi to infer block and edge counts.");
  qword_2D0F2E0 = &off_2C758B0;
  *(_QWORD *)&dword_2D0F2E8 = dword_2D0F2E8 & 0x80000000;
  qword_2D0F320[1] = 0x100000000LL;
  unk_2D0F2F0 = 0;
  unk_2D0F2F8 = 0;
  unk_2D0F300 = 0;
  unk_2D0F308 = 0;
  unk_2D0F310 = 0;
  unk_2D0F318 = 0;
  qword_2D0F320[0] = &qword_2D0F320[2];
  qword_2D0F320[3] = &qword_2D0F320[6];
  qword_2D0F320[4] = 1;
  LODWORD(qword_2D0F320[5]) = 0;
  BYTE4(qword_2D0F320[5]) = 1;
  v11 = sub_2210FF0("Use profi to infer block and edge counts.");
  v12 = LODWORD(qword_2D0F320[1]);
  v13 = _mm_load_si128(&v15);
  if ( (unsigned __int64)LODWORD(qword_2D0F320[1]) + 1 > HIDWORD(qword_2D0F320[1]) )
  {
    v15.m128i_i64[0] = v11;
    v16 = v13;
    sub_2237220(qword_2D0F320, &qword_2D0F320[2], LODWORD(qword_2D0F320[1]) + 1LL, 8);
    v12 = LODWORD(qword_2D0F320[1]);
    v13 = _mm_load_si128(&v16);
    v11 = v15.m128i_i64[0];
  }
  *(_QWORD *)(qword_2D0F320[0] + 8 * v12) = v11;
  LOWORD(qword_2D0F320[9]) = 0;
  qword_2D0F320[8] = off_2C714E8;
  qword_2D0F2E0 = off_2C75848;
  ++LODWORD(qword_2D0F320[1]);
  qword_2D0F320[10] = off_2BEAB08;
  LOBYTE(qword_2D0F320[7]) = 0;
  *(__m128i *)&qword_2D0F320[13] = v13;
  sub_2217250(&qword_2D0F2E0, "sample-profile-use-profi", 24);
  unk_2D0F308 = v10;
  BYTE2(dword_2D0F2E8) = BYTE2(dword_2D0F2E8) & 0x9F | 0x20;
  unk_2D0F300 = "Use profi to infer block and edge counts.";
  sub_2218140(&qword_2D0F2E0);
  return __cxa_atexit(sub_200E190, &qword_2D0F2E0, &off_2B25620);
}
