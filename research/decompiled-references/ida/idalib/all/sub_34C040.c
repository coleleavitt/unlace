int sub_34C040()
{
  size_t v0; // rax
  __int64 v1; // r12
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  size_t v5; // rax
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  size_t v10; // rax
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  __m128i v15; // xmm2
  size_t v16; // rax
  __int64 v17; // r14
  __int64 v18; // rax
  __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  __m128i v21; // xmm3
  size_t v22; // rax
  __int64 v23; // r14
  __int64 v24; // rax
  __int64 v25; // rcx
  unsigned __int64 v26; // rdx
  __m128i v27; // xmm4
  size_t v28; // rax
  __int64 v29; // r14
  __int64 v30; // rax
  __int64 v31; // rcx
  unsigned __int64 v32; // rdx
  __m128i v33; // xmm5
  size_t v34; // rax
  __int64 v35; // r14
  __int64 v36; // rax
  __int64 v37; // rcx
  unsigned __int64 v38; // rdx
  __m128i v39; // xmm6
  size_t v40; // rax
  __int64 v41; // r14
  __int64 v42; // rax
  __int64 v43; // rcx
  unsigned __int64 v44; // rdx
  __m128i v45; // xmm7
  size_t v46; // rax
  __int64 v47; // r14
  __int64 v48; // rax
  __int64 v49; // rcx
  unsigned __int64 v50; // rdx
  __m128i v51; // xmm2
  __m128i v53; // [rsp+0h] [rbp-58h] BYREF
  __int64 v54; // [rsp+18h] [rbp-40h]

  v0 = j__strlen("Control the number of bonus instructions (default = 1)");
  qword_2D0A150 = 0;
  v1 = v0;
  qword_2D0A158 = 0;
  qword_2D0A160 = 0;
  qword_2D0A140 = (__int64)&off_2C758B0;
  qword_2D0A148 = (unsigned int)qword_2D0A148 & 0x80000000;
  qword_2D0A188 = 0x100000000LL;
  qword_2D0A168 = 0;
  qword_2D0A170 = 0;
  qword_2D0A178 = 0;
  qword_2D0A180 = (__int64)&unk_2D0A190;
  qword_2D0A198 = (__int64)&unk_2D0A1B0;
  qword_2D0A1A0 = 1;
  dword_2D0A1A8 = 0;
  byte_2D0A1AC = 1;
  v2 = sub_2210FF0("Control the number of bonus instructions (default = 1)");
  v3 = (unsigned int)qword_2D0A188;
  v4 = (unsigned int)qword_2D0A188 + 1LL;
  if ( v4 > HIDWORD(qword_2D0A188) )
  {
    v53.m128i_i64[0] = v2;
    sub_2237220((char *)&unk_2D0A190 - 16, &unk_2D0A190, v4, 8);
    v3 = (unsigned int)qword_2D0A188;
    v2 = v53.m128i_i64[0];
  }
  *(_QWORD *)(qword_2D0A180 + 8 * v3) = v2;
  xmmword_2D0A1E8 = (__int128)_mm_loadh_ps((const double *)off_2C784F8);
  LODWORD(qword_2D0A188) = qword_2D0A188 + 1;
  qword_2D0A1C0 = (__int64)off_2C712D0;
  dword_2D0A1B8 = 0;
  byte_2D0A1CC = 0;
  qword_2D0A140 = (__int64)off_2C75710;
  dword_2D0A1C8 = 0;
  qword_2D0A1D0 = (__int64)off_2BEAB98;
  sub_2217250(&qword_2D0A140, "bonus-inst-threshold", 20);
  dword_2D0A1B8 = 1;
  byte_2D0A1CC = 1;
  qword_2D0A168 = v1;
  dword_2D0A1C8 = 1;
  BYTE2(qword_2D0A148) = BYTE2(qword_2D0A148) & 0x9F | 0x20;
  qword_2D0A160 = (__int64)"Control the number of bonus instructions (default = 1)";
  sub_2218140(&qword_2D0A140);
  __cxa_atexit(sub_1FED260, &qword_2D0A140, &off_2B25620);
  v5 = j__strlen("Preserve canonical loop structure (default = true)");
  qword_2D0A0C0 = (__int64)&unk_2D0A0D0;
  v6 = v5;
  qword_2D0A090 = 0;
  qword_2D0A080 = (__int64)&off_2C758B0;
  qword_2D0A088 = (unsigned int)qword_2D0A088 & 0x80000000;
  qword_2D0A0C8 = 0x100000000LL;
  qword_2D0A098 = 0;
  qword_2D0A0A0 = 0;
  qword_2D0A0A8 = 0;
  qword_2D0A0B0 = 0;
  qword_2D0A0B8 = 0;
  qword_2D0A0D8 = (__int64)&unk_2D0A0F0;
  qword_2D0A0E0 = 1;
  dword_2D0A0E8 = 0;
  byte_2D0A0EC = 1;
  v7 = sub_2210FF0("Preserve canonical loop structure (default = true)");
  v8 = (unsigned int)qword_2D0A0C8;
  v9 = (unsigned int)qword_2D0A0C8 + 1LL;
  if ( v9 > HIDWORD(qword_2D0A0C8) )
  {
    v53.m128i_i64[0] = v7;
    sub_2237220((char *)&unk_2D0A0D0 - 16, &unk_2D0A0D0, v9, 8);
    v8 = (unsigned int)qword_2D0A0C8;
    v7 = v53.m128i_i64[0];
  }
  *(_QWORD *)(qword_2D0A0C0 + 8 * v8) = v7;
  word_2D0A108 = 0;
  qword_2D0A100 = (__int64)off_2C714E8;
  qword_2D0A080 = (__int64)off_2C75848;
  v53 = (__m128i)_mm_loadh_ps((const double *)off_2C78368);
  xmmword_2D0A128 = (__int128)v53;
  qword_2D0A110 = (__int64)off_2BEAB08;
  LODWORD(qword_2D0A0C8) = qword_2D0A0C8 + 1;
  byte_2D0A0F8 = 0;
  sub_2217250(&qword_2D0A080, "keep-loops", 10);
  qword_2D0A0A8 = v6;
  byte_2D0A0F8 = 1;
  BYTE2(qword_2D0A088) = BYTE2(qword_2D0A088) & 0x9F | 0x20;
  word_2D0A108 = 257;
  qword_2D0A0A0 = (__int64)"Preserve canonical loop structure (default = true)";
  sub_2218140(&qword_2D0A080);
  __cxa_atexit(sub_200E190, &qword_2D0A080, &off_2B25620);
  v10 = j__strlen("Convert switches into an integer range comparison (default = false)");
  qword_2D0A000 = (__int64)&unk_2D0A010;
  v11 = v10;
  qword_2D09FD0 = 0;
  qword_2D09FC0 = (__int64)&off_2C758B0;
  qword_2D09FC8 = (unsigned int)qword_2D09FC8 & 0x80000000;
  qword_2D0A008 = 0x100000000LL;
  qword_2D09FD8 = 0;
  qword_2D09FE0 = 0;
  qword_2D09FE8 = 0;
  qword_2D09FF0 = 0;
  qword_2D09FF8 = 0;
  qword_2D0A018 = (__int64)&unk_2D0A030;
  qword_2D0A020 = 1;
  dword_2D0A028 = 0;
  byte_2D0A02C = 1;
  v12 = sub_2210FF0("Convert switches into an integer range comparison (default = false)");
  v13 = (unsigned int)qword_2D0A008;
  v14 = (unsigned int)qword_2D0A008 + 1LL;
  if ( v14 > HIDWORD(qword_2D0A008) )
  {
    v54 = v12;
    sub_2237220((char *)&unk_2D0A010 - 16, &unk_2D0A010, v14, 8);
    v13 = (unsigned int)qword_2D0A008;
    v12 = v54;
  }
  v15 = _mm_load_si128(&v53);
  *(_QWORD *)(qword_2D0A000 + 8 * v13) = v12;
  word_2D0A048 = 0;
  qword_2D0A040 = (__int64)off_2C714E8;
  qword_2D09FC0 = (__int64)off_2C75848;
  xmmword_2D0A068 = (__int128)v15;
  qword_2D0A050 = (__int64)off_2BEAB08;
  LODWORD(qword_2D0A008) = qword_2D0A008 + 1;
  byte_2D0A038 = 0;
  sub_2217250(&qword_2D09FC0, "switch-range-to-icmp", 20);
  qword_2D09FE8 = v11;
  byte_2D0A038 = 0;
  BYTE2(qword_2D09FC8) = BYTE2(qword_2D09FC8) & 0x9F | 0x20;
  word_2D0A048 = 256;
  qword_2D09FE0 = (__int64)"Convert switches into an integer range comparison (default = false)";
  sub_2218140(&qword_2D09FC0);
  __cxa_atexit(sub_200E190, &qword_2D09FC0, &off_2B25620);
  v16 = j__strlen("Convert switches to lookup tables (default = false)");
  qword_2D09F40 = (__int64)&unk_2D09F50;
  v17 = v16;
  qword_2D09F10 = 0;
  qword_2D09F00 = (__int64)&off_2C758B0;
  qword_2D09F08 = (unsigned int)qword_2D09F08 & 0x80000000;
  qword_2D09F48 = 0x100000000LL;
  qword_2D09F18 = 0;
  qword_2D09F20 = 0;
  qword_2D09F28 = 0;
  qword_2D09F30 = 0;
  qword_2D09F38 = 0;
  qword_2D09F58 = (__int64)&unk_2D09F70;
  qword_2D09F60 = 1;
  dword_2D09F68 = 0;
  byte_2D09F6C = 1;
  v18 = sub_2210FF0("Convert switches to lookup tables (default = false)");
  v19 = (unsigned int)qword_2D09F48;
  v20 = (unsigned int)qword_2D09F48 + 1LL;
  if ( v20 > HIDWORD(qword_2D09F48) )
  {
    v54 = v18;
    sub_2237220((char *)&unk_2D09F50 - 16, &unk_2D09F50, v20, 8);
    v19 = (unsigned int)qword_2D09F48;
    v18 = v54;
  }
  v21 = _mm_load_si128(&v53);
  *(_QWORD *)(qword_2D09F40 + 8 * v19) = v18;
  word_2D09F88 = 0;
  qword_2D09F80 = (__int64)off_2C714E8;
  qword_2D09F00 = (__int64)off_2C75848;
  xmmword_2D09FA8 = (__int128)v21;
  qword_2D09F90 = (__int64)off_2BEAB08;
  LODWORD(qword_2D09F48) = qword_2D09F48 + 1;
  byte_2D09F78 = 0;
  sub_2217250(&qword_2D09F00, "switch-to-lookup", 16);
  qword_2D09F28 = v17;
  byte_2D09F78 = 0;
  BYTE2(qword_2D09F08) = BYTE2(qword_2D09F08) & 0x9F | 0x20;
  word_2D09F88 = 256;
  qword_2D09F20 = (__int64)"Convert switches to lookup tables (default = false)";
  sub_2218140(&qword_2D09F00);
  __cxa_atexit(sub_200E190, &qword_2D09F00, &off_2B25620);
  v22 = j__strlen("Forward switch condition to phi ops (default = false)");
  qword_2D09E80 = (__int64)&unk_2D09E90;
  v23 = v22;
  qword_2D09E50 = 0;
  qword_2D09E40 = (__int64)&off_2C758B0;
  qword_2D09E48 = (unsigned int)qword_2D09E48 & 0x80000000;
  qword_2D09E88 = 0x100000000LL;
  qword_2D09E58 = 0;
  qword_2D09E60 = 0;
  qword_2D09E68 = 0;
  qword_2D09E70 = 0;
  qword_2D09E78 = 0;
  qword_2D09E98 = (__int64)&unk_2D09EB0;
  qword_2D09EA0 = 1;
  dword_2D09EA8 = 0;
  byte_2D09EAC = 1;
  v24 = sub_2210FF0("Forward switch condition to phi ops (default = false)");
  v25 = (unsigned int)qword_2D09E88;
  v26 = (unsigned int)qword_2D09E88 + 1LL;
  if ( v26 > HIDWORD(qword_2D09E88) )
  {
    v54 = v24;
    sub_2237220((char *)&unk_2D09E90 - 16, &unk_2D09E90, v26, 8);
    v25 = (unsigned int)qword_2D09E88;
    v24 = v54;
  }
  v27 = _mm_load_si128(&v53);
  *(_QWORD *)(qword_2D09E80 + 8 * v25) = v24;
  qword_2D09EC0 = (__int64)off_2C714E8;
  qword_2D09E40 = (__int64)off_2C75848;
  word_2D09EC8 = 0;
  xmmword_2D09EE8 = (__int128)v27;
  qword_2D09ED0 = (__int64)off_2BEAB08;
  LODWORD(qword_2D09E88) = qword_2D09E88 + 1;
  byte_2D09EB8 = 0;
  sub_2217250(&qword_2D09E40, "forward-switch-cond", 19);
  word_2D09EC8 = 256;
  qword_2D09E68 = v23;
  byte_2D09EB8 = 0;
  BYTE2(qword_2D09E48) = BYTE2(qword_2D09E48) & 0x9F | 0x20;
  qword_2D09E60 = (__int64)"Forward switch condition to phi ops (default = false)";
  sub_2218140(&qword_2D09E40);
  __cxa_atexit(sub_200E190, &qword_2D09E40, &off_2B25620);
  v28 = j__strlen("hoist common instructions (default = false)");
  qword_2D09DC0 = (__int64)&unk_2D09DD0;
  v29 = v28;
  qword_2D09D90 = 0;
  qword_2D09D80 = (__int64)&off_2C758B0;
  qword_2D09D88 = (unsigned int)qword_2D09D88 & 0x80000000;
  qword_2D09DC8 = 0x100000000LL;
  qword_2D09D98 = 0;
  qword_2D09DA0 = 0;
  qword_2D09DA8 = 0;
  qword_2D09DB0 = 0;
  qword_2D09DB8 = 0;
  qword_2D09DD8 = (__int64)&unk_2D09DF0;
  qword_2D09DE0 = 1;
  dword_2D09DE8 = 0;
  byte_2D09DEC = 1;
  v30 = sub_2210FF0("hoist common instructions (default = false)");
  v31 = (unsigned int)qword_2D09DC8;
  v32 = (unsigned int)qword_2D09DC8 + 1LL;
  if ( v32 > HIDWORD(qword_2D09DC8) )
  {
    v54 = v30;
    sub_2237220((char *)&unk_2D09DD0 - 16, &unk_2D09DD0, v32, 8);
    v31 = (unsigned int)qword_2D09DC8;
    v30 = v54;
  }
  v33 = _mm_load_si128(&v53);
  *(_QWORD *)(qword_2D09DC0 + 8 * v31) = v30;
  qword_2D09E00 = (__int64)off_2C714E8;
  qword_2D09D80 = (__int64)off_2C75848;
  word_2D09E08 = 0;
  xmmword_2D09E28 = (__int128)v33;
  qword_2D09E10 = (__int64)off_2BEAB08;
  LODWORD(qword_2D09DC8) = qword_2D09DC8 + 1;
  byte_2D09DF8 = 0;
  sub_2217250(&qword_2D09D80, "hoist-common-insts", 18);
  word_2D09E08 = 256;
  qword_2D09DA8 = v29;
  byte_2D09DF8 = 0;
  BYTE2(qword_2D09D88) = BYTE2(qword_2D09D88) & 0x9F | 0x20;
  qword_2D09DA0 = (__int64)"hoist common instructions (default = false)";
  sub_2218140(&qword_2D09D80);
  __cxa_atexit(sub_200E190, &qword_2D09D80, &off_2B25620);
  v34 = j__strlen("Hoist loads/stores if the target supports conditional faulting (default = false)");
  qword_2D09D00 = (__int64)&unk_2D09D10;
  v35 = v34;
  qword_2D09CD0 = 0;
  qword_2D09CC0 = (__int64)&off_2C758B0;
  qword_2D09CC8 = (unsigned int)qword_2D09CC8 & 0x80000000;
  qword_2D09D08 = 0x100000000LL;
  qword_2D09CD8 = 0;
  qword_2D09CE0 = 0;
  qword_2D09CE8 = 0;
  qword_2D09CF0 = 0;
  qword_2D09CF8 = 0;
  qword_2D09D18 = (__int64)&unk_2D09D30;
  qword_2D09D20 = 1;
  dword_2D09D28 = 0;
  byte_2D09D2C = 1;
  v36 = sub_2210FF0("Hoist loads/stores if the target supports conditional faulting (default = false)");
  v37 = (unsigned int)qword_2D09D08;
  v38 = (unsigned int)qword_2D09D08 + 1LL;
  if ( v38 > HIDWORD(qword_2D09D08) )
  {
    v54 = v36;
    sub_2237220((char *)&unk_2D09D10 - 16, &unk_2D09D10, v38, 8);
    v37 = (unsigned int)qword_2D09D08;
    v36 = v54;
  }
  v39 = _mm_load_si128(&v53);
  *(_QWORD *)(qword_2D09D00 + 8 * v37) = v36;
  qword_2D09D40 = (__int64)off_2C714E8;
  word_2D09D48 = 0;
  qword_2D09CC0 = (__int64)off_2C75848;
  xmmword_2D09D68 = (__int128)v39;
  qword_2D09D50 = (__int64)off_2BEAB08;
  LODWORD(qword_2D09D08) = qword_2D09D08 + 1;
  byte_2D09D38 = 0;
  sub_2217250(&qword_2D09CC0, "hoist-loads-stores-with-cond-faulting", 37);
  word_2D09D48 = 256;
  qword_2D09CE8 = v35;
  byte_2D09D38 = 0;
  BYTE2(qword_2D09CC8) = BYTE2(qword_2D09CC8) & 0x9F | 0x20;
  qword_2D09CE0 = (__int64)"Hoist loads/stores if the target supports conditional faulting (default = false)";
  sub_2218140(&qword_2D09CC0);
  __cxa_atexit(sub_200E190, &qword_2D09CC0, &off_2B25620);
  v40 = j__strlen("Sink common instructions (default = false)");
  qword_2D09C40 = (__int64)&unk_2D09C50;
  v41 = v40;
  qword_2D09C10 = 0;
  qword_2D09C00 = (__int64)&off_2C758B0;
  qword_2D09C08 = (unsigned int)qword_2D09C08 & 0x80000000;
  qword_2D09C48 = 0x100000000LL;
  qword_2D09C18 = 0;
  qword_2D09C20 = 0;
  qword_2D09C28 = 0;
  qword_2D09C30 = 0;
  qword_2D09C38 = 0;
  qword_2D09C58 = (__int64)&unk_2D09C70;
  qword_2D09C60 = 1;
  dword_2D09C68 = 0;
  byte_2D09C6C = 1;
  v42 = sub_2210FF0("Sink common instructions (default = false)");
  v43 = (unsigned int)qword_2D09C48;
  v44 = (unsigned int)qword_2D09C48 + 1LL;
  if ( v44 > HIDWORD(qword_2D09C48) )
  {
    v54 = v42;
    sub_2237220((char *)&unk_2D09C50 - 16, &unk_2D09C50, v44, 8);
    v43 = (unsigned int)qword_2D09C48;
    v42 = v54;
  }
  v45 = _mm_load_si128(&v53);
  *(_QWORD *)(qword_2D09C40 + 8 * v43) = v42;
  qword_2D09C80 = (__int64)off_2C714E8;
  qword_2D09C00 = (__int64)off_2C75848;
  word_2D09C88 = 0;
  xmmword_2D09CA8 = (__int128)v45;
  qword_2D09C90 = (__int64)off_2BEAB08;
  LODWORD(qword_2D09C48) = qword_2D09C48 + 1;
  byte_2D09C78 = 0;
  sub_2217250(&qword_2D09C00, "sink-common-insts", 17);
  word_2D09C88 = 256;
  qword_2D09C28 = v41;
  byte_2D09C78 = 0;
  BYTE2(qword_2D09C08) = BYTE2(qword_2D09C08) & 0x9F | 0x20;
  qword_2D09C20 = (__int64)"Sink common instructions (default = false)";
  sub_2218140(&qword_2D09C00);
  __cxa_atexit(sub_200E190, &qword_2D09C00, &off_2B25620);
  v46 = j__strlen("Speculate unpredictable branches (default = false)");
  byte_2D09BAC = 1;
  qword_2D09B50 = 0;
  v47 = v46;
  qword_2D09B40 = (__int64)&off_2C758B0;
  qword_2D09B48 = (unsigned int)qword_2D09B48 & 0x80000000;
  qword_2D09B88 = 0x100000000LL;
  qword_2D09B58 = 0;
  qword_2D09B60 = 0;
  qword_2D09B68 = 0;
  qword_2D09B70 = 0;
  qword_2D09B78 = 0;
  qword_2D09B80 = (__int64)&unk_2D09B90;
  qword_2D09B98 = (__int64)&unk_2D09BB0;
  qword_2D09BA0 = 1;
  dword_2D09BA8 = 0;
  v48 = sub_2210FF0("Speculate unpredictable branches (default = false)");
  v49 = (unsigned int)qword_2D09B88;
  v50 = (unsigned int)qword_2D09B88 + 1LL;
  if ( v50 > HIDWORD(qword_2D09B88) )
  {
    v54 = v48;
    sub_2237220((char *)&unk_2D09B90 - 16, &unk_2D09B90, v50, 8);
    v49 = (unsigned int)qword_2D09B88;
    v48 = v54;
  }
  v51 = _mm_load_si128(&v53);
  *(_QWORD *)(qword_2D09B80 + 8 * v49) = v48;
  word_2D09BC8 = 0;
  qword_2D09BC0 = (__int64)off_2C714E8;
  qword_2D09B40 = (__int64)off_2C75848;
  qword_2D09BD0 = (__int64)off_2BEAB08;
  xmmword_2D09BE8 = (__int128)v51;
  LODWORD(qword_2D09B88) = qword_2D09B88 + 1;
  byte_2D09BB8 = 0;
  sub_2217250(&qword_2D09B40, "speculate-unpredictables", 24);
  word_2D09BC8 = 256;
  qword_2D09B68 = v47;
  byte_2D09BB8 = 0;
  BYTE2(qword_2D09B48) = BYTE2(qword_2D09B48) & 0x9F | 0x20;
  qword_2D09B60 = (__int64)"Speculate unpredictable branches (default = false)";
  sub_2218140(&qword_2D09B40);
  return __cxa_atexit(sub_200E190, &qword_2D09B40, &off_2B25620);
}
