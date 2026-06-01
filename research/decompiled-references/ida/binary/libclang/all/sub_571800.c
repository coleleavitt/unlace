int __fastcall sub_571800(__int64 a1)
{
  __int64 v1; // r12
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __m128i v4; // xmm7
  __int64 v5; // r12
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  __m128i v8; // xmm4
  __int64 v9; // r12
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  __m128i v12; // xmm5
  __int64 v13; // r12
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  __m128i v16; // xmm6
  char *v17; // rcx
  _BYTE *v18; // rdi
  signed __int64 v19; // rcx
  char *v20; // rsi
  __int64 v21; // rcx
  __int64 v22; // rbp
  __int64 v23; // rax
  __m128i v24; // xmm7
  __m128i v25; // xmm0
  char *v26; // rbp
  char v27; // al
  char *v28; // r13
  __int64 v29; // rdx
  char v30; // si
  const __m128i *v31; // rcx
  __int64 v32; // rdi
  __int32 v33; // r10d
  void *v34; // r12
  __int64 v35; // r9
  unsigned __int64 v36; // r8
  int v37; // edx
  __int64 v38; // rax
  __int64 v39; // rdi
  __m128i v40; // xmm0
  __int64 v41; // rbp
  __int64 v42; // rax
  unsigned __int64 v43; // rdx
  __int64 v44; // rbp
  __int64 v45; // rax
  unsigned __int64 v46; // rdx
  __m128i v47; // xmm7
  __int64 v48; // rbp
  __int64 v49; // rax
  unsigned __int64 v50; // rdx
  __m128i v51; // xmm1
  __int64 v52; // rbp
  __int64 v53; // rax
  unsigned __int64 v54; // rdx
  __m128i v55; // xmm2
  __int64 v56; // rbp
  __int64 v57; // rax
  unsigned __int64 v58; // rdx
  __m128i v59; // xmm3
  unsigned __int64 v61; // rdx
  __int64 v62; // rax
  __int64 v63; // r8
  __m128i *v64; // rdi
  const __m128i *v65; // rdx
  const __m128i *v66; // rcx
  __m128i v67; // xmm0
  __int32 v68; // r11d
  __m128i v69; // xmm0
  int v70; // eax
  bool v71; // zf
  __m128i v72; // [rsp+0h] [rbp-298h] BYREF
  __m128i v73; // [rsp+10h] [rbp-288h] BYREF
  __m128i v74; // [rsp+20h] [rbp-278h] BYREF
  _BYTE *v75; // [rsp+30h] [rbp-268h]
  __int64 v76; // [rsp+38h] [rbp-260h]
  char v77; // [rsp+47h] [rbp-251h]
  unsigned __int64 v78; // [rsp+48h] [rbp-250h]
  __int64 v79; // [rsp+50h] [rbp-248h]
  __int64 v80; // [rsp+58h] [rbp-240h]
  __int64 v81; // [rsp+68h] [rbp-230h] BYREF
  void *ptr; // [rsp+70h] [rbp-228h] BYREF
  __int64 v83; // [rsp+78h] [rbp-220h]
  _BYTE v84[160]; // [rsp+80h] [rbp-218h] BYREF
  void *v85; // [rsp+120h] [rbp-178h] BYREF
  __int64 v86; // [rsp+128h] [rbp-170h]
  __int64 v87; // [rsp+130h] [rbp-168h] BYREF
  const char *v88; // [rsp+138h] [rbp-160h]
  __int64 (__fastcall **v89)(); // [rsp+140h] [rbp-158h]
  char *v90; // [rsp+148h] [rbp-150h]
  __int64 v91; // [rsp+150h] [rbp-148h]
  int v92; // [rsp+158h] [rbp-140h]
  const char *v93; // [rsp+160h] [rbp-138h]
  __int64 v94; // [rsp+168h] [rbp-130h]
  char *v95; // [rsp+170h] [rbp-128h]
  __int64 v96; // [rsp+178h] [rbp-120h]
  int v97; // [rsp+180h] [rbp-118h]
  const char *v98; // [rsp+188h] [rbp-110h]
  __int64 v99; // [rsp+190h] [rbp-108h]
  const char *v100; // [rsp+198h] [rbp-100h]
  __int64 v101; // [rsp+1A0h] [rbp-F8h]
  int v102; // [rsp+1A8h] [rbp-F0h]
  const char *v103; // [rsp+1B0h] [rbp-E8h]
  __int64 v104; // [rsp+1B8h] [rbp-E0h]
  const char *v105; // [rsp+1C0h] [rbp-D8h]
  __int64 v106; // [rsp+1C8h] [rbp-D0h]
  int v107; // [rsp+1D0h] [rbp-C8h]
  const char *v108; // [rsp+1D8h] [rbp-C0h]
  __int64 v109; // [rsp+1E0h] [rbp-B8h]
  const char *v110; // [rsp+1E8h] [rbp-B0h]
  __int64 v111; // [rsp+1F0h] [rbp-A8h]
  int v112; // [rsp+1F8h] [rbp-A0h]
  const char *v113; // [rsp+200h] [rbp-98h]
  __int64 v114; // [rsp+208h] [rbp-90h]
  const char *v115; // [rsp+210h] [rbp-88h]
  __int64 v116; // [rsp+218h] [rbp-80h]
  int v117; // [rsp+220h] [rbp-78h]
  const char *v118; // [rsp+228h] [rbp-70h]
  __int64 v119; // [rsp+230h] [rbp-68h]
  const char *v120; // [rsp+238h] [rbp-60h]
  __int64 v121; // [rsp+240h] [rbp-58h]
  int v122; // [rsp+248h] [rbp-50h]
  const char *v123; // [rsp+250h] [rbp-48h]
  __int64 v124; // [rsp+258h] [rbp-40h]

  qword_4AE3EC0 = (__int64)&qword_4AE3ED0;
  qword_4AE3E90 = 0;
  qword_4AE3E98 = 0;
  v73 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49D8D28), (__m128i)(unsigned __int64)nullsub_343);
  v72 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49D8D30), (__m128i)(unsigned __int64)nullsub_266);
  qword_4AE3E80 = (__int64)&off_4A6E058;
  v74 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&off_4A6DA90, (__m128i)(unsigned __int64)qword_4AE39A0);
  qword_4AE3EA0 = 0;
  qword_4AE3EA8 = 0;
  qword_4AE3E88 = (unsigned int)qword_4AE3E88 & 0x80000000 | 0x10000LL;
  qword_4AE3EB0 = 0;
  qword_4AE3EB8 = 0;
  dword_4AE3EE8 = 0;
  qword_4AE3EC8 = 0x100000000LL;
  qword_4AE3ED8 = (__int64)&qword_4AE3EF0;
  byte_4AE3EEC = 1;
  qword_4AE3EE0 = 1;
  v1 = sub_259AC30(a1, &qword_4AE3ED0);
  v2 = (unsigned int)qword_4AE3EC8;
  v3 = (unsigned int)qword_4AE3EC8 + 1LL;
  if ( HIDWORD(qword_4AE3EC8) < v3 )
  {
    sub_25D6060(&qword_4AE3ED0 - 2, &qword_4AE3ED0, v3, 8);
    v2 = (unsigned int)qword_4AE3EC8;
  }
  v4 = _mm_load_si128(&v73);
  *(_QWORD *)(qword_4AE3EC0 + 8 * v2) = v1;
  xmmword_4AE3EF8 = 0;
  xmmword_4AE3F08 = 0;
  qword_4AE3E80 = (__int64)&off_4A6DA08;
  xmmword_4AE3F18 = 0;
  xmmword_4AE3F30 = 0;
  xmmword_4AE3F50 = 0;
  xmmword_4AE3F60 = (__int128)v4;
  LODWORD(qword_4AE3EC8) = qword_4AE3EC8 + 1;
  qword_4AE3F48 = (__int64)off_49D92E8;
  byte_4AE3F28 = 0;
  qword_4AE3F40 = 0;
  sub_259F400(&qword_4AE3E80, "print-before", 12);
  BYTE3(qword_4AE3E88) |= 2u;
  qword_4AE3EA0 = (__int64)"Print IR before specified passes";
  qword_4AE3EA8 = 32;
  BYTE2(qword_4AE3E88) = BYTE2(qword_4AE3E88) & 0x9F | 0x20;
  sub_259EC40(&qword_4AE3E80);
  __cxa_atexit(sub_24E33D0, &qword_4AE3E80, &off_47CFE00);
  qword_4AE3D90 = 0;
  qword_4AE3DC0 = (__int64)&qword_4AE3DD0;
  qword_4AE3D98 = 0;
  qword_4AE3D80 = (__int64)&off_4A6E058;
  qword_4AE3DA0 = 0;
  qword_4AE3DA8 = 0;
  qword_4AE3DB0 = 0;
  qword_4AE3D88 = (unsigned int)qword_4AE3D88 & 0x80000000 | 0x10000LL;
  qword_4AE3DB8 = 0;
  qword_4AE3DC8 = 0x100000000LL;
  qword_4AE3DD8 = (__int64)&qword_4AE3DF0;
  dword_4AE3DE8 = 0;
  qword_4AE3DE0 = 1;
  byte_4AE3DEC = 1;
  v5 = sub_259AC30(sub_24E33D0, &qword_4AE3DD0);
  v6 = (unsigned int)qword_4AE3DC8;
  v7 = (unsigned int)qword_4AE3DC8 + 1LL;
  if ( HIDWORD(qword_4AE3DC8) < v7 )
  {
    sub_25D6060(&qword_4AE3DD0 - 2, &qword_4AE3DD0, v7, 8);
    v6 = (unsigned int)qword_4AE3DC8;
  }
  v8 = _mm_load_si128(&v73);
  *(_QWORD *)(qword_4AE3DC0 + 8 * v6) = v5;
  xmmword_4AE3DF8 = 0;
  xmmword_4AE3E08 = 0;
  qword_4AE3D80 = (__int64)&off_4A6DA08;
  xmmword_4AE3E18 = 0;
  xmmword_4AE3E30 = 0;
  xmmword_4AE3E50 = 0;
  xmmword_4AE3E60 = (__int128)v8;
  LODWORD(qword_4AE3DC8) = qword_4AE3DC8 + 1;
  qword_4AE3E48 = (__int64)off_49D92E8;
  byte_4AE3E28 = 0;
  qword_4AE3E40 = 0;
  sub_259F400(&qword_4AE3D80, "print-after", 11);
  BYTE3(qword_4AE3D88) |= 2u;
  qword_4AE3DA0 = (__int64)"Print IR after specified passes";
  qword_4AE3DA8 = 31;
  BYTE2(qword_4AE3D88) = BYTE2(qword_4AE3D88) & 0x9F | 0x20;
  sub_259EC40(&qword_4AE3D80);
  __cxa_atexit(sub_24E33D0, &qword_4AE3D80, &off_47CFE00);
  qword_4AE3CD0 = 0;
  qword_4AE3D00 = (__int64)&qword_4AE3D10;
  qword_4AE3CD8 = 0;
  qword_4AE3CC0 = (__int64)&off_4A6E058;
  qword_4AE3CC8 = (unsigned int)qword_4AE3CC8 & 0x80000000;
  qword_4AE3CE0 = 0;
  qword_4AE3D08 = 0x100000000LL;
  qword_4AE3D18 = (__int64)&qword_4AE3D30;
  qword_4AE3CE8 = 0;
  qword_4AE3CF0 = 0;
  qword_4AE3CF8 = 0;
  qword_4AE3D20 = 1;
  dword_4AE3D28 = 0;
  byte_4AE3D2C = 1;
  v9 = sub_259AC30(sub_24E33D0, &qword_4AE3D10);
  v10 = (unsigned int)qword_4AE3D08;
  v11 = (unsigned int)qword_4AE3D08 + 1LL;
  if ( HIDWORD(qword_4AE3D08) < v11 )
  {
    sub_25D6060(&qword_4AE3D10 - 2, &qword_4AE3D10, v11, 8);
    v10 = (unsigned int)qword_4AE3D08;
  }
  v12 = _mm_load_si128(&v72);
  *(_QWORD *)(qword_4AE3D00 + 8 * v10) = v9;
  word_4AE3D48 = 0;
  xmmword_4AE3D58 = 0;
  qword_4AE3D40 = (__int64)&off_4A64730;
  xmmword_4AE3D68 = (__int128)v12;
  LODWORD(qword_4AE3D08) = qword_4AE3D08 + 1;
  qword_4AE3CC0 = (__int64)off_4A6DFF0;
  byte_4AE3D38 = 0;
  qword_4AE3D50 = (__int64)off_49D9168;
  sub_259F400(&qword_4AE3CC0, "print-before-all", 16);
  qword_4AE3CE8 = 25;
  qword_4AE3CE0 = (__int64)"Print IR before each pass";
  byte_4AE3D38 = 0;
  word_4AE3D48 = 256;
  BYTE2(qword_4AE3CC8) = BYTE2(qword_4AE3CC8) & 0x9F | 0x20;
  sub_259EC40(&qword_4AE3CC0);
  __cxa_atexit(sub_1F6C9D0, &qword_4AE3CC0, &off_47CFE00);
  qword_4AE3C10 = 0;
  qword_4AE3C40 = (__int64)&qword_4AE3C50;
  qword_4AE3C18 = 0;
  qword_4AE3C00 = (__int64)&off_4A6E058;
  qword_4AE3C08 = (unsigned int)qword_4AE3C08 & 0x80000000;
  qword_4AE3C20 = 0;
  qword_4AE3C48 = 0x100000000LL;
  qword_4AE3C58 = (__int64)&qword_4AE3C70;
  qword_4AE3C28 = 0;
  qword_4AE3C30 = 0;
  qword_4AE3C38 = 0;
  qword_4AE3C60 = 1;
  dword_4AE3C68 = 0;
  byte_4AE3C6C = 1;
  v13 = sub_259AC30(sub_1F6C9D0, &qword_4AE3C50);
  v14 = (unsigned int)qword_4AE3C48;
  v15 = (unsigned int)qword_4AE3C48 + 1LL;
  if ( HIDWORD(qword_4AE3C48) < v15 )
  {
    sub_25D6060(&qword_4AE3C50 - 2, &qword_4AE3C50, v15, 8);
    v14 = (unsigned int)qword_4AE3C48;
  }
  v16 = _mm_load_si128(&v72);
  *(_QWORD *)(qword_4AE3C40 + 8 * v14) = v13;
  xmmword_4AE3C98 = 0;
  xmmword_4AE3CA8 = (__int128)v16;
  word_4AE3C88 = 0;
  qword_4AE3C80 = (__int64)&off_4A64730;
  LODWORD(qword_4AE3C48) = qword_4AE3C48 + 1;
  byte_4AE3C78 = 0;
  qword_4AE3C00 = (__int64)off_4A6DFF0;
  qword_4AE3C90 = (__int64)off_49D9168;
  sub_259F400(&qword_4AE3C00, "print-after-all", 15);
  qword_4AE3C28 = 24;
  qword_4AE3C20 = (__int64)"Print IR after each pass";
  byte_4AE3C78 = 0;
  word_4AE3C88 = 256;
  BYTE2(qword_4AE3C08) = BYTE2(qword_4AE3C08) & 0x9F | 0x20;
  sub_259EC40(&qword_4AE3C00);
  __cxa_atexit(sub_1F6C9D0, &qword_4AE3C00, &off_47CFE00);
  v85 = "quiet";
  v88 = "Run in quiet mode";
  v90 = "diff";
  v93 = "Display patch-like changes";
  v95 = "diff-quiet";
  v98 = "Display patch-like changes in quiet mode";
  v100 = "cdiff";
  v103 = "Display patch-like changes with color";
  v105 = "cdiff-quiet";
  v108 = "Display patch-like changes in quiet mode with color";
  v110 = "dot-cfg";
  v113 = "Create a website with graphical changes";
  v115 = "dot-cfg-quiet";
  v86 = 5;
  LODWORD(v87) = 2;
  v89 = (__int64 (__fastcall **)())(&word_10 + 1);
  v91 = 4;
  v92 = 3;
  v94 = 26;
  v96 = 10;
  v97 = 4;
  v99 = 40;
  v101 = 5;
  v102 = 5;
  v104 = 37;
  v106 = 11;
  v107 = 6;
  v109 = 51;
  v111 = 7;
  v112 = 7;
  v114 = 39;
  v116 = 13;
  v117 = 8;
  v118 = "Create a website with graphical changes in quiet mode";
  v120 = &byte_3B9466E;
  v123 = &byte_3B9466E;
  v75 = v84;
  ptr = v84;
  v83 = 0x400000000LL;
  v119 = 53;
  v121 = 0;
  v122 = 1;
  v124 = 0;
  sub_25D6060(&ptr, v84, 8, 40);
  v17 = (char *)ptr + 40 * (unsigned int)v83;
  *(_QWORD *)v17 = v85;
  v18 = (_BYTE *)((unsigned __int64)(v17 + 8) & 0xFFFFFFFFFFFFFFF8LL);
  *((_QWORD *)v17 + 39) = v124;
  v19 = v17 - v18;
  v20 = (char *)&v85 - v19;
  v21 = (unsigned int)(v19 + 320) >> 3;
  qmemcpy(v18, v20, 8 * v21);
  qword_4AE39A0[0] = (__int64)&off_4A6E058;
  qword_4AE39A0[2] = 0;
  qword_4AE39A0[1] &= 0x80000000uLL;
  LODWORD(v83) = v83 + 8;
  qword_4AE39A0[9] = 0x100000000LL;
  qword_4AE39A0[11] = (__int64)&qword_4AE39A0[14];
  qword_4AE39A0[3] = 0;
  qword_4AE39A0[4] = 0;
  qword_4AE39A0[5] = 0;
  qword_4AE39A0[6] = 0;
  qword_4AE39A0[7] = 0;
  qword_4AE39A0[8] = (__int64)&qword_4AE39A0[10];
  qword_4AE39A0[12] = 1;
  LODWORD(qword_4AE39A0[13]) = 0;
  BYTE4(qword_4AE39A0[13]) = 1;
  v22 = sub_259AC30(&v18[8 * v21], &v20[8 * v21]);
  v23 = LODWORD(qword_4AE39A0[9]);
  if ( HIDWORD(qword_4AE39A0[9]) < (unsigned __int64)(v23 + 1) )
  {
    sub_25D6060(&qword_4AE39A0[8], &qword_4AE39A0[10], v23 + 1, 8);
    v23 = LODWORD(qword_4AE39A0[9]);
  }
  v24 = _mm_load_si128(&v74);
  *(_QWORD *)(qword_4AE39A0[8] + 8 * v23) = v22;
  *(_OWORD *)&qword_4AE39A0[70] = 0;
  v25 = _mm_loadl_epi64((const __m128i *)&off_49D8D38);
  ++LODWORD(qword_4AE39A0[9]);
  LODWORD(qword_4AE39A0[15]) = 0;
  BYTE4(qword_4AE39A0[17]) = 0;
  qword_4AE39A0[0] = (__int64)&off_4A6DAE0;
  qword_4AE39A0[20] = (__int64)&qword_4AE39A0[22];
  LODWORD(qword_4AE39A0[17]) = 0;
  qword_4AE39A0[21] = 0x800000000LL;
  qword_4AE39A0[16] = (__int64)off_4A6DA70;
  *(__m128i *)&qword_4AE39A0[18] = v24;
  *(__m128i *)&qword_4AE39A0[72] = _mm_unpacklo_epi64(v25, (__m128i)(unsigned __int64)nullsub_344);
  sub_259F400(qword_4AE39A0, "print-changed", 13);
  v26 = (char *)ptr;
  qword_4AE39A0[5] = 17;
  qword_4AE39A0[4] = (__int64)"Print changed IRs";
  v27 = BYTE2(qword_4AE39A0[1]);
  LODWORD(qword_4AE39A0[15]) = 0;
  BYTE4(qword_4AE39A0[17]) = 1;
  LODWORD(qword_4AE39A0[17]) = 0;
  BYTE2(qword_4AE39A0[1]) = v27 & 0x87 | 0x28;
  v28 = &v26[40 * (unsigned int)v83];
  while ( v28 != v26 )
  {
    v29 = *((_QWORD *)v26 + 3);
    v30 = 1;
    v31 = (const __m128i *)&v85;
    v32 = LODWORD(qword_4AE39A0[21]);
    v33 = *((_DWORD *)v26 + 4);
    v34 = *(void **)v26;
    v35 = *((_QWORD *)v26 + 1);
    v88 = *((const char **)v26 + 4);
    v36 = HIDWORD(qword_4AE39A0[21]);
    v87 = v29;
    v37 = v32;
    v85 = v34;
    v86 = v35;
    v89 = off_4A6DA70;
    BYTE4(v90) = 1;
    LODWORD(v90) = v33;
    if ( v36 < v32 + 1 )
    {
      v61 = qword_4AE39A0[20];
      if ( (unsigned __int64)&v85 < v61 || (unsigned __int64)&v85 >= v61 + 48 * v32 )
      {
        v78 = -1;
        v77 = 0;
      }
      else
      {
        v77 = 1;
        v78 = 0xAAAAAAAAAAAAAAABLL * ((__int64)((__int64)&v85 - v61) >> 4);
      }
      v76 = v35;
      v74.m128i_i32[0] = v33;
      v62 = sub_25D5F70(&qword_4AE39A0[20], &qword_4AE39A0[22], v32 + 1, 48, &v81);
      v33 = v74.m128i_i32[0];
      v35 = v76;
      v63 = v62;
      v64 = (__m128i *)qword_4AE39A0[20];
      v65 = v64;
      v66 = &v64[3 * LODWORD(qword_4AE39A0[21])];
      if ( v64 != v66 )
      {
        do
        {
          v67 = _mm_loadu_si128(v65);
          v68 = v65[2].m128i_i32[2];
          v65 += 3;
          v62 += 48;
          *(__m128i *)(v62 - 48) = v67;
          v69 = _mm_loadu_si128(v65 - 2);
          *(_DWORD *)(v62 - 8) = v68;
          LOBYTE(v68) = v65[-1].m128i_i8[12];
          *(__m128i *)(v62 - 32) = v69;
          *(_BYTE *)(v62 - 4) = v68;
          *(_QWORD *)(v62 - 16) = off_4A6DA70;
        }
        while ( v66 != v65 );
      }
      v70 = v81;
      if ( v64 != (__m128i *)&qword_4AE39A0[22] )
      {
        v80 = v35;
        v79 = v81;
        v76 = v63;
        v74.m128i_i32[0] = v33;
        free(v64);
        v35 = v80;
        v70 = v79;
        v63 = v76;
        v33 = v74.m128i_i32[0];
      }
      v32 = LODWORD(qword_4AE39A0[21]);
      v71 = v77 == 0;
      qword_4AE39A0[20] = v63;
      HIDWORD(qword_4AE39A0[21]) = v70;
      v37 = v32;
      if ( v71 )
      {
        v30 = 1;
        v31 = (const __m128i *)&v85;
      }
      else
      {
        v31 = (const __m128i *)(v63 + 48 * v78);
        v33 = v31[2].m128i_i32[2];
        v30 = v31[2].m128i_i8[12];
      }
    }
    v26 += 40;
    v38 = qword_4AE39A0[20] + 48 * v32;
    v39 = qword_4AE39A0[19];
    *(__m128i *)v38 = _mm_loadu_si128(v31);
    v40 = _mm_loadu_si128(v31 + 1);
    *(_BYTE *)(v38 + 44) = v30;
    *(_DWORD *)(v38 + 40) = v33;
    *(_QWORD *)(v38 + 32) = off_4A6DA70;
    *(__m128i *)(v38 + 16) = v40;
    LODWORD(qword_4AE39A0[21]) = v37 + 1;
    sub_259ED10(v39, v34, v35);
  }
  sub_259EC40(qword_4AE39A0);
  if ( ptr != v75 )
    free(ptr);
  __cxa_atexit(sub_24E3180, qword_4AE39A0, &off_47CFE00);
  qword_4AE38B0 = 0;
  qword_4AE38E0 = (__int64)&qword_4AE38F0;
  qword_4AE38B8 = 0;
  qword_4AE38A0 = (__int64)&off_4A6E058;
  qword_4AE38A8 = (unsigned int)qword_4AE38A8 & 0x80000000;
  qword_4AE38C0 = 0;
  qword_4AE38E8 = 0x100000000LL;
  qword_4AE38F8 = (__int64)&qword_4AE3910;
  qword_4AE38C8 = 0;
  qword_4AE38D0 = 0;
  qword_4AE38D8 = 0;
  qword_4AE3900 = 1;
  dword_4AE3908 = 0;
  byte_4AE390C = 1;
  v41 = sub_259AC30(sub_24E3180, &qword_4AE38F0);
  v42 = (unsigned int)qword_4AE38E8;
  v43 = (unsigned int)qword_4AE38E8 + 1LL;
  if ( HIDWORD(qword_4AE38E8) < v43 )
  {
    sub_25D6060(&qword_4AE38F0 - 2, &qword_4AE38F0, v43, 8);
    v42 = (unsigned int)qword_4AE38E8;
  }
  *(_QWORD *)(qword_4AE38E0 + 8 * v42) = v41;
  qword_4AE3918 = (__int64)&byte_4AE3928;
  LODWORD(qword_4AE38E8) = qword_4AE38E8 + 1;
  qword_4AE3920 = 0;
  qword_4AE38A0 = (__int64)&off_4A6DF88;
  xmmword_4AE3938 = (__int128)_mm_unpacklo_epi64(
                                (__m128i)(unsigned __int64)&off_49D9118,
                                (__m128i)(unsigned __int64)&byte_4AE3950);
  xmmword_4AE3970 = 0;
  qword_4AE3968 = (__int64)off_49D92E8;
  byte_4AE3928 = 0;
  byte_4AE3950 = 0;
  xmmword_4AE3980 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49D8D40),
                                (__m128i)(unsigned __int64)nullsub_294);
  qword_4AE3948 = 0;
  byte_4AE3960 = 0;
  sub_259F400(&qword_4AE38A0, "print-changed-diff-path", 23);
  v85 = &v87;
  strcpy((char *)&v87, "diff");
  BYTE2(qword_4AE38A8) = BYTE2(qword_4AE38A8) & 0x9F | 0x20;
  v86 = 4;
  std::string::_M_assign();
  byte_4AE3960 = 1;
  std::string::_M_assign();
  if ( v85 != &v87 )
    operator delete(v85, v87 + 1);
  qword_4AE38C8 = 36;
  qword_4AE38C0 = (__int64)"system diff used by change reporters";
  sub_259EC40(&qword_4AE38A0);
  __cxa_atexit(sub_2283FB0, &qword_4AE38A0, &off_47CFE00);
  qword_4AE37F0 = 0;
  qword_4AE3820 = (__int64)&qword_4AE3830;
  qword_4AE37F8 = 0;
  qword_4AE37E0 = (__int64)&off_4A6E058;
  qword_4AE37E8 = (unsigned int)qword_4AE37E8 & 0x80000000;
  qword_4AE3800 = 0;
  qword_4AE3828 = 0x100000000LL;
  qword_4AE3838 = (__int64)&qword_4AE3850;
  qword_4AE3808 = 0;
  qword_4AE3810 = 0;
  qword_4AE3818 = 0;
  qword_4AE3840 = 1;
  dword_4AE3848 = 0;
  byte_4AE384C = 1;
  v44 = sub_259AC30(sub_2283FB0, &qword_4AE3830);
  v45 = (unsigned int)qword_4AE3828;
  v46 = (unsigned int)qword_4AE3828 + 1LL;
  if ( HIDWORD(qword_4AE3828) < v46 )
  {
    sub_25D6060(&qword_4AE3830 - 2, &qword_4AE3830, v46, 8);
    v45 = (unsigned int)qword_4AE3828;
  }
  v47 = _mm_load_si128(&v72);
  *(_QWORD *)(qword_4AE3820 + 8 * v45) = v44;
  word_4AE3868 = 0;
  xmmword_4AE3878 = 0;
  qword_4AE3860 = (__int64)&off_4A64730;
  xmmword_4AE3888 = (__int128)v47;
  LODWORD(qword_4AE3828) = qword_4AE3828 + 1;
  qword_4AE37E0 = (__int64)off_4A6DFF0;
  byte_4AE3858 = 0;
  qword_4AE3870 = (__int64)off_49D9168;
  sub_259F400(&qword_4AE37E0, "print-module-scope", 18);
  qword_4AE3808 = 72;
  qword_4AE3800 = (__int64)"When printing IR for print-[before|after]{-all} always print a module IR";
  byte_4AE3858 = 0;
  word_4AE3868 = 256;
  BYTE2(qword_4AE37E8) = BYTE2(qword_4AE37E8) & 0x9F | 0x20;
  sub_259EC40(&qword_4AE37E0);
  __cxa_atexit(sub_1F6C9D0, &qword_4AE37E0, &off_47CFE00);
  qword_4AE3730 = 0;
  qword_4AE3760 = (__int64)&qword_4AE3770;
  qword_4AE3738 = 0;
  qword_4AE3720 = (__int64)&off_4A6E058;
  qword_4AE3728 = (unsigned int)qword_4AE3728 & 0x80000000;
  qword_4AE3740 = 0;
  qword_4AE3768 = 0x100000000LL;
  qword_4AE3778 = (__int64)&qword_4AE3790;
  qword_4AE3748 = 0;
  qword_4AE3750 = 0;
  qword_4AE3758 = 0;
  qword_4AE3780 = 1;
  dword_4AE3788 = 0;
  byte_4AE378C = 1;
  v48 = sub_259AC30(sub_1F6C9D0, &qword_4AE3770);
  v49 = (unsigned int)qword_4AE3768;
  v50 = (unsigned int)qword_4AE3768 + 1LL;
  if ( HIDWORD(qword_4AE3768) < v50 )
  {
    sub_25D6060(&qword_4AE3770 - 2, &qword_4AE3770, v50, 8);
    v49 = (unsigned int)qword_4AE3768;
  }
  v51 = _mm_load_si128(&v72);
  *(_QWORD *)(qword_4AE3760 + 8 * v49) = v48;
  word_4AE37A8 = 0;
  xmmword_4AE37B8 = 0;
  xmmword_4AE37C8 = (__int128)v51;
  qword_4AE37A0 = (__int64)&off_4A64730;
  LODWORD(qword_4AE3768) = qword_4AE3768 + 1;
  byte_4AE3798 = 0;
  qword_4AE3720 = (__int64)off_4A6DFF0;
  qword_4AE37B0 = (__int64)off_49D9168;
  sub_259F400(&qword_4AE3720, "print-loop-func-scope", 21);
  qword_4AE3748 = 89;
  qword_4AE3740 = (__int64)"When printing IR for print-[before|after]{-all} for a loop pass, always print function IR";
  byte_4AE3798 = 0;
  word_4AE37A8 = 256;
  BYTE2(qword_4AE3728) = BYTE2(qword_4AE3728) & 0x9F | 0x20;
  sub_259EC40(&qword_4AE3720);
  __cxa_atexit(sub_1F6C9D0, &qword_4AE3720, &off_47CFE00);
  qword_4AE3630 = 0;
  qword_4AE3660 = (__int64)&qword_4AE3670;
  qword_4AE3638 = 0;
  qword_4AE3620 = (__int64)&off_4A6E058;
  qword_4AE3640 = 0;
  qword_4AE3648 = 0;
  qword_4AE3650 = 0;
  qword_4AE3628 = (unsigned int)qword_4AE3628 & 0x80000000 | 0x10000LL;
  qword_4AE3658 = 0;
  qword_4AE3668 = 0x100000000LL;
  qword_4AE3678 = (__int64)&qword_4AE3690;
  dword_4AE3688 = 0;
  qword_4AE3680 = 1;
  byte_4AE368C = 1;
  v52 = sub_259AC30(sub_1F6C9D0, &qword_4AE3670);
  v53 = (unsigned int)qword_4AE3668;
  v54 = (unsigned int)qword_4AE3668 + 1LL;
  if ( HIDWORD(qword_4AE3668) < v54 )
  {
    sub_25D6060(&qword_4AE3670 - 2, &qword_4AE3670, v54, 8);
    v53 = (unsigned int)qword_4AE3668;
  }
  v55 = _mm_load_si128(&v73);
  *(_QWORD *)(qword_4AE3660 + 8 * v53) = v52;
  xmmword_4AE3698 = 0;
  xmmword_4AE36A8 = 0;
  qword_4AE3620 = (__int64)&off_4A6DA08;
  xmmword_4AE36B8 = 0;
  xmmword_4AE36D0 = 0;
  xmmword_4AE36F0 = 0;
  xmmword_4AE3700 = (__int128)v55;
  LODWORD(qword_4AE3668) = qword_4AE3668 + 1;
  qword_4AE36E8 = (__int64)off_49D92E8;
  byte_4AE36C8 = 0;
  qword_4AE36E0 = 0;
  sub_259F400(&qword_4AE3620, "filter-passes", 13);
  BYTE3(qword_4AE3628) |= 2u;
  qword_4AE3650 = (__int64)"pass names";
  qword_4AE3640 = (__int64)"Only consider IR changes for passes whose names match the specified value. No-op without -print-changed";
  qword_4AE3658 = 10;
  qword_4AE3648 = 103;
  BYTE2(qword_4AE3628) = BYTE2(qword_4AE3628) & 0x9F | 0x20;
  sub_259EC40(&qword_4AE3620);
  __cxa_atexit(sub_24E33D0, &qword_4AE3620, &off_47CFE00);
  qword_4AE3530 = 0;
  qword_4AE3560 = (__int64)&qword_4AE3570;
  qword_4AE3538 = 0;
  qword_4AE3520 = (__int64)&off_4A6E058;
  qword_4AE3540 = 0;
  qword_4AE3548 = 0;
  qword_4AE3550 = 0;
  qword_4AE3528 = (unsigned int)qword_4AE3528 & 0x80000000 | 0x10000LL;
  qword_4AE3558 = 0;
  qword_4AE3568 = 0x100000000LL;
  qword_4AE3578 = (__int64)&qword_4AE3590;
  dword_4AE3588 = 0;
  qword_4AE3580 = 1;
  byte_4AE358C = 1;
  v56 = sub_259AC30(sub_24E33D0, &qword_4AE3570);
  v57 = (unsigned int)qword_4AE3568;
  v58 = (unsigned int)qword_4AE3568 + 1LL;
  if ( HIDWORD(qword_4AE3568) < v58 )
  {
    sub_25D6060(&qword_4AE3570 - 2, &qword_4AE3570, v58, 8);
    v57 = (unsigned int)qword_4AE3568;
  }
  v59 = _mm_load_si128(&v73);
  *(_QWORD *)(qword_4AE3560 + 8 * v57) = v56;
  xmmword_4AE3598 = 0;
  xmmword_4AE35A8 = 0;
  qword_4AE3520 = (__int64)&off_4A6DA08;
  xmmword_4AE35B8 = 0;
  xmmword_4AE35D0 = 0;
  qword_4AE35E8 = (__int64)off_49D92E8;
  xmmword_4AE35F0 = 0;
  xmmword_4AE3600 = (__int128)v59;
  LODWORD(qword_4AE3568) = qword_4AE3568 + 1;
  byte_4AE35C8 = 0;
  qword_4AE35E0 = 0;
  sub_259F400(&qword_4AE3520, "filter-print-funcs", 18);
  BYTE3(qword_4AE3528) |= 2u;
  qword_4AE3550 = (__int64)"function names";
  qword_4AE3540 = (__int64)"Only print IR for functions whose name match this for all print-[before|after][-all] options";
  qword_4AE3558 = 14;
  qword_4AE3548 = 92;
  BYTE2(qword_4AE3528) = BYTE2(qword_4AE3528) & 0x9F | 0x20;
  sub_259EC40(&qword_4AE3520);
  return __cxa_atexit(sub_24E33D0, &qword_4AE3520, &off_47CFE00);
}

