unsigned __int64 __fastcall sub_1B43520(
        __int64 *a1,
        __int64 *a2,
        __int64 a3,
        _DWORD *a4,
        int a5,
        int a6,
        __m128 a7,
        __m128 a8,
        unsigned int a9,
        unsigned int a10,
        int a11,
        int a12,
        int a13)
{
  __int64 v16; // rsi
  bool v17; // zf
  __int64 v18; // rcx
  __int64 v19; // r8
  unsigned int v20; // eax
  __int64 v21; // r15
  __int64 v22; // r13
  __int64 v23; // rdi
  __int64 v24; // r14
  char v25; // dl
  __int64 v26; // rsi
  _QWORD *v27; // r12
  _QWORD *v28; // r15
  __int64 v29; // rdx
  unsigned __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rsi
  __int64 v35; // rdx
  unsigned __int64 v36; // rdx
  const char *v37; // rax
  size_t v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rcx
  __int64 v45; // r15
  _QWORD *v46; // rsi
  __int64 v47; // r12
  unsigned __int64 v48; // rax
  __int64 v49; // r15
  __int64 v50; // rax
  unsigned __int64 v51; // rax
  unsigned __int64 *v52; // r13
  __int64 v53; // r12
  __int64 v54; // r15
  _QWORD *v55; // rax
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rbp
  void *v60; // r13
  __int64 v61; // r14
  __int64 v62; // rax
  unsigned __int64 v63; // rbx
  __int64 v65; // rax
  unsigned __int64 v66; // rdx
  __int64 v67; // rax
  unsigned __int64 v68; // rdx
  __int64 v69; // rax
  unsigned __int64 v70; // rdx
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r9
  _QWORD *v74; // rsi
  unsigned __int64 v75; // rax
  __int64 v76; // rax
  unsigned int v77; // eax
  __int64 v78; // rsi
  __int64 v79; // r8
  __int64 v80; // rdi
  __int64 v81; // r8
  __int64 v82; // rax
  __int64 v83; // r8
  _QWORD *v84; // r9
  __int64 v85; // r10
  __int64 v86; // r11
  unsigned __int64 v87; // rax
  __int64 v88; // r9
  unsigned __int64 v89; // rax
  unsigned int v90; // r12d
  __int64 v91; // rax
  _QWORD *v92; // r15
  size_t v93; // rax
  __int64 v94; // rax
  __int64 v95; // rax
  __int64 v96; // rax
  __int64 v97; // rcx
  __int64 v98; // r8
  unsigned __int64 v99; // r14
  __int64 v100; // rax
  __int64 v101; // r8
  __int64 v102; // r9
  unsigned __int64 v103; // rax
  __int64 v104; // rax
  __int128 v105; // [rsp-50h] [rbp-398h]
  __int64 v106; // [rsp-10h] [rbp-358h]
  __int64 v107; // [rsp-8h] [rbp-350h]
  __int128 v108; // [rsp+0h] [rbp-348h]
  __int64 *v109; // [rsp+10h] [rbp-338h]
  __int128 v110; // [rsp+10h] [rbp-338h]
  __int64 v111; // [rsp+28h] [rbp-320h]
  _DWORD *v112; // [rsp+68h] [rbp-2E0h]
  __int64 v113; // [rsp+70h] [rbp-2D8h]
  __int64 v116; // [rsp+98h] [rbp-2B0h]
  unsigned int v117; // [rsp+A4h] [rbp-2A4h] BYREF
  _QWORD *v118; // [rsp+A8h] [rbp-2A0h] BYREF
  unsigned __int64 v119; // [rsp+B0h] [rbp-298h] BYREF
  __int64 v120; // [rsp+B8h] [rbp-290h] BYREF
  __m128i v121; // [rsp+C0h] [rbp-288h] BYREF
  __int64 v122; // [rsp+D0h] [rbp-278h] BYREF
  __m128i v123; // [rsp+E0h] [rbp-268h] BYREF
  char v124; // [rsp+F0h] [rbp-258h] BYREF
  __int64 v125; // [rsp+100h] [rbp-248h] BYREF
  char v126; // [rsp+10Ch] [rbp-23Ch]
  _QWORD *v127; // [rsp+110h] [rbp-238h]
  void *v128; // [rsp+130h] [rbp-218h] BYREF
  __int64 v129; // [rsp+138h] [rbp-210h]
  _BYTE v130[32]; // [rsp+140h] [rbp-208h] BYREF
  void *ptr; // [rsp+160h] [rbp-1E8h] BYREF
  __int64 v132; // [rsp+168h] [rbp-1E0h]
  _BYTE v133[32]; // [rsp+170h] [rbp-1D8h] BYREF
  void *v134; // [rsp+190h] [rbp-1B8h] BYREF
  __int64 v135; // [rsp+198h] [rbp-1B0h]
  _BYTE v136[64]; // [rsp+1A0h] [rbp-1A8h] BYREF
  void *v137; // [rsp+1E0h] [rbp-168h] BYREF
  __int64 v138; // [rsp+1E8h] [rbp-160h]
  _BYTE v139[64]; // [rsp+1F0h] [rbp-158h] BYREF
  void *v140; // [rsp+230h] [rbp-118h] BYREF
  __int64 v141; // [rsp+238h] [rbp-110h]
  _BYTE v142[64]; // [rsp+240h] [rbp-108h] BYREF
  _QWORD v143[25]; // [rsp+280h] [rbp-C8h] BYREF
  unsigned int v144; // [rsp+350h] [rbp+8h]

  v134 = v136;
  v135 = 0x800000000LL;
  v138 = 0x800000000LL;
  v141 = 0x800000000LL;
  v137 = v139;
  v140 = v142;
  v128 = v130;
  v112 = a4;
  v129 = 0x400000000LL;
  ptr = v133;
  v132 = 0x400000000LL;
  if ( a10 && !a12 && a4 && *(_DWORD *)(sub_168B6E0((__int64)a1) + 64) > 0x33u )
  {
    v77 = sub_EEB7E0((unsigned __int64)v112, (__int64)&ptr, *(double *)a7.m128_u64);
    sub_168B9F0((__int64)v143, a1, v77, 0x120Cu, 0);
    sub_15F7200(v143);
  }
  v16 = a9;
  v17 = sub_1B2A750(a1, a9, a10) == 0;
  v20 = 0;
  if ( v17 )
    v20 = a9;
  v144 = v20;
  v109 = &a2[a3];
  while ( v109 != a2 )
  {
    while ( 1 )
    {
      v22 = *a2;
      v16 = (__int64)&v118;
      v117 = 0;
      v23 = *a1;
      v118 = (_QWORD *)v22;
      v120 = 0;
      v24 = sub_1B31D70(v23, (unsigned __int64 *)&v118, &v117, &v120, (__int64)&byte_22F0C30, 0, *(double *)a7.m128_u64);
      if ( v25 )
      {
        v65 = (unsigned int)v135;
        v66 = (unsigned int)v135 + 1LL;
        if ( v66 > HIDWORD(v135) )
        {
          v16 = (__int64)v136;
          sub_2237220(&v134, v136, v66, 8);
          v65 = (unsigned int)v135;
        }
        *((_QWORD *)v134 + v65) = v22;
        v67 = (unsigned int)v138;
        LODWORD(v135) = v135 + 1;
        v68 = (unsigned int)v138 + 1LL;
        if ( v68 > HIDWORD(v138) )
        {
          v16 = (__int64)v139;
          sub_2237220(&v137, v139, v68, 8);
          v67 = (unsigned int)v138;
        }
        *((_QWORD *)v137 + v67) = 0;
        v69 = (unsigned int)v141;
        v18 = HIDWORD(v141);
        LODWORD(v138) = v138 + 1;
        v70 = (unsigned int)v141 + 1LL;
        if ( v70 > HIDWORD(v141) )
        {
          v16 = (__int64)v142;
          sub_2237220(&v140, v142, v70, 8);
          v69 = (unsigned int)v141;
        }
        *((_QWORD *)v140 + v69) = 0;
        LODWORD(v141) = v141 + 1;
      }
      if ( !v24 )
        goto LABEL_13;
      v26 = a1[1];
      v27 = nullptr;
      v119 = *(_QWORD *)(v24 + 48);
      if ( (*(_BYTE *)(v24 + 28) & 0x7Fu) - 40 <= 6 )
        v27 = (_QWORD *)v24;
      sub_1AFBE90((__int64)&v125, v26, v24);
      v28 = v127;
      if ( v127 )
      {
        sub_168B9F0((__int64)v143, a1, v117, 0x1229u, 0);
        sub_1AF81E0(&v121, HIDWORD(v125));
        v21 = sub_1682AF0((__int64)v143, (__int64)&v121);
        sub_1AF81E0(&v123, 0x35u);
        sub_1682AF0(v21, (__int64)&v123);
        if ( (char *)v123.m128i_i64[0] != &v124 )
          operator delete((void *)v123.m128i_i64[0]);
        if ( (__int64 *)v121.m128i_i64[0] != &v122 )
          operator delete((void *)v121.m128i_i64[0]);
        sub_15F7200(v143);
        v16 = a1[1];
        sub_1B20830(*a1, v16, v24, (unsigned int *)&v125, 0);
        goto LABEL_13;
      }
      v16 = v24;
      if ( !(unsigned __int8)sub_1B41BB0(a1, v24, v117, v144, v119, 0) )
        break;
LABEL_13:
      if ( v109 == ++a2 )
        goto LABEL_30;
    }
    v143[0] = sub_C1BEF0((__int64)&v119, v24, v29, v18);
    v30 = sub_6D5440(v143);
    v34 = 0;
    v35 = *(_QWORD *)&byte_8[v30 & 0xFFFFFFFFFFFFFFF0LL];
    LOBYTE(v30) = v35 | v30;
    v36 = v35 & 0xFFFFFFFFFFFFFFF8LL;
    v119 = v36 | v30 & 7;
    if ( v27 )
      v34 = (__int64)v118;
    if ( (*(_BYTE *)(v24 + 29) & 1) != 0 )
      v28 = sub_B8C3D0(v24, v34, v36, v31, v32, v33);
    v37 = sub_995750(v24);
    v39 = sub_1AFE600((_QWORD *)*a1, v117, v119, v37, v38, (__int64)v28, v34);
    v113 = sub_1AE9760(*a1, v39, v119, v117);
    v40 = sub_1AFE760((_QWORD *)*a1, v117, v119, ".linear.start", 0xDu, 0);
    v44 = v106;
    v45 = v40;
    if ( !v27 )
    {
      if ( (unsigned __int8)sub_B8E180(*(_QWORD *)(*a1 + 544)) )
        goto LABEL_54;
      v27 = (_QWORD *)sub_1B22DF0(*a1, v24, (unsigned __int64)v118, 0, a7, a8);
      if ( sub_1B223D0((__int64)a1, v24, 0, 0, a7, a8) )
        goto LABEL_54;
      v78 = v27[2];
      sub_147FE60((__int64)&v128, v78);
      v80 = v27[2];
      if ( (*(_BYTE *)(v80 + 29) & 1) == 0 || !sub_1AE9300(v80, v78, v71, v72, v79, v73) )
        goto LABEL_54;
      v16 = (__int64)v27;
      if ( sub_19146F0(*a1, v27, v71, v72, v81, v73, a7, a8) > 1 )
      {
        v82 = sub_1AE5FF0(a1[1]);
        if ( v82 )
          v82 = *(_QWORD *)(v82 + 1008);
        v107 = v85;
        v16 = v82;
        v87 = sub_1929BB0(v86, v82, v117, 0x15u, v83, v84, a7, a8, 0);
        if ( v87 > 1 )
        {
          v89 = sub_19A6720(*a1, v87 & 0xFFFFFFFFFFFFFFFELL, v107, v18, v19, v88, a7, a8);
          sub_14B7B40((__int64)&ptr, v89 & 0xFFFFFFFFFFFFFFFELL);
LABEL_54:
          v74 = v27;
          if ( v144 == 2 )
            v74 = v118;
          v116 = *a1;
          v75 = sub_19146F0(*a1, v74, v71, v72, *a1, v73, a7, a8);
          sub_17ED4C0(v116, v45, v75 & 0xFFFFFFFFFFFFFFFELL, 0, *(double *)a7.m128_u64, *(double *)a8.m128_u64);
          v49 = sub_1AE9760(*a1, v45, v119, v117);
          v76 = sub_BFB9F0(v22);
          sub_1AEF810(a1[1], v24, v76, 0x35u, (__int64)v27, 0, 0);
          if ( !(unsigned __int8)sub_B8E180(*(_QWORD *)(*a1 + 544)) )
            goto LABEL_29;
          goto LABEL_28;
        }
      }
      goto LABEL_13;
    }
    v46 = v118;
    if ( v144 == 2 )
      v46 = (_QWORD *)sub_B73640((__int64)v27);
    v47 = *a1;
    v48 = sub_19146F0(*a1, v46, v41, v44, v42, v43, a7, a8);
    sub_17ED4C0(v47, v45, v48 & 0xFFFFFFFFFFFFFFFELL, 0, *(double *)a7.m128_u64, *(double *)a8.m128_u64);
    v49 = sub_1AE9760(*a1, v45, v119, v117);
    v50 = sub_BFB9F0(v22);
    sub_1AEF810(a1[1], v24, v50, 0x35u, 0, 0, 0);
LABEL_28:
    v27 = (_QWORD *)sub_BFB9F0(v22);
LABEL_29:
    ++a2;
    sub_14B7B40((__int64)&v134, (__int64)v27);
    sub_14B7B40((__int64)&v137, v113);
    v16 = v49;
    sub_14B7B40((__int64)&v140, v49);
  }
LABEL_30:
  if ( (_DWORD)v135 )
  {
    if ( !v112 || (*v112 & 0x3C000) != 0 )
    {
      v111 = 0;
LABEL_34:
      v51 = sub_1AE7340(*a1, (__int64)ptr, (unsigned int)v132, v18, v19, a7, a8);
      v52 = (unsigned __int64 *)v128;
      v53 = (unsigned int)v129;
      v54 = v51;
      v55 = (_QWORD *)sub_168B6C0((__int64)a1);
      v59 = sub_1AE9A60(v55, v52, v53, v56, v57, v58);
      *(_QWORD *)&v110 = v140;
      v60 = v134;
      *((_QWORD *)&v110 + 1) = (unsigned int)v141;
      v61 = (unsigned int)v135;
      *(_QWORD *)&v108 = v137;
      *((_QWORD *)&v108 + 1) = (unsigned int)v138;
      v62 = sub_168B6C0((__int64)a1);
      *((_QWORD *)&v105 + 1) = v61;
      *(_QWORD *)&v105 = v60;
      v63 = sub_EBDD30(v62, a5, a6, v144, a10, a11, a12, a13, v105, v108, v110, (__int64)v112, v111, v59, v54);
      goto LABEL_35;
    }
    v90 = sub_EEB7E0((unsigned __int64)v112, v16, *(double *)a7.m128_u64);
    v91 = sub_1AF55B0(a1, v90, (__int64)v112);
    if ( v91 != 1 )
    {
      v92 = (_QWORD *)(v91 & 0xFFFFFFFFFFFFFFFELL);
      v112 = (_DWORD *)(v91 & 0xFFFFFFFFFFFFFFFELL);
      v93 = j__strlen(".linear.step");
      v94 = sub_1AFE760((_QWORD *)*a1, v90, v92[1], ".linear.step", v93, 0);
      v95 = sub_1AE9760(*a1, v94, v92[1], v90);
      v96 = sub_1929BB0(*a1, *(_QWORD *)(*a1 + 608), v90, 0x15u, v95 & 0xFFFFFFFFFFFFFFFELL, v92, a7, a8, 0);
      v99 = sub_1AF29F0(*a1, v96 & 0xFFFFFFFFFFFFFFFELL, 0, v97, v98, a7, a8);
      v100 = sub_168B6C0((__int64)a1);
      sub_C3EB00((__int64)&v125, (unsigned __int64)v92, v100, nullptr, v101, v102);
      if ( (_BYTE)v127 )
      {
        if ( v126 || (v111 = 0, !sub_1AE7A00(&v125)) )
        {
          v111 = 0;
          if ( !(unsigned __int8)sub_1AF0130(&v125) )
          {
            sub_168B9F0((__int64)v143, a1, v90, 0x1C33u, 0);
            v104 = sub_1B1C750((__int64)v143, (__int64 *)v134);
            v123.m128i_i8[0] = (unsigned int)v135 > 1;
            sub_1588420(v104, (unsigned __int8 *)&v123);
            sub_15F7200(v143);
          }
        }
      }
      else
      {
        v103 = 0;
        if ( v99 > 1 )
          v103 = v99 & 0xFFFFFFFFFFFFFFFELL;
        v111 = v103;
      }
      sub_98E4B0((__int64)&v125);
      goto LABEL_34;
    }
  }
  v63 = 0;
LABEL_35:
  if ( ptr != v133 )
    free(ptr);
  if ( v128 != v130 )
    free(v128);
  if ( v140 != v142 )
    free(v140);
  if ( v137 != v139 )
    free(v137);
  if ( v134 != v136 )
    free(v134);
  return v63;
}
