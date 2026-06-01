int sub_2F0680()
{
  size_t v0; // rax
  size_t v1; // r12
  __m128i si128; // xmm2
  __m128i v3; // xmm0
  size_t v4; // rax
  size_t v5; // r12
  size_t v6; // rax
  size_t v7; // r13
  size_t v8; // rax
  size_t v9; // r13
  __m128i v10; // xmm0
  __m128i v11; // xmm3
  size_t v12; // rax
  __m128 v14; // [rsp+0h] [rbp-138h] BYREF
  __m128 v15; // [rsp+10h] [rbp-128h] BYREF
  __m128i v16; // [rsp+20h] [rbp-118h] BYREF
  int v17; // [rsp+3Ch] [rbp-FCh] BYREF
  const char *v18; // [rsp+40h] [rbp-F8h] BYREF
  size_t v19; // [rsp+48h] [rbp-F0h]
  void *ptr; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v21; // [rsp+58h] [rbp-E0h]
  char *v22; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v23; // [rsp+68h] [rbp-D0h]
  int v24; // [rsp+70h] [rbp-C8h]
  const char *v25; // [rsp+78h] [rbp-C0h]
  __int64 v26; // [rsp+80h] [rbp-B8h]
  char *v27; // [rsp+88h] [rbp-B0h]
  __int64 v28; // [rsp+90h] [rbp-A8h]
  int v29; // [rsp+98h] [rbp-A0h]
  const char *v30; // [rsp+A0h] [rbp-98h]
  __int64 v31; // [rsp+A8h] [rbp-90h]
  char *v32; // [rsp+B0h] [rbp-88h]
  __int64 v33; // [rsp+B8h] [rbp-80h]
  int v34; // [rsp+C0h] [rbp-78h]
  const char *v35; // [rsp+C8h] [rbp-70h]
  __int64 v36; // [rsp+D0h] [rbp-68h]
  char *v37; // [rsp+D8h] [rbp-60h]
  __int64 v38; // [rsp+E0h] [rbp-58h]
  int v39; // [rsp+E8h] [rbp-50h]
  const char *v40; // [rsp+F0h] [rbp-48h]
  __int64 v41; // [rsp+F8h] [rbp-40h]

  v25 = "do not display graphs.";
  v22 = "none";
  v27 = "fraction";
  v30 = "display a graph using the fractional block frequency representation.";
  v32 = "integer";
  v35 = "display a graph using the raw integer fractional block frequency representation.";
  v37 = "count";
  v40 = "display a graph using the real profile count if available.";
  ptr = &v22;
  v23 = 4;
  v24 = 0;
  v26 = 22;
  v28 = 8;
  v29 = 1;
  v31 = 68;
  v33 = 7;
  v34 = 2;
  v36 = 80;
  v38 = 5;
  v39 = 3;
  v41 = 58;
  v21 = 0x400000004LL;
  v0 = j__strlen("Pop up a window to show a dag displaying how block frequencies propagation through the CFG.");
  v18 = "Pop up a window to show a dag displaying how block frequencies propagation through the CFG.";
  v19 = v0;
  v17 = 1;
  sub_1FEBBC0(&unk_2CB0720, "view-block-freq-propagation-dags", &v17, &v18, &ptr);
  if ( ptr != &v22 )
    free(ptr);
  v14.m128_u64[0] = (unsigned __int64)off_2BC0B48;
  v16.m128i_i64[0] = (__int64)&qword_2CB0620[22];
  v15 = _mm_loadh_ps((const double *)off_2C4D938);
  v16 = (__m128i)_mm_loadh_ps((const double *)v16.m128i_i64);
  __cxa_atexit(sub_1FEB840, &unk_2CB0720, &off_2AFC540);
  v1 = j__strlen("The option to specify the name of the function whose CFG will be displayed.");
  sub_1FEBAE0(qword_2CB0620, 0, 0);
  si128 = _mm_load_si128((const __m128i *)&v15);
  v3 = _mm_load_si128(&v16);
  qword_2CB0620[15] = &qword_2CB0620[17];
  qword_2CB0620[16] = 0;
  LOBYTE(qword_2CB0620[17]) = 0;
  qword_2CB0620[0] = off_2C4B7E0;
  qword_2CB0620[21] = 0;
  LOBYTE(qword_2CB0620[22]) = 0;
  LOBYTE(qword_2CB0620[24]) = 0;
  qword_2CB0620[25] = off_2BC0CB8;
  *(__m128i *)&qword_2CB0620[28] = si128;
  *(__m128i *)&qword_2CB0620[19] = v3;
  v4 = j__strlen("view-bfi-func-name");
  sub_21F3510(qword_2CB0620, "view-bfi-func-name", v4);
  qword_2CB0620[5] = v1;
  BYTE2(qword_2CB0620[1]) = BYTE2(qword_2CB0620[1]) & 0x9F | 0x20;
  qword_2CB0620[4] = "The option to specify the name of the function whose CFG will be displayed.";
  sub_21F4400(qword_2CB0620);
  __cxa_atexit(sub_1FC95A0, qword_2CB0620, &off_2AFC540);
  v5 = j__strlen(
         "An integer in percent used to specify the hot blocks/edges to be displayed in red: a block or edge whose freque"
         "ncy is no less than the max frequency of the function multiplied by this percent.");
  sub_1FEBAE0(qword_2CB0560, 0, 0);
  LODWORD(qword_2CB0560[15]) = 0;
  BYTE4(qword_2CB0560[17]) = 0;
  LODWORD(qword_2CB0560[17]) = 0;
  qword_2CB0560[16] = off_2C472D0;
  *(__m128 *)&qword_2CB0560[21] = _mm_loadh_ps((const double *)off_2C4E4F8);
  qword_2CB0560[0] = off_2C4B710;
  qword_2CB0560[18] = off_2BC0BF8;
  v6 = j__strlen("view-hot-freq-percent");
  sub_21F3510(qword_2CB0560, "view-hot-freq-percent", v6);
  qword_2CB0560[5] = v5;
  LODWORD(qword_2CB0560[15]) = 10;
  BYTE4(qword_2CB0560[17]) = 1;
  LODWORD(qword_2CB0560[17]) = 10;
  BYTE2(qword_2CB0560[1]) = BYTE2(qword_2CB0560[1]) & 0x9F | 0x20;
  qword_2CB0560[4] = "An integer in percent used to specify the hot blocks/edges to be displayed in red: a block or edge "
                     "whose frequency is no less than the max frequency of the function multiplied by this percent.";
  sub_21F4400(qword_2CB0560);
  __cxa_atexit(sub_1FC9520, qword_2CB0560, &off_2AFC540);
  ptr = &v22;
  v25 = "do not show.";
  v27 = "graph";
  v30 = "show a graph.";
  v32 = (char *)"text";
  v35 = "show in text.";
  v22 = "none";
  v23 = 4;
  v24 = 0;
  v26 = 12;
  v28 = 5;
  v29 = 1;
  v31 = 13;
  v33 = 4;
  v34 = 2;
  v36 = 13;
  v21 = 0x400000003LL;
  v19 = j__strlen(
          "A boolean option to show CFG dag or text with block profile counts and branch probabilities right after PGO pr"
          "ofile annotation step. The profile counts are computed using branch probabilities from the runtime profile dat"
          "a and block frequency propagation algorithm. To view the raw counts from the profile, use option -pgo-view-raw"
          "-counts instead. To limit graph display to only one function, use filtering option -view-bfi-func-name.");
  v18 = "A boolean option to show CFG dag or text with block profile counts and branch probabilities right after PGO prof"
        "ile annotation step. The profile counts are computed using branch probabilities from the runtime profile data an"
        "d block frequency propagation algorithm. To view the raw counts from the profile, use option -pgo-view-raw-count"
        "s instead. To limit graph display to only one function, use filtering option -view-bfi-func-name.";
  v17 = 1;
  sub_1FEBFA0(&unk_2CB0300, "pgo-view-counts", &v17, &v18, &ptr);
  if ( ptr != &v22 )
    free(ptr);
  v14.m128_u64[0] = (unsigned __int64)&qword_2CB0140[22];
  v14 = _mm_loadh_ps((const double *)v14.m128_u64);
  __cxa_atexit(sub_1FEB8E0, &unk_2CB0300, &off_2AFC540);
  v7 = j__strlen("Print the block frequency info.");
  sub_1FEBAE0(&qword_2CB0240, 0, 0);
  word_2CB02C8 = 0;
  byte_2CB02B8 = 0;
  xmmword_2CB02E8 = (__int128)_mm_loadh_ps((const double *)off_2C4E368);
  qword_2CB02C0 = (__int64)off_2C474E8;
  qword_2CB0240 = (__int64)off_2C4B848;
  qword_2CB02D0 = (__int64)off_2BC0B68;
  v8 = j__strlen("print-bfi");
  sub_21F3510(&qword_2CB0240, "print-bfi", v8);
  word_2CB02C8 = 256;
  qword_2CB0268 = v7;
  byte_2CB02B8 = 0;
  byte_2CB024A = byte_2CB024A & 0x9F | 0x20;
  qword_2CB0260 = (__int64)"Print the block frequency info.";
  sub_21F4400(&qword_2CB0240);
  __cxa_atexit(sub_1FEA450, &qword_2CB0240, &off_2AFC540);
  v9 = j__strlen("The option to specify the name of the function whose block frequency info is printed.");
  sub_1FEBAE0(qword_2CB0140, 0, 0);
  v10 = _mm_load_si128((const __m128i *)&v14);
  v11 = _mm_load_si128((const __m128i *)&v15);
  qword_2CB0140[15] = &qword_2CB0140[17];
  qword_2CB0140[16] = 0;
  LOBYTE(qword_2CB0140[17]) = 0;
  qword_2CB0140[0] = off_2C4B7E0;
  qword_2CB0140[21] = 0;
  LOBYTE(qword_2CB0140[22]) = 0;
  LOBYTE(qword_2CB0140[24]) = 0;
  qword_2CB0140[25] = off_2BC0CB8;
  *(__m128i *)&qword_2CB0140[19] = v10;
  *(__m128i *)&qword_2CB0140[28] = v11;
  v12 = j__strlen("print-bfi-func-name");
  sub_21F3510(qword_2CB0140, "print-bfi-func-name", v12);
  qword_2CB0140[5] = v9;
  BYTE2(qword_2CB0140[1]) = BYTE2(qword_2CB0140[1]) & 0x9F | 0x20;
  qword_2CB0140[4] = "The option to specify the name of the function whose block frequency info is printed.";
  sub_21F4400(qword_2CB0140);
  return __cxa_atexit(sub_1FC95A0, qword_2CB0140, &off_2AFC540);
}

