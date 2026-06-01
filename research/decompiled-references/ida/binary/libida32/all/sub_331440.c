int sub_331440()
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
  qword_2CD4790 = 0;
  v1 = v0;
  qword_2CD4798 = 0;
  qword_2CD47A0 = 0;
  qword_2CD4780 = (__int64)&off_2C4B8B0;
  qword_2CD47A8 = 0;
  qword_2CD47C0 = (__int64)&unk_2CD47D0;
  qword_2CD47B0 = 0;
  qword_2CD4788 = (unsigned int)qword_2CD4788 & 0x80000000 | 0x10000LL;
  qword_2CD47C8 = 0x100000000LL;
  qword_2CD47B8 = 0;
  qword_2CD47D8 = (__int64)&unk_2CD47F0;
  qword_2CD47E0 = 1;
  dword_2CD47E8 = 0;
  byte_2CD47EC = 1;
  v2 = sub_21ED2B0("Print IR before specified passes");
  v3 = (unsigned int)qword_2CD47C8;
  v4 = (unsigned int)qword_2CD47C8 + 1LL;
  if ( v4 > HIDWORD(qword_2CD47C8) )
  {
    v60.m128_u64[0] = v2;
    sub_22134E0((char *)&unk_2CD47D0 - 16, &unk_2CD47D0, v4, 8);
    v3 = (unsigned int)qword_2CD47C8;
    v2 = v60.m128_u64[0];
  }
  *(_QWORD *)(qword_2CD47C0 + 8 * v3) = v2;
  xmmword_2CD4830 = 0;
  v61 = _mm_loadh_ps((const double *)&off_2C4EDD8);
  qword_2CD4780 = (__int64)&off_2C47420;
  xmmword_2CD4860 = (__int128)v61;
  qword_2CD4848 = (__int64)off_2BC0CB8;
  LODWORD(qword_2CD47C8) = qword_2CD47C8 + 1;
  qword_2CD47F8 = 0;
  qword_2CD4800 = 0;
  qword_2CD4808 = 0;
  qword_2CD4810 = 0;
  qword_2CD4818 = 0;
  qword_2CD4820 = 0;
  byte_2CD4828 = 0;
  qword_2CD4840 = 0;
  sub_21F3510(&qword_2CD4780, "print-before", 12);
  qword_2CD47A8 = v1;
  qword_2CD47A0 = (__int64)"Print IR before specified passes";
  BYTE3(qword_2CD4788) |= 2u;
  BYTE2(qword_2CD4788) = BYTE2(qword_2CD4788) & 0x9F | 0x20;
  sub_21F4400(&qword_2CD4780);
  __cxa_atexit(sub_1FCEA40, &qword_2CD4780, &off_2AFC540);
  v5 = j__strlen("Print IR after specified passes");
  qword_2CD46C0 = (__int64)&unk_2CD46D0;
  v6 = v5;
  qword_2CD4690 = 0;
  qword_2CD4680 = (__int64)&off_2C4B8B0;
  qword_2CD4698 = 0;
  qword_2CD46A0 = 0;
  qword_2CD46A8 = 0;
  qword_2CD4688 = (unsigned int)qword_2CD4688 & 0x80000000 | 0x10000LL;
  qword_2CD46C8 = 0x100000000LL;
  qword_2CD46B0 = 0;
  qword_2CD46B8 = 0;
  qword_2CD46D8 = (__int64)&unk_2CD46F0;
  qword_2CD46E0 = 1;
  dword_2CD46E8 = 0;
  byte_2CD46EC = 1;
  v7 = sub_21ED2B0("Print IR after specified passes");
  v8 = (unsigned int)qword_2CD46C8;
  v9 = (unsigned int)qword_2CD46C8 + 1LL;
  if ( v9 > HIDWORD(qword_2CD46C8) )
  {
    v60.m128_u64[0] = v7;
    sub_22134E0((char *)&unk_2CD46D0 - 16, &unk_2CD46D0, v9, 8);
    v8 = (unsigned int)qword_2CD46C8;
    v7 = v60.m128_u64[0];
  }
  si128 = _mm_load_si128((const __m128i *)&v61);
  *(_QWORD *)(qword_2CD46C0 + 8 * v8) = v7;
  xmmword_2CD4730 = 0;
  xmmword_2CD4760 = (__int128)si128;
  qword_2CD4680 = (__int64)&off_2C47420;
  qword_2CD4748 = (__int64)off_2BC0CB8;
  LODWORD(qword_2CD46C8) = qword_2CD46C8 + 1;
  qword_2CD46F8 = 0;
  qword_2CD4700 = 0;
  qword_2CD4708 = 0;
  qword_2CD4710 = 0;
  qword_2CD4718 = 0;
  qword_2CD4720 = 0;
  byte_2CD4728 = 0;
  qword_2CD4740 = 0;
  sub_21F3510(&qword_2CD4680, "print-after", 11);
  qword_2CD46A8 = v6;
  qword_2CD46A0 = (__int64)"Print IR after specified passes";
  BYTE3(qword_2CD4688) |= 2u;
  BYTE2(qword_2CD4688) = BYTE2(qword_2CD4688) & 0x9F | 0x20;
  sub_21F4400(&qword_2CD4680);
  __cxa_atexit(sub_1FCEA40, &qword_2CD4680, &off_2AFC540);
  v11 = j__strlen("Print IR before each pass");
  qword_2CD4600 = (__int64)&unk_2CD4610;
  v12 = v11;
  qword_2CD45D0 = 0;
  qword_2CD45C0 = (__int64)&off_2C4B8B0;
  qword_2CD45C8 = (unsigned int)qword_2CD45C8 & 0x80000000;
  qword_2CD4608 = 0x100000000LL;
  qword_2CD45D8 = 0;
  qword_2CD45E0 = 0;
  qword_2CD45E8 = 0;
  qword_2CD45F0 = 0;
  qword_2CD45F8 = 0;
  qword_2CD4618 = (__int64)&unk_2CD4630;
  qword_2CD4620 = 1;
  dword_2CD4628 = 0;
  byte_2CD462C = 1;
  v13 = sub_21ED2B0("Print IR before each pass");
  v14 = (unsigned int)qword_2CD4608;
  v15 = (unsigned int)qword_2CD4608 + 1LL;
  if ( v15 > HIDWORD(qword_2CD4608) )
  {
    v60.m128_u64[0] = v13;
    sub_22134E0((char *)&unk_2CD4610 - 16, &unk_2CD4610, v15, 8);
    v14 = (unsigned int)qword_2CD4608;
    v13 = v60.m128_u64[0];
  }
  *(_QWORD *)(qword_2CD4600 + 8 * v14) = v13;
  qword_2CD4640 = (__int64)off_2C474E8;
  qword_2CD45C0 = (__int64)off_2C4B848;
  v60 = _mm_loadh_ps((const double *)off_2C4E368);
  word_2CD4648 = 0;
  xmmword_2CD4668 = (__int128)v60;
  LODWORD(qword_2CD4608) = qword_2CD4608 + 1;
  qword_2CD4650 = (__int64)off_2BC0B68;
  byte_2CD4638 = 0;
  sub_21F3510(&qword_2CD45C0, "print-before-all", 16);
  qword_2CD45E8 = v12;
  qword_2CD45E0 = (__int64)"Print IR before each pass";
  word_2CD4648 = 256;
  byte_2CD4638 = 0;
  BYTE2(qword_2CD45C8) = BYTE2(qword_2CD45C8) & 0x9F | 0x20;
  sub_21F4400(&qword_2CD45C0);
  __cxa_atexit(sub_1FEA450, &qword_2CD45C0, &off_2AFC540);
  v16 = j__strlen("Print IR after each pass");
  qword_2CD4510 = 0;
  v17 = v16;
  qword_2CD4540 = (__int64)&unk_2CD4550;
  qword_2CD4500 = (__int64)&off_2C4B8B0;
  qword_2CD4508 = (unsigned int)qword_2CD4508 & 0x80000000;
  qword_2CD4548 = 0x100000000LL;
  qword_2CD4518 = 0;
  qword_2CD4520 = 0;
  qword_2CD4528 = 0;
  qword_2CD4530 = 0;
  qword_2CD4538 = 0;
  qword_2CD4558 = (__int64)&unk_2CD4570;
  qword_2CD4560 = 1;
  dword_2CD4568 = 0;
  byte_2CD456C = 1;
  v22 = sub_21ED2B0("Print IR after each pass", &unk_2CD4550, v18, v19, v20, v21, *(_OWORD *)&v60, *(_OWORD *)&v61);
  v23 = (unsigned int)qword_2CD4548;
  v24 = (unsigned int)qword_2CD4548 + 1LL;
  if ( v24 > HIDWORD(qword_2CD4548) )
  {
    p_ptr = (void **)v22;
    sub_22134E0((char *)&unk_2CD4550 - 16, &unk_2CD4550, v24, 8);
    v23 = (unsigned int)qword_2CD4548;
    v22 = (__int64)p_ptr;
  }
  v25 = _mm_load_si128((const __m128i *)&v60);
  *(_QWORD *)(qword_2CD4540 + 8 * v23) = v22;
  qword_2CD4580 = (__int64)off_2C474E8;
  word_2CD4588 = 0;
  qword_2CD4500 = (__int64)off_2C4B848;
  xmmword_2CD45A8 = (__int128)v25;
  qword_2CD4590 = (__int64)off_2BC0B68;
  LODWORD(qword_2CD4548) = qword_2CD4548 + 1;
  byte_2CD4578 = 0;
  sub_21F3510(&qword_2CD4500, "print-after-all", 15);
  qword_2CD4520 = (__int64)"Print IR after each pass";
  word_2CD4588 = 256;
  qword_2CD4528 = v17;
  byte_2CD4578 = 0;
  BYTE2(qword_2CD4508) = BYTE2(qword_2CD4508) & 0x9F | 0x20;
  sub_21F4400(&qword_2CD4500);
  __cxa_atexit(sub_1FEA450, &qword_2CD4500, &off_2AFC540);
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
  v106 = &byte_22CD811;
  v109 = &byte_22CD811;
  ptr = v70;
  v69 = 0x400000000LL;
  v63 = v70;
  p_ptr = &ptr;
  v105 = 53;
  v107 = 0;
  v108 = 1;
  v110 = nullptr;
  sub_22134E0(&ptr, v70, 8, 40);
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
  sub_209EC20(&unk_2CD42A0, "print-changed", &v71, &v64, &v65, &v67, p_ptr);
  if ( ptr != v63 )
    free(ptr);
  __cxa_atexit(sub_209E3B0, &unk_2CD42A0, &off_2AFC540);
  v28 = j__strlen("system diff used by change reporters");
  qword_2CD41B0 = 0;
  v63 = (_BYTE *)v28;
  qword_2CD41A0 = (__int64)&off_2C4B8B0;
  qword_2CD41A8 = (unsigned int)qword_2CD41A8 & 0x80000000;
  qword_2CD41E8 = 0x100000000LL;
  qword_2CD41E0 = (__int64)&unk_2CD41F0;
  qword_2CD41B8 = 0;
  qword_2CD41C0 = 0;
  qword_2CD41C8 = 0;
  qword_2CD41D0 = 0;
  qword_2CD41D8 = 0;
  qword_2CD41F8 = (__int64)&unk_2CD4210;
  qword_2CD4200 = 1;
  dword_2CD4208 = 0;
  byte_2CD420C = 1;
  v29 = sub_21ED2B0("system diff used by change reporters");
  v30 = (unsigned int)qword_2CD41E8;
  v31 = (unsigned int)qword_2CD41E8 + 1LL;
  if ( v31 > HIDWORD(qword_2CD41E8) )
  {
    p_ptr = (void **)v29;
    sub_22134E0((char *)&unk_2CD41F0 - 16, &unk_2CD41F0, v31, 8);
    v30 = (unsigned int)qword_2CD41E8;
    v29 = (__int64)p_ptr;
  }
  *(_QWORD *)(qword_2CD41E0 + 8 * v30) = v29;
  qword_2CD4218 = (__int64)&byte_2CD4228;
  LODWORD(qword_2CD41E8) = qword_2CD41E8 + 1;
  p_ptr = (void **)&byte_2CD4250;
  qword_2CD4220 = 0;
  byte_2CD4228 = 0;
  v32 = _mm_loadh_ps((const double *)&p_ptr);
  qword_2CD41A0 = (__int64)off_2C4B7E0;
  xmmword_2CD4238 = (__int128)v32;
  qword_2CD4268 = (__int64)off_2BC0CB8;
  byte_2CD4250 = 0;
  xmmword_2CD4280 = (__int128)_mm_loadh_ps((const double *)off_2C4D938);
  qword_2CD4248 = 0;
  byte_2CD4260 = 0;
  sub_21F3510(&qword_2CD41A0, "print-changed-diff-path", 23);
  strcpy((char *)v73, "diff");
  v72 = 4;
  BYTE2(qword_2CD41A8) = BYTE2(qword_2CD41A8) & 0x9F | 0x20;
  v71 = v73;
  p_ptr = (void **)v73;
  sub_9CAB60(&qword_2CD4218, &v71);
  byte_2CD4260 = 1;
  sub_9CAB60((char *)&xmmword_2CD4238 + 8, &v71);
  if ( v71 != p_ptr )
    operator delete(v71);
  qword_2CD41C0 = (__int64)"system diff used by change reporters";
  qword_2CD41C8 = (__int64)v63;
  sub_21F4400(&qword_2CD41A0);
  __cxa_atexit(sub_1FC95A0, &qword_2CD41A0, &off_2AFC540);
  v33 = j__strlen("When printing IR for print-[before|after]{-all} always print a module IR");
  qword_2CD40F0 = 0;
  v34 = v33;
  qword_2CD4120 = (__int64)&unk_2CD4130;
  qword_2CD40E0 = (__int64)&off_2C4B8B0;
  qword_2CD40E8 = (unsigned int)qword_2CD40E8 & 0x80000000;
  qword_2CD4128 = 0x100000000LL;
  qword_2CD40F8 = 0;
  qword_2CD4100 = 0;
  qword_2CD4108 = 0;
  qword_2CD4110 = 0;
  qword_2CD4118 = 0;
  qword_2CD4138 = (__int64)&unk_2CD4150;
  qword_2CD4140 = 1;
  dword_2CD4148 = 0;
  byte_2CD414C = 1;
  v35 = sub_21ED2B0("When printing IR for print-[before|after]{-all} always print a module IR");
  v36 = (unsigned int)qword_2CD4128;
  v37 = (unsigned int)qword_2CD4128 + 1LL;
  if ( v37 > HIDWORD(qword_2CD4128) )
  {
    p_ptr = (void **)v35;
    sub_22134E0((char *)&unk_2CD4130 - 16, &unk_2CD4130, v37, 8);
    v36 = (unsigned int)qword_2CD4128;
    v35 = (__int64)p_ptr;
  }
  v38 = _mm_load_si128((const __m128i *)&v60);
  *(_QWORD *)(qword_2CD4120 + 8 * v36) = v35;
  qword_2CD4160 = (__int64)off_2C474E8;
  qword_2CD40E0 = (__int64)off_2C4B848;
  word_2CD4168 = 0;
  xmmword_2CD4188 = (__int128)v38;
  LODWORD(qword_2CD4128) = qword_2CD4128 + 1;
  qword_2CD4170 = (__int64)off_2BC0B68;
  byte_2CD4158 = 0;
  sub_21F3510(&qword_2CD40E0, "print-module-scope", 18);
  qword_2CD4100 = (__int64)"When printing IR for print-[before|after]{-all} always print a module IR";
  qword_2CD4108 = v34;
  word_2CD4168 = 256;
  byte_2CD4158 = 0;
  BYTE2(qword_2CD40E8) = BYTE2(qword_2CD40E8) & 0x9F | 0x20;
  sub_21F4400(&qword_2CD40E0);
  __cxa_atexit(sub_1FEA450, &qword_2CD40E0, &off_2AFC540);
  v39 = j__strlen("When printing IR for print-[before|after]{-all} for a loop pass, always print function IR");
  qword_2CD4030 = 0;
  v40 = v39;
  qword_2CD4060 = (__int64)&unk_2CD4070;
  qword_2CD4020 = (__int64)&off_2C4B8B0;
  qword_2CD4028 = (unsigned int)qword_2CD4028 & 0x80000000;
  qword_2CD4068 = 0x100000000LL;
  qword_2CD4038 = 0;
  qword_2CD4040 = 0;
  qword_2CD4048 = 0;
  qword_2CD4050 = 0;
  qword_2CD4058 = 0;
  qword_2CD4078 = (__int64)&unk_2CD4090;
  qword_2CD4080 = 1;
  dword_2CD4088 = 0;
  byte_2CD408C = 1;
  v41 = sub_21ED2B0("When printing IR for print-[before|after]{-all} for a loop pass, always print function IR");
  v42 = (unsigned int)qword_2CD4068;
  v43 = (unsigned int)qword_2CD4068 + 1LL;
  if ( v43 > HIDWORD(qword_2CD4068) )
  {
    p_ptr = (void **)v41;
    sub_22134E0((char *)&unk_2CD4070 - 16, &unk_2CD4070, v43, 8);
    v42 = (unsigned int)qword_2CD4068;
    v41 = (__int64)p_ptr;
  }
  v44 = _mm_load_si128((const __m128i *)&v60);
  *(_QWORD *)(qword_2CD4060 + 8 * v42) = v41;
  word_2CD40A8 = 0;
  qword_2CD40A0 = (__int64)off_2C474E8;
  qword_2CD4020 = (__int64)off_2C4B848;
  xmmword_2CD40C8 = (__int128)v44;
  qword_2CD40B0 = (__int64)off_2BC0B68;
  LODWORD(qword_2CD4068) = qword_2CD4068 + 1;
  byte_2CD4098 = 0;
  sub_21F3510(&qword_2CD4020, "print-loop-func-scope", 21);
  qword_2CD4040 = (__int64)"When printing IR for print-[before|after]{-all} for a loop pass, always print function IR";
  qword_2CD4048 = v40;
  word_2CD40A8 = 256;
  byte_2CD4098 = 0;
  BYTE2(qword_2CD4028) = BYTE2(qword_2CD4028) & 0x9F | 0x20;
  sub_21F4400(&qword_2CD4020);
  __cxa_atexit(sub_1FEA450, &qword_2CD4020, &off_2AFC540);
  v45 = j__strlen("Only consider IR changes for passes whose names match the specified value. No-op without -print-changed");
  v46 = j__strlen("pass names");
  qword_2CD3F60 = (__int64)&unk_2CD3F70;
  v47 = v46;
  qword_2CD3F30 = 0;
  qword_2CD3F20 = (__int64)&off_2C4B8B0;
  qword_2CD3F38 = 0;
  qword_2CD3F40 = 0;
  qword_2CD3F48 = 0;
  qword_2CD3F28 = (unsigned int)qword_2CD3F28 & 0x80000000 | 0x10000LL;
  qword_2CD3F68 = 0x100000000LL;
  qword_2CD3F50 = 0;
  qword_2CD3F58 = 0;
  qword_2CD3F78 = (__int64)&unk_2CD3F90;
  qword_2CD3F80 = 1;
  dword_2CD3F88 = 0;
  byte_2CD3F8C = 1;
  v48 = sub_21ED2B0("pass names");
  v49 = (unsigned int)qword_2CD3F68;
  v50 = (unsigned int)qword_2CD3F68 + 1LL;
  if ( v50 > HIDWORD(qword_2CD3F68) )
  {
    v60.m128_u64[0] = v48;
    sub_22134E0((char *)&unk_2CD3F70 - 16, &unk_2CD3F70, v50, 8);
    v49 = (unsigned int)qword_2CD3F68;
    v48 = v60.m128_u64[0];
  }
  v51 = _mm_load_si128((const __m128i *)&v61);
  *(_QWORD *)(qword_2CD3F60 + 8 * v49) = v48;
  xmmword_2CD3FD0 = 0;
  xmmword_2CD4000 = (__int128)v51;
  qword_2CD3F20 = (__int64)&off_2C47420;
  qword_2CD3FE8 = (__int64)off_2BC0CB8;
  LODWORD(qword_2CD3F68) = qword_2CD3F68 + 1;
  qword_2CD3F98 = 0;
  qword_2CD3FA0 = 0;
  qword_2CD3FA8 = 0;
  qword_2CD3FB0 = 0;
  qword_2CD3FB8 = 0;
  qword_2CD3FC0 = 0;
  byte_2CD3FC8 = 0;
  qword_2CD3FE0 = 0;
  sub_21F3510(&qword_2CD3F20, "filter-passes", 13);
  qword_2CD3F58 = v47;
  qword_2CD3F50 = (__int64)"pass names";
  qword_2CD3F40 = (__int64)"Only consider IR changes for passes whose names match the specified value. No-op without -print-changed";
  qword_2CD3F48 = v45;
  BYTE3(qword_2CD3F28) |= 2u;
  BYTE2(qword_2CD3F28) = BYTE2(qword_2CD3F28) & 0x9F | 0x20;
  sub_21F4400(&qword_2CD3F20);
  __cxa_atexit(sub_1FCEA40, &qword_2CD3F20, &off_2AFC540);
  v52 = j__strlen("Only print IR for functions whose name match this for all print-[before|after][-all] options");
  v53 = j__strlen("function names");
  byte_2CD3E8C = 1;
  qword_2CD3E30 = 0;
  v54 = v53;
  qword_2CD3E20 = (__int64)&off_2C4B8B0;
  qword_2CD3E38 = 0;
  qword_2CD3E40 = 0;
  qword_2CD3E48 = 0;
  qword_2CD3E28 = (unsigned int)qword_2CD3E28 & 0x80000000 | 0x10000LL;
  qword_2CD3E68 = 0x100000000LL;
  qword_2CD3E50 = 0;
  qword_2CD3E58 = 0;
  qword_2CD3E60 = (__int64)&unk_2CD3E70;
  qword_2CD3E78 = (__int64)&unk_2CD3E90;
  qword_2CD3E80 = 1;
  dword_2CD3E88 = 0;
  v55 = sub_21ED2B0("function names");
  v56 = (unsigned int)qword_2CD3E68;
  v57 = (unsigned int)qword_2CD3E68 + 1LL;
  if ( v57 > HIDWORD(qword_2CD3E68) )
  {
    v60.m128_u64[0] = v55;
    sub_22134E0((char *)&unk_2CD3E70 - 16, &unk_2CD3E70, v57, 8);
    v56 = (unsigned int)qword_2CD3E68;
    v55 = v60.m128_u64[0];
  }
  v58 = _mm_load_si128((const __m128i *)&v61);
  *(_QWORD *)(qword_2CD3E60 + 8 * v56) = v55;
  xmmword_2CD3ED0 = 0;
  xmmword_2CD3F00 = (__int128)v58;
  qword_2CD3E20 = (__int64)&off_2C47420;
  qword_2CD3EE8 = (__int64)off_2BC0CB8;
  LODWORD(qword_2CD3E68) = qword_2CD3E68 + 1;
  qword_2CD3E98 = 0;
  qword_2CD3EA0 = 0;
  qword_2CD3EA8 = 0;
  qword_2CD3EB0 = 0;
  qword_2CD3EB8 = 0;
  qword_2CD3EC0 = 0;
  byte_2CD3EC8 = 0;
  qword_2CD3EE0 = 0;
  sub_21F3510(&qword_2CD3E20, "filter-print-funcs", 18);
  qword_2CD3E58 = v54;
  qword_2CD3E50 = (__int64)"function names";
  qword_2CD3E40 = (__int64)"Only print IR for functions whose name match this for all print-[before|after][-all] options";
  qword_2CD3E48 = v52;
  BYTE3(qword_2CD3E28) |= 2u;
  BYTE2(qword_2CD3E28) = BYTE2(qword_2CD3E28) & 0x9F | 0x20;
  sub_21F4400(&qword_2CD3E20);
  return __cxa_atexit(sub_1FCEA40, &qword_2CD3E20, &off_2AFC540);
}

