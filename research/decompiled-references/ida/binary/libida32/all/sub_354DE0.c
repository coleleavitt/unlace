int sub_354DE0()
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
  unk_2CE7050 = 0;
  qword_2CE7040 = &off_2C4B8B0;
  *(_QWORD *)&dword_2CE7048 = dword_2CE7048 & 0x80000000;
  qword_2CE7080[1] = 0x100000000LL;
  unk_2CE7058 = 0;
  unk_2CE7060 = 0;
  unk_2CE7068 = 0;
  unk_2CE7070 = 0;
  unk_2CE7078 = 0;
  qword_2CE7080[0] = &qword_2CE7080[2];
  qword_2CE7080[3] = &qword_2CE7080[6];
  qword_2CE7080[4] = 1;
  LODWORD(qword_2CE7080[5]) = 0;
  BYTE4(qword_2CE7080[5]) = 1;
  v1 = sub_21ED2B0("Enable the profile guided size optimizations. ");
  v2 = LODWORD(qword_2CE7080[1]);
  if ( (unsigned __int64)LODWORD(qword_2CE7080[1]) + 1 > HIDWORD(qword_2CE7080[1]) )
  {
    v40.m128i_i64[0] = v1;
    sub_22134E0(qword_2CE7080, &qword_2CE7080[2], LODWORD(qword_2CE7080[1]) + 1LL, 8);
    v2 = LODWORD(qword_2CE7080[1]);
    v1 = v40.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CE7080[0] + 8 * v2) = v1;
  LOWORD(qword_2CE7080[9]) = 0;
  qword_2CE7080[8] = off_2C474E8;
  ++LODWORD(qword_2CE7080[1]);
  qword_2CE7040 = off_2C4B848;
  qword_2CE7080[10] = off_2BC0B68;
  LOBYTE(qword_2CE7080[7]) = 0;
  *(__m128 *)&qword_2CE7080[13] = _mm_loadh_ps((const double *)off_2C4E368);
  v40 = *(__m128i *)&qword_2CE7080[13];
  sub_21F3510(&qword_2CE7040, "pgso", 4);
  unk_2CE7068 = v0;
  LOBYTE(qword_2CE7080[7]) = 1;
  BYTE2(dword_2CE7048) = BYTE2(dword_2CE7048) & 0x9F | 0x20;
  LOWORD(qword_2CE7080[9]) = 257;
  unk_2CE7060 = "Enable the profile guided size optimizations. ";
  sub_21F4400(&qword_2CE7040);
  __cxa_atexit(sub_1FEA450, &qword_2CE7040, &off_2AFC540);
  v3 = j__strlen("Apply the profile guided size optimizations only if the working set size is large (except for cold code.)");
  qword_2CE6F80 = &off_2C4B8B0;
  *(_QWORD *)&dword_2CE6F88 = dword_2CE6F88 & 0x80000000;
  qword_2CE6FC0[1] = 0x100000000LL;
  qword_2CE6FC0[0] = &qword_2CE6FC0[2];
  unk_2CE6F90 = 0;
  unk_2CE6F98 = 0;
  unk_2CE6FA0 = 0;
  unk_2CE6FA8 = 0;
  unk_2CE6FB0 = 0;
  unk_2CE6FB8 = 0;
  qword_2CE6FC0[3] = &qword_2CE6FC0[6];
  qword_2CE6FC0[4] = 1;
  LODWORD(qword_2CE6FC0[5]) = 0;
  BYTE4(qword_2CE6FC0[5]) = 1;
  v41 = &qword_2CE6FC0[2];
  v4 = sub_21ED2B0("Apply the profile guided size optimizations only if the working set size is large (except for cold code.)");
  v5 = LODWORD(qword_2CE6FC0[1]);
  if ( (unsigned __int64)LODWORD(qword_2CE6FC0[1]) + 1 > HIDWORD(qword_2CE6FC0[1]) )
  {
    v41 = (_QWORD *)v4;
    sub_22134E0(qword_2CE6FC0, &qword_2CE6FC0[2], LODWORD(qword_2CE6FC0[1]) + 1LL, 8);
    v5 = LODWORD(qword_2CE6FC0[1]);
    v4 = (__int64)v41;
  }
  v6 = _mm_load_si128(&v40);
  *(_QWORD *)(qword_2CE6FC0[0] + 8 * v5) = v4;
  LOWORD(qword_2CE6FC0[9]) = 0;
  qword_2CE6FC0[8] = off_2C474E8;
  ++LODWORD(qword_2CE6FC0[1]);
  qword_2CE6F80 = off_2C4B848;
  qword_2CE6FC0[10] = off_2BC0B68;
  LOBYTE(qword_2CE6FC0[7]) = 0;
  *(__m128i *)&qword_2CE6FC0[13] = v6;
  sub_21F3510(&qword_2CE6F80, "pgso-lwss-only", 14);
  unk_2CE6FA8 = v3;
  LOBYTE(qword_2CE6FC0[7]) = 1;
  BYTE2(dword_2CE6F88) = BYTE2(dword_2CE6F88) & 0x9F | 0x20;
  LOWORD(qword_2CE6FC0[9]) = 257;
  unk_2CE6FA0 = "Apply the profile guided size optimizations only if the working set size is large (except for cold code.)";
  sub_21F4400(&qword_2CE6F80);
  __cxa_atexit(sub_1FEA450, &qword_2CE6F80, &off_2AFC540);
  v7 = j__strlen("Apply the profile guided size optimizations only to cold code.");
  qword_2CE6EC0 = &off_2C4B8B0;
  *(_QWORD *)&dword_2CE6EC8 = dword_2CE6EC8 & 0x80000000;
  qword_2CE6F00[1] = 0x100000000LL;
  qword_2CE6F00[0] = &qword_2CE6F00[2];
  unk_2CE6ED0 = 0;
  unk_2CE6ED8 = 0;
  unk_2CE6EE0 = 0;
  unk_2CE6EE8 = 0;
  unk_2CE6EF0 = 0;
  unk_2CE6EF8 = 0;
  qword_2CE6F00[3] = &qword_2CE6F00[6];
  qword_2CE6F00[4] = 1;
  LODWORD(qword_2CE6F00[5]) = 0;
  BYTE4(qword_2CE6F00[5]) = 1;
  v41 = &qword_2CE6F00[2];
  v8 = sub_21ED2B0("Apply the profile guided size optimizations only to cold code.");
  v9 = LODWORD(qword_2CE6F00[1]);
  v10 = v41;
  if ( (unsigned __int64)LODWORD(qword_2CE6F00[1]) + 1 > HIDWORD(qword_2CE6F00[1]) )
  {
    v41 = (_QWORD *)v8;
    sub_22134E0(qword_2CE6F00, v10, LODWORD(qword_2CE6F00[1]) + 1LL, 8);
    v9 = LODWORD(qword_2CE6F00[1]);
    v8 = (__int64)v41;
  }
  v11 = _mm_load_si128(&v40);
  *(_QWORD *)(qword_2CE6F00[0] + 8 * v9) = v8;
  qword_2CE6F00[8] = off_2C474E8;
  ++LODWORD(qword_2CE6F00[1]);
  qword_2CE6EC0 = off_2C4B848;
  LOWORD(qword_2CE6F00[9]) = 0;
  qword_2CE6F00[10] = off_2BC0B68;
  LOBYTE(qword_2CE6F00[7]) = 0;
  *(__m128i *)&qword_2CE6F00[13] = v11;
  sub_21F3510(&qword_2CE6EC0, "pgso-cold-code-only", 19);
  unk_2CE6EE8 = v7;
  LOBYTE(qword_2CE6F00[7]) = 0;
  BYTE2(dword_2CE6EC8) = BYTE2(dword_2CE6EC8) & 0x9F | 0x20;
  LOWORD(qword_2CE6F00[9]) = 256;
  unk_2CE6EE0 = "Apply the profile guided size optimizations only to cold code.";
  sub_21F4400(&qword_2CE6EC0);
  __cxa_atexit(sub_1FEA450, &qword_2CE6EC0, &off_2AFC540);
  v12 = j__strlen("Apply the profile guided size optimizations only to cold code under instrumentation PGO.");
  qword_2CE6E00 = &off_2C4B8B0;
  *(_QWORD *)&dword_2CE6E08 = dword_2CE6E08 & 0x80000000;
  qword_2CE6E40[1] = 0x100000000LL;
  qword_2CE6E40[0] = &qword_2CE6E40[2];
  unk_2CE6E10 = 0;
  unk_2CE6E18 = 0;
  unk_2CE6E20 = 0;
  unk_2CE6E28 = 0;
  unk_2CE6E30 = 0;
  unk_2CE6E38 = 0;
  qword_2CE6E40[3] = &qword_2CE6E40[6];
  qword_2CE6E40[4] = 1;
  LODWORD(qword_2CE6E40[5]) = 0;
  BYTE4(qword_2CE6E40[5]) = 1;
  v41 = &qword_2CE6E40[2];
  v13 = sub_21ED2B0("Apply the profile guided size optimizations only to cold code under instrumentation PGO.");
  v14 = LODWORD(qword_2CE6E40[1]);
  v15 = v41;
  if ( (unsigned __int64)LODWORD(qword_2CE6E40[1]) + 1 > HIDWORD(qword_2CE6E40[1]) )
  {
    v41 = (_QWORD *)v13;
    sub_22134E0(qword_2CE6E40, v15, LODWORD(qword_2CE6E40[1]) + 1LL, 8);
    v14 = LODWORD(qword_2CE6E40[1]);
    v13 = (__int64)v41;
  }
  v16 = _mm_load_si128(&v40);
  *(_QWORD *)(qword_2CE6E40[0] + 8 * v14) = v13;
  qword_2CE6E40[8] = off_2C474E8;
  ++LODWORD(qword_2CE6E40[1]);
  qword_2CE6E00 = off_2C4B848;
  LOWORD(qword_2CE6E40[9]) = 0;
  qword_2CE6E40[10] = off_2BC0B68;
  LOBYTE(qword_2CE6E40[7]) = 0;
  *(__m128i *)&qword_2CE6E40[13] = v16;
  sub_21F3510(&qword_2CE6E00, "pgso-cold-code-only-for-instr-pgo", 33);
  unk_2CE6E28 = v12;
  LOBYTE(qword_2CE6E40[7]) = 0;
  LOWORD(qword_2CE6E40[9]) = 256;
  BYTE2(dword_2CE6E08) = BYTE2(dword_2CE6E08) & 0x9F | 0x20;
  unk_2CE6E20 = "Apply the profile guided size optimizations only to cold code under instrumentation PGO.";
  sub_21F4400(&qword_2CE6E00);
  __cxa_atexit(sub_1FEA450, &qword_2CE6E00, &off_2AFC540);
  v17 = j__strlen("Apply the profile guided size optimizations only to cold code under sample PGO.");
  qword_2CE6D40 = &off_2C4B8B0;
  *(_QWORD *)&dword_2CE6D48 = dword_2CE6D48 & 0x80000000;
  qword_2CE6D80[1] = 0x100000000LL;
  qword_2CE6D80[0] = &qword_2CE6D80[2];
  unk_2CE6D50 = 0;
  unk_2CE6D58 = 0;
  unk_2CE6D60 = 0;
  unk_2CE6D68 = 0;
  unk_2CE6D70 = 0;
  unk_2CE6D78 = 0;
  qword_2CE6D80[3] = &qword_2CE6D80[6];
  qword_2CE6D80[4] = 1;
  LODWORD(qword_2CE6D80[5]) = 0;
  BYTE4(qword_2CE6D80[5]) = 1;
  v41 = &qword_2CE6D80[2];
  v18 = sub_21ED2B0("Apply the profile guided size optimizations only to cold code under sample PGO.");
  v19 = LODWORD(qword_2CE6D80[1]);
  v20 = v41;
  if ( (unsigned __int64)LODWORD(qword_2CE6D80[1]) + 1 > HIDWORD(qword_2CE6D80[1]) )
  {
    v41 = (_QWORD *)v18;
    sub_22134E0(qword_2CE6D80, v20, LODWORD(qword_2CE6D80[1]) + 1LL, 8);
    v19 = LODWORD(qword_2CE6D80[1]);
    v18 = (__int64)v41;
  }
  v21 = _mm_load_si128(&v40);
  *(_QWORD *)(qword_2CE6D80[0] + 8 * v19) = v18;
  qword_2CE6D80[8] = off_2C474E8;
  ++LODWORD(qword_2CE6D80[1]);
  qword_2CE6D40 = off_2C4B848;
  LOWORD(qword_2CE6D80[9]) = 0;
  qword_2CE6D80[10] = off_2BC0B68;
  LOBYTE(qword_2CE6D80[7]) = 0;
  *(__m128i *)&qword_2CE6D80[13] = v21;
  sub_21F3510(&qword_2CE6D40, "pgso-cold-code-only-for-sample-pgo", 34);
  unk_2CE6D68 = v17;
  LOBYTE(qword_2CE6D80[7]) = 0;
  LOWORD(qword_2CE6D80[9]) = 256;
  BYTE2(dword_2CE6D48) = BYTE2(dword_2CE6D48) & 0x9F | 0x20;
  unk_2CE6D60 = "Apply the profile guided size optimizations only to cold code under sample PGO.";
  sub_21F4400(&qword_2CE6D40);
  __cxa_atexit(sub_1FEA450, &qword_2CE6D40, &off_2AFC540);
  v22 = j__strlen("Apply the profile guided size optimizations only to cold code under partial-profile sample PGO.");
  qword_2CE6C80 = &off_2C4B8B0;
  *(_QWORD *)&dword_2CE6C88 = dword_2CE6C88 & 0x80000000;
  qword_2CE6CC0[1] = 0x100000000LL;
  qword_2CE6CC0[0] = &qword_2CE6CC0[2];
  unk_2CE6C90 = 0;
  unk_2CE6C98 = 0;
  unk_2CE6CA0 = 0;
  unk_2CE6CA8 = 0;
  unk_2CE6CB0 = 0;
  unk_2CE6CB8 = 0;
  qword_2CE6CC0[3] = &qword_2CE6CC0[6];
  qword_2CE6CC0[4] = 1;
  LODWORD(qword_2CE6CC0[5]) = 0;
  BYTE4(qword_2CE6CC0[5]) = 1;
  v41 = &qword_2CE6CC0[2];
  v23 = sub_21ED2B0("Apply the profile guided size optimizations only to cold code under partial-profile sample PGO.");
  v24 = LODWORD(qword_2CE6CC0[1]);
  v25 = v41;
  if ( (unsigned __int64)LODWORD(qword_2CE6CC0[1]) + 1 > HIDWORD(qword_2CE6CC0[1]) )
  {
    v41 = (_QWORD *)v23;
    sub_22134E0(qword_2CE6CC0, v25, LODWORD(qword_2CE6CC0[1]) + 1LL, 8);
    v24 = LODWORD(qword_2CE6CC0[1]);
    v23 = (__int64)v41;
  }
  v26 = _mm_load_si128(&v40);
  *(_QWORD *)(qword_2CE6CC0[0] + 8 * v24) = v23;
  qword_2CE6CC0[8] = off_2C474E8;
  ++LODWORD(qword_2CE6CC0[1]);
  qword_2CE6C80 = off_2C4B848;
  LOWORD(qword_2CE6CC0[9]) = 0;
  qword_2CE6CC0[10] = off_2BC0B68;
  LOBYTE(qword_2CE6CC0[7]) = 0;
  *(__m128i *)&qword_2CE6CC0[13] = v26;
  sub_21F3510(&qword_2CE6C80, "pgso-cold-code-only-for-partial-sample-pgo", 42);
  unk_2CE6CA8 = v22;
  LOBYTE(qword_2CE6CC0[7]) = 0;
  LOWORD(qword_2CE6CC0[9]) = 256;
  BYTE2(dword_2CE6C88) = BYTE2(dword_2CE6C88) & 0x9F | 0x20;
  unk_2CE6CA0 = "Apply the profile guided size optimizations only to cold code under partial-profile sample PGO.";
  sub_21F4400(&qword_2CE6C80);
  __cxa_atexit(sub_1FEA450, &qword_2CE6C80, &off_2AFC540);
  v27 = j__strlen("Force the (profiled-guided) size optimizations. ");
  qword_2CE6BC0 = &off_2C4B8B0;
  *(_QWORD *)&dword_2CE6BC8 = dword_2CE6BC8 & 0x80000000;
  qword_2CE6C00[1] = 0x100000000LL;
  qword_2CE6C00[0] = &qword_2CE6C00[2];
  unk_2CE6BD0 = 0;
  unk_2CE6BD8 = 0;
  unk_2CE6BE0 = 0;
  unk_2CE6BE8 = 0;
  unk_2CE6BF0 = 0;
  unk_2CE6BF8 = 0;
  qword_2CE6C00[3] = &qword_2CE6C00[6];
  qword_2CE6C00[4] = 1;
  LODWORD(qword_2CE6C00[5]) = 0;
  BYTE4(qword_2CE6C00[5]) = 1;
  v41 = &qword_2CE6C00[2];
  v28 = sub_21ED2B0("Force the (profiled-guided) size optimizations. ");
  v29 = LODWORD(qword_2CE6C00[1]);
  v30 = v41;
  if ( (unsigned __int64)LODWORD(qword_2CE6C00[1]) + 1 > HIDWORD(qword_2CE6C00[1]) )
  {
    v41 = (_QWORD *)v28;
    sub_22134E0(qword_2CE6C00, v30, LODWORD(qword_2CE6C00[1]) + 1LL, 8);
    v29 = LODWORD(qword_2CE6C00[1]);
    v28 = (__int64)v41;
  }
  v31 = _mm_load_si128(&v40);
  *(_QWORD *)(qword_2CE6C00[0] + 8 * v29) = v28;
  LOWORD(qword_2CE6C00[9]) = 0;
  qword_2CE6C00[8] = off_2C474E8;
  qword_2CE6BC0 = off_2C4B848;
  ++LODWORD(qword_2CE6C00[1]);
  qword_2CE6C00[10] = off_2BC0B68;
  LOBYTE(qword_2CE6C00[7]) = 0;
  *(__m128i *)&qword_2CE6C00[13] = v31;
  sub_21F3510(&qword_2CE6BC0, "force-pgso", 10);
  unk_2CE6BE8 = v27;
  LOBYTE(qword_2CE6C00[7]) = 0;
  LOWORD(qword_2CE6C00[9]) = 256;
  BYTE2(dword_2CE6BC8) = BYTE2(dword_2CE6BC8) & 0x9F | 0x20;
  unk_2CE6BE0 = "Force the (profiled-guided) size optimizations. ";
  sub_21F4400(&qword_2CE6BC0);
  __cxa_atexit(sub_1FEA450, &qword_2CE6BC0, &off_2AFC540);
  v32 = j__strlen("The profile guided size optimization profile summary cutoff for instrumentation profile.");
  qword_2CE6B00 = &off_2C4B8B0;
  *(_QWORD *)&dword_2CE6B08 = dword_2CE6B08 & 0x80000000;
  qword_2CE6B40[1] = 0x100000000LL;
  unk_2CE6B10 = 0;
  unk_2CE6B18 = 0;
  unk_2CE6B20 = 0;
  unk_2CE6B28 = 0;
  unk_2CE6B30 = 0;
  unk_2CE6B38 = 0;
  qword_2CE6B40[0] = &qword_2CE6B40[2];
  qword_2CE6B40[3] = &qword_2CE6B40[6];
  qword_2CE6B40[4] = 1;
  LODWORD(qword_2CE6B40[5]) = 0;
  BYTE4(qword_2CE6B40[5]) = 1;
  v33 = sub_21ED2B0("The profile guided size optimization profile summary cutoff for instrumentation profile.");
  v34 = LODWORD(qword_2CE6B40[1]);
  if ( (unsigned __int64)LODWORD(qword_2CE6B40[1]) + 1 > HIDWORD(qword_2CE6B40[1]) )
  {
    v40.m128i_i64[0] = v33;
    sub_22134E0(qword_2CE6B40, &qword_2CE6B40[2], LODWORD(qword_2CE6B40[1]) + 1LL, 8);
    v34 = LODWORD(qword_2CE6B40[1]);
    v33 = v40.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CE6B40[0] + 8 * v34) = v33;
  qword_2CE6B40[8] = off_2C47BB0;
  ++LODWORD(qword_2CE6B40[1]);
  qword_2CE6B00 = off_2C4B778;
  qword_2CE6B40[10] = off_2BC0BC8;
  LODWORD(qword_2CE6B40[7]) = 0;
  LODWORD(qword_2CE6B40[9]) = 0;
  BYTE4(qword_2CE6B40[9]) = 0;
  *(__m128 *)&qword_2CE6B40[13] = _mm_loadh_ps((const double *)&off_2C4D900);
  v40 = *(__m128i *)&qword_2CE6B40[13];
  sub_21F3510(&qword_2CE6B00, "pgso-cutoff-instr-prof", 22);
  unk_2CE6B28 = v32;
  LODWORD(qword_2CE6B40[7]) = 950000;
  BYTE4(qword_2CE6B40[9]) = 1;
  LODWORD(qword_2CE6B40[9]) = 950000;
  BYTE2(dword_2CE6B08) = BYTE2(dword_2CE6B08) & 0x9F | 0x20;
  unk_2CE6B20 = "The profile guided size optimization profile summary cutoff for instrumentation profile.";
  sub_21F4400(&qword_2CE6B00);
  __cxa_atexit(sub_1FF0490, &qword_2CE6B00, &off_2AFC540);
  v35 = j__strlen("The profile guided size optimization profile summary cutoff for sample profile.");
  qword_2CE6A40 = &off_2C4B8B0;
  *(_QWORD *)&dword_2CE6A48 = dword_2CE6A48 & 0x80000000;
  qword_2CE6A80[1] = 0x100000000LL;
  unk_2CE6A50 = 0;
  unk_2CE6A58 = 0;
  unk_2CE6A60 = 0;
  unk_2CE6A68 = 0;
  unk_2CE6A70 = 0;
  unk_2CE6A78 = 0;
  qword_2CE6A80[0] = &qword_2CE6A80[2];
  qword_2CE6A80[3] = &qword_2CE6A80[6];
  qword_2CE6A80[4] = 1;
  LODWORD(qword_2CE6A80[5]) = 0;
  BYTE4(qword_2CE6A80[5]) = 1;
  v36 = sub_21ED2B0("The profile guided size optimization profile summary cutoff for sample profile.");
  v37 = LODWORD(qword_2CE6A80[1]);
  v38 = _mm_load_si128(&v40);
  if ( (unsigned __int64)LODWORD(qword_2CE6A80[1]) + 1 > HIDWORD(qword_2CE6A80[1]) )
  {
    v41 = (_QWORD *)v36;
    sub_22134E0(qword_2CE6A80, &qword_2CE6A80[2], LODWORD(qword_2CE6A80[1]) + 1LL, 8);
    v37 = LODWORD(qword_2CE6A80[1]);
    v36 = (__int64)v41;
    v38 = _mm_load_si128(&v40);
  }
  *(_QWORD *)(qword_2CE6A80[0] + 8 * v37) = v36;
  qword_2CE6A80[8] = off_2C47BB0;
  qword_2CE6A40 = off_2C4B778;
  ++LODWORD(qword_2CE6A80[1]);
  qword_2CE6A80[10] = off_2BC0BC8;
  LODWORD(qword_2CE6A80[7]) = 0;
  LODWORD(qword_2CE6A80[9]) = 0;
  BYTE4(qword_2CE6A80[9]) = 0;
  *(__m128i *)&qword_2CE6A80[13] = v38;
  sub_21F3510(&qword_2CE6A40, "pgso-cutoff-sample-prof", 23);
  unk_2CE6A68 = v35;
  LODWORD(qword_2CE6A80[7]) = 990000;
  BYTE4(qword_2CE6A80[9]) = 1;
  LODWORD(qword_2CE6A80[9]) = 990000;
  BYTE2(dword_2CE6A48) = BYTE2(dword_2CE6A48) & 0x9F | 0x20;
  unk_2CE6A60 = "The profile guided size optimization profile summary cutoff for sample profile.";
  sub_21F4400(&qword_2CE6A40);
  return __cxa_atexit(sub_1FF0490, &qword_2CE6A40, &off_2AFC540);
}

