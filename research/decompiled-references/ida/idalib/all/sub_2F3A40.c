int sub_2F3A40()
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
  sub_200F900(&unk_2CDA640, "view-block-freq-propagation-dags", &v17, &v18, &ptr);
  if ( ptr != &v22 )
    free(ptr);
  v14.m128_u64[0] = (unsigned __int64)off_2BEAAE8;
  v16.m128i_i64[0] = (__int64)&qword_2CDA540[22];
  v15 = _mm_loadh_ps((const double *)off_2C77938);
  v16 = (__m128i)_mm_loadh_ps((const double *)v16.m128i_i64);
  __cxa_atexit(sub_200F580, &unk_2CDA640, &off_2B25620);
  v1 = j__strlen("The option to specify the name of the function whose CFG will be displayed.");
  sub_200F820(qword_2CDA540, 0, 0);
  si128 = _mm_load_si128((const __m128i *)&v15);
  v3 = _mm_load_si128(&v16);
  qword_2CDA540[15] = &qword_2CDA540[17];
  qword_2CDA540[16] = 0;
  LOBYTE(qword_2CDA540[17]) = 0;
  qword_2CDA540[0] = off_2C757E0;
  qword_2CDA540[21] = 0;
  LOBYTE(qword_2CDA540[22]) = 0;
  LOBYTE(qword_2CDA540[24]) = 0;
  qword_2CDA540[25] = off_2BEAC58;
  *(__m128i *)&qword_2CDA540[28] = si128;
  *(__m128i *)&qword_2CDA540[19] = v3;
  v4 = j__strlen("view-bfi-func-name");
  sub_2217250(qword_2CDA540, "view-bfi-func-name", v4);
  qword_2CDA540[5] = v1;
  BYTE2(qword_2CDA540[1]) = BYTE2(qword_2CDA540[1]) & 0x9F | 0x20;
  qword_2CDA540[4] = "The option to specify the name of the function whose CFG will be displayed.";
  sub_2218140(qword_2CDA540);
  __cxa_atexit(sub_1FED2E0, qword_2CDA540, &off_2B25620);
  v5 = j__strlen(
         "An integer in percent used to specify the hot blocks/edges to be displayed in red: a block or edge whose freque"
         "ncy is no less than the max frequency of the function multiplied by this percent.");
  sub_200F820(qword_2CDA480, 0, 0);
  LODWORD(qword_2CDA480[15]) = 0;
  BYTE4(qword_2CDA480[17]) = 0;
  LODWORD(qword_2CDA480[17]) = 0;
  qword_2CDA480[16] = off_2C712D0;
  *(__m128 *)&qword_2CDA480[21] = _mm_loadh_ps((const double *)off_2C784F8);
  qword_2CDA480[0] = off_2C75710;
  qword_2CDA480[18] = off_2BEAB98;
  v6 = j__strlen("view-hot-freq-percent");
  sub_2217250(qword_2CDA480, "view-hot-freq-percent", v6);
  qword_2CDA480[5] = v5;
  LODWORD(qword_2CDA480[15]) = 10;
  BYTE4(qword_2CDA480[17]) = 1;
  LODWORD(qword_2CDA480[17]) = 10;
  BYTE2(qword_2CDA480[1]) = BYTE2(qword_2CDA480[1]) & 0x9F | 0x20;
  qword_2CDA480[4] = "An integer in percent used to specify the hot blocks/edges to be displayed in red: a block or edge "
                     "whose frequency is no less than the max frequency of the function multiplied by this percent.";
  sub_2218140(qword_2CDA480);
  __cxa_atexit(sub_1FED260, qword_2CDA480, &off_2B25620);
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
  sub_200FCE0(&unk_2CDA220, "pgo-view-counts", &v17, &v18, &ptr);
  if ( ptr != &v22 )
    free(ptr);
  v14.m128_u64[0] = (unsigned __int64)&qword_2CDA060[22];
  v14 = _mm_loadh_ps((const double *)v14.m128_u64);
  __cxa_atexit(sub_200F620, &unk_2CDA220, &off_2B25620);
  v7 = j__strlen("Print the block frequency info.");
  sub_200F820(&qword_2CDA160, 0, 0);
  word_2CDA1E8 = 0;
  byte_2CDA1D8 = 0;
  xmmword_2CDA208 = (__int128)_mm_loadh_ps((const double *)off_2C78368);
  qword_2CDA1E0 = (__int64)off_2C714E8;
  qword_2CDA160 = (__int64)off_2C75848;
  qword_2CDA1F0 = (__int64)off_2BEAB08;
  v8 = j__strlen("print-bfi");
  sub_2217250(&qword_2CDA160, "print-bfi", v8);
  word_2CDA1E8 = 256;
  qword_2CDA188 = v7;
  byte_2CDA1D8 = 0;
  byte_2CDA16A = byte_2CDA16A & 0x9F | 0x20;
  qword_2CDA180 = (__int64)"Print the block frequency info.";
  sub_2218140(&qword_2CDA160);
  __cxa_atexit(sub_200E190, &qword_2CDA160, &off_2B25620);
  v9 = j__strlen("The option to specify the name of the function whose block frequency info is printed.");
  sub_200F820(qword_2CDA060, 0, 0);
  v10 = _mm_load_si128((const __m128i *)&v14);
  v11 = _mm_load_si128((const __m128i *)&v15);
  qword_2CDA060[15] = &qword_2CDA060[17];
  qword_2CDA060[16] = 0;
  LOBYTE(qword_2CDA060[17]) = 0;
  qword_2CDA060[0] = off_2C757E0;
  qword_2CDA060[21] = 0;
  LOBYTE(qword_2CDA060[22]) = 0;
  LOBYTE(qword_2CDA060[24]) = 0;
  qword_2CDA060[25] = off_2BEAC58;
  *(__m128i *)&qword_2CDA060[19] = v10;
  *(__m128i *)&qword_2CDA060[28] = v11;
  v12 = j__strlen("print-bfi-func-name");
  sub_2217250(qword_2CDA060, "print-bfi-func-name", v12);
  qword_2CDA060[5] = v9;
  BYTE2(qword_2CDA060[1]) = BYTE2(qword_2CDA060[1]) & 0x9F | 0x20;
  qword_2CDA060[4] = "The option to specify the name of the function whose block frequency info is printed.";
  sub_2218140(qword_2CDA060);
  return __cxa_atexit(sub_1FED2E0, qword_2CDA060, &off_2B25620);
}
