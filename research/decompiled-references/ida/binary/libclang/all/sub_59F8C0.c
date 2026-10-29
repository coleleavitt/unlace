int __fastcall sub_59F8C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __m128i si128; // xmm3
  __m128i v7; // xmm4
  __m128i v8; // xmm4
  __m128i v9; // xmm4
  __m128i v10; // xmm3
  __m128i v11; // xmm3
  __m128i v12; // xmm3
  __m128i v13; // xmm3
  __m128i v14; // xmm3
  __m128i v15; // xmm3
  __m128i v16; // xmm3
  __m128i v17; // xmm4
  __m128i v18; // xmm3
  __m128i v19; // xmm4
  __int64 v20; // r9
  __m128i v21; // xmm3
  char v22; // dl
  __int64 v23; // rsi
  __int64 v24; // rdi
  __m128i v25; // xmm4
  __int64 v26; // rax
  char v27; // al
  __m128i v28; // xmm1
  __m128i v29; // xmm1
  __m128i v30; // xmm1
  __m128i v31; // xmm1
  __m128i v32; // xmm1
  __m128i v33; // xmm1
  __m128i v34; // xmm1
  __m128i v35; // xmm0
  __m128i v36; // xmm0
  char v37; // al
  const char **v38; // rbp
  unsigned __int64 v39; // r12
  __int64 v40; // rax
  __int64 v41; // rdx
  char v42; // si
  const __m128i *v43; // rcx
  const char *v44; // r11
  __int64 v45; // r9
  __int64 v46; // rdi
  __int32 v47; // r10d
  unsigned __int64 v48; // r8
  int v49; // edx
  __int64 v50; // rax
  __int64 v51; // rdi
  __m128i v52; // xmm0
  unsigned __int64 v54; // rdx
  __int64 v55; // rax
  __m128i *v56; // rdi
  __int64 v57; // r8
  const __m128i *v58; // rdx
  const __m128i *v59; // rcx
  __m128i v60; // xmm0
  __int32 v61; // edi
  __m128i v62; // xmm0
  int v63; // eax
  bool v64; // zf
  void *ptr[2]; // [rsp+0h] [rbp-1E8h] BYREF
  __m128i v66; // [rsp+10h] [rbp-1D8h] BYREF
  _UNKNOWN **v67; // [rsp+28h] [rbp-1C0h]
  __int64 (__fastcall **v68)(); // [rsp+30h] [rbp-1B8h]
  unsigned __int64 v69; // [rsp+38h] [rbp-1B0h]
  const char **v70; // [rsp+40h] [rbp-1A8h]
  __m128i *v71; // [rsp+48h] [rbp-1A0h]
  __m128i **v72; // [rsp+50h] [rbp-198h]
  char *v73; // [rsp+58h] [rbp-190h]
  __m128i v74; // [rsp+60h] [rbp-188h] BYREF
  char v75; // [rsp+77h] [rbp-171h] BYREF
  __m128i *v76; // [rsp+78h] [rbp-170h] BYREF
  __m128i v77; // [rsp+80h] [rbp-168h] BYREF
  __m128i v78; // [rsp+90h] [rbp-158h] BYREF
  __m128i v79; // [rsp+A0h] [rbp-148h] BYREF
  __m128i v80; // [rsp+B0h] [rbp-138h] BYREF
  __m128i v81; // [rsp+C0h] [rbp-128h] BYREF
  __m128i v82; // [rsp+D0h] [rbp-118h] BYREF
  __m128i v83; // [rsp+E0h] [rbp-108h] BYREF
  __int64 v84; // [rsp+F0h] [rbp-F8h]
  const char *v85; // [rsp+100h] [rbp-E8h] BYREF
  __int64 v86; // [rsp+108h] [rbp-E0h]
  _OWORD v87[6]; // [rsp+110h] [rbp-D8h] BYREF
  __m128i v88; // [rsp+170h] [rbp-78h] BYREF
  __int64 v89; // [rsp+180h] [rbp-68h]

  v72 = &v76;
  v71 = &v77;
  v74 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&off_4A80CE8, (__m128i)(unsigned __int64)qword_4AFF840);
  v85 = "Enable Software Pipelining";
  v77.m128i_i64[0] = (__int64)&v75;
  v73 = &v75;
  v66 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49EB3A8), (__m128i)(unsigned __int64)nullsub_291);
  *(__m128i *)ptr = _mm_unpacklo_epi64(
                      _mm_loadl_epi64((const __m128i *)&off_49EB3A0),
                      (__m128i)(unsigned __int64)nullsub_266);
  v70 = &v85;
  v86 = 26;
  v75 = 1;
  LODWORD(v76) = 1;
  sub_3450150(
    qword_4B00760,
    "enable-pipeliner",
    &v76,
    &v77,
    &v85,
    a6,
    ptr[0],
    ptr[1],
    v66.m128i_i64[0],
    v66.m128i_i64[1]);
  __cxa_atexit(sub_1F6C9D0, qword_4B00760, &off_47CFE00);
  sub_3446760(&qword_4B006A0);
  si128 = _mm_load_si128((const __m128i *)ptr);
  word_4B00728 = 0;
  xmmword_4B00748 = (__int128)si128;
  xmmword_4B00738 = 0;
  qword_4B00720 = (__int64)&off_4A64730;
  byte_4B00718 = 0;
  qword_4B006A0 = (__int64)off_4A6DFF0;
  qword_4B00730 = (__int64)off_49D9168;
  sub_259F400(&qword_4B006A0, "enable-pipeliner-opt-size", 25);
  qword_4B006C8 = 17;
  qword_4B006C0 = (__int64)"Enable SWP at Os.";
  byte_4B00718 = 0;
  word_4B00728 = 256;
  byte_4B006AA = byte_4B006AA & 0x9F | 0x20;
  sub_259EC40(&qword_4B006A0);
  __cxa_atexit(sub_1F6C9D0, &qword_4B006A0, &off_47CFE00);
  sub_3446760(&qword_4B005E0);
  v7 = _mm_load_si128(&v66);
  xmmword_4B00678 = 0;
  xmmword_4B00688 = (__int128)v7;
  v67 = &off_4A692B8;
  qword_4B00660 = (__int64)&off_4A692B8;
  dword_4B00658 = 0;
  dword_4B00668 = 0;
  v68 = off_4A6DF20;
  qword_4B005E0 = (__int64)off_4A6DF20;
  v69 = (unsigned __int64)off_49D91C8;
  qword_4B00670 = (__int64)off_49D91C8;
  byte_4B0066C = 0;
  sub_259F400(&qword_4B005E0, "pipeliner-max-mii", 17);
  qword_4B00600 = (__int64)"Size limit for the MII.";
  byte_4B0066C = 1;
  qword_4B00608 = 23;
  dword_4B00658 = 27;
  byte_4B005EA = byte_4B005EA & 0x9F | 0x20;
  dword_4B00668 = 27;
  sub_259EC40(&qword_4B005E0);
  __cxa_atexit(sub_20B86E0, &qword_4B005E0, &off_47CFE00);
  sub_3446760(&qword_4B00520);
  v8 = _mm_load_si128(&v66);
  xmmword_4B005B8 = 0;
  qword_4B00520 = (__int64)v68;
  qword_4B005B0 = v69;
  xmmword_4B005C8 = (__int128)v8;
  qword_4B005A0 = (__int64)v67;
  dword_4B00598 = 0;
  dword_4B005A8 = 0;
  byte_4B005AC = 0;
  sub_259F400(&qword_4B00520, "pipeliner-force-ii", 18);
  qword_4B00540 = (__int64)"Force pipeliner to use specified II.";
  byte_4B005AC = 1;
  qword_4B00548 = 36;
  dword_4B00598 = -1;
  byte_4B0052A = byte_4B0052A & 0x9F | 0x20;
  dword_4B005A8 = -1;
  sub_259EC40(&qword_4B00520);
  __cxa_atexit(sub_20B86E0, &qword_4B00520, &off_47CFE00);
  sub_3446760(&qword_4B00460);
  v9 = _mm_load_si128(&v66);
  xmmword_4B004F8 = 0;
  qword_4B00460 = (__int64)v68;
  qword_4B004F0 = v69;
  xmmword_4B00508 = (__int128)v9;
  qword_4B004E0 = (__int64)v67;
  dword_4B004D8 = 0;
  dword_4B004E8 = 0;
  byte_4B004EC = 0;
  sub_259F400(&qword_4B00460, "pipeliner-max-stages", 20);
  qword_4B00480 = (__int64)"Maximum stages allowed in the generated scheduled.";
  byte_4B004EC = 1;
  qword_4B00488 = 50;
  dword_4B004D8 = 3;
  byte_4B0046A = byte_4B0046A & 0x9F | 0x20;
  dword_4B004E8 = 3;
  sub_259EC40(&qword_4B00460);
  __cxa_atexit(sub_20B86E0, &qword_4B00460, &off_47CFE00);
  sub_3446760(&qword_4B003A0);
  v10 = _mm_load_si128((const __m128i *)ptr);
  word_4B00428 = 0;
  xmmword_4B00438 = 0;
  xmmword_4B00448 = (__int128)v10;
  qword_4B00420 = (__int64)&off_4A64730;
  qword_4B003A0 = (__int64)off_4A6DFF0;
  qword_4B00430 = (__int64)off_49D9168;
  byte_4B00418 = 0;
  sub_259F400(&qword_4B003A0, "pipeliner-prune-deps", 20);
  qword_4B003C0 = (__int64)"Prune dependences between unrelated Phi nodes.";
  byte_4B00418 = 1;
  word_4B00428 = 257;
  qword_4B003C8 = 46;
  byte_4B003AA = byte_4B003AA & 0x9F | 0x20;
  sub_259EC40(&qword_4B003A0);
  __cxa_atexit(sub_1F6C9D0, &qword_4B003A0, &off_47CFE00);
  sub_3446760(&qword_4B002E0);
  v11 = _mm_load_si128((const __m128i *)ptr);
  word_4B00368 = 0;
  xmmword_4B00378 = 0;
  xmmword_4B00388 = (__int128)v11;
  qword_4B00360 = (__int64)&off_4A64730;
  qword_4B002E0 = (__int64)off_4A6DFF0;
  qword_4B00370 = (__int64)off_49D9168;
  byte_4B00358 = 0;
  sub_259F400(&qword_4B002E0, "pipeliner-prune-loop-carried", 28);
  qword_4B00300 = (__int64)"Prune loop carried order dependences.";
  byte_4B00358 = 1;
  qword_4B00308 = 37;
  word_4B00368 = 257;
  byte_4B002EA = byte_4B002EA & 0x9F | 0x20;
  sub_259EC40(&qword_4B002E0);
  __cxa_atexit(sub_1F6C9D0, &qword_4B002E0, &off_47CFE00);
  sub_3446760(&qword_4B00220);
  v12 = _mm_load_si128((const __m128i *)ptr);
  word_4B002A8 = 0;
  xmmword_4B002B8 = 0;
  xmmword_4B002C8 = (__int128)v12;
  qword_4B002A0 = (__int64)&off_4A64730;
  qword_4B00220 = (__int64)off_4A6DFF0;
  qword_4B002B0 = (__int64)off_49D9168;
  byte_4B00298 = 0;
  sub_259F400(&qword_4B00220, "pipeliner-ignore-recmii", 23);
  qword_4B00240 = (__int64)"Ignore RecMII";
  qword_4B00248 = 13;
  byte_4B0022A = byte_4B0022A & 0x9F | 0x40;
  sub_259EC40(&qword_4B00220);
  __cxa_atexit(sub_1F6C9D0, &qword_4B00220, &off_47CFE00);
  sub_3446760(&qword_4B00160);
  v13 = _mm_load_si128((const __m128i *)ptr);
  word_4B001E8 = 0;
  xmmword_4B001F8 = 0;
  xmmword_4B00208 = (__int128)v13;
  qword_4B001E0 = (__int64)&off_4A64730;
  qword_4B00160 = (__int64)off_4A6DFF0;
  qword_4B001F0 = (__int64)off_49D9168;
  byte_4B001D8 = 0;
  sub_259F400(&qword_4B00160, "pipeliner-show-mask", 19);
  byte_4B001D8 = 0;
  word_4B001E8 = 256;
  byte_4B0016A = byte_4B0016A & 0x9F | 0x20;
  sub_259EC40(&qword_4B00160);
  __cxa_atexit(sub_1F6C9D0, &qword_4B00160, &off_47CFE00);
  sub_3446760(&qword_4B000A0);
  v14 = _mm_load_si128((const __m128i *)ptr);
  word_4B00128 = 0;
  xmmword_4B00138 = 0;
  xmmword_4B00148 = (__int128)v14;
  qword_4B00120 = (__int64)&off_4A64730;
  qword_4B000A0 = (__int64)off_4A6DFF0;
  qword_4B00130 = (__int64)off_49D9168;
  byte_4B00118 = 0;
  sub_259F400(&qword_4B000A0, "pipeliner-dbg-res", 17);
  byte_4B00118 = 0;
  word_4B00128 = 256;
  byte_4B000AA = byte_4B000AA & 0x9F | 0x20;
  sub_259EC40(&qword_4B000A0);
  __cxa_atexit(sub_1F6C9D0, &qword_4B000A0, &off_47CFE00);
  sub_3446760(&qword_4AFFFE0);
  v15 = _mm_load_si128((const __m128i *)ptr);
  word_4B00068 = 0;
  xmmword_4B00078 = 0;
  xmmword_4B00088 = (__int128)v15;
  qword_4B00060 = (__int64)&off_4A64730;
  qword_4AFFFE0 = (__int64)off_4A6DFF0;
  qword_4B00070 = (__int64)off_49D9168;
  byte_4B00058 = 0;
  sub_259F400(&qword_4AFFFE0, "pipeliner-annotate-for-testing", 30);
  qword_4B00000 = (__int64)"Instead of emitting the pipelined code, annotate instructions with the generated schedule for"
                           " feeding into the -modulo-schedule-test pass";
  word_4B00068 = 256;
  byte_4B00058 = 0;
  qword_4B00008 = 137;
  byte_4AFFFEA = byte_4AFFFEA & 0x9F | 0x20;
  sub_259EC40(&qword_4AFFFE0);
  __cxa_atexit(sub_1F6C9D0, &qword_4AFFFE0, &off_47CFE00);
  sub_3446760(&qword_4AFFF20);
  v16 = _mm_load_si128((const __m128i *)ptr);
  word_4AFFFA8 = 0;
  xmmword_4AFFFC8 = (__int128)v16;
  xmmword_4AFFFB8 = 0;
  qword_4AFFFA0 = (__int64)&off_4A64730;
  qword_4AFFF20 = (__int64)off_4A6DFF0;
  qword_4AFFFB0 = (__int64)off_49D9168;
  byte_4AFFF98 = 0;
  sub_259F400(&qword_4AFFF20, "pipeliner-experimental-cg", 25);
  byte_4AFFF98 = 0;
  word_4AFFFA8 = 256;
  qword_4AFFF48 = 67;
  qword_4AFFF40 = (__int64)"Use the experimental peeling code generator for software pipelining";
  byte_4AFFF2A = byte_4AFFF2A & 0x9F | 0x20;
  sub_259EC40(&qword_4AFFF20);
  __cxa_atexit(sub_1F6C9D0, &qword_4AFFF20, &off_47CFE00);
  sub_3446760(&qword_4AFFE60);
  v17 = _mm_load_si128(&v66);
  xmmword_4AFFEF8 = 0;
  qword_4AFFE60 = (__int64)v68;
  qword_4AFFEF0 = v69;
  xmmword_4AFFF08 = (__int128)v17;
  qword_4AFFEE0 = (__int64)v67;
  dword_4AFFED8 = 0;
  dword_4AFFEE8 = 0;
  byte_4AFFEEC = 0;
  sub_259F400(&qword_4AFFE60, "pipeliner-ii-search-range", 25);
  qword_4AFFE88 = 22;
  qword_4AFFE80 = (__int64)"Range to search for II";
  dword_4AFFED8 = 10;
  byte_4AFFEEC = 1;
  dword_4AFFEE8 = 10;
  byte_4AFFE6A = byte_4AFFE6A & 0x9F | 0x20;
  sub_259EC40(&qword_4AFFE60);
  __cxa_atexit(sub_20B86E0, &qword_4AFFE60, &off_47CFE00);
  sub_3446760(&qword_4AFFDA0);
  v18 = _mm_load_si128((const __m128i *)ptr);
  word_4AFFE28 = 0;
  xmmword_4AFFE48 = (__int128)v18;
  xmmword_4AFFE38 = 0;
  qword_4AFFE20 = (__int64)&off_4A64730;
  qword_4AFFDA0 = (__int64)off_4A6DFF0;
  qword_4AFFE30 = (__int64)off_49D9168;
  byte_4AFFE18 = 0;
  sub_259F400(&qword_4AFFDA0, "pipeliner-register-pressure", 27);
  qword_4AFFDC0 = (__int64)"Limit register pressure of scheduled loop";
  byte_4AFFE18 = 0;
  qword_4AFFDC8 = 41;
  word_4AFFE28 = 256;
  byte_4AFFDAA = byte_4AFFDAA & 0x9F | 0x20;
  sub_259EC40(&qword_4AFFDA0);
  __cxa_atexit(sub_1F6C9D0, &qword_4AFFDA0, &off_47CFE00);
  sub_3446760(&qword_4AFFCE0);
  v19 = _mm_load_si128(&v66);
  xmmword_4AFFD78 = 0;
  qword_4AFFCE0 = (__int64)v68;
  qword_4AFFD70 = v69;
  xmmword_4AFFD88 = (__int128)v19;
  qword_4AFFD60 = (__int64)v67;
  dword_4AFFD58 = 0;
  dword_4AFFD68 = 0;
  byte_4AFFD6C = 0;
  sub_259F400(&qword_4AFFCE0, "pipeliner-register-pressure-margin", 34);
  qword_4AFFD00 = (__int64)"Margin representing the unused percentage of the register pressure limit";
  dword_4AFFD58 = 5;
  byte_4AFFD6C = 1;
  dword_4AFFD68 = 5;
  byte_4AFFCEA = byte_4AFFCEA & 0x9F | 0x20;
  qword_4AFFD08 = 72;
  sub_259EC40(&qword_4AFFCE0);
  __cxa_atexit(sub_20B86E0, &qword_4AFFCE0, &off_47CFE00);
  v85 = "Use the MVE code generator for software pipelining";
  v86 = 50;
  v75 = 0;
  v77.m128i_i64[0] = (__int64)v73;
  LODWORD(v76) = 1;
  sub_3450150(qword_4AFFC20, "pipeliner-mve-cg", v72, v71, v70, v20, ptr[0], ptr[1], v66.m128i_i64[0], v66.m128i_i64[1]);
  __cxa_atexit(sub_1F6C9D0, qword_4AFFC20, &off_47CFE00);
  sub_3446760(qword_4AFFB60);
  v21 = _mm_load_si128((const __m128i *)ptr);
  *(_OWORD *)&qword_4AFFB60[19] = 0;
  *(__m128i *)&qword_4AFFB60[21] = v21;
  LOWORD(qword_4AFFB60[17]) = 0;
  qword_4AFFB60[16] = (__int64)&off_4A64730;
  qword_4AFFB60[0] = (__int64)off_4A6DFF0;
  qword_4AFFB60[18] = (__int64)off_49D9168;
  LOBYTE(qword_4AFFB60[15]) = 0;
  sub_259F400(qword_4AFFB60, "pipeliner-enable-copytophi", 26);
  v22 = BYTE2(qword_4AFFB60[1]);
  LOBYTE(qword_4AFFB60[15]) = 1;
  LOWORD(qword_4AFFB60[17]) = 257;
  qword_4AFFB60[5] = 29;
  qword_4AFFB60[4] = (__int64)"Enable CopyToPhi DAG Mutation";
  BYTE2(qword_4AFFB60[1]) = v22 & 0x9F | 0x40;
  sub_259EC40(qword_4AFFB60);
  __cxa_atexit(sub_1F6C9D0, qword_4AFFB60, &off_47CFE00);
  sub_3446760(qword_4AFFAA0);
  v23 = (__int64)v68;
  v24 = v69;
  v25 = _mm_load_si128(&v66);
  v26 = (__int64)v67;
  *(_OWORD *)&qword_4AFFAA0[19] = 0;
  qword_4AFFAA0[0] = v23;
  qword_4AFFAA0[18] = v24;
  *(__m128i *)&qword_4AFFAA0[21] = v25;
  qword_4AFFAA0[16] = v26;
  LODWORD(qword_4AFFAA0[15]) = 0;
  LODWORD(qword_4AFFAA0[17]) = 0;
  BYTE4(qword_4AFFAA0[17]) = 0;
  sub_259F400(qword_4AFFAA0, "pipeliner-force-issue-width", 27);
  qword_4AFFAA0[5] = 45;
  qword_4AFFAA0[4] = (__int64)"Force pipeliner to use specified issue width.";
  v27 = BYTE2(qword_4AFFAA0[1]);
  LODWORD(qword_4AFFAA0[15]) = -1;
  BYTE4(qword_4AFFAA0[17]) = 1;
  LODWORD(qword_4AFFAA0[17]) = -1;
  BYTE2(qword_4AFFAA0[1]) = v27 & 0x9F | 0x20;
  sub_259EC40(qword_4AFFAA0);
  __cxa_atexit(sub_20B86E0, qword_4AFFAA0, &off_47CFE00);
  v77.m128i_i64[1] = 3;
  v77.m128i_i64[0] = (__int64)"off";
  v28 = _mm_load_si128(&v77);
  v78.m128i_i64[1] = (__int64)"Turn off window algorithm.";
  v78.m128i_i32[0] = 0;
  v87[0] = v28;
  v29 = _mm_load_si128(&v78);
  v79.m128i_i64[1] = (__int64)"on";
  v79.m128i_i64[0] = 26;
  v87[1] = v29;
  v30 = _mm_load_si128(&v79);
  v80.m128i_i64[0] = 2;
  v80.m128i_i32[2] = 1;
  v87[2] = v30;
  v31 = _mm_load_si128(&v80);
  v81.m128i_i64[0] = (__int64)"Use window algorithm after SMS algorithm fails.";
  v81.m128i_i64[1] = 47;
  v87[3] = v31;
  v32 = _mm_load_si128(&v81);
  v82.m128i_i64[0] = (__int64)"force";
  v82.m128i_i64[1] = 5;
  v87[4] = v32;
  v33 = _mm_load_si128(&v82);
  v83.m128i_i64[1] = (__int64)"Use window algorithm instead of SMS algorithm.";
  v83.m128i_i32[0] = 2;
  v87[5] = v33;
  v34 = _mm_load_si128(&v83);
  v85 = (const char *)v87;
  v86 = 0x400000003LL;
  v88 = v34;
  v84 = 46;
  v89 = 46;
  sub_3446760(qword_4AFF840);
  v35 = _mm_load_si128(&v74);
  LODWORD(qword_4AFF840[15]) = 0;
  *(__m128i *)&qword_4AFF840[18] = v35;
  v36 = _mm_loadl_epi64((const __m128i *)&off_49EB3B0);
  LODWORD(qword_4AFF840[17]) = 0;
  BYTE4(qword_4AFF840[17]) = 0;
  qword_4AFF840[0] = (__int64)&off_4A80D38;
  qword_4AFF840[20] = (__int64)&qword_4AFF840[22];
  qword_4AFF840[16] = (__int64)off_4A80CC8;
  qword_4AFF840[21] = 0x800000000LL;
  *(_OWORD *)&qword_4AFF840[70] = 0;
  *(__m128i *)&qword_4AFF840[72] = _mm_unpacklo_epi64(v36, (__m128i)(unsigned __int64)nullsub_593);
  sub_259F400(qword_4AFF840, "window-sched", 12);
  v37 = BYTE2(qword_4AFF840[1]);
  LODWORD(qword_4AFF840[15]) = 1;
  BYTE4(qword_4AFF840[17]) = 1;
  v38 = v70;
  qword_4AFF840[5] = 43;
  v39 = (unsigned __int64)v71;
  LODWORD(qword_4AFF840[17]) = 1;
  BYTE2(qword_4AFF840[1]) = v37 & 0x9F | 0x20;
  qword_4AFF840[4] = (__int64)"Set how to use window scheduling algorithm.";
  do
  {
    v40 = (__int64)v38[6];
    v41 = (__int64)v38[5];
    v42 = 1;
    v43 = (const __m128i *)v39;
    v44 = v38[2];
    v45 = (__int64)v38[3];
    v79.m128i_i64[0] = (__int64)off_4A80CC8;
    v46 = LODWORD(qword_4AFF840[21]);
    v47 = *((_DWORD *)v38 + 8);
    v78.m128i_i64[1] = v40;
    v48 = HIDWORD(qword_4AFF840[21]);
    v78.m128i_i64[0] = v41;
    v77.m128i_i64[0] = (__int64)v44;
    v49 = v46;
    v77.m128i_i64[1] = v45;
    v79.m128i_i8[12] = 1;
    v79.m128i_i32[2] = v47;
    if ( v48 < v46 + 1 )
    {
      v54 = qword_4AFF840[20];
      if ( v39 < v54 || v39 >= v54 + 48 * v46 )
      {
        v69 = -1;
        LOBYTE(v68) = 0;
      }
      else
      {
        LOBYTE(v68) = 1;
        v69 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v39 - v54) >> 4);
      }
      LODWORD(v67) = v47;
      v66.m128i_i64[0] = v45;
      ptr[0] = (void *)v44;
      v55 = sub_25D5F70(&qword_4AFF840[20], &qword_4AFF840[22], v46 + 1, 48, v72);
      v56 = (__m128i *)qword_4AFF840[20];
      v44 = (const char *)ptr[0];
      v57 = v55;
      v45 = v66.m128i_i64[0];
      v47 = (int)v67;
      v58 = v56;
      v59 = &v56[3 * LODWORD(qword_4AFF840[21])];
      if ( v56 != v59 )
      {
        ptr[0] = (void *)qword_4AFF840[20];
        do
        {
          v60 = _mm_loadu_si128(v58);
          v61 = v58[2].m128i_i32[2];
          v58 += 3;
          v55 += 48;
          *(__m128i *)(v55 - 48) = v60;
          v62 = _mm_loadu_si128(v58 - 2);
          *(_DWORD *)(v55 - 8) = v61;
          LOBYTE(v61) = v58[-1].m128i_i8[12];
          *(__m128i *)(v55 - 32) = v62;
          *(_BYTE *)(v55 - 4) = v61;
          *(_QWORD *)(v55 - 16) = off_4A80CC8;
        }
        while ( v59 != v58 );
        v56 = (__m128i *)ptr[0];
      }
      v63 = (int)v76;
      if ( v56 != (__m128i *)&qword_4AFF840[22] )
      {
        v71 = v76;
        v70 = (const char **)v57;
        LODWORD(v67) = v47;
        v66.m128i_i64[0] = v45;
        ptr[0] = (void *)v44;
        free(v56);
        v63 = (int)v71;
        v57 = (__int64)v70;
        v47 = (int)v67;
        v45 = v66.m128i_i64[0];
        v44 = (const char *)ptr[0];
      }
      v46 = LODWORD(qword_4AFF840[21]);
      v64 = (_BYTE)v68 == 0;
      qword_4AFF840[20] = v57;
      HIDWORD(qword_4AFF840[21]) = v63;
      v49 = v46;
      if ( v64 )
      {
        v42 = 1;
        v43 = (const __m128i *)v39;
      }
      else
      {
        v43 = (const __m128i *)(v57 + 48 * v69);
        v47 = v43[2].m128i_i32[2];
        v42 = v43[2].m128i_i8[12];
      }
    }
    v38 += 5;
    v50 = qword_4AFF840[20] + 48 * v46;
    v51 = qword_4AFF840[19];
    *(__m128i *)v50 = _mm_loadu_si128(v43);
    v52 = _mm_loadu_si128(v43 + 1);
    *(_BYTE *)(v50 + 44) = v42;
    *(_DWORD *)(v50 + 40) = v47;
    *(_QWORD *)(v50 + 32) = off_4A80CC8;
    *(__m128i *)(v50 + 16) = v52;
    LODWORD(qword_4AFF840[21]) = v49 + 1;
    sub_259ED10(v51, v44, v45);
  }
  while ( &v88.m128i_u64[1] != (unsigned __int64 *)v38 );
  sub_259EC40(qword_4AFF840);
  return __cxa_atexit(sub_3448F60, qword_4AFF840, &off_47CFE00);
}

