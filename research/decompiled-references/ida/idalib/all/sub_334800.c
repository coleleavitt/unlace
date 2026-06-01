int sub_334800()
{
  size_t v0; // rax
  __int64 v1; // rbp
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  size_t v5; // rax
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  __m128i si128; // xmm3
  size_t v11; // rax
  __int64 v12; // rbp
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  size_t v16; // rax
  __int64 v17; // rbp
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  __m128i v25; // xmm4
  void **v26; // rcx
  size_t v27; // rax
  size_t v28; // rax
  __int64 v29; // rax
  __int64 v30; // rcx
  unsigned __int64 v31; // rdx
  __m128 v32; // xmm0
  size_t v33; // rax
  __int64 v34; // rbp
  __int64 v35; // rax
  __int64 v36; // rcx
  unsigned __int64 v37; // rdx
  __m128i v38; // xmm5
  size_t v39; // rax
  __int64 v40; // rbp
  __int64 v41; // rax
  __int64 v42; // rcx
  unsigned __int64 v43; // rdx
  __m128i v44; // xmm6
  size_t v45; // rbp
  size_t v46; // rax
  __int64 v47; // r13
  __int64 v48; // rax
  __int64 v49; // rcx
  unsigned __int64 v50; // rdx
  __m128i v51; // xmm7
  size_t v52; // rbp
  size_t v53; // rax
  __int64 v54; // r13
  __int64 v55; // rax
  __int64 v56; // rcx
  unsigned __int64 v57; // rdx
  __m128i v58; // xmm5
  __m128 v60; // [rsp+0h] [rbp-278h] BYREF
  __m128 v61; // [rsp+10h] [rbp-268h] BYREF
  void **p_ptr; // [rsp+20h] [rbp-258h] BYREF
  _BYTE *v63; // [rsp+28h] [rbp-250h]
  int v64; // [rsp+3Ch] [rbp-23Ch] BYREF
  int v65; // [rsp+40h] [rbp-238h] BYREF
  int v66; // [rsp+44h] [rbp-234h] BYREF
  int *v67; // [rsp+48h] [rbp-230h] BYREF
  void *ptr; // [rsp+50h] [rbp-228h] BYREF
  __int64 v69; // [rsp+58h] [rbp-220h]
  _BYTE v70[160]; // [rsp+60h] [rbp-218h] BYREF
  void *v71; // [rsp+100h] [rbp-178h] BYREF
  __int64 v72; // [rsp+108h] [rbp-170h]
  _DWORD v73[2]; // [rsp+110h] [rbp-168h] BYREF
  const char *v74; // [rsp+118h] [rbp-160h]
  __int64 v75; // [rsp+120h] [rbp-158h]
  char *v76; // [rsp+128h] [rbp-150h]
  __int64 v77; // [rsp+130h] [rbp-148h]
  int v78; // [rsp+138h] [rbp-140h]
  const char *v79; // [rsp+140h] [rbp-138h]
  __int64 v80; // [rsp+148h] [rbp-130h]
  char *v81; // [rsp+150h] [rbp-128h]
  __int64 v82; // [rsp+158h] [rbp-120h]
  int v83; // [rsp+160h] [rbp-118h]
  const char *v84; // [rsp+168h] [rbp-110h]
  __int64 v85; // [rsp+170h] [rbp-108h]
  const char *v86; // [rsp+178h] [rbp-100h]
  __int64 v87; // [rsp+180h] [rbp-F8h]
  int v88; // [rsp+188h] [rbp-F0h]
  const char *v89; // [rsp+190h] [rbp-E8h]
  __int64 v90; // [rsp+198h] [rbp-E0h]
  const char *v91; // [rsp+1A0h] [rbp-D8h]
  __int64 v92; // [rsp+1A8h] [rbp-D0h]
  int v93; // [rsp+1B0h] [rbp-C8h]
  const char *v94; // [rsp+1B8h] [rbp-C0h]
  __int64 v95; // [rsp+1C0h] [rbp-B8h]
  const char *v96; // [rsp+1C8h] [rbp-B0h]
  __int64 v97; // [rsp+1D0h] [rbp-A8h]
  int v98; // [rsp+1D8h] [rbp-A0h]
  const char *v99; // [rsp+1E0h] [rbp-98h]
  __int64 v100; // [rsp+1E8h] [rbp-90h]
  const char *v101; // [rsp+1F0h] [rbp-88h]
  __int64 v102; // [rsp+1F8h] [rbp-80h]
  int v103; // [rsp+200h] [rbp-78h]
  const char *v104; // [rsp+208h] [rbp-70h]
  __int64 v105; // [rsp+210h] [rbp-68h]
  const char *v106; // [rsp+218h] [rbp-60h]
  __int64 v107; // [rsp+220h] [rbp-58h]
  int v108; // [rsp+228h] [rbp-50h]
  const char *v109; // [rsp+230h] [rbp-48h]
  void *v110; // [rsp+238h] [rbp-40h]

  v0 = j__strlen("Print IR before specified passes");
  qword_2CFE6B0 = 0;
  v1 = v0;
  qword_2CFE6B8 = 0;
  qword_2CFE6C0 = 0;
  qword_2CFE6A0 = (__int64)&off_2C758B0;
  qword_2CFE6C8 = 0;
  qword_2CFE6E0 = (__int64)&unk_2CFE6F0;
  qword_2CFE6D0 = 0;
  qword_2CFE6A8 = (unsigned int)qword_2CFE6A8 & 0x80000000 | 0x10000LL;
  qword_2CFE6E8 = 0x100000000LL;
  qword_2CFE6D8 = 0;
  qword_2CFE6F8 = (__int64)&unk_2CFE710;
  qword_2CFE700 = 1;
  dword_2CFE708 = 0;
  byte_2CFE70C = 1;
  v2 = sub_2210FF0("Print IR before specified passes");
  v3 = (unsigned int)qword_2CFE6E8;
  v4 = (unsigned int)qword_2CFE6E8 + 1LL;
  if ( v4 > HIDWORD(qword_2CFE6E8) )
  {
    v60.m128_u64[0] = v2;
    sub_2237220((char *)&unk_2CFE6F0 - 16, &unk_2CFE6F0, v4, 8);
    v3 = (unsigned int)qword_2CFE6E8;
    v2 = v60.m128_u64[0];
  }
  *(_QWORD *)(qword_2CFE6E0 + 8 * v3) = v2;
  xmmword_2CFE750 = 0;
  v61 = _mm_loadh_ps((const double *)&off_2C78DD8);
  qword_2CFE6A0 = (__int64)&off_2C71420;
  xmmword_2CFE780 = (__int128)v61;
  qword_2CFE768 = (__int64)off_2BEAC58;
  LODWORD(qword_2CFE6E8) = qword_2CFE6E8 + 1;
  qword_2CFE718 = 0;
  qword_2CFE720 = 0;
  qword_2CFE728 = 0;
  qword_2CFE730 = 0;
  qword_2CFE738 = 0;
  qword_2CFE740 = 0;
  byte_2CFE748 = 0;
  qword_2CFE760 = 0;
  sub_2217250(&qword_2CFE6A0, "print-before", 12);
  qword_2CFE6C8 = v1;
  qword_2CFE6C0 = (__int64)"Print IR before specified passes";
  BYTE3(qword_2CFE6A8) |= 2u;
  BYTE2(qword_2CFE6A8) = BYTE2(qword_2CFE6A8) & 0x9F | 0x20;
  sub_2218140(&qword_2CFE6A0);
  __cxa_atexit(sub_1FF2780, &qword_2CFE6A0, &off_2B25620);
  v5 = j__strlen("Print IR after specified passes");
  qword_2CFE5E0 = (__int64)&unk_2CFE5F0;
  v6 = v5;
  qword_2CFE5B0 = 0;
  qword_2CFE5A0 = (__int64)&off_2C758B0;
  qword_2CFE5B8 = 0;
  qword_2CFE5C0 = 0;
  qword_2CFE5C8 = 0;
  qword_2CFE5A8 = (unsigned int)qword_2CFE5A8 & 0x80000000 | 0x10000LL;
  qword_2CFE5E8 = 0x100000000LL;
  qword_2CFE5D0 = 0;
  qword_2CFE5D8 = 0;
  qword_2CFE5F8 = (__int64)&unk_2CFE610;
  qword_2CFE600 = 1;
  dword_2CFE608 = 0;
  byte_2CFE60C = 1;
  v7 = sub_2210FF0("Print IR after specified passes");
  v8 = (unsigned int)qword_2CFE5E8;
  v9 = (unsigned int)qword_2CFE5E8 + 1LL;
  if ( v9 > HIDWORD(qword_2CFE5E8) )
  {
    v60.m128_u64[0] = v7;
    sub_2237220((char *)&unk_2CFE5F0 - 16, &unk_2CFE5F0, v9, 8);
    v8 = (unsigned int)qword_2CFE5E8;
    v7 = v60.m128_u64[0];
  }
  si128 = _mm_load_si128((const __m128i *)&v61);
  *(_QWORD *)(qword_2CFE5E0 + 8 * v8) = v7;
  xmmword_2CFE650 = 0;
  xmmword_2CFE680 = (__int128)si128;
  qword_2CFE5A0 = (__int64)&off_2C71420;
  qword_2CFE668 = (__int64)off_2BEAC58;
  LODWORD(qword_2CFE5E8) = qword_2CFE5E8 + 1;
  qword_2CFE618 = 0;
  qword_2CFE620 = 0;
  qword_2CFE628 = 0;
  qword_2CFE630 = 0;
  qword_2CFE638 = 0;
  qword_2CFE640 = 0;
  byte_2CFE648 = 0;
  qword_2CFE660 = 0;
  sub_2217250(&qword_2CFE5A0, "print-after", 11);
  qword_2CFE5C8 = v6;
  qword_2CFE5C0 = (__int64)"Print IR after specified passes";
  BYTE3(qword_2CFE5A8) |= 2u;
  BYTE2(qword_2CFE5A8) = BYTE2(qword_2CFE5A8) & 0x9F | 0x20;
  sub_2218140(&qword_2CFE5A0);
  __cxa_atexit(sub_1FF2780, &qword_2CFE5A0, &off_2B25620);
  v11 = j__strlen("Print IR before each pass");
  qword_2CFE520 = (__int64)&unk_2CFE530;
  v12 = v11;
  qword_2CFE4F0 = 0;
  qword_2CFE4E0 = (__int64)&off_2C758B0;
  qword_2CFE4E8 = (unsigned int)qword_2CFE4E8 & 0x80000000;
  qword_2CFE528 = 0x100000000LL;
  qword_2CFE4F8 = 0;
  qword_2CFE500 = 0;
  qword_2CFE508 = 0;
  qword_2CFE510 = 0;
  qword_2CFE518 = 0;
  qword_2CFE538 = (__int64)&unk_2CFE550;
  qword_2CFE540 = 1;
  dword_2CFE548 = 0;
  byte_2CFE54C = 1;
  v13 = sub_2210FF0("Print IR before each pass");
  v14 = (unsigned int)qword_2CFE528;
  v15 = (unsigned int)qword_2CFE528 + 1LL;
  if ( v15 > HIDWORD(qword_2CFE528) )
  {
    v60.m128_u64[0] = v13;
    sub_2237220((char *)&unk_2CFE530 - 16, &unk_2CFE530, v15, 8);
    v14 = (unsigned int)qword_2CFE528;
    v13 = v60.m128_u64[0];
  }
  *(_QWORD *)(qword_2CFE520 + 8 * v14) = v13;
  qword_2CFE560 = (__int64)off_2C714E8;
  qword_2CFE4E0 = (__int64)off_2C75848;
  v60 = _mm_loadh_ps((const double *)off_2C78368);
  word_2CFE568 = 0;
  xmmword_2CFE588 = (__int128)v60;
  LODWORD(qword_2CFE528) = qword_2CFE528 + 1;
  qword_2CFE570 = (__int64)off_2BEAB08;
  byte_2CFE558 = 0;
  sub_2217250(&qword_2CFE4E0, "print-before-all", 16);
  qword_2CFE508 = v12;
  qword_2CFE500 = (__int64)"Print IR before each pass";
  word_2CFE568 = 256;
  byte_2CFE558 = 0;
  BYTE2(qword_2CFE4E8) = BYTE2(qword_2CFE4E8) & 0x9F | 0x20;
  sub_2218140(&qword_2CFE4E0);
  __cxa_atexit(sub_200E190, &qword_2CFE4E0, &off_2B25620);
  v16 = j__strlen("Print IR after each pass");
  qword_2CFE430 = 0;
  v17 = v16;
  qword_2CFE460 = (__int64)&unk_2CFE470;
  qword_2CFE420 = (__int64)&off_2C758B0;
  qword_2CFE428 = (unsigned int)qword_2CFE428 & 0x80000000;
  qword_2CFE468 = 0x100000000LL;
  qword_2CFE438 = 0;
  qword_2CFE440 = 0;
  qword_2CFE448 = 0;
  qword_2CFE450 = 0;
  qword_2CFE458 = 0;
  qword_2CFE478 = (__int64)&unk_2CFE490;
  qword_2CFE480 = 1;
  dword_2CFE488 = 0;
  byte_2CFE48C = 1;
  v22 = sub_2210FF0("Print IR after each pass", &unk_2CFE470, v18, v19, v20, v21, *(_OWORD *)&v60, *(_OWORD *)&v61);
  v23 = (unsigned int)qword_2CFE468;
  v24 = (unsigned int)qword_2CFE468 + 1LL;
  if ( v24 > HIDWORD(qword_2CFE468) )
  {
    p_ptr = (void **)v22;
    sub_2237220((char *)&unk_2CFE470 - 16, &unk_2CFE470, v24, 8);
    v23 = (unsigned int)qword_2CFE468;
    v22 = (__int64)p_ptr;
  }
  v25 = _mm_load_si128((const __m128i *)&v60);
  *(_QWORD *)(qword_2CFE460 + 8 * v23) = v22;
  qword_2CFE4A0 = (__int64)off_2C714E8;
  word_2CFE4A8 = 0;
  qword_2CFE420 = (__int64)off_2C75848;
  xmmword_2CFE4C8 = (__int128)v25;
  qword_2CFE4B0 = (__int64)off_2BEAB08;
  LODWORD(qword_2CFE468) = qword_2CFE468 + 1;
  byte_2CFE498 = 0;
  sub_2217250(&qword_2CFE420, "print-after-all", 15);
  qword_2CFE440 = (__int64)"Print IR after each pass";
  word_2CFE4A8 = 256;
  qword_2CFE448 = v17;
  byte_2CFE498 = 0;
  BYTE2(qword_2CFE428) = BYTE2(qword_2CFE428) & 0x9F | 0x20;
  sub_2218140(&qword_2CFE420);
  __cxa_atexit(sub_200E190, &qword_2CFE420, &off_2B25620);
  v72 = 5;
  v73[0] = 2;
  v71 = "quiet";
  v74 = "Run in quiet mode";
  v76 = "diff";
  v79 = "Display patch-like changes";
  v81 = "diff-quiet";
  v84 = "Display patch-like changes in quiet mode";
  v86 = "cdiff";
  v89 = "Display patch-like changes with color";
  v91 = "cdiff-quiet";
  v94 = "Display patch-like changes in quiet mode with color";
  v96 = "dot-cfg";
  v99 = "Create a website with graphical changes";
  v101 = "dot-cfg-quiet";
  v75 = 17;
  v77 = 4;
  v78 = 3;
  v80 = 26;
  v82 = 10;
  v83 = 4;
  v85 = 40;
  v87 = 5;
  v88 = 5;
  v90 = 37;
  v92 = 11;
  v93 = 6;
  v95 = 51;
  v97 = 7;
  v98 = 7;
  v100 = 39;
  v102 = 13;
  v103 = 8;
  v104 = "Create a website with graphical changes in quiet mode";
  v106 = &byte_22F0C30;
  v109 = &byte_22F0C30;
  ptr = v70;
  v69 = 0x400000000LL;
  v63 = v70;
  p_ptr = &ptr;
  v105 = 53;
  v107 = 0;
  v108 = 1;
  v110 = nullptr;
  sub_2237220(&ptr, v70, 8, 40);
  v26 = (void **)((char *)ptr + 40 * (unsigned int)v69);
  *v26 = v71;
  v26[39] = v110;
  qmemcpy(
    (void *)((unsigned __int64)(v26 + 1) & 0xFFFFFFFFFFFFFFF8LL),
    (const void *)((char *)&v71 - ((char *)v26 - ((unsigned __int64)(v26 + 1) & 0xFFFFFFFFFFFFFFF8LL))),
    8LL * (((unsigned int)v26 - (((_DWORD)v26 + 8) & 0xFFFFFFF8) + 320) >> 3));
  v67 = &v66;
  v66 = 0;
  v65 = 1;
  v64 = 1;
  LODWORD(v69) = v69 + 8;
  v27 = j__strlen("Print changed IRs");
  v71 = (void *)"Print changed IRs";
  v72 = v27;
  sub_20C2960(&unk_2CFE1C0, "print-changed", &v71, &v64, &v65, &v67, p_ptr);
  if ( ptr != v63 )
    free(ptr);
  __cxa_atexit(sub_20C20F0, &unk_2CFE1C0, &off_2B25620);
  v28 = j__strlen("system diff used by change reporters");
  qword_2CFE0D0 = 0;
  v63 = (_BYTE *)v28;
  qword_2CFE0C0 = (__int64)&off_2C758B0;
  qword_2CFE0C8 = (unsigned int)qword_2CFE0C8 & 0x80000000;
  qword_2CFE108 = 0x100000000LL;
  qword_2CFE100 = (__int64)&unk_2CFE110;
  qword_2CFE0D8 = 0;
  qword_2CFE0E0 = 0;
  qword_2CFE0E8 = 0;
  qword_2CFE0F0 = 0;
  qword_2CFE0F8 = 0;
  qword_2CFE118 = (__int64)&unk_2CFE130;
  qword_2CFE120 = 1;
  dword_2CFE128 = 0;
  byte_2CFE12C = 1;
  v29 = sub_2210FF0("system diff used by change reporters");
  v30 = (unsigned int)qword_2CFE108;
  v31 = (unsigned int)qword_2CFE108 + 1LL;
  if ( v31 > HIDWORD(qword_2CFE108) )
  {
    p_ptr = (void **)v29;
    sub_2237220((char *)&unk_2CFE110 - 16, &unk_2CFE110, v31, 8);
    v30 = (unsigned int)qword_2CFE108;
    v29 = (__int64)p_ptr;
  }
  *(_QWORD *)(qword_2CFE100 + 8 * v30) = v29;
  qword_2CFE138 = (__int64)&byte_2CFE148;
  LODWORD(qword_2CFE108) = qword_2CFE108 + 1;
  p_ptr = (void **)&byte_2CFE170;
  qword_2CFE140 = 0;
  byte_2CFE148 = 0;
  v32 = _mm_loadh_ps((const double *)&p_ptr);
  qword_2CFE0C0 = (__int64)off_2C757E0;
  xmmword_2CFE158 = (__int128)v32;
  qword_2CFE188 = (__int64)off_2BEAC58;
  byte_2CFE170 = 0;
  xmmword_2CFE1A0 = (__int128)_mm_loadh_ps((const double *)off_2C77938);
  qword_2CFE168 = 0;
  byte_2CFE180 = 0;
  sub_2217250(&qword_2CFE0C0, "print-changed-diff-path", 23);
  strcpy((char *)v73, "diff");
  v72 = 4;
  BYTE2(qword_2CFE0C8) = BYTE2(qword_2CFE0C8) & 0x9F | 0x20;
  v71 = v73;
  p_ptr = (void **)v73;
  sub_9EE8A0(&qword_2CFE138, &v71);
  byte_2CFE180 = 1;
  sub_9EE8A0((char *)&xmmword_2CFE158 + 8, &v71);
  if ( v71 != p_ptr )
    operator delete(v71);
  qword_2CFE0E0 = (__int64)"system diff used by change reporters";
  qword_2CFE0E8 = (__int64)v63;
  sub_2218140(&qword_2CFE0C0);
  __cxa_atexit(sub_1FED2E0, &qword_2CFE0C0, &off_2B25620);
  v33 = j__strlen("When printing IR for print-[before|after]{-all} always print a module IR");
  qword_2CFE010 = 0;
  v34 = v33;
  qword_2CFE040 = (__int64)&unk_2CFE050;
  qword_2CFE000 = (__int64)&off_2C758B0;
  qword_2CFE008 = (unsigned int)qword_2CFE008 & 0x80000000;
  qword_2CFE048 = 0x100000000LL;
  qword_2CFE018 = 0;
  qword_2CFE020 = 0;
  qword_2CFE028 = 0;
  qword_2CFE030 = 0;
  qword_2CFE038 = 0;
  qword_2CFE058 = (__int64)&unk_2CFE070;
  qword_2CFE060 = 1;
  dword_2CFE068 = 0;
  byte_2CFE06C = 1;
  v35 = sub_2210FF0("When printing IR for print-[before|after]{-all} always print a module IR");
  v36 = (unsigned int)qword_2CFE048;
  v37 = (unsigned int)qword_2CFE048 + 1LL;
  if ( v37 > HIDWORD(qword_2CFE048) )
  {
    p_ptr = (void **)v35;
    sub_2237220((char *)&unk_2CFE050 - 16, &unk_2CFE050, v37, 8);
    v36 = (unsigned int)qword_2CFE048;
    v35 = (__int64)p_ptr;
  }
  v38 = _mm_load_si128((const __m128i *)&v60);
  *(_QWORD *)(qword_2CFE040 + 8 * v36) = v35;
  qword_2CFE080 = (__int64)off_2C714E8;
  qword_2CFE000 = (__int64)off_2C75848;
  word_2CFE088 = 0;
  xmmword_2CFE0A8 = (__int128)v38;
  LODWORD(qword_2CFE048) = qword_2CFE048 + 1;
  qword_2CFE090 = (__int64)off_2BEAB08;
  byte_2CFE078 = 0;
  sub_2217250(&qword_2CFE000, "print-module-scope", 18);
  qword_2CFE020 = (__int64)"When printing IR for print-[before|after]{-all} always print a module IR";
  qword_2CFE028 = v34;
  word_2CFE088 = 256;
  byte_2CFE078 = 0;
  BYTE2(qword_2CFE008) = BYTE2(qword_2CFE008) & 0x9F | 0x20;
  sub_2218140(&qword_2CFE000);
  __cxa_atexit(sub_200E190, &qword_2CFE000, &off_2B25620);
  v39 = j__strlen("When printing IR for print-[before|after]{-all} for a loop pass, always print function IR");
  qword_2CFDF50 = 0;
  v40 = v39;
  qword_2CFDF80 = (__int64)&unk_2CFDF90;
  qword_2CFDF40 = (__int64)&off_2C758B0;
  qword_2CFDF48 = (unsigned int)qword_2CFDF48 & 0x80000000;
  qword_2CFDF88 = 0x100000000LL;
  qword_2CFDF58 = 0;
  qword_2CFDF60 = 0;
  qword_2CFDF68 = 0;
  qword_2CFDF70 = 0;
  qword_2CFDF78 = 0;
  qword_2CFDF98 = (__int64)&unk_2CFDFB0;
  qword_2CFDFA0 = 1;
  dword_2CFDFA8 = 0;
  byte_2CFDFAC = 1;
  v41 = sub_2210FF0("When printing IR for print-[before|after]{-all} for a loop pass, always print function IR");
  v42 = (unsigned int)qword_2CFDF88;
  v43 = (unsigned int)qword_2CFDF88 + 1LL;
  if ( v43 > HIDWORD(qword_2CFDF88) )
  {
    p_ptr = (void **)v41;
    sub_2237220((char *)&unk_2CFDF90 - 16, &unk_2CFDF90, v43, 8);
    v42 = (unsigned int)qword_2CFDF88;
    v41 = (__int64)p_ptr;
  }
  v44 = _mm_load_si128((const __m128i *)&v60);
  *(_QWORD *)(qword_2CFDF80 + 8 * v42) = v41;
  word_2CFDFC8 = 0;
  qword_2CFDFC0 = (__int64)off_2C714E8;
  qword_2CFDF40 = (__int64)off_2C75848;
  xmmword_2CFDFE8 = (__int128)v44;
  qword_2CFDFD0 = (__int64)off_2BEAB08;
  LODWORD(qword_2CFDF88) = qword_2CFDF88 + 1;
  byte_2CFDFB8 = 0;
  sub_2217250(&qword_2CFDF40, "print-loop-func-scope", 21);
  qword_2CFDF60 = (__int64)"When printing IR for print-[before|after]{-all} for a loop pass, always print function IR";
  qword_2CFDF68 = v40;
  word_2CFDFC8 = 256;
  byte_2CFDFB8 = 0;
  BYTE2(qword_2CFDF48) = BYTE2(qword_2CFDF48) & 0x9F | 0x20;
  sub_2218140(&qword_2CFDF40);
  __cxa_atexit(sub_200E190, &qword_2CFDF40, &off_2B25620);
  v45 = j__strlen("Only consider IR changes for passes whose names match the specified value. No-op without -print-changed");
  v46 = j__strlen("pass names");
  qword_2CFDE80 = (__int64)&unk_2CFDE90;
  v47 = v46;
  qword_2CFDE50 = 0;
  qword_2CFDE40 = (__int64)&off_2C758B0;
  qword_2CFDE58 = 0;
  qword_2CFDE60 = 0;
  qword_2CFDE68 = 0;
  qword_2CFDE48 = (unsigned int)qword_2CFDE48 & 0x80000000 | 0x10000LL;
  qword_2CFDE88 = 0x100000000LL;
  qword_2CFDE70 = 0;
  qword_2CFDE78 = 0;
  qword_2CFDE98 = (__int64)&unk_2CFDEB0;
  qword_2CFDEA0 = 1;
  dword_2CFDEA8 = 0;
  byte_2CFDEAC = 1;
  v48 = sub_2210FF0("pass names");
  v49 = (unsigned int)qword_2CFDE88;
  v50 = (unsigned int)qword_2CFDE88 + 1LL;
  if ( v50 > HIDWORD(qword_2CFDE88) )
  {
    v60.m128_u64[0] = v48;
    sub_2237220((char *)&unk_2CFDE90 - 16, &unk_2CFDE90, v50, 8);
    v49 = (unsigned int)qword_2CFDE88;
    v48 = v60.m128_u64[0];
  }
  v51 = _mm_load_si128((const __m128i *)&v61);
  *(_QWORD *)(qword_2CFDE80 + 8 * v49) = v48;
  xmmword_2CFDEF0 = 0;
  xmmword_2CFDF20 = (__int128)v51;
  qword_2CFDE40 = (__int64)&off_2C71420;
  qword_2CFDF08 = (__int64)off_2BEAC58;
  LODWORD(qword_2CFDE88) = qword_2CFDE88 + 1;
  qword_2CFDEB8 = 0;
  qword_2CFDEC0 = 0;
  qword_2CFDEC8 = 0;
  qword_2CFDED0 = 0;
  qword_2CFDED8 = 0;
  qword_2CFDEE0 = 0;
  byte_2CFDEE8 = 0;
  qword_2CFDF00 = 0;
  sub_2217250(&qword_2CFDE40, "filter-passes", 13);
  qword_2CFDE78 = v47;
  qword_2CFDE70 = (__int64)"pass names";
  qword_2CFDE60 = (__int64)"Only consider IR changes for passes whose names match the specified value. No-op without -print-changed";
  qword_2CFDE68 = v45;
  BYTE3(qword_2CFDE48) |= 2u;
  BYTE2(qword_2CFDE48) = BYTE2(qword_2CFDE48) & 0x9F | 0x20;
  sub_2218140(&qword_2CFDE40);
  __cxa_atexit(sub_1FF2780, &qword_2CFDE40, &off_2B25620);
  v52 = j__strlen("Only print IR for functions whose name match this for all print-[before|after][-all] options");
  v53 = j__strlen("function names");
  byte_2CFDDAC = 1;
  qword_2CFDD50 = 0;
  v54 = v53;
  qword_2CFDD40 = (__int64)&off_2C758B0;
  qword_2CFDD58 = 0;
  qword_2CFDD60 = 0;
  qword_2CFDD68 = 0;
  qword_2CFDD48 = (unsigned int)qword_2CFDD48 & 0x80000000 | 0x10000LL;
  qword_2CFDD88 = 0x100000000LL;
  qword_2CFDD70 = 0;
  qword_2CFDD78 = 0;
  qword_2CFDD80 = (__int64)&unk_2CFDD90;
  qword_2CFDD98 = (__int64)&unk_2CFDDB0;
  qword_2CFDDA0 = 1;
  dword_2CFDDA8 = 0;
  v55 = sub_2210FF0("function names");
  v56 = (unsigned int)qword_2CFDD88;
  v57 = (unsigned int)qword_2CFDD88 + 1LL;
  if ( v57 > HIDWORD(qword_2CFDD88) )
  {
    v60.m128_u64[0] = v55;
    sub_2237220((char *)&unk_2CFDD90 - 16, &unk_2CFDD90, v57, 8);
    v56 = (unsigned int)qword_2CFDD88;
    v55 = v60.m128_u64[0];
  }
  v58 = _mm_load_si128((const __m128i *)&v61);
  *(_QWORD *)(qword_2CFDD80 + 8 * v56) = v55;
  xmmword_2CFDDF0 = 0;
  xmmword_2CFDE20 = (__int128)v58;
  qword_2CFDD40 = (__int64)&off_2C71420;
  qword_2CFDE08 = (__int64)off_2BEAC58;
  LODWORD(qword_2CFDD88) = qword_2CFDD88 + 1;
  qword_2CFDDB8 = 0;
  qword_2CFDDC0 = 0;
  qword_2CFDDC8 = 0;
  qword_2CFDDD0 = 0;
  qword_2CFDDD8 = 0;
  qword_2CFDDE0 = 0;
  byte_2CFDDE8 = 0;
  qword_2CFDE00 = 0;
  sub_2217250(&qword_2CFDD40, "filter-print-funcs", 18);
  qword_2CFDD78 = v54;
  qword_2CFDD70 = (__int64)"function names";
  qword_2CFDD60 = (__int64)"Only print IR for functions whose name match this for all print-[before|after][-all] options";
  qword_2CFDD68 = v52;
  BYTE3(qword_2CFDD48) |= 2u;
  BYTE2(qword_2CFDD48) = BYTE2(qword_2CFDD48) & 0x9F | 0x20;
  sub_2218140(&qword_2CFDD40);
  return __cxa_atexit(sub_1FF2780, &qword_2CFDD40, &off_2B25620);
}
