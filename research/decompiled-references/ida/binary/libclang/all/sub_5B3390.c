int __fastcall sub_5B3390(__int64 a1, __int64 a2)
{
  __m128i v2; // xmm1
  __m128i v3; // xmm2
  __int64 v4; // rbx
  __int64 v5; // rax
  __m128i v6; // xmm5
  char v7; // al
  __int64 v8; // rax
  __int64 v9; // rdx
  __m128i v10; // xmm6
  __int64 v11; // rax
  __int64 v12; // rdx
  __m128i v13; // xmm7
  __int64 v14; // rax
  __int64 v15; // rdx
  __m128i v16; // xmm3
  __int64 v17; // rax
  __int64 v18; // rdx
  __m128i v19; // xmm4
  __int64 v20; // rax
  __int64 v21; // rdx
  __m128i v22; // xmm5
  __int64 v23; // rax
  __int64 v24; // rdx
  __m128i v25; // xmm6
  __int64 v26; // rax
  __int64 v27; // rdx
  __m128i v28; // xmm7
  __int64 v29; // rax
  __int64 v30; // rdx
  __m128i v31; // xmm3
  __int64 v32; // rax
  __int64 v33; // rdx
  __m128i v34; // xmm4
  __int64 v35; // rax
  __int64 v36; // rdx
  __m128i v37; // xmm5
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rdx
  __m128i v42; // xmm7
  __int64 v43; // rax
  __int64 v44; // rdx
  __m128i v45; // xmm1
  __int64 v46; // rax
  __int64 v47; // rdx
  __m128i v48; // xmm2
  __int64 v49; // r12
  __int64 v50; // rax
  unsigned __int64 v51; // rdx
  __m128i v52; // xmm3
  __m128i v54; // [rsp+0h] [rbp-98h] BYREF
  __m128i v55; // [rsp+10h] [rbp-88h] BYREF
  char **v56; // [rsp+28h] [rbp-70h]
  const char **v57; // [rsp+30h] [rbp-68h]
  char *v58; // [rsp+38h] [rbp-60h]
  char v59; // [rsp+43h] [rbp-55h] BYREF
  int v60; // [rsp+44h] [rbp-54h] BYREF
  char *v61; // [rsp+48h] [rbp-50h] BYREF
  const char *v62; // [rsp+50h] [rbp-48h] BYREF
  __int64 v63; // [rsp+58h] [rbp-40h]

  v2 = _mm_loadl_epi64((const __m128i *)&off_49EBBE8);
  v3 = _mm_loadl_epi64((const __m128i *)&off_49EBBE0);
  qword_4B092C0[2] = 0;
  qword_4B092C0[0] = (__int64)&off_4A6E058;
  qword_4B092C0[1] &= 0x80000000uLL;
  v54 = _mm_unpacklo_epi64(v2, (__m128i)(unsigned __int64)nullsub_267);
  v55 = _mm_unpacklo_epi64(v3, (__m128i)(unsigned __int64)nullsub_266);
  qword_4B092C0[3] = 0;
  qword_4B092C0[4] = 0;
  qword_4B092C0[5] = 0;
  qword_4B092C0[6] = 0;
  qword_4B092C0[7] = 0;
  qword_4B092C0[8] = (__int64)&qword_4B092C0[10];
  qword_4B092C0[9] = 0x100000000LL;
  qword_4B092C0[11] = (__int64)&qword_4B092C0[14];
  LODWORD(qword_4B092C0[13]) = 0;
  qword_4B092C0[12] = 1;
  BYTE4(qword_4B092C0[13]) = 1;
  v4 = sub_259AC30(a1, a2);
  v5 = LODWORD(qword_4B092C0[9]);
  if ( HIDWORD(qword_4B092C0[9]) < (unsigned __int64)(v5 + 1) )
  {
    sub_25D6060(&qword_4B092C0[8], &qword_4B092C0[10], v5 + 1, 8);
    v5 = LODWORD(qword_4B092C0[9]);
  }
  v6 = _mm_load_si128(&v55);
  *(_QWORD *)(qword_4B092C0[8] + 8 * v5) = v4;
  LOWORD(qword_4B092C0[17]) = 0;
  *(_OWORD *)&qword_4B092C0[19] = 0;
  qword_4B092C0[16] = (__int64)&off_4A64730;
  *(__m128i *)&qword_4B092C0[21] = v6;
  ++LODWORD(qword_4B092C0[9]);
  qword_4B092C0[0] = (__int64)off_4A6DFF0;
  LOBYTE(qword_4B092C0[15]) = 0;
  qword_4B092C0[18] = (__int64)off_49D9168;
  sub_259F400(qword_4B092C0, "simplifycfg-require-and-preserve-domtree", 40);
  v7 = BYTE2(qword_4B092C0[1]);
  qword_4B092C0[5] = 90;
  BYTE2(qword_4B092C0[1]) = v7 & 0x9F | 0x20;
  qword_4B092C0[4] = (__int64)"Temporary development switch used to gradually uplift SimplifyCFG into preserving DomTree,";
  sub_259EC40(qword_4B092C0);
  __cxa_atexit(sub_1F6C9D0, qword_4B092C0, &off_47CFE00);
  qword_4B09210 = 0;
  qword_4B09200 = (__int64)&off_4A6E058;
  qword_4B09208 = (unsigned int)qword_4B09208 & 0x80000000;
  qword_4B09240 = (__int64)&qword_4B09250;
  qword_4B09218 = 0;
  qword_4B09220 = 0;
  qword_4B09228 = 0;
  qword_4B09230 = 0;
  qword_4B09238 = 0;
  qword_4B09248 = 0x100000000LL;
  qword_4B09258 = (__int64)&qword_4B09270;
  qword_4B09260 = 1;
  dword_4B09268 = 0;
  byte_4B0926C = 1;
  v8 = sub_259AC30(sub_1F6C9D0, &qword_4B09250);
  v9 = (unsigned int)qword_4B09248;
  if ( HIDWORD(qword_4B09248) < (unsigned __int64)(unsigned int)qword_4B09248 + 1 )
  {
    v56 = (char **)v8;
    sub_25D6060(&qword_4B09250 - 2, &qword_4B09250, (unsigned int)qword_4B09248 + 1LL, 8);
    v9 = (unsigned int)qword_4B09248;
    v8 = (__int64)v56;
  }
  v10 = _mm_load_si128(&v54);
  *(_QWORD *)(qword_4B09240 + 8 * v9) = v8;
  xmmword_4B09298 = 0;
  xmmword_4B092A8 = (__int128)v10;
  qword_4B09280 = (__int64)&off_4A64710;
  LODWORD(qword_4B09248) = qword_4B09248 + 1;
  byte_4B0928C = 0;
  qword_4B09200 = (__int64)off_4A6DEB8;
  dword_4B09278 = 0;
  dword_4B09288 = 0;
  qword_4B09290 = (__int64)off_49D9228;
  sub_259F400(&qword_4B09200, "phi-node-folding-threshold", 26);
  dword_4B09278 = 2;
  byte_4B0928C = 1;
  dword_4B09288 = 2;
  qword_4B09228 = 63;
  BYTE2(qword_4B09208) = BYTE2(qword_4B09208) & 0x9F | 0x20;
  qword_4B09220 = (__int64)"Control the amount of phi node folding to perform (default = 2)";
  sub_259EC40(&qword_4B09200);
  __cxa_atexit(sub_1F6C940, &qword_4B09200, &off_47CFE00);
  qword_4B09150 = 0;
  qword_4B09140 = (__int64)&off_4A6E058;
  qword_4B09148 = (unsigned int)qword_4B09148 & 0x80000000;
  qword_4B09180 = (__int64)&qword_4B09190;
  qword_4B09158 = 0;
  qword_4B09160 = 0;
  qword_4B09168 = 0;
  qword_4B09170 = 0;
  qword_4B09178 = 0;
  qword_4B09188 = 0x100000000LL;
  qword_4B09198 = (__int64)&qword_4B091B0;
  qword_4B091A0 = 1;
  dword_4B091A8 = 0;
  byte_4B091AC = 1;
  v11 = sub_259AC30(sub_1F6C940, &qword_4B09190);
  v12 = (unsigned int)qword_4B09188;
  if ( HIDWORD(qword_4B09188) < (unsigned __int64)(unsigned int)qword_4B09188 + 1 )
  {
    v56 = (char **)v11;
    sub_25D6060(&qword_4B09190 - 2, &qword_4B09190, (unsigned int)qword_4B09188 + 1LL, 8);
    v12 = (unsigned int)qword_4B09188;
    v11 = (__int64)v56;
  }
  v13 = _mm_load_si128(&v54);
  *(_QWORD *)(qword_4B09180 + 8 * v12) = v11;
  xmmword_4B091D8 = 0;
  xmmword_4B091E8 = (__int128)v13;
  qword_4B091C0 = (__int64)&off_4A64710;
  LODWORD(qword_4B09188) = qword_4B09188 + 1;
  byte_4B091CC = 0;
  qword_4B09140 = (__int64)off_4A6DEB8;
  dword_4B091B8 = 0;
  dword_4B091C8 = 0;
  qword_4B091D0 = (__int64)off_49D9228;
  sub_259F400(&qword_4B09140, "two-entry-phi-node-folding-threshold", 36);
  dword_4B091B8 = 4;
  byte_4B091CC = 1;
  dword_4B091C8 = 4;
  qword_4B09168 = 142;
  BYTE2(qword_4B09148) = BYTE2(qword_4B09148) & 0x9F | 0x20;
  qword_4B09160 = (__int64)"Control the maximal total instruction cost that we are willing to speculatively execute to fo"
                           "ld a 2-entry PHI node into a select (default = 4)";
  sub_259EC40(&qword_4B09140);
  __cxa_atexit(sub_1F6C940, &qword_4B09140, &off_47CFE00);
  qword_4B09090 = 0;
  qword_4B09080 = (__int64)&off_4A6E058;
  qword_4B09088 = (unsigned int)qword_4B09088 & 0x80000000;
  qword_4B090C0 = (__int64)&qword_4B090D0;
  qword_4B09098 = 0;
  qword_4B090A0 = 0;
  qword_4B090A8 = 0;
  qword_4B090B0 = 0;
  qword_4B090B8 = 0;
  qword_4B090C8 = 0x100000000LL;
  qword_4B090D8 = (__int64)&qword_4B090F0;
  qword_4B090E0 = 1;
  dword_4B090E8 = 0;
  byte_4B090EC = 1;
  v14 = sub_259AC30(sub_1F6C940, &qword_4B090D0);
  v15 = (unsigned int)qword_4B090C8;
  if ( HIDWORD(qword_4B090C8) < (unsigned __int64)(unsigned int)qword_4B090C8 + 1 )
  {
    v56 = (char **)v14;
    sub_25D6060(&qword_4B090D0 - 2, &qword_4B090D0, (unsigned int)qword_4B090C8 + 1LL, 8);
    v15 = (unsigned int)qword_4B090C8;
    v14 = (__int64)v56;
  }
  v16 = _mm_load_si128(&v55);
  *(_QWORD *)(qword_4B090C0 + 8 * v15) = v14;
  word_4B09108 = 0;
  xmmword_4B09118 = 0;
  qword_4B09100 = (__int64)&off_4A64730;
  xmmword_4B09128 = (__int128)v16;
  LODWORD(qword_4B090C8) = qword_4B090C8 + 1;
  qword_4B09080 = (__int64)off_4A6DFF0;
  byte_4B090F8 = 0;
  qword_4B09110 = (__int64)off_49D9168;
  sub_259F400(&qword_4B09080, "simplifycfg-hoist-common", 24);
  byte_4B090F8 = 1;
  qword_4B090A8 = 48;
  BYTE2(qword_4B09088) = BYTE2(qword_4B09088) & 0x9F | 0x20;
  word_4B09108 = 257;
  qword_4B090A0 = (__int64)"Hoist common instructions up to the parent block";
  sub_259EC40(&qword_4B09080);
  __cxa_atexit(sub_1F6C9D0, &qword_4B09080, &off_47CFE00);
  qword_4B08FD0 = 0;
  qword_4B08FC0 = (__int64)&off_4A6E058;
  qword_4B08FC8 = (unsigned int)qword_4B08FC8 & 0x80000000;
  qword_4B09000 = (__int64)&qword_4B09010;
  qword_4B08FD8 = 0;
  qword_4B08FE0 = 0;
  qword_4B08FE8 = 0;
  qword_4B08FF0 = 0;
  qword_4B08FF8 = 0;
  qword_4B09008 = 0x100000000LL;
  qword_4B09018 = (__int64)&qword_4B09030;
  qword_4B09020 = 1;
  dword_4B09028 = 0;
  byte_4B0902C = 1;
  v17 = sub_259AC30(sub_1F6C9D0, &qword_4B09010);
  v18 = (unsigned int)qword_4B09008;
  if ( HIDWORD(qword_4B09008) < (unsigned __int64)(unsigned int)qword_4B09008 + 1 )
  {
    v56 = (char **)v17;
    sub_25D6060(&qword_4B09010 - 2, &qword_4B09010, (unsigned int)qword_4B09008 + 1LL, 8);
    v18 = (unsigned int)qword_4B09008;
    v17 = (__int64)v56;
  }
  v19 = _mm_load_si128(&v55);
  *(_QWORD *)(qword_4B09000 + 8 * v18) = v17;
  word_4B09048 = 0;
  xmmword_4B09058 = 0;
  qword_4B09040 = (__int64)&off_4A64730;
  xmmword_4B09068 = (__int128)v19;
  LODWORD(qword_4B09008) = qword_4B09008 + 1;
  qword_4B08FC0 = (__int64)off_4A6DFF0;
  byte_4B09038 = 0;
  qword_4B09050 = (__int64)off_49D9168;
  sub_259F400(&qword_4B08FC0, "simplifycfg-hoist-loads-stores-with-cond-faulting", 49);
  byte_4B09038 = 1;
  qword_4B08FE8 = 62;
  BYTE2(qword_4B08FC8) = BYTE2(qword_4B08FC8) & 0x9F | 0x20;
  word_4B09048 = 257;
  qword_4B08FE0 = (__int64)"Hoist loads/stores if the target supports conditional faulting";
  sub_259EC40(&qword_4B08FC0);
  __cxa_atexit(sub_1F6C9D0, &qword_4B08FC0, &off_47CFE00);
  qword_4B08F10 = 0;
  qword_4B08F00 = (__int64)&off_4A6E058;
  qword_4B08F08 = (unsigned int)qword_4B08F08 & 0x80000000;
  qword_4B08F40 = (__int64)&qword_4B08F50;
  qword_4B08F18 = 0;
  qword_4B08F20 = 0;
  qword_4B08F28 = 0;
  qword_4B08F30 = 0;
  qword_4B08F38 = 0;
  qword_4B08F48 = 0x100000000LL;
  qword_4B08F58 = (__int64)&qword_4B08F70;
  qword_4B08F60 = 1;
  dword_4B08F68 = 0;
  byte_4B08F6C = 1;
  v20 = sub_259AC30(sub_1F6C9D0, &qword_4B08F50);
  v21 = (unsigned int)qword_4B08F48;
  if ( HIDWORD(qword_4B08F48) < (unsigned __int64)(unsigned int)qword_4B08F48 + 1 )
  {
    v56 = (char **)v20;
    sub_25D6060(&qword_4B08F50 - 2, &qword_4B08F50, (unsigned int)qword_4B08F48 + 1LL, 8);
    v21 = (unsigned int)qword_4B08F48;
    v20 = (__int64)v56;
  }
  v22 = _mm_load_si128(&v54);
  *(_QWORD *)(qword_4B08F40 + 8 * v21) = v20;
  xmmword_4B08F98 = 0;
  xmmword_4B08FA8 = (__int128)v22;
  qword_4B08F80 = (__int64)&off_4A64710;
  LODWORD(qword_4B08F48) = qword_4B08F48 + 1;
  byte_4B08F8C = 0;
  qword_4B08F00 = (__int64)off_4A6DEB8;
  dword_4B08F78 = 0;
  dword_4B08F88 = 0;
  qword_4B08F90 = (__int64)off_49D9228;
  sub_259F400(&qword_4B08F00, "hoist-loads-stores-with-cond-faulting-threshold", 47);
  dword_4B08F78 = 6;
  byte_4B08F8C = 1;
  dword_4B08F88 = 6;
  qword_4B08F28 = 133;
  BYTE2(qword_4B08F08) = BYTE2(qword_4B08F08) & 0x9F | 0x20;
  qword_4B08F20 = (__int64)"Control the maximal conditional load/store that we are willing to speculatively execute to el"
                           "iminate conditional branch (default = 6)";
  sub_259EC40(&qword_4B08F00);
  __cxa_atexit(sub_1F6C940, &qword_4B08F00, &off_47CFE00);
  qword_4B08E50 = 0;
  qword_4B08E40 = (__int64)&off_4A6E058;
  qword_4B08E48 = (unsigned int)qword_4B08E48 & 0x80000000;
  qword_4B08E80 = (__int64)&qword_4B08E90;
  qword_4B08E58 = 0;
  qword_4B08E60 = 0;
  qword_4B08E68 = 0;
  qword_4B08E70 = 0;
  qword_4B08E78 = 0;
  qword_4B08E88 = 0x100000000LL;
  qword_4B08E98 = (__int64)&qword_4B08EB0;
  qword_4B08EA0 = 1;
  dword_4B08EA8 = 0;
  byte_4B08EAC = 1;
  v23 = sub_259AC30(sub_1F6C940, &qword_4B08E90);
  v24 = (unsigned int)qword_4B08E88;
  if ( HIDWORD(qword_4B08E88) < (unsigned __int64)(unsigned int)qword_4B08E88 + 1 )
  {
    v56 = (char **)v23;
    sub_25D6060(&qword_4B08E90 - 2, &qword_4B08E90, (unsigned int)qword_4B08E88 + 1LL, 8);
    v24 = (unsigned int)qword_4B08E88;
    v23 = (__int64)v56;
  }
  v25 = _mm_load_si128(&v54);
  *(_QWORD *)(qword_4B08E80 + 8 * v24) = v23;
  xmmword_4B08ED8 = 0;
  xmmword_4B08EE8 = (__int128)v25;
  qword_4B08EC0 = (__int64)&off_4A64710;
  LODWORD(qword_4B08E88) = qword_4B08E88 + 1;
  byte_4B08ECC = 0;
  qword_4B08E40 = (__int64)off_4A6DEB8;
  dword_4B08EB8 = 0;
  dword_4B08EC8 = 0;
  qword_4B08ED0 = (__int64)off_49D9228;
  sub_259F400(&qword_4B08E40, "simplifycfg-hoist-common-skip-limit", 35);
  dword_4B08EB8 = 20;
  byte_4B08ECC = 1;
  dword_4B08EC8 = 20;
  qword_4B08E68 = 68;
  BYTE2(qword_4B08E48) = BYTE2(qword_4B08E48) & 0x9F | 0x20;
  qword_4B08E60 = (__int64)"Allow reordering across at most this many instructions when hoisting";
  sub_259EC40(&qword_4B08E40);
  __cxa_atexit(sub_1F6C940, &qword_4B08E40, &off_47CFE00);
  qword_4B08D90 = 0;
  qword_4B08D80 = (__int64)&off_4A6E058;
  qword_4B08D88 = (unsigned int)qword_4B08D88 & 0x80000000;
  qword_4B08DC0 = (__int64)&qword_4B08DD0;
  qword_4B08D98 = 0;
  qword_4B08DA0 = 0;
  qword_4B08DA8 = 0;
  qword_4B08DB0 = 0;
  qword_4B08DB8 = 0;
  qword_4B08DC8 = 0x100000000LL;
  qword_4B08DD8 = (__int64)&qword_4B08DF0;
  qword_4B08DE0 = 1;
  dword_4B08DE8 = 0;
  byte_4B08DEC = 1;
  v26 = sub_259AC30(sub_1F6C940, &qword_4B08DD0);
  v27 = (unsigned int)qword_4B08DC8;
  if ( HIDWORD(qword_4B08DC8) < (unsigned __int64)(unsigned int)qword_4B08DC8 + 1 )
  {
    v56 = (char **)v26;
    sub_25D6060(&qword_4B08DD0 - 2, &qword_4B08DD0, (unsigned int)qword_4B08DC8 + 1LL, 8);
    v27 = (unsigned int)qword_4B08DC8;
    v26 = (__int64)v56;
  }
  v28 = _mm_load_si128(&v55);
  *(_QWORD *)(qword_4B08DC0 + 8 * v27) = v26;
  word_4B08E08 = 0;
  xmmword_4B08E18 = 0;
  qword_4B08E00 = (__int64)&off_4A64730;
  xmmword_4B08E28 = (__int128)v28;
  LODWORD(qword_4B08DC8) = qword_4B08DC8 + 1;
  qword_4B08D80 = (__int64)off_4A6DFF0;
  byte_4B08DF8 = 0;
  qword_4B08E10 = (__int64)off_49D9168;
  sub_259F400(&qword_4B08D80, "simplifycfg-sink-common", 23);
  byte_4B08DF8 = 1;
  qword_4B08DA8 = 46;
  BYTE2(qword_4B08D88) = BYTE2(qword_4B08D88) & 0x9F | 0x20;
  word_4B08E08 = 257;
  qword_4B08DA0 = (__int64)"Sink common instructions down to the end block";
  sub_259EC40(&qword_4B08D80);
  __cxa_atexit(sub_1F6C9D0, &qword_4B08D80, &off_47CFE00);
  v63 = 59;
  v61 = &v59;
  v62 = "Hoist conditional stores if an unconditional store precedes";
  v58 = &v59;
  v57 = &v62;
  v56 = &v61;
  v59 = 1;
  v60 = 1;
  sub_36BC6C0(
    qword_4B08CC0,
    "simplifycfg-hoist-cond-stores",
    &v60,
    &v61,
    &v62,
    &v59,
    v54.m128i_i64[0],
    v54.m128i_i64[1],
    v55.m128i_i64[0],
    v55.m128i_i64[1]);
  __cxa_atexit(sub_1F6C9D0, qword_4B08CC0, &off_47CFE00);
  v63 = 139;
  v61 = v58;
  v62 = "Hoist conditional stores even if an unconditional store does not precede - hoist multiple conditional stores int"
        "o a single predicated store";
  v59 = 1;
  v60 = 1;
  sub_36BC6C0(
    qword_4B08C00,
    "simplifycfg-merge-cond-stores",
    &v60,
    v56,
    v57,
    v58,
    v54.m128i_i64[0],
    v54.m128i_i64[1],
    v55.m128i_i64[0],
    v55.m128i_i64[1]);
  __cxa_atexit(sub_1F6C9D0, qword_4B08C00, &off_47CFE00);
  qword_4B08B50 = 0;
  qword_4B08B40 = (__int64)&off_4A6E058;
  qword_4B08B48 = (unsigned int)qword_4B08B48 & 0x80000000;
  qword_4B08B80 = (__int64)&qword_4B08B90;
  qword_4B08B58 = 0;
  qword_4B08B60 = 0;
  qword_4B08B68 = 0;
  qword_4B08B70 = 0;
  qword_4B08B78 = 0;
  qword_4B08B88 = 0x100000000LL;
  qword_4B08B98 = (__int64)&qword_4B08BB0;
  qword_4B08BA0 = 1;
  dword_4B08BA8 = 0;
  byte_4B08BAC = 1;
  v29 = sub_259AC30(sub_1F6C9D0, &qword_4B08B90);
  v30 = (unsigned int)qword_4B08B88;
  if ( HIDWORD(qword_4B08B88) < (unsigned __int64)(unsigned int)qword_4B08B88 + 1 )
  {
    v56 = (char **)v29;
    sub_25D6060(&qword_4B08B90 - 2, &qword_4B08B90, (unsigned int)qword_4B08B88 + 1LL, 8);
    v30 = (unsigned int)qword_4B08B88;
    v29 = (__int64)v56;
  }
  v31 = _mm_load_si128(&v55);
  *(_QWORD *)(qword_4B08B80 + 8 * v30) = v29;
  word_4B08BC8 = 0;
  xmmword_4B08BD8 = 0;
  qword_4B08BC0 = (__int64)&off_4A64730;
  xmmword_4B08BE8 = (__int128)v31;
  LODWORD(qword_4B08B88) = qword_4B08B88 + 1;
  qword_4B08B40 = (__int64)off_4A6DFF0;
  byte_4B08BB8 = 0;
  qword_4B08BD0 = (__int64)off_49D9168;
  sub_259F400(&qword_4B08B40, "simplifycfg-merge-cond-stores-aggressively", 42);
  word_4B08BC8 = 256;
  byte_4B08BB8 = 0;
  qword_4B08B68 = 117;
  BYTE2(qword_4B08B48) = BYTE2(qword_4B08B48) & 0x9F | 0x20;
  qword_4B08B60 = (__int64)"When merging conditional stores, do so even if the resultant basic blocks are unlikely to be "
                           "if-converted as a result";
  sub_259EC40(&qword_4B08B40);
  __cxa_atexit(sub_1F6C9D0, &qword_4B08B40, &off_47CFE00);
  qword_4B08A90 = 0;
  qword_4B08A80 = (__int64)&off_4A6E058;
  qword_4B08A88 = (unsigned int)qword_4B08A88 & 0x80000000;
  qword_4B08AC0 = (__int64)&qword_4B08AD0;
  qword_4B08A98 = 0;
  qword_4B08AA0 = 0;
  qword_4B08AA8 = 0;
  qword_4B08AB0 = 0;
  qword_4B08AB8 = 0;
  qword_4B08AC8 = 0x100000000LL;
  qword_4B08AD8 = (__int64)&qword_4B08AF0;
  qword_4B08AE0 = 1;
  dword_4B08AE8 = 0;
  byte_4B08AEC = 1;
  v32 = sub_259AC30(sub_1F6C9D0, &qword_4B08AD0);
  v33 = (unsigned int)qword_4B08AC8;
  if ( HIDWORD(qword_4B08AC8) < (unsigned __int64)(unsigned int)qword_4B08AC8 + 1 )
  {
    v56 = (char **)v32;
    sub_25D6060(&qword_4B08AD0 - 2, &qword_4B08AD0, (unsigned int)qword_4B08AC8 + 1LL, 8);
    v33 = (unsigned int)qword_4B08AC8;
    v32 = (__int64)v56;
  }
  v34 = _mm_load_si128(&v55);
  *(_QWORD *)(qword_4B08AC0 + 8 * v33) = v32;
  word_4B08B08 = 0;
  xmmword_4B08B18 = 0;
  qword_4B08B00 = (__int64)&off_4A64730;
  xmmword_4B08B28 = (__int128)v34;
  LODWORD(qword_4B08AC8) = qword_4B08AC8 + 1;
  qword_4B08A80 = (__int64)off_4A6DFF0;
  byte_4B08AF8 = 0;
  qword_4B08B10 = (__int64)off_49D9168;
  sub_259F400(&qword_4B08A80, "speculate-one-expensive-inst", 28);
  byte_4B08AF8 = 1;
  qword_4B08AA8 = 68;
  BYTE2(qword_4B08A88) = BYTE2(qword_4B08A88) & 0x9F | 0x20;
  word_4B08B08 = 257;
  qword_4B08AA0 = (__int64)"Allow exactly one expensive instruction to be speculatively executed";
  sub_259EC40(&qword_4B08A80);
  __cxa_atexit(sub_1F6C9D0, &qword_4B08A80, &off_47CFE00);
  qword_4B089D0 = 0;
  qword_4B089C0 = (__int64)&off_4A6E058;
  qword_4B089C8 = (unsigned int)qword_4B089C8 & 0x80000000;
  qword_4B08A00 = (__int64)&qword_4B08A10;
  qword_4B089D8 = 0;
  qword_4B089E0 = 0;
  qword_4B089E8 = 0;
  qword_4B089F0 = 0;
  qword_4B089F8 = 0;
  qword_4B08A08 = 0x100000000LL;
  qword_4B08A18 = (__int64)&qword_4B08A30;
  qword_4B08A20 = 1;
  dword_4B08A28 = 0;
  byte_4B08A2C = 1;
  v35 = sub_259AC30(sub_1F6C9D0, &qword_4B08A10);
  v36 = (unsigned int)qword_4B08A08;
  if ( HIDWORD(qword_4B08A08) < (unsigned __int64)(unsigned int)qword_4B08A08 + 1 )
  {
    v56 = (char **)v35;
    sub_25D6060(&qword_4B08A10 - 2, &qword_4B08A10, (unsigned int)qword_4B08A08 + 1LL, 8);
    v36 = (unsigned int)qword_4B08A08;
    v35 = (__int64)v56;
  }
  v37 = _mm_load_si128(&v54);
  *(_QWORD *)(qword_4B08A00 + 8 * v36) = v35;
  xmmword_4B08A58 = 0;
  xmmword_4B08A68 = (__int128)v37;
  qword_4B08A40 = (__int64)&off_4A64710;
  LODWORD(qword_4B08A08) = qword_4B08A08 + 1;
  byte_4B08A4C = 0;
  qword_4B089C0 = (__int64)off_4A6DEB8;
  dword_4B08A38 = 0;
  dword_4B08A48 = 0;
  qword_4B08A50 = (__int64)off_49D9228;
  sub_259F400(&qword_4B089C0, "max-speculation-depth", 21);
  dword_4B08A38 = 10;
  byte_4B08A4C = 1;
  dword_4B08A48 = 10;
  qword_4B089E8 = 91;
  BYTE2(qword_4B089C8) = BYTE2(qword_4B089C8) & 0x9F | 0x20;
  qword_4B089E0 = (__int64)"Limit maximum recursion depth when calculating costs of speculatively executed instructions";
  sub_259EC40(&qword_4B089C0);
  __cxa_atexit(sub_1F6C940, &qword_4B089C0, &off_47CFE00);
  qword_4B08910 = 0;
  qword_4B08900 = (__int64)&off_4A6E058;
  qword_4B08908 = (unsigned int)qword_4B08908 & 0x80000000;
  qword_4B08940 = (__int64)&qword_4B08950;
  qword_4B08918 = 0;
  qword_4B08920 = 0;
  qword_4B08928 = 0;
  qword_4B08930 = 0;
  qword_4B08938 = 0;
  qword_4B08948 = 0x100000000LL;
  qword_4B08958 = (__int64)&qword_4B08970;
  qword_4B08960 = 1;
  dword_4B08968 = 0;
  byte_4B0896C = 1;
  v38 = sub_259AC30(sub_1F6C940, &qword_4B08950);
  v39 = (unsigned int)qword_4B08948;
  if ( HIDWORD(qword_4B08948) < (unsigned __int64)(unsigned int)qword_4B08948 + 1 )
  {
    v56 = (char **)v38;
    sub_25D6060(&qword_4B08950 - 2, &qword_4B08950, (unsigned int)qword_4B08948 + 1LL, 8);
    v39 = (unsigned int)qword_4B08948;
    v38 = (__int64)v56;
  }
  *(_QWORD *)(qword_4B08940 + 8 * v39) = v38;
  xmmword_4B08998 = 0;
  LODWORD(qword_4B08948) = qword_4B08948 + 1;
  qword_4B08980 = (__int64)&off_4A692B8;
  dword_4B08978 = 0;
  byte_4B0898C = 0;
  qword_4B08900 = (__int64)off_4A6DF20;
  dword_4B08988 = 0;
  qword_4B08990 = (__int64)off_49D91C8;
  xmmword_4B089A8 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EBBF0),
                                (__m128i)(unsigned __int64)nullsub_291);
  sub_259F400(&qword_4B08900, "simplifycfg-max-small-block-size", 32);
  dword_4B08978 = 10;
  byte_4B0898C = 1;
  dword_4B08988 = 10;
  qword_4B08928 = 76;
  BYTE2(qword_4B08908) = BYTE2(qword_4B08908) & 0x9F | 0x20;
  qword_4B08920 = (__int64)"Max size of a block which is still considered small enough to thread through";
  sub_259EC40(&qword_4B08900);
  __cxa_atexit(sub_20B86E0, &qword_4B08900, &off_47CFE00);
  qword_4B08850 = 0;
  qword_4B08840 = (__int64)&off_4A6E058;
  qword_4B08848 = (unsigned int)qword_4B08848 & 0x80000000;
  qword_4B08880 = (__int64)&qword_4B08890;
  qword_4B08858 = 0;
  qword_4B08860 = 0;
  qword_4B08868 = 0;
  qword_4B08870 = 0;
  qword_4B08878 = 0;
  qword_4B08888 = 0x100000000LL;
  qword_4B08898 = (__int64)&qword_4B088B0;
  qword_4B088A0 = 1;
  dword_4B088A8 = 0;
  byte_4B088AC = 1;
  v40 = sub_259AC30(sub_20B86E0, &qword_4B08890);
  v41 = (unsigned int)qword_4B08888;
  if ( HIDWORD(qword_4B08888) < (unsigned __int64)(unsigned int)qword_4B08888 + 1 )
  {
    v56 = (char **)v40;
    sub_25D6060(&qword_4B08890 - 2, &qword_4B08890, (unsigned int)qword_4B08888 + 1LL, 8);
    v41 = (unsigned int)qword_4B08888;
    v40 = (__int64)v56;
  }
  v42 = _mm_load_si128(&v54);
  *(_QWORD *)(qword_4B08880 + 8 * v41) = v40;
  xmmword_4B088D8 = 0;
  xmmword_4B088E8 = (__int128)v42;
  qword_4B088C0 = (__int64)&off_4A64710;
  LODWORD(qword_4B08888) = qword_4B08888 + 1;
  byte_4B088CC = 0;
  qword_4B08840 = (__int64)off_4A6DEB8;
  dword_4B088B8 = 0;
  dword_4B088C8 = 0;
  qword_4B088D0 = (__int64)off_49D9228;
  sub_259F400(&qword_4B08840, "simplifycfg-branch-fold-threshold", 33);
  dword_4B088B8 = 2;
  byte_4B088CC = 1;
  dword_4B088C8 = 2;
  qword_4B08868 = 58;
  BYTE2(qword_4B08848) = BYTE2(qword_4B08848) & 0x9F | 0x20;
  qword_4B08860 = (__int64)"Maximum cost of combining conditions when folding branches";
  sub_259EC40(&qword_4B08840);
  __cxa_atexit(sub_1F6C940, &qword_4B08840, &off_47CFE00);
  qword_4B08790 = 0;
  qword_4B08780 = (__int64)&off_4A6E058;
  qword_4B08788 = (unsigned int)qword_4B08788 & 0x80000000;
  qword_4B087C0 = (__int64)&qword_4B087D0;
  qword_4B08798 = 0;
  qword_4B087A0 = 0;
  qword_4B087A8 = 0;
  qword_4B087B0 = 0;
  qword_4B087B8 = 0;
  qword_4B087C8 = 0x100000000LL;
  qword_4B087D8 = (__int64)&qword_4B087F0;
  qword_4B087E0 = 1;
  dword_4B087E8 = 0;
  byte_4B087EC = 1;
  v43 = sub_259AC30(sub_1F6C940, &qword_4B087D0);
  v44 = (unsigned int)qword_4B087C8;
  if ( HIDWORD(qword_4B087C8) < (unsigned __int64)(unsigned int)qword_4B087C8 + 1 )
  {
    v56 = (char **)v43;
    sub_25D6060(&qword_4B087D0 - 2, &qword_4B087D0, (unsigned int)qword_4B087C8 + 1LL, 8);
    v44 = (unsigned int)qword_4B087C8;
    v43 = (__int64)v56;
  }
  v45 = _mm_load_si128(&v54);
  *(_QWORD *)(qword_4B087C0 + 8 * v44) = v43;
  xmmword_4B08818 = 0;
  xmmword_4B08828 = (__int128)v45;
  qword_4B08800 = (__int64)&off_4A64710;
  LODWORD(qword_4B087C8) = qword_4B087C8 + 1;
  byte_4B0880C = 0;
  qword_4B08780 = (__int64)off_4A6DEB8;
  dword_4B087F8 = 0;
  dword_4B08808 = 0;
  qword_4B08810 = (__int64)off_49D9228;
  sub_259F400(&qword_4B08780, "simplifycfg-branch-fold-common-dest-vector-multiplier", 53);
  dword_4B087F8 = 2;
  byte_4B0880C = 1;
  dword_4B08808 = 2;
  qword_4B087A8 = 136;
  BYTE2(qword_4B08788) = BYTE2(qword_4B08788) & 0x9F | 0x20;
  qword_4B087A0 = (__int64)"Multiplier to apply to threshold when determining whether or not to fold branch to common des"
                           "tination when vector operations are present";
  sub_259EC40(&qword_4B08780);
  __cxa_atexit(sub_1F6C940, &qword_4B08780, &off_47CFE00);
  qword_4B086D0 = 0;
  qword_4B086C0 = (__int64)&off_4A6E058;
  qword_4B086C8 = (unsigned int)qword_4B086C8 & 0x80000000;
  qword_4B08700 = (__int64)&qword_4B08710;
  qword_4B086D8 = 0;
  qword_4B086E0 = 0;
  qword_4B086E8 = 0;
  qword_4B086F0 = 0;
  qword_4B086F8 = 0;
  qword_4B08708 = 0x100000000LL;
  qword_4B08718 = (__int64)&qword_4B08730;
  qword_4B08720 = 1;
  dword_4B08728 = 0;
  byte_4B0872C = 1;
  v46 = sub_259AC30(sub_1F6C940, &qword_4B08710);
  v47 = (unsigned int)qword_4B08708;
  if ( HIDWORD(qword_4B08708) < (unsigned __int64)(unsigned int)qword_4B08708 + 1 )
  {
    v56 = (char **)v46;
    sub_25D6060(&qword_4B08710 - 2, &qword_4B08710, (unsigned int)qword_4B08708 + 1LL, 8);
    v47 = (unsigned int)qword_4B08708;
    v46 = (__int64)v56;
  }
  v48 = _mm_load_si128(&v55);
  *(_QWORD *)(qword_4B08700 + 8 * v47) = v46;
  word_4B08748 = 0;
  xmmword_4B08758 = 0;
  xmmword_4B08768 = (__int128)v48;
  qword_4B08740 = (__int64)&off_4A64730;
  LODWORD(qword_4B08708) = qword_4B08708 + 1;
  byte_4B08738 = 0;
  qword_4B086C0 = (__int64)off_4A6DFF0;
  qword_4B08750 = (__int64)off_49D9168;
  sub_259F400(&qword_4B086C0, "simplifycfg-merge-compatible-invokes", 36);
  byte_4B08738 = 1;
  qword_4B086E8 = 60;
  BYTE2(qword_4B086C8) = BYTE2(qword_4B086C8) & 0x9F | 0x20;
  word_4B08748 = 257;
  qword_4B086E0 = (__int64)"Allow SimplifyCFG to merge invokes together when appropriate";
  sub_259EC40(&qword_4B086C0);
  __cxa_atexit(sub_1F6C9D0, &qword_4B086C0, &off_47CFE00);
  qword_4B08648 = 0x100000000LL;
  qword_4B08600 = (__int64)&off_4A6E058;
  qword_4B08608 = (unsigned int)qword_4B08608 & 0x80000000;
  qword_4B08640 = (__int64)&qword_4B08650;
  qword_4B08610 = 0;
  qword_4B08618 = 0;
  qword_4B08620 = 0;
  qword_4B08628 = 0;
  qword_4B08630 = 0;
  qword_4B08638 = 0;
  qword_4B08658 = (__int64)&qword_4B08670;
  qword_4B08660 = 1;
  dword_4B08668 = 0;
  byte_4B0866C = 1;
  v49 = sub_259AC30(sub_1F6C9D0, &qword_4B08650);
  v50 = (unsigned int)qword_4B08648;
  v51 = (unsigned int)qword_4B08648 + 1LL;
  if ( HIDWORD(qword_4B08648) < v51 )
  {
    sub_25D6060(&qword_4B08650 - 2, &qword_4B08650, v51, 8);
    v50 = (unsigned int)qword_4B08648;
  }
  v52 = _mm_load_si128(&v54);
  *(_QWORD *)(qword_4B08640 + 8 * v50) = v49;
  xmmword_4B08698 = 0;
  xmmword_4B086A8 = (__int128)v52;
  qword_4B08680 = (__int64)&off_4A64710;
  LODWORD(qword_4B08648) = qword_4B08648 + 1;
  byte_4B0868C = 0;
  qword_4B08600 = (__int64)off_4A6DEB8;
  dword_4B08678 = 0;
  dword_4B08688 = 0;
  qword_4B08690 = (__int64)off_49D9228;
  sub_259F400(&qword_4B08600, "max-switch-cases-per-result", 27);
  dword_4B08678 = 16;
  byte_4B0868C = 1;
  dword_4B08688 = 16;
  qword_4B08628 = 57;
  BYTE2(qword_4B08608) = BYTE2(qword_4B08608) & 0x9F | 0x20;
  qword_4B08620 = (__int64)"Limit cases to analyze when converting a switch to select";
  sub_259EC40(&qword_4B08600);
  return __cxa_atexit(sub_1F6C940, &qword_4B08600, &off_47CFE00);
}

