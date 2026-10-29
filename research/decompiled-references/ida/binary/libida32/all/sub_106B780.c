void __fastcall sub_106B780(__int64 a1, __int64 a2, __int64 *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rcx
  __int64 v8; // r9
  __int64 v9; // r8
  const char *v10; // rax
  __int64 v11; // r15
  _QWORD *v12; // rcx
  __int64 v13; // rdx
  _BYTE *v14; // rdx
  _BYTE *v15; // rdx
  __int64 v16; // r15
  __m128i *v17; // rcx
  unsigned __int64 v18; // rdx
  _BYTE *v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  _BYTE *v22; // rdx
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  const char *v34; // rax
  int v35; // eax
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  const char *v42; // r15
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // r15
  _QWORD *v53; // rdx
  __int64 v54; // rax
  _BYTE *v55; // rax
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  _BYTE *v59; // rax
  int v60; // eax
  const char *v61; // rax
  int v62; // eax
  __int64 v63; // rcx
  __int64 v64; // r8
  bool v65; // zf
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  int v69; // eax
  __int64 v70; // r9
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  int v74; // eax
  __int64 v75; // r8
  __int64 v76; // r9
  int v77; // eax
  __int64 v78; // rcx
  __int64 v79; // r9
  size_t v80; // rax
  size_t v81; // r9
  unsigned __int64 v82; // rcx
  size_t v83; // rax
  __int64 v84; // rax
  _QWORD *v85; // rcx
  __int64 v86; // rdx
  __int64 v87; // rax
  _BYTE *v88; // rdx
  _BYTE *v89; // rdx
  int v90; // eax
  __int64 v91; // r8
  __int64 v92; // r9
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // r9
  __int64 v96; // rax
  __int64 v97; // rcx
  __int64 v98; // r9
  __int64 v99; // r8
  __int64 v100; // r9
  int v101; // eax
  __int64 v102; // rcx
  __m128i *v103; // rax
  __int64 v104; // r8
  __int64 v105; // r9
  __int64 v106; // rcx
  __int64 v107; // r15
  __m128i *v108; // rdx
  __int64 v109; // rdx
  __int64 v110; // rdx
  __int64 v111; // rcx
  __int64 v112; // rax
  __m128i *v113; // rcx
  __int64 v114; // rax
  __int64 v115; // rcx
  __int64 v116; // rcx
  __int64 v117; // rcx
  __int64 v118; // rcx
  __int64 v119; // rcx
  __int64 v120; // r8
  __int64 v121; // rcx
  __int64 v122; // r8
  __int64 v123; // r9
  __int64 v124; // rax
  __m128i *v125; // rcx
  __int64 v126; // rax
  __int64 v127; // rcx
  __int64 v128; // rcx
  __m128i si128; // xmm0
  __m128i v130; // xmm0
  __m128i v131; // xmm0
  __m128i v132; // xmm0
  __int64 v133; // [rsp+8h] [rbp-160h]
  __int64 v134; // [rsp+8h] [rbp-160h]
  __int64 v135; // [rsp+8h] [rbp-160h]
  __int64 v136; // [rsp+10h] [rbp-158h]
  __int64 v137; // [rsp+20h] [rbp-148h]
  __int64 v138; // [rsp+20h] [rbp-148h]
  size_t v139; // [rsp+20h] [rbp-148h]
  __int64 v140; // [rsp+20h] [rbp-148h]
  __int64 v141; // [rsp+20h] [rbp-148h]
  size_t v142; // [rsp+28h] [rbp-140h]
  _QWORD v143[2]; // [rsp+30h] [rbp-138h] BYREF
  void *v144[2]; // [rsp+40h] [rbp-128h] BYREF
  __int64 v145; // [rsp+50h] [rbp-118h] BYREF
  void *v146; // [rsp+60h] [rbp-108h] BYREF
  size_t v147; // [rsp+68h] [rbp-100h]
  __m128i v148; // [rsp+70h] [rbp-F8h] BYREF
  void *v149; // [rsp+80h] [rbp-E8h] BYREF
  size_t v150; // [rsp+88h] [rbp-E0h]
  __m128i v151; // [rsp+90h] [rbp-D8h] BYREF
  _QWORD v152[4]; // [rsp+A0h] [rbp-C8h] BYREF
  __int16 v153; // [rsp+C0h] [rbp-A8h]
  _QWORD v154[4]; // [rsp+D0h] [rbp-98h] BYREF
  __int16 v155; // [rsp+F0h] [rbp-78h]
  __int64 v156; // [rsp+100h] [rbp-68h] BYREF
  __int64 v157; // [rsp+108h] [rbp-60h]
  __int64 v158; // [rsp+110h] [rbp-58h]
  __int64 v159; // [rsp+118h] [rbp-50h]
  __int64 v160; // [rsp+120h] [rbp-48h]

  if ( *(_BYTE *)(a1 + 272) )
  {
    sub_10237B0(a3, "MIPSEB", 6, a2, a5, a6);
    v9 = 259;
    LOWORD(v160) = 257;
    v10 = "_MIPSEB";
  }
  else
  {
    sub_10237B0(a3, "MIPSEL", 6, a2, a5, a6);
    v7 = 257;
    LOWORD(v160) = 257;
    v10 = "_MIPSEL";
  }
  v154[0] = "1";
  v155 = 259;
  v152[0] = v10;
  v153 = 259;
  sub_10160F0(a3, (__int64)v152, (__int64)v154, v7, v9, v8, v156, v157, v158, v159, v160);
  v11 = *a3;
  LOWORD(v160) = 257;
  v12 = *(_QWORD **)(v11 + 32);
  v13 = *(_QWORD *)(v11 + 24);
  v155 = 259;
  v152[0] = "__mips__";
  v154[0] = "1";
  v153 = 259;
  if ( (unsigned __int64)(v13 - (_QWORD)v12) > 7 )
  {
    *v12 = 0x20656E6966656423LL;
    *(_QWORD *)(v11 + 32) += 8LL;
  }
  else
  {
    v11 = sub_22581D0(v11, "#define ", 8);
  }
  sub_2230440(v152, v11);
  v14 = *(_BYTE **)(v11 + 32);
  if ( (unsigned __int64)v14 >= *(_QWORD *)(v11 + 24) )
  {
    v11 = sub_2257CD0(v11, 32);
  }
  else
  {
    *(_QWORD *)(v11 + 32) = v14 + 1;
    *v14 = 32;
  }
  sub_2230440(v154, v11);
  v15 = *(_BYTE **)(v11 + 32);
  if ( (unsigned __int64)v15 >= *(_QWORD *)(v11 + 24) )
  {
    sub_2257CD0(v11, 10);
  }
  else
  {
    *(_QWORD *)(v11 + 32) = v15 + 1;
    *v15 = 10;
  }
  v16 = *a3;
  v17 = *(__m128i **)(*a3 + 32);
  v18 = *(_QWORD *)(*a3 + 24) - (_QWORD)v17;
  if ( (unsigned __int8)v160 > 1u )
  {
    if ( v18 > 0x18 )
    {
      si128 = _mm_load_si128((const __m128i *)&xmmword_2385620);
      v17[1].m128i_i8[8] = 40;
      v17[1].m128i_i64[0] = 0x6465746163657270LL;
      *v17 = si128;
      *(_QWORD *)(v16 + 32) += 25LL;
    }
    else
    {
      v16 = sub_22581D0(*a3, "#pragma clang deprecated(", 25);
    }
    sub_2230440(v152, v16);
    v117 = *(_QWORD *)(v16 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v16 + 24) - v117) > 2 )
    {
      *(_BYTE *)(v117 + 2) = 34;
      *(_WORD *)v117 = 8236;
      *(_QWORD *)(v16 + 32) += 3LL;
    }
    else
    {
      v16 = sub_22581D0(v16, ", \"", 3);
    }
    sub_2230440(&v156, v16);
    v118 = *(_QWORD *)(v16 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v16 + 24) - v118) > 2 )
    {
      *(_BYTE *)(v118 + 2) = 10;
      *(_WORD *)v118 = 10530;
      *(_QWORD *)(v16 + 32) += 3LL;
    }
    else
    {
      sub_22581D0(v16, "\")\n", 3);
    }
    v16 = *a3;
    v17 = *(__m128i **)(*a3 + 32);
    v18 = *(_QWORD *)(*a3 + 24) - (_QWORD)v17;
  }
  v154[0] = "1";
  v152[0] = "_mips";
  v155 = 259;
  v153 = 259;
  LOWORD(v160) = 257;
  if ( v18 > 7 )
  {
    v17->m128i_i64[0] = 0x20656E6966656423LL;
    *(_QWORD *)(v16 + 32) += 8LL;
  }
  else
  {
    v16 = sub_22581D0(v16, "#define ", 8);
  }
  sub_2230440(v152, v16);
  v19 = *(_BYTE **)(v16 + 32);
  if ( (unsigned __int64)v19 >= *(_QWORD *)(v16 + 24) )
  {
    v16 = sub_2257CD0(v16, 32);
  }
  else
  {
    *(_QWORD *)(v16 + 32) = v19 + 1;
    *v19 = 32;
  }
  sub_2230440(v154, v16);
  v22 = *(_BYTE **)(v16 + 32);
  if ( (unsigned __int64)v22 >= *(_QWORD *)(v16 + 24) )
  {
    sub_2257CD0(v16, 10);
  }
  else
  {
    *(_QWORD *)(v16 + 32) = v22 + 1;
    *v22 = 10;
  }
  if ( (unsigned __int8)v160 > 1u )
  {
    v112 = *a3;
    v113 = *(__m128i **)(*a3 + 32);
    if ( *(_QWORD *)(*a3 + 24) - (_QWORD)v113 > 0x18u )
    {
      v130 = _mm_load_si128((const __m128i *)&xmmword_2385620);
      v113[1].m128i_i8[8] = 40;
      v113[1].m128i_i64[0] = 0x6465746163657270LL;
      *v113 = v130;
      *(_QWORD *)(v112 + 32) += 25LL;
    }
    else
    {
      v112 = sub_22581D0(*a3, "#pragma clang deprecated(", 25);
    }
    v134 = v112;
    sub_2230440(v152, v112);
    v114 = v134;
    v115 = *(_QWORD *)(v134 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v134 + 24) - v115) > 2 )
    {
      *(_BYTE *)(v115 + 2) = 34;
      *(_WORD *)v115 = 8236;
      *(_QWORD *)(v134 + 32) += 3LL;
    }
    else
    {
      v114 = sub_22581D0(v134, ", \"", 3);
    }
    v135 = v114;
    sub_2230440(&v156, v114);
    v116 = *(_QWORD *)(v135 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v135 + 24) - v116) > 2 )
    {
      v20 = 10530;
      *(_BYTE *)(v116 + 2) = 10;
      *(_WORD *)v116 = 10530;
      *(_QWORD *)(v135 + 32) += 3LL;
    }
    else
    {
      sub_22581D0(v135, "\")\n", 3);
    }
  }
  if ( (*(_BYTE *)(a2 + 4) & 4) != 0 )
  {
    v155 = 259;
    v153 = 259;
    LOWORD(v160) = 257;
    v154[0] = "1";
    v152[0] = "mips";
    sub_10160F0(a3, (__int64)v152, (__int64)v154, 257, v20, v21, v156, v157, v158, v159, 1u);
  }
  v133 = a1 + 568;
  v23 = sub_990D60(a1 + 568, "o32");
  LOWORD(v160) = 257;
  if ( v23 )
  {
    v155 = 259;
    v154[0] = "64";
    v152[0] = "__mips";
    v153 = 259;
    sub_10160F0(a3, (__int64)v152, (__int64)v154, 259, v25, v26, v156, v157, v158, v159, v160);
    LOWORD(v160) = 257;
    v155 = 259;
    v152[0] = "__mips64";
    v153 = 259;
    v154[0] = "1";
    sub_10160F0(a3, (__int64)v152, (__int64)v154, v27, 259, 259, v156, v157, v158, v159, 1u);
    v152[0] = "__mips64__";
    LOWORD(v160) = 257;
    v154[0] = "1";
    v155 = 259;
    v153 = 259;
    sub_10160F0(a3, (__int64)v152, (__int64)v154, v28, v29, v30, v156, v157, v158, v159, 1u);
    LOWORD(v160) = 257;
    v34 = "_MIPS_ISA_MIPS64";
  }
  else
  {
    v154[0] = "32";
    v155 = 259;
    v152[0] = "__mips";
    v153 = 259;
    sub_10160F0(a3, (__int64)v152, (__int64)v154, v24, v25, v26, v156, v157, v158, v159, v160);
    LOWORD(v160) = 257;
    v34 = "_MIPS_ISA_MIPS32";
  }
  v154[0] = v34;
  v155 = 259;
  v152[0] = "_MIPS_ISA";
  v153 = 259;
  sub_10160F0(a3, (__int64)v152, (__int64)v154, v31, v32, v33, v156, v157, v158, v159, v160);
  v35 = sub_10678B0(a1);
  sub_D67330(
    (__int64 *)v144,
    (__int64 (__fastcall *)(_BYTE *, __int64, __int64, __va_list_tag *))&vsnprintf,
    16,
    (__int64)"%u",
    v35);
  if ( v144[1] )
  {
    LOWORD(v160) = 257;
    v155 = 260;
    v154[0] = v144;
    v152[0] = "__mips_isa_rev";
    v153 = 259;
    sub_10160F0(a3, (__int64)v152, (__int64)v154, v36, v37, v38, v156, v157, v158, v159, 1u);
  }
  if ( sub_990D60(v133, "o32") )
  {
    v101 = sub_990D60(v133, "n32");
    v154[0] = "1";
    LOWORD(v160) = 257;
    v155 = 259;
    if ( v101 )
    {
      v152[0] = "__mips_n64";
      v42 = "_ABI64";
      v153 = 259;
      sub_10160F0(a3, (__int64)v152, (__int64)v154, v102, 257, 259, v156, v157, v158, v159, v160);
      LOWORD(v160) = 257;
      v154[0] = "3";
    }
    else
    {
      v152[0] = "__mips_n32";
      v42 = "_ABIN32";
      v153 = 259;
      sub_10160F0(a3, (__int64)v152, (__int64)v154, 259, 257, 259, v156, v157, v158, v159, v160);
      LOWORD(v160) = 257;
      v154[0] = "2";
    }
    v155 = 259;
  }
  else
  {
    v152[0] = "__mips_o32";
    v153 = 259;
    v42 = "_ABIO32";
    LOWORD(v160) = 257;
    v154[0] = "1";
    v155 = 259;
    sub_10160F0(a3, (__int64)v152, (__int64)v154, v39, v40, v41, v156, v157, v158, v159, 1u);
    v154[0] = "1";
    LOWORD(v160) = 257;
    v155 = 259;
  }
  v153 = 259;
  v152[0] = v42;
  sub_10160F0(a3, (__int64)v152, (__int64)v154, v43, v44, v45, v156, v157, v158, v159, v160);
  LOWORD(v160) = 257;
  v155 = 259;
  v152[0] = "_MIPS_SIM";
  v154[0] = v42;
  v153 = 259;
  sub_10160F0(a3, (__int64)v152, (__int64)v154, v46, v47, v48, v156, v157, v158, v159, 1u);
  if ( !*(_BYTE *)(a1 + 549) )
  {
    LOWORD(v160) = 257;
    v154[0] = "1";
    v155 = 259;
    v152[0] = "__mips_abicalls";
    v153 = 259;
    sub_10160F0(a3, (__int64)v152, (__int64)v154, v49, v50, v51, v156, v157, v158, v159, 1u);
    if ( *(_BYTE *)(a1 + 550) )
    {
      LOWORD(v160) = 257;
      v154[0] = "1";
      v155 = 259;
      v152[0] = "__ABICALLS__";
      v153 = 259;
      sub_10160F0(a3, (__int64)v152, (__int64)v154, v111, 259, 259, v156, v157, v158, v159, 1u);
    }
  }
  v52 = *a3;
  v155 = 257;
  v152[0] = "__REGISTER_PREFIX__";
  v53 = *(_QWORD **)(v52 + 32);
  v54 = *(_QWORD *)(v52 + 24);
  v153 = 259;
  LOWORD(v160) = 257;
  if ( (unsigned __int64)(v54 - (_QWORD)v53) > 7 )
  {
    *v53 = 0x20656E6966656423LL;
    *(_QWORD *)(v52 + 32) += 8LL;
  }
  else
  {
    v52 = sub_22581D0(v52, "#define ", 8);
  }
  sub_2230440(v152, v52);
  v55 = *(_BYTE **)(v52 + 32);
  if ( (unsigned __int64)v55 >= *(_QWORD *)(v52 + 24) )
  {
    v52 = sub_2257CD0(v52, 32);
  }
  else
  {
    *(_QWORD *)(v52 + 32) = v55 + 1;
    *v55 = 32;
  }
  sub_2230440(v154, v52);
  v59 = *(_BYTE **)(v52 + 32);
  if ( (unsigned __int64)v59 >= *(_QWORD *)(v52 + 24) )
  {
    sub_2257CD0(v52, 10);
  }
  else
  {
    *(_QWORD *)(v52 + 32) = v59 + 1;
    *v59 = 10;
  }
  if ( (unsigned __int8)v160 > 1u )
  {
    v107 = *a3;
    v108 = *(__m128i **)(*a3 + 32);
    if ( *(_QWORD *)(*a3 + 24) - (_QWORD)v108 > 0x18u )
    {
      v131 = _mm_load_si128((const __m128i *)&xmmword_2385620);
      v108[1].m128i_i8[8] = 40;
      v108[1].m128i_i64[0] = 0x6465746163657270LL;
      *v108 = v131;
      *(_QWORD *)(v107 + 32) += 25LL;
    }
    else
    {
      v107 = sub_22581D0(*a3, "#pragma clang deprecated(", 25);
    }
    sub_2230440(v152, v107);
    v109 = *(_QWORD *)(v107 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v107 + 24) - v109) > 2 )
    {
      *(_BYTE *)(v109 + 2) = 34;
      *(_WORD *)v109 = 8236;
      *(_QWORD *)(v107 + 32) += 3LL;
    }
    else
    {
      v107 = sub_22581D0(v107, ", \"", 3);
    }
    sub_2230440(&v156, v107);
    v110 = *(_QWORD *)(v107 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v107 + 24) - v110) > 2 )
    {
      *(_BYTE *)(v110 + 2) = 10;
      *(_WORD *)v110 = 10530;
      *(_QWORD *)(v107 + 32) += 3LL;
    }
    else
    {
      sub_22581D0(v107, "\")\n", 3);
    }
  }
  v60 = *(_DWORD *)(a1 + 552);
  if ( v60 )
  {
    if ( v60 != 1 )
      goto LABEL_37;
    LODWORD(v152[0]) = 1;
    LOWORD(v160) = 257;
    v153 = 266;
    v61 = "__mips_soft_float";
  }
  else
  {
    LODWORD(v152[0]) = 1;
    LOWORD(v160) = 257;
    v153 = 266;
    v61 = "__mips_hard_float";
  }
  v154[0] = v61;
  v155 = 259;
  sub_10160F0(a3, (__int64)v154, (__int64)v152, v56, v57, v58, v156, v157, v158, v159, v160);
LABEL_37:
  if ( !*(_BYTE *)(a1 + 548) )
  {
    v62 = *(_DWORD *)(a1 + 564);
    if ( v62 != 1 )
      goto LABEL_39;
LABEL_135:
    v56 = 257;
    LODWORD(v152[0]) = 32;
    LOWORD(v160) = 257;
    v153 = 266;
    goto LABEL_42;
  }
  v154[0] = "__mips_single_float";
  LOWORD(v160) = 257;
  v153 = 266;
  LODWORD(v152[0]) = 1;
  v155 = 259;
  sub_10160F0(a3, (__int64)v154, (__int64)v152, v56, v57, 257, v156, v157, v158, v159, 1u);
  v62 = *(_DWORD *)(a1 + 564);
  if ( v62 == 1 )
    goto LABEL_135;
LABEL_39:
  if ( v62 )
  {
    if ( v62 != 2 )
      goto LABEL_43;
    LODWORD(v152[0]) = 64;
    LOWORD(v160) = 257;
    v153 = 266;
  }
  else
  {
    v57 = 266;
    LODWORD(v152[0]) = 0;
    LOWORD(v160) = 257;
    v153 = 266;
  }
LABEL_42:
  v154[0] = "__mips_fpr";
  v155 = 259;
  sub_10160F0(a3, (__int64)v154, (__int64)v152, v56, v57, v58, v156, v157, v158, v159, v160);
  if ( *(_DWORD *)(a1 + 564) == 2 )
  {
LABEL_44:
    LODWORD(v152[0]) = 32;
    LOWORD(v160) = 257;
    v153 = 266;
    goto LABEL_45;
  }
LABEL_43:
  if ( *(_BYTE *)(a1 + 548) )
    goto LABEL_44;
  LODWORD(v152[0]) = 16;
  LOWORD(v160) = 257;
  v153 = 266;
LABEL_45:
  v154[0] = "_MIPS_FPSET";
  v155 = 259;
  sub_10160F0(a3, (__int64)v154, (__int64)v152, v56, v57, v58, v156, v157, v158, v159, v160);
  v65 = *(_BYTE *)(a1 + 563) == 0;
  LOWORD(v160) = 257;
  v153 = 266;
  if ( v65 )
    LODWORD(v152[0]) = 32;
  else
    LODWORD(v152[0]) = 16;
  v154[0] = "_MIPS_SPFPSET";
  v155 = 259;
  sub_10160F0(a3, (__int64)v154, (__int64)v152, v63, v64, 259, v156, v157, v158, v159, v160);
  if ( *(_BYTE *)(a1 + 544) )
  {
    LOWORD(v160) = 257;
    v153 = 266;
    LODWORD(v152[0]) = 1;
    v154[0] = "__mips16";
    v155 = 259;
    sub_10160F0(a3, (__int64)v154, (__int64)v152, v66, 259, v68, v156, v157, v158, v159, 1u);
  }
  if ( *(_BYTE *)(a1 + 545) )
  {
    LOWORD(v160) = 257;
    v153 = 266;
    LODWORD(v152[0]) = 1;
    v154[0] = "__mips_micromips";
    v155 = 259;
    sub_10160F0(a3, (__int64)v154, (__int64)v152, 259, v67, v68, v156, v157, v158, v159, 1u);
  }
  if ( *(_BYTE *)(a1 + 546) )
  {
    LOWORD(v160) = 257;
    v153 = 266;
    v154[0] = "__mips_nan2008";
    LODWORD(v152[0]) = 1;
    v155 = 259;
    sub_10160F0(a3, (__int64)v154, (__int64)v152, v66, v67, v68, v156, v157, v158, v159, 1u);
  }
  if ( *(_BYTE *)(a1 + 547) )
  {
    v153 = 266;
    v154[0] = "__mips_abs2008";
    LOWORD(v160) = 257;
    LODWORD(v152[0]) = 1;
    v155 = 259;
    sub_10160F0(a3, (__int64)v154, (__int64)v152, v66, v67, v68, v156, v157, v158, v159, 1u);
  }
  v69 = *(_DWORD *)(a1 + 556);
  if ( v69 == 1 )
  {
    v70 = 257;
    LODWORD(v152[0]) = 1;
    LOWORD(v160) = 257;
    v153 = 266;
    v154[0] = "__mips_dsp_rev";
    v155 = 259;
  }
  else
  {
    if ( v69 != 2 )
      goto LABEL_59;
    LOWORD(v160) = 257;
    v153 = 266;
    v154[0] = "__mips_dsp_rev";
    LODWORD(v152[0]) = 2;
    v155 = 259;
    sub_10160F0(a3, (__int64)v154, (__int64)v152, 259, v67, v68, v156, v157, v158, v159, 1u);
    v67 = 259;
    LOWORD(v160) = 257;
    v153 = 266;
    LODWORD(v152[0]) = 1;
    v154[0] = "__mips_dspr2";
    v155 = 259;
  }
  sub_10160F0(a3, (__int64)v154, (__int64)v152, v66, v67, v70, v156, v157, v158, v159, v160);
  LOWORD(v160) = 257;
  v153 = 266;
  v154[0] = "__mips_dsp";
  LODWORD(v152[0]) = 1;
  v155 = 259;
  sub_10160F0(a3, (__int64)v154, (__int64)v152, v71, v72, v73, v156, v157, v158, v159, 1u);
LABEL_59:
  if ( *(_BYTE *)(a1 + 560) )
  {
    v153 = 266;
    v154[0] = "__mips_msa";
    LOWORD(v160) = 257;
    LODWORD(v152[0]) = 1;
    v155 = 259;
    sub_10160F0(a3, (__int64)v154, (__int64)v152, v66, v67, v68, v156, v157, v158, v159, 1u);
    if ( !*(_BYTE *)(a1 + 561) )
      goto LABEL_61;
  }
  else if ( !*(_BYTE *)(a1 + 561) )
  {
    goto LABEL_61;
  }
  LOWORD(v160) = 257;
  v153 = 266;
  LODWORD(v152[0]) = 1;
  v154[0] = "__mips_no_madd4";
  v155 = 259;
  sub_10160F0(a3, (__int64)v154, (__int64)v152, v66, v67, 257, v156, v157, v158, v159, 1u);
LABEL_61:
  v149 = (void *)*(unsigned __int8 *)(a1 + 8);
  v152[0] = &v149;
  v154[0] = "_MIPS_SZPTR";
  LOWORD(v160) = 257;
  v153 = 267;
  v155 = 259;
  sub_10160F0(a3, (__int64)v154, (__int64)v152, v66, v67, v68, v156, v157, v158, v159, 1u);
  LOWORD(v160) = 257;
  v74 = *(unsigned __int8 *)(a1 + 14);
  v155 = 259;
  LODWORD(v152[0]) = v74;
  v153 = 265;
  v154[0] = "_MIPS_SZINT";
  sub_10160F0(a3, (__int64)v154, (__int64)v152, 259, v75, v76, v156, v157, v158, v159, 1u);
  v77 = *(unsigned __int8 *)(a1 + 30);
  v155 = 259;
  LODWORD(v152[0]) = v77;
  LOWORD(v160) = 257;
  v153 = 265;
  v154[0] = "_MIPS_SZLONG";
  sub_10160F0(a3, (__int64)v154, (__int64)v152, v78, 259, v79, v156, v157, v158, v159, 1u);
  v136 = a1 + 512;
  sub_BE13C0((__int64)&v146, "\"", a1 + 512);
  v80 = v147;
  if ( v147 == 0x7FFFFFFFFFFFFFFFLL )
    std::__throw_length_error("basic_string::append");
  v81 = v147 + 1;
  if ( v146 == &v148 )
    v82 = 15;
  else
    v82 = v148.m128i_i64[0];
  if ( v81 > v82 )
  {
    v142 = v147 + 1;
    v139 = v147;
    sub_974DF0((__int64)&v146, v147, 0, "\"", 1u);
    v81 = v142;
    v80 = v139;
  }
  else
  {
    *((_BYTE *)v146 + v147) = 34;
  }
  v147 = v81;
  *((_BYTE *)v146 + v80 + 1) = 0;
  v149 = &v151;
  if ( v146 == &v148 )
  {
    v151 = _mm_load_si128(&v148);
  }
  else
  {
    v149 = v146;
    v151.m128i_i64[0] = v148.m128i_i64[0];
  }
  v83 = v147;
  v148.m128i_i8[0] = 0;
  v147 = 0;
  v150 = v83;
  v146 = &v148;
  v155 = 260;
  v154[0] = &v149;
  v152[0] = "_MIPS_ARCH";
  v84 = *a3;
  v153 = 259;
  v85 = *(_QWORD **)(v84 + 32);
  v86 = *(_QWORD *)(v84 + 24);
  LOWORD(v160) = 257;
  if ( (unsigned __int64)(v86 - (_QWORD)v85) > 7 )
  {
    *v85 = 0x20656E6966656423LL;
    *(_QWORD *)(v84 + 32) += 8LL;
  }
  else
  {
    v84 = sub_22581D0(v84, "#define ", 8);
  }
  v137 = v84;
  sub_2230440(v152, v84);
  v87 = v137;
  v88 = *(_BYTE **)(v137 + 32);
  if ( (unsigned __int64)v88 >= *(_QWORD *)(v137 + 24) )
  {
    v87 = sub_2257CD0(v137, 32);
  }
  else
  {
    *(_QWORD *)(v137 + 32) = v88 + 1;
    *v88 = 32;
  }
  v138 = v87;
  sub_2230440(v154, v87);
  v89 = *(_BYTE **)(v138 + 32);
  if ( (unsigned __int64)v89 >= *(_QWORD *)(v138 + 24) )
  {
    sub_2257CD0(v138, 10);
  }
  else
  {
    *(_QWORD *)(v138 + 32) = v89 + 1;
    *v89 = 10;
  }
  if ( (unsigned __int8)v160 > 1u )
  {
    v124 = *a3;
    v125 = *(__m128i **)(*a3 + 32);
    if ( *(_QWORD *)(*a3 + 24) - (_QWORD)v125 > 0x18u )
    {
      v132 = _mm_load_si128((const __m128i *)&xmmword_2385620);
      v125[1].m128i_i8[8] = 40;
      v125[1].m128i_i64[0] = 0x6465746163657270LL;
      *v125 = v132;
      *(_QWORD *)(v124 + 32) += 25LL;
    }
    else
    {
      v124 = sub_22581D0(*a3, "#pragma clang deprecated(", 25);
    }
    v140 = v124;
    sub_2230440(v152, v124);
    v126 = v140;
    v127 = *(_QWORD *)(v140 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v140 + 24) - v127) > 2 )
    {
      *(_BYTE *)(v127 + 2) = 34;
      *(_WORD *)v127 = 8236;
      *(_QWORD *)(v140 + 32) += 3LL;
    }
    else
    {
      v126 = sub_22581D0(v140, ", \"", 3);
    }
    v141 = v126;
    sub_2230440(&v156, v126);
    v128 = *(_QWORD *)(v141 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v141 + 24) - v128) > 2 )
    {
      *(_BYTE *)(v128 + 2) = 10;
      *(_WORD *)v128 = 10530;
      *(_QWORD *)(v141 + 32) += 3LL;
    }
    else
    {
      sub_22581D0(v141, "\")\n", 3);
    }
  }
  if ( v149 != &v151 )
    operator delete(v149);
  if ( v146 != &v148 )
    operator delete(v146);
  v90 = sub_990D60(v136, "octeon+");
  v154[0] = "1";
  LOWORD(v160) = 257;
  v155 = 259;
  if ( v90 )
  {
    v143[0] = *(_QWORD *)(a1 + 512);
    v143[1] = *(_QWORD *)(a1 + 520);
    sub_2222A40(&v146, v143);
    v103 = (__m128i *)sub_978080(&v146, 0, 0, "_MIPS_ARCH_", 0xBu);
    v149 = &v151;
    if ( (__m128i *)v103->m128i_i64[0] == &v103[1] )
    {
      v151 = _mm_loadu_si128(v103 + 1);
    }
    else
    {
      v149 = (void *)v103->m128i_i64[0];
      v151.m128i_i64[0] = v103[1].m128i_i64[0];
    }
    v150 = v103->m128i_u64[1];
    v106 = v150;
    v103->m128i_i64[0] = (__int64)v103[1].m128i_i64;
    v103->m128i_i64[1] = 0;
    v103[1].m128i_i8[0] = 0;
    v153 = 260;
    v152[0] = &v149;
    sub_10160F0(a3, (__int64)v152, (__int64)v154, v106, v104, v105, v156, v157, v158, v159, v160);
    if ( v149 != &v151 )
      operator delete(v149);
    if ( v146 != &v148 )
      operator delete(v146);
  }
  else
  {
    v152[0] = "_MIPS_ARCH_OCTEONP";
    v153 = 259;
    sub_10160F0(a3, (__int64)v152, (__int64)v154, 259, v91, v92, v156, v157, v158, v159, v160);
  }
  v96 = *(_QWORD *)(a1 + 512);
  if ( *(_QWORD *)(a1 + 520) > 5u && *(_DWORD *)v96 == 1702126447 && *(_WORD *)(v96 + 4) == 28271 )
  {
    LOWORD(v160) = 257;
    v155 = 259;
    v152[0] = "__OCTEON__";
    v154[0] = "1";
    v153 = 259;
    sub_10160F0(a3, (__int64)v152, (__int64)v154, v93, v94, v95, v156, v157, v158, v159, 1u);
  }
  if ( sub_990D60(v136, "mips1") )
  {
    LOWORD(v160) = 257;
    v153 = 259;
    v155 = 259;
    v152[0] = "__GCC_HAVE_SYNC_COMPARE_AND_SWAP_1";
    v154[0] = "1";
    sub_10160F0(a3, (__int64)v152, (__int64)v154, v97, 259, v98, v156, v157, v158, v159, 1u);
    LOWORD(v160) = 257;
    v155 = 259;
    v152[0] = "__GCC_HAVE_SYNC_COMPARE_AND_SWAP_2";
    v153 = 259;
    v154[0] = "1";
    sub_10160F0(a3, (__int64)v152, (__int64)v154, v119, v120, 257, v156, v157, v158, v159, 1u);
    LOWORD(v160) = 257;
    v152[0] = "__GCC_HAVE_SYNC_COMPARE_AND_SWAP_4";
    v154[0] = "1";
    v155 = 259;
    v153 = 259;
    sub_10160F0(a3, (__int64)v152, (__int64)v154, v121, v122, v123, v156, v157, v158, v159, 1u);
  }
  if ( !sub_990D60(v133, "n32") || !sub_990D60(v133, "n64") )
  {
    LOWORD(v160) = 257;
    v155 = 259;
    v154[0] = "1";
    v152[0] = "__GCC_HAVE_SYNC_COMPARE_AND_SWAP_8";
    v153 = 259;
    sub_10160F0(a3, (__int64)v152, (__int64)v154, 259, v99, v100, v156, v157, v158, v159, 1u);
  }
  if ( v144[0] != &v145 )
    operator delete(v144[0]);
}

