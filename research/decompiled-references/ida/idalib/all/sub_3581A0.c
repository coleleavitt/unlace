int sub_3581A0()
{
  size_t v0; // r15
  __int64 v1; // rax
  __int64 v2; // rcx
  size_t v3; // r15
  __int64 v4; // rax
  __int64 v5; // rcx
  __m128i v6; // xmm2
  size_t v7; // r15
  __int64 v8; // rax
  __int64 v9; // rcx
  void *v10; // rsi
  __m128i v11; // xmm3
  size_t v12; // r15
  __int64 v13; // rax
  __int64 v14; // rcx
  void *v15; // rsi
  __m128i v16; // xmm4
  size_t v17; // r15
  __int64 v18; // rax
  __int64 v19; // rcx
  void *v20; // rsi
  __m128i v21; // xmm5
  size_t v22; // r15
  __int64 v23; // rax
  __int64 v24; // rcx
  void *v25; // rsi
  __m128i v26; // xmm6
  size_t v27; // r15
  __int64 v28; // rax
  __int64 v29; // rcx
  void *v30; // rsi
  __m128i v31; // xmm7
  size_t v32; // r15
  __int64 v33; // rax
  __int64 v34; // rcx
  size_t v35; // r15
  __int64 v36; // rax
  __int64 v37; // rcx
  __m128i v38; // xmm0
  __m128i v40; // [rsp+0h] [rbp-58h] BYREF
  _QWORD *v41; // [rsp+18h] [rbp-40h]

  v0 = j__strlen("Enable the profile guided size optimizations. ");
  unk_2D10F70 = 0;
  qword_2D10F60 = &off_2C758B0;
  *(_QWORD *)&dword_2D10F68 = dword_2D10F68 & 0x80000000;
  qword_2D10FA0[1] = 0x100000000LL;
  unk_2D10F78 = 0;
  unk_2D10F80 = 0;
  unk_2D10F88 = 0;
  unk_2D10F90 = 0;
  unk_2D10F98 = 0;
  qword_2D10FA0[0] = &qword_2D10FA0[2];
  qword_2D10FA0[3] = &qword_2D10FA0[6];
  qword_2D10FA0[4] = 1;
  LODWORD(qword_2D10FA0[5]) = 0;
  BYTE4(qword_2D10FA0[5]) = 1;
  v1 = sub_2210FF0("Enable the profile guided size optimizations. ");
  v2 = LODWORD(qword_2D10FA0[1]);
  if ( (unsigned __int64)LODWORD(qword_2D10FA0[1]) + 1 > HIDWORD(qword_2D10FA0[1]) )
  {
    v40.m128i_i64[0] = v1;
    sub_2237220(qword_2D10FA0, &qword_2D10FA0[2], LODWORD(qword_2D10FA0[1]) + 1LL, 8);
    v2 = LODWORD(qword_2D10FA0[1]);
    v1 = v40.m128i_i64[0];
  }
  *(_QWORD *)(qword_2D10FA0[0] + 8 * v2) = v1;
  LOWORD(qword_2D10FA0[9]) = 0;
  qword_2D10FA0[8] = off_2C714E8;
  ++LODWORD(qword_2D10FA0[1]);
  qword_2D10F60 = off_2C75848;
  qword_2D10FA0[10] = off_2BEAB08;
  LOBYTE(qword_2D10FA0[7]) = 0;
  *(__m128 *)&qword_2D10FA0[13] = _mm_loadh_ps((const double *)off_2C78368);
  v40 = *(__m128i *)&qword_2D10FA0[13];
  sub_2217250(&qword_2D10F60, "pgso", 4);
  unk_2D10F88 = v0;
  LOBYTE(qword_2D10FA0[7]) = 1;
  BYTE2(dword_2D10F68) = BYTE2(dword_2D10F68) & 0x9F | 0x20;
  LOWORD(qword_2D10FA0[9]) = 257;
  unk_2D10F80 = "Enable the profile guided size optimizations. ";
  sub_2218140(&qword_2D10F60);
  __cxa_atexit(sub_200E190, &qword_2D10F60, &off_2B25620);
  v3 = j__strlen("Apply the profile guided size optimizations only if the working set size is large (except for cold code.)");
  qword_2D10EA0 = &off_2C758B0;
  *(_QWORD *)&dword_2D10EA8 = dword_2D10EA8 & 0x80000000;
  qword_2D10EE0[1] = 0x100000000LL;
  qword_2D10EE0[0] = &qword_2D10EE0[2];
  unk_2D10EB0 = 0;
  unk_2D10EB8 = 0;
  unk_2D10EC0 = 0;
  unk_2D10EC8 = 0;
  unk_2D10ED0 = 0;
  unk_2D10ED8 = 0;
  qword_2D10EE0[3] = &qword_2D10EE0[6];
  qword_2D10EE0[4] = 1;
  LODWORD(qword_2D10EE0[5]) = 0;
  BYTE4(qword_2D10EE0[5]) = 1;
  v41 = &qword_2D10EE0[2];
  v4 = sub_2210FF0("Apply the profile guided size optimizations only if the working set size is large (except for cold code.)");
  v5 = LODWORD(qword_2D10EE0[1]);
  if ( (unsigned __int64)LODWORD(qword_2D10EE0[1]) + 1 > HIDWORD(qword_2D10EE0[1]) )
  {
    v41 = (_QWORD *)v4;
    sub_2237220(qword_2D10EE0, &qword_2D10EE0[2], LODWORD(qword_2D10EE0[1]) + 1LL, 8);
    v5 = LODWORD(qword_2D10EE0[1]);
    v4 = (__int64)v41;
  }
  v6 = _mm_load_si128(&v40);
  *(_QWORD *)(qword_2D10EE0[0] + 8 * v5) = v4;
  LOWORD(qword_2D10EE0[9]) = 0;
  qword_2D10EE0[8] = off_2C714E8;
  ++LODWORD(qword_2D10EE0[1]);
  qword_2D10EA0 = off_2C75848;
  qword_2D10EE0[10] = off_2BEAB08;
  LOBYTE(qword_2D10EE0[7]) = 0;
  *(__m128i *)&qword_2D10EE0[13] = v6;
  sub_2217250(&qword_2D10EA0, "pgso-lwss-only", 14);
  unk_2D10EC8 = v3;
  LOBYTE(qword_2D10EE0[7]) = 1;
  BYTE2(dword_2D10EA8) = BYTE2(dword_2D10EA8) & 0x9F | 0x20;
  LOWORD(qword_2D10EE0[9]) = 257;
  unk_2D10EC0 = "Apply the profile guided size optimizations only if the working set size is large (except for cold code.)";
  sub_2218140(&qword_2D10EA0);
  __cxa_atexit(sub_200E190, &qword_2D10EA0, &off_2B25620);
  v7 = j__strlen("Apply the profile guided size optimizations only to cold code.");
  qword_2D10DE0 = &off_2C758B0;
  *(_QWORD *)&dword_2D10DE8 = dword_2D10DE8 & 0x80000000;
  qword_2D10E20[1] = 0x100000000LL;
  qword_2D10E20[0] = &qword_2D10E20[2];
  unk_2D10DF0 = 0;
  unk_2D10DF8 = 0;
  unk_2D10E00 = 0;
  unk_2D10E08 = 0;
  unk_2D10E10 = 0;
  unk_2D10E18 = 0;
  qword_2D10E20[3] = &qword_2D10E20[6];
  qword_2D10E20[4] = 1;
  LODWORD(qword_2D10E20[5]) = 0;
  BYTE4(qword_2D10E20[5]) = 1;
  v41 = &qword_2D10E20[2];
  v8 = sub_2210FF0("Apply the profile guided size optimizations only to cold code.");
  v9 = LODWORD(qword_2D10E20[1]);
  v10 = v41;
  if ( (unsigned __int64)LODWORD(qword_2D10E20[1]) + 1 > HIDWORD(qword_2D10E20[1]) )
  {
    v41 = (_QWORD *)v8;
    sub_2237220(qword_2D10E20, v10, LODWORD(qword_2D10E20[1]) + 1LL, 8);
    v9 = LODWORD(qword_2D10E20[1]);
    v8 = (__int64)v41;
  }
  v11 = _mm_load_si128(&v40);
  *(_QWORD *)(qword_2D10E20[0] + 8 * v9) = v8;
  qword_2D10E20[8] = off_2C714E8;
  ++LODWORD(qword_2D10E20[1]);
  qword_2D10DE0 = off_2C75848;
  LOWORD(qword_2D10E20[9]) = 0;
  qword_2D10E20[10] = off_2BEAB08;
  LOBYTE(qword_2D10E20[7]) = 0;
  *(__m128i *)&qword_2D10E20[13] = v11;
  sub_2217250(&qword_2D10DE0, "pgso-cold-code-only", 19);
  unk_2D10E08 = v7;
  LOBYTE(qword_2D10E20[7]) = 0;
  BYTE2(dword_2D10DE8) = BYTE2(dword_2D10DE8) & 0x9F | 0x20;
  LOWORD(qword_2D10E20[9]) = 256;
  unk_2D10E00 = "Apply the profile guided size optimizations only to cold code.";
  sub_2218140(&qword_2D10DE0);
  __cxa_atexit(sub_200E190, &qword_2D10DE0, &off_2B25620);
  v12 = j__strlen("Apply the profile guided size optimizations only to cold code under instrumentation PGO.");
  qword_2D10D20 = &off_2C758B0;
  *(_QWORD *)&dword_2D10D28 = dword_2D10D28 & 0x80000000;
  qword_2D10D60[1] = 0x100000000LL;
  qword_2D10D60[0] = &qword_2D10D60[2];
  unk_2D10D30 = 0;
  unk_2D10D38 = 0;
  unk_2D10D40 = 0;
  unk_2D10D48 = 0;
  unk_2D10D50 = 0;
  unk_2D10D58 = 0;
  qword_2D10D60[3] = &qword_2D10D60[6];
  qword_2D10D60[4] = 1;
  LODWORD(qword_2D10D60[5]) = 0;
  BYTE4(qword_2D10D60[5]) = 1;
  v41 = &qword_2D10D60[2];
  v13 = sub_2210FF0("Apply the profile guided size optimizations only to cold code under instrumentation PGO.");
  v14 = LODWORD(qword_2D10D60[1]);
  v15 = v41;
  if ( (unsigned __int64)LODWORD(qword_2D10D60[1]) + 1 > HIDWORD(qword_2D10D60[1]) )
  {
    v41 = (_QWORD *)v13;
    sub_2237220(qword_2D10D60, v15, LODWORD(qword_2D10D60[1]) + 1LL, 8);
    v14 = LODWORD(qword_2D10D60[1]);
    v13 = (__int64)v41;
  }
  v16 = _mm_load_si128(&v40);
  *(_QWORD *)(qword_2D10D60[0] + 8 * v14) = v13;
  qword_2D10D60[8] = off_2C714E8;
  ++LODWORD(qword_2D10D60[1]);
  qword_2D10D20 = off_2C75848;
  LOWORD(qword_2D10D60[9]) = 0;
  qword_2D10D60[10] = off_2BEAB08;
  LOBYTE(qword_2D10D60[7]) = 0;
  *(__m128i *)&qword_2D10D60[13] = v16;
  sub_2217250(&qword_2D10D20, "pgso-cold-code-only-for-instr-pgo", 33);
  unk_2D10D48 = v12;
  LOBYTE(qword_2D10D60[7]) = 0;
  LOWORD(qword_2D10D60[9]) = 256;
  BYTE2(dword_2D10D28) = BYTE2(dword_2D10D28) & 0x9F | 0x20;
  unk_2D10D40 = "Apply the profile guided size optimizations only to cold code under instrumentation PGO.";
  sub_2218140(&qword_2D10D20);
  __cxa_atexit(sub_200E190, &qword_2D10D20, &off_2B25620);
  v17 = j__strlen("Apply the profile guided size optimizations only to cold code under sample PGO.");
  qword_2D10C60 = &off_2C758B0;
  *(_QWORD *)&dword_2D10C68 = dword_2D10C68 & 0x80000000;
  qword_2D10CA0[1] = 0x100000000LL;
  qword_2D10CA0[0] = &qword_2D10CA0[2];
  unk_2D10C70 = 0;
  unk_2D10C78 = 0;
  unk_2D10C80 = 0;
  unk_2D10C88 = 0;
  unk_2D10C90 = 0;
  unk_2D10C98 = 0;
  qword_2D10CA0[3] = &qword_2D10CA0[6];
  qword_2D10CA0[4] = 1;
  LODWORD(qword_2D10CA0[5]) = 0;
  BYTE4(qword_2D10CA0[5]) = 1;
  v41 = &qword_2D10CA0[2];
  v18 = sub_2210FF0("Apply the profile guided size optimizations only to cold code under sample PGO.");
  v19 = LODWORD(qword_2D10CA0[1]);
  v20 = v41;
  if ( (unsigned __int64)LODWORD(qword_2D10CA0[1]) + 1 > HIDWORD(qword_2D10CA0[1]) )
  {
    v41 = (_QWORD *)v18;
    sub_2237220(qword_2D10CA0, v20, LODWORD(qword_2D10CA0[1]) + 1LL, 8);
    v19 = LODWORD(qword_2D10CA0[1]);
    v18 = (__int64)v41;
  }
  v21 = _mm_load_si128(&v40);
  *(_QWORD *)(qword_2D10CA0[0] + 8 * v19) = v18;
  qword_2D10CA0[8] = off_2C714E8;
  ++LODWORD(qword_2D10CA0[1]);
  qword_2D10C60 = off_2C75848;
  LOWORD(qword_2D10CA0[9]) = 0;
  qword_2D10CA0[10] = off_2BEAB08;
  LOBYTE(qword_2D10CA0[7]) = 0;
  *(__m128i *)&qword_2D10CA0[13] = v21;
  sub_2217250(&qword_2D10C60, "pgso-cold-code-only-for-sample-pgo", 34);
  unk_2D10C88 = v17;
  LOBYTE(qword_2D10CA0[7]) = 0;
  LOWORD(qword_2D10CA0[9]) = 256;
  BYTE2(dword_2D10C68) = BYTE2(dword_2D10C68) & 0x9F | 0x20;
  unk_2D10C80 = "Apply the profile guided size optimizations only to cold code under sample PGO.";
  sub_2218140(&qword_2D10C60);
  __cxa_atexit(sub_200E190, &qword_2D10C60, &off_2B25620);
  v22 = j__strlen("Apply the profile guided size optimizations only to cold code under partial-profile sample PGO.");
  qword_2D10BA0 = &off_2C758B0;
  *(_QWORD *)&dword_2D10BA8 = dword_2D10BA8 & 0x80000000;
  qword_2D10BE0[1] = 0x100000000LL;
  qword_2D10BE0[0] = &qword_2D10BE0[2];
  unk_2D10BB0 = 0;
  unk_2D10BB8 = 0;
  unk_2D10BC0 = 0;
  unk_2D10BC8 = 0;
  unk_2D10BD0 = 0;
  unk_2D10BD8 = 0;
  qword_2D10BE0[3] = &qword_2D10BE0[6];
  qword_2D10BE0[4] = 1;
  LODWORD(qword_2D10BE0[5]) = 0;
  BYTE4(qword_2D10BE0[5]) = 1;
  v41 = &qword_2D10BE0[2];
  v23 = sub_2210FF0("Apply the profile guided size optimizations only to cold code under partial-profile sample PGO.");
  v24 = LODWORD(qword_2D10BE0[1]);
  v25 = v41;
  if ( (unsigned __int64)LODWORD(qword_2D10BE0[1]) + 1 > HIDWORD(qword_2D10BE0[1]) )
  {
    v41 = (_QWORD *)v23;
    sub_2237220(qword_2D10BE0, v25, LODWORD(qword_2D10BE0[1]) + 1LL, 8);
    v24 = LODWORD(qword_2D10BE0[1]);
    v23 = (__int64)v41;
  }
  v26 = _mm_load_si128(&v40);
  *(_QWORD *)(qword_2D10BE0[0] + 8 * v24) = v23;
  qword_2D10BE0[8] = off_2C714E8;
  ++LODWORD(qword_2D10BE0[1]);
  qword_2D10BA0 = off_2C75848;
  LOWORD(qword_2D10BE0[9]) = 0;
  qword_2D10BE0[10] = off_2BEAB08;
  LOBYTE(qword_2D10BE0[7]) = 0;
  *(__m128i *)&qword_2D10BE0[13] = v26;
  sub_2217250(&qword_2D10BA0, "pgso-cold-code-only-for-partial-sample-pgo", 42);
  unk_2D10BC8 = v22;
  LOBYTE(qword_2D10BE0[7]) = 0;
  LOWORD(qword_2D10BE0[9]) = 256;
  BYTE2(dword_2D10BA8) = BYTE2(dword_2D10BA8) & 0x9F | 0x20;
  unk_2D10BC0 = "Apply the profile guided size optimizations only to cold code under partial-profile sample PGO.";
  sub_2218140(&qword_2D10BA0);
  __cxa_atexit(sub_200E190, &qword_2D10BA0, &off_2B25620);
  v27 = j__strlen("Force the (profiled-guided) size optimizations. ");
  qword_2D10AE0 = &off_2C758B0;
  *(_QWORD *)&dword_2D10AE8 = dword_2D10AE8 & 0x80000000;
  qword_2D10B20[1] = 0x100000000LL;
  qword_2D10B20[0] = &qword_2D10B20[2];
  unk_2D10AF0 = 0;
  unk_2D10AF8 = 0;
  unk_2D10B00 = 0;
  unk_2D10B08 = 0;
  unk_2D10B10 = 0;
  unk_2D10B18 = 0;
  qword_2D10B20[3] = &qword_2D10B20[6];
  qword_2D10B20[4] = 1;
  LODWORD(qword_2D10B20[5]) = 0;
  BYTE4(qword_2D10B20[5]) = 1;
  v41 = &qword_2D10B20[2];
  v28 = sub_2210FF0("Force the (profiled-guided) size optimizations. ");
  v29 = LODWORD(qword_2D10B20[1]);
  v30 = v41;
  if ( (unsigned __int64)LODWORD(qword_2D10B20[1]) + 1 > HIDWORD(qword_2D10B20[1]) )
  {
    v41 = (_QWORD *)v28;
    sub_2237220(qword_2D10B20, v30, LODWORD(qword_2D10B20[1]) + 1LL, 8);
    v29 = LODWORD(qword_2D10B20[1]);
    v28 = (__int64)v41;
  }
  v31 = _mm_load_si128(&v40);
  *(_QWORD *)(qword_2D10B20[0] + 8 * v29) = v28;
  LOWORD(qword_2D10B20[9]) = 0;
  qword_2D10B20[8] = off_2C714E8;
  qword_2D10AE0 = off_2C75848;
  ++LODWORD(qword_2D10B20[1]);
  qword_2D10B20[10] = off_2BEAB08;
  LOBYTE(qword_2D10B20[7]) = 0;
  *(__m128i *)&qword_2D10B20[13] = v31;
  sub_2217250(&qword_2D10AE0, "force-pgso", 10);
  unk_2D10B08 = v27;
  LOBYTE(qword_2D10B20[7]) = 0;
  LOWORD(qword_2D10B20[9]) = 256;
  BYTE2(dword_2D10AE8) = BYTE2(dword_2D10AE8) & 0x9F | 0x20;
  unk_2D10B00 = "Force the (profiled-guided) size optimizations. ";
  sub_2218140(&qword_2D10AE0);
  __cxa_atexit(sub_200E190, &qword_2D10AE0, &off_2B25620);
  v32 = j__strlen("The profile guided size optimization profile summary cutoff for instrumentation profile.");
  qword_2D10A20 = &off_2C758B0;
  *(_QWORD *)&dword_2D10A28 = dword_2D10A28 & 0x80000000;
  qword_2D10A60[1] = 0x100000000LL;
  unk_2D10A30 = 0;
  unk_2D10A38 = 0;
  unk_2D10A40 = 0;
  unk_2D10A48 = 0;
  unk_2D10A50 = 0;
  unk_2D10A58 = 0;
  qword_2D10A60[0] = &qword_2D10A60[2];
  qword_2D10A60[3] = &qword_2D10A60[6];
  qword_2D10A60[4] = 1;
  LODWORD(qword_2D10A60[5]) = 0;
  BYTE4(qword_2D10A60[5]) = 1;
  v33 = sub_2210FF0("The profile guided size optimization profile summary cutoff for instrumentation profile.");
  v34 = LODWORD(qword_2D10A60[1]);
  if ( (unsigned __int64)LODWORD(qword_2D10A60[1]) + 1 > HIDWORD(qword_2D10A60[1]) )
  {
    v40.m128i_i64[0] = v33;
    sub_2237220(qword_2D10A60, &qword_2D10A60[2], LODWORD(qword_2D10A60[1]) + 1LL, 8);
    v34 = LODWORD(qword_2D10A60[1]);
    v33 = v40.m128i_i64[0];
  }
  *(_QWORD *)(qword_2D10A60[0] + 8 * v34) = v33;
  qword_2D10A60[8] = off_2C71BB0;
  ++LODWORD(qword_2D10A60[1]);
  qword_2D10A20 = off_2C75778;
  qword_2D10A60[10] = off_2BEAB68;
  LODWORD(qword_2D10A60[7]) = 0;
  LODWORD(qword_2D10A60[9]) = 0;
  BYTE4(qword_2D10A60[9]) = 0;
  *(__m128 *)&qword_2D10A60[13] = _mm_loadh_ps((const double *)&off_2C77900);
  v40 = *(__m128i *)&qword_2D10A60[13];
  sub_2217250(&qword_2D10A20, "pgso-cutoff-instr-prof", 22);
  unk_2D10A48 = v32;
  LODWORD(qword_2D10A60[7]) = (_DWORD)&stru_E7EF0;
  BYTE4(qword_2D10A60[9]) = 1;
  LODWORD(qword_2D10A60[9]) = (_DWORD)&stru_E7EF0;
  BYTE2(dword_2D10A28) = BYTE2(dword_2D10A28) & 0x9F | 0x20;
  unk_2D10A40 = "The profile guided size optimization profile summary cutoff for instrumentation profile.";
  sub_2218140(&qword_2D10A20);
  __cxa_atexit(sub_20141D0, &qword_2D10A20, &off_2B25620);
  v35 = j__strlen("The profile guided size optimization profile summary cutoff for sample profile.");
  qword_2D10960 = &off_2C758B0;
  *(_QWORD *)&dword_2D10968 = dword_2D10968 & 0x80000000;
  qword_2D109A0[1] = 0x100000000LL;
  unk_2D10970 = 0;
  unk_2D10978 = 0;
  unk_2D10980 = 0;
  unk_2D10988 = 0;
  unk_2D10990 = 0;
  unk_2D10998 = 0;
  qword_2D109A0[0] = &qword_2D109A0[2];
  qword_2D109A0[3] = &qword_2D109A0[6];
  qword_2D109A0[4] = 1;
  LODWORD(qword_2D109A0[5]) = 0;
  BYTE4(qword_2D109A0[5]) = 1;
  v36 = sub_2210FF0("The profile guided size optimization profile summary cutoff for sample profile.");
  v37 = LODWORD(qword_2D109A0[1]);
  v38 = _mm_load_si128(&v40);
  if ( (unsigned __int64)LODWORD(qword_2D109A0[1]) + 1 > HIDWORD(qword_2D109A0[1]) )
  {
    v41 = (_QWORD *)v36;
    sub_2237220(qword_2D109A0, &qword_2D109A0[2], LODWORD(qword_2D109A0[1]) + 1LL, 8);
    v37 = LODWORD(qword_2D109A0[1]);
    v36 = (__int64)v41;
    v38 = _mm_load_si128(&v40);
  }
  *(_QWORD *)(qword_2D109A0[0] + 8 * v37) = v36;
  qword_2D109A0[8] = off_2C71BB0;
  qword_2D10960 = off_2C75778;
  ++LODWORD(qword_2D109A0[1]);
  qword_2D109A0[10] = off_2BEAB68;
  LODWORD(qword_2D109A0[7]) = 0;
  LODWORD(qword_2D109A0[9]) = 0;
  BYTE4(qword_2D109A0[9]) = 0;
  *(__m128i *)&qword_2D109A0[13] = v38;
  sub_2217250(&qword_2D10960, "pgso-cutoff-sample-prof", 23);
  unk_2D10988 = v35;
  LODWORD(qword_2D109A0[7]) = 990000;
  BYTE4(qword_2D109A0[9]) = 1;
  LODWORD(qword_2D109A0[9]) = 990000;
  BYTE2(dword_2D10968) = BYTE2(dword_2D10968) & 0x9F | 0x20;
  unk_2D10980 = "The profile guided size optimization profile summary cutoff for sample profile.";
  sub_2218140(&qword_2D10960);
  return __cxa_atexit(sub_20141D0, &qword_2D10960, &off_2B25620);
}
