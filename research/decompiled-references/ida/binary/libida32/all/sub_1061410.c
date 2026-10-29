_BYTE *__fastcall sub_1061410(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v5; // r15
  _QWORD *v6; // rdx
  __int64 v7; // rax
  _BYTE *v8; // rax
  _BYTE *v9; // rax
  __int64 (__fastcall *v10)(__int64); // rax
  __int32 v11; // eax
  __int64 v12; // r15
  _QWORD *v13; // rcx
  __int64 v14; // rdx
  _BYTE *v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  _BYTE *v18; // rdx
  __int64 v19; // rcx
  bool v20; // zf
  char *v21; // rax
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rcx
  __int64 v25; // r15
  _QWORD *v26; // rcx
  __int64 v27; // rdx
  _BYTE *v28; // rdx
  _BYTE *v29; // rdx
  __int64 v30; // r15
  __m128i *v31; // rsi
  unsigned __int64 v32; // rdx
  __int64 v33; // rcx
  const char *v34; // rdi
  __int64 v35; // rcx
  _BYTE *v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  _BYTE *v39; // rdx
  __int64 v40; // rcx
  __int64 (__fastcall *v41)(__int64); // rax
  __int64 v42; // rdx
  __int64 v43; // r15
  __int64 v44; // rbx
  _QWORD *v45; // rdx
  __int64 v46; // rax
  _BYTE *v47; // rax
  _BYTE *v48; // rax
  __int64 v49; // rbx
  __m128i *v50; // rdx
  unsigned __int64 v51; // rax
  _BYTE *v52; // rax
  _BYTE *v53; // rax
  __int64 v54; // rbx
  __m128i *v55; // rdx
  unsigned __int64 v56; // rax
  _BYTE *v57; // rax
  __int64 v58; // r8
  __int64 v59; // r9
  _BYTE *result; // rax
  __int64 v61; // rcx
  const char *v62; // rax
  __int64 v63; // rbx
  __m128i *v64; // rdx
  __int64 v65; // rdx
  __int64 v66; // rdx
  __int64 v67; // rdx
  __int64 v68; // rdx
  __int64 v69; // rdx
  __int64 v70; // rdx
  __int64 v71; // r15
  __m128i *v72; // rcx
  __int64 v73; // rcx
  __int64 v74; // r15
  __m128i *v75; // rdx
  __int64 v76; // rdx
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r9
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // r9
  const char *v84; // rax
  __int64 v85; // rax
  __m128i *v86; // rcx
  __int64 v87; // rax
  __int64 v88; // rcx
  __int64 v89; // rcx
  __int64 v90; // rcx
  __m128i v91; // xmm0
  __m128i v92; // xmm0
  __m128i v93; // xmm0
  __m128i v94; // xmm0
  __m128i si128; // xmm0
  __m128i v96; // xmm0
  __int64 v97; // rbx
  _QWORD *v98; // rdx
  _BYTE *v99; // rax
  _BYTE *v100; // rax
  __int64 v101; // rbx
  __m128i *v102; // rdx
  __int64 v103; // rdx
  __int64 v104; // rdx
  __int64 v105; // rbx
  _QWORD *v106; // rdx
  __int64 v107; // rax
  _BYTE *v108; // rax
  _BYTE *v109; // rax
  __int64 v110; // rbx
  __m128i *v111; // rdx
  __int64 v112; // rdx
  __int64 v113; // rdx
  __m128i v114; // xmm0
  __m128i v115; // xmm0
  __m128i v116; // xmm0
  __int32 v117; // [rsp+4h] [rbp-174h]
  const char *v118; // [rsp+8h] [rbp-170h]
  __int64 v119; // [rsp+8h] [rbp-170h]
  __int64 v120; // [rsp+8h] [rbp-170h]
  __int64 v121; // [rsp+10h] [rbp-168h]
  __int64 v122; // [rsp+20h] [rbp-158h]
  __m128i v123; // [rsp+50h] [rbp-128h] BYREF
  const char *v124; // [rsp+60h] [rbp-118h]
  __int64 v125; // [rsp+68h] [rbp-110h]
  __int16 v126; // [rsp+70h] [rbp-108h]
  __m128i v127[2]; // [rsp+80h] [rbp-F8h] BYREF
  __int16 v128; // [rsp+A0h] [rbp-D8h]
  __m128i v129; // [rsp+B0h] [rbp-C8h] BYREF
  __int64 v130; // [rsp+C0h] [rbp-B8h]
  __int16 v131; // [rsp+D0h] [rbp-A8h]
  _QWORD v132[4]; // [rsp+E0h] [rbp-98h] BYREF
  __int16 v133; // [rsp+100h] [rbp-78h]
  __int64 v134; // [rsp+110h] [rbp-68h] BYREF
  __int64 v135; // [rsp+118h] [rbp-60h]
  __int64 v136; // [rsp+120h] [rbp-58h]
  __int64 v137; // [rsp+128h] [rbp-50h]
  __int64 v138; // [rsp+130h] [rbp-48h]

  v5 = *a3;
  v133 = 259;
  v129.m128i_i64[0] = (__int64)"__loongarch__";
  v6 = *(_QWORD **)(v5 + 32);
  v131 = 259;
  LOWORD(v138) = 257;
  v7 = *(_QWORD *)(v5 + 24);
  v132[0] = "1";
  if ( (unsigned __int64)(v7 - (_QWORD)v6) > 7 )
  {
    *v6 = 0x20656E6966656423LL;
    *(_QWORD *)(v5 + 32) += 8LL;
  }
  else
  {
    v5 = sub_22581D0(v5, "#define ", 8);
  }
  sub_2230440(&v129, v5);
  v8 = *(_BYTE **)(v5 + 32);
  if ( (unsigned __int64)v8 >= *(_QWORD *)(v5 + 24) )
  {
    v5 = sub_2257CD0(v5, 32);
  }
  else
  {
    *(_QWORD *)(v5 + 32) = v8 + 1;
    *v8 = 32;
  }
  sub_2230440(v132, v5);
  v9 = *(_BYTE **)(v5 + 32);
  if ( (unsigned __int64)v9 >= *(_QWORD *)(v5 + 24) )
  {
    sub_2257CD0(v5, 10);
  }
  else
  {
    *(_QWORD *)(v5 + 32) = v9 + 1;
    *v9 = 10;
  }
  if ( (unsigned __int8)v138 > 1u )
  {
    v74 = *a3;
    v75 = *(__m128i **)(*a3 + 32);
    if ( *(_QWORD *)(*a3 + 24) - (_QWORD)v75 > 0x18u )
    {
      si128 = _mm_load_si128((const __m128i *)&xmmword_2385620);
      v75[1].m128i_i8[8] = 40;
      v75[1].m128i_i64[0] = 0x6465746163657270LL;
      *v75 = si128;
      *(_QWORD *)(v74 + 32) += 25LL;
    }
    else
    {
      v74 = sub_22581D0(*a3, "#pragma clang deprecated(", 25);
    }
    sub_2230440(&v129, v74);
    v76 = *(_QWORD *)(v74 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v74 + 24) - v76) > 2 )
    {
      *(_BYTE *)(v76 + 2) = 34;
      *(_WORD *)v76 = 8236;
      *(_QWORD *)(v74 + 32) += 3LL;
    }
    else
    {
      v74 = sub_22581D0(v74, ", \"", 3);
    }
    sub_2230440(&v134, v74);
    v77 = *(_QWORD *)(v74 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v74 + 24) - v77) > 2 )
    {
      *(_BYTE *)(v77 + 2) = 10;
      *(_WORD *)v77 = 10530;
      *(_QWORD *)(v74 + 32) += 3LL;
    }
    else
    {
      sub_22581D0(v74, "\")\n", 3);
    }
  }
  v10 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 248LL);
  if ( v10 == sub_1007B80 )
    v11 = *(unsigned __int8 *)(a1 + 8);
  else
    v11 = v10(a1);
  v117 = v11;
  v12 = *a3;
  v129.m128i_i32[0] = v11;
  v131 = 265;
  v13 = *(_QWORD **)(v12 + 32);
  v14 = *(_QWORD *)(v12 + 24);
  v132[0] = "__loongarch_grlen";
  v133 = 259;
  LOWORD(v138) = 257;
  if ( (unsigned __int64)(v14 - (_QWORD)v13) > 7 )
  {
    *v13 = 0x20656E6966656423LL;
    *(_QWORD *)(v12 + 32) += 8LL;
  }
  else
  {
    v12 = sub_22581D0(v12, "#define ", 8);
  }
  sub_2230440(v132, v12);
  v15 = *(_BYTE **)(v12 + 32);
  if ( (unsigned __int64)v15 >= *(_QWORD *)(v12 + 24) )
  {
    v12 = sub_2257CD0(v12, 32);
  }
  else
  {
    *(_QWORD *)(v12 + 32) = v15 + 1;
    *v15 = 32;
  }
  sub_2230440(&v129, v12);
  v18 = *(_BYTE **)(v12 + 32);
  if ( (unsigned __int64)v18 >= *(_QWORD *)(v12 + 24) )
  {
    sub_2257CD0(v12, 10);
  }
  else
  {
    v19 = (__int64)(v18 + 1);
    *(_QWORD *)(v12 + 32) = v18 + 1;
    *v18 = 10;
  }
  if ( (unsigned __int8)v138 > 1u )
  {
    v71 = *a3;
    v72 = *(__m128i **)(*a3 + 32);
    if ( *(_QWORD *)(*a3 + 24) - (_QWORD)v72 > 0x18u )
    {
      v94 = _mm_load_si128((const __m128i *)&xmmword_2385620);
      v72[1].m128i_i8[8] = 40;
      v72[1].m128i_i64[0] = 0x6465746163657270LL;
      *v72 = v94;
      *(_QWORD *)(v71 + 32) += 25LL;
    }
    else
    {
      v71 = sub_22581D0(*a3, "#pragma clang deprecated(", 25);
    }
    sub_2230440(v132, v71);
    v73 = *(_QWORD *)(v71 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v71 + 24) - v73) > 2 )
    {
      *(_BYTE *)(v73 + 2) = 34;
      *(_WORD *)v73 = 8236;
      *(_QWORD *)(v71 + 32) += 3LL;
    }
    else
    {
      v71 = sub_22581D0(v71, ", \"", 3);
    }
    sub_2230440(&v134, v71);
    v19 = *(_QWORD *)(v71 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v71 + 24) - v19) <= 2 )
    {
      sub_22581D0(v71, "\")\n", 3);
      if ( v117 != 64 )
        goto LABEL_18;
      goto LABEL_138;
    }
    *(_BYTE *)(v19 + 2) = 10;
    *(_WORD *)v19 = 10530;
    *(_QWORD *)(v71 + 32) += 3LL;
  }
  if ( v117 != 64 )
    goto LABEL_18;
LABEL_138:
  LOWORD(v138) = 257;
  v133 = 259;
  v131 = 259;
  v132[0] = "1";
  v129.m128i_i64[0] = (__int64)"__loongarch64";
  sub_10160F0(a3, (__int64)&v129, (__int64)v132, v19, v16, v17, v134, v135, v136, v137, 1u);
LABEL_18:
  if ( *(_BYTE *)(a1 + 576) )
  {
    LOWORD(v138) = 257;
    v21 = "64";
  }
  else
  {
    v20 = *(_BYTE *)(a1 + 577) == 0;
    LOWORD(v138) = 257;
    v21 = "32";
    if ( v20 )
      v21 = "0";
  }
  v132[0] = v21;
  v133 = 259;
  v129.m128i_i64[0] = (__int64)"__loongarch_frlen";
  v131 = 259;
  sub_10160F0(a3, (__int64)&v129, (__int64)v132, v19, v16, v17, v134, v135, v136, v137, v138);
  v24 = *(_QWORD *)(a1 + 544);
  v118 = (const char *)v24;
  v121 = *(_QWORD *)(a1 + 552);
  if ( v121 == 11
    && *(_QWORD *)v24 == 0x637261676E6F6F6CLL
    && *(_WORD *)(v24 + 8) == 13928
    && *(_BYTE *)(v24 + 10) == 52 )
  {
    if ( *(_BYTE *)(a1 + 578) )
    {
      if ( *(_BYTE *)(a1 + 580)
        && *(_BYTE *)(a1 + 581)
        && *(_BYTE *)(a1 + 582)
        && *(_BYTE *)(a1 + 583)
        && *(_BYTE *)(a1 + 584)
        && *(_BYTE *)(a1 + 585) )
      {
        LOBYTE(v122) = 34;
        LOWORD(v138) = 257;
        v123.m128i_i64[0] = v122;
        v124 = "la64v1.1";
        v127[0].m128i_i8[0] = 34;
        v128 = 264;
        v126 = 776;
        sub_A1D840(&v129, &v123, v127, v24, v22, v23);
        goto LABEL_94;
      }
      LOBYTE(v122) = 34;
      v22 = 257;
      v23 = 776;
      LOWORD(v138) = 257;
      v123.m128i_i64[0] = v122;
      v127[0].m128i_i8[0] = 34;
      v124 = "la64v1.0";
      v126 = 776;
    }
    else
    {
      LOBYTE(v122) = 34;
      LOWORD(v138) = 257;
      v123.m128i_i64[0] = v122;
      v127[0].m128i_i8[0] = 34;
      v124 = (const char *)v24;
      v125 = 11;
      v126 = 1288;
    }
    v61 = 2050;
    v129.m128i_i64[0] = (__int64)&v123;
    v131 = 2050;
    v130 = v127[0].m128i_i64[0];
LABEL_94:
    v133 = 259;
    v132[0] = "__loongarch_arch";
    sub_10160F0(a3, (__int64)v132, (__int64)&v129, v61, v22, v23, v134, v135, v136, v137, v138);
    v30 = *a3;
    v31 = *(__m128i **)(*a3 + 32);
    v32 = *(_QWORD *)(*a3 + 24) - (_QWORD)v31;
    goto LABEL_29;
  }
  LOBYTE(v122) = 34;
  v127[0].m128i_i8[0] = 34;
  v25 = *a3;
  v123.m128i_i64[0] = v122;
  v26 = *(_QWORD **)(v25 + 32);
  v27 = *(_QWORD *)(v25 + 24);
  v124 = v118;
  v125 = v121;
  v126 = 1288;
  v129.m128i_i64[0] = (__int64)&v123;
  v130 = v127[0].m128i_i64[0];
  v131 = 2050;
  v132[0] = "__loongarch_arch";
  v133 = 259;
  LOWORD(v138) = 257;
  if ( (unsigned __int64)(v27 - (_QWORD)v26) > 7 )
  {
    *v26 = 0x20656E6966656423LL;
    *(_QWORD *)(v25 + 32) += 8LL;
  }
  else
  {
    v25 = sub_22581D0(v25, "#define ", 8);
  }
  sub_2230440(v132, v25);
  v28 = *(_BYTE **)(v25 + 32);
  if ( (unsigned __int64)v28 >= *(_QWORD *)(v25 + 24) )
  {
    v25 = sub_2257CD0(v25, 32);
  }
  else
  {
    *(_QWORD *)(v25 + 32) = v28 + 1;
    *v28 = 32;
  }
  sub_2230440(&v129, v25);
  v29 = *(_BYTE **)(v25 + 32);
  if ( (unsigned __int64)v29 >= *(_QWORD *)(v25 + 24) )
  {
    sub_2257CD0(v25, 10);
  }
  else
  {
    *(_QWORD *)(v25 + 32) = v29 + 1;
    *v29 = 10;
  }
  v30 = *a3;
  v31 = *(__m128i **)(*a3 + 32);
  v32 = *(_QWORD *)(*a3 + 24) - (_QWORD)v31;
  if ( (unsigned __int8)v138 > 1u )
  {
    if ( v32 > 0x18 )
    {
      v115 = _mm_load_si128((const __m128i *)&xmmword_2385620);
      v31[1].m128i_i8[8] = 40;
      v31[1].m128i_i64[0] = 0x6465746163657270LL;
      *v31 = v115;
      *(_QWORD *)(v30 + 32) += 25LL;
    }
    else
    {
      v30 = sub_22581D0(*a3, "#pragma clang deprecated(", 25);
    }
    sub_2230440(v132, v30);
    v89 = *(_QWORD *)(v30 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v30 + 24) - v89) > 2 )
    {
      *(_BYTE *)(v89 + 2) = 34;
      *(_WORD *)v89 = 8236;
      *(_QWORD *)(v30 + 32) += 3LL;
    }
    else
    {
      v30 = sub_22581D0(v30, ", \"", 3);
    }
    sub_2230440(&v134, v30);
    v90 = *(_QWORD *)(v30 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v30 + 24) - v90) > 2 )
    {
      *(_BYTE *)(v90 + 2) = 10;
      *(_WORD *)v90 = 10530;
      *(_QWORD *)(v30 + 32) += 3LL;
    }
    else
    {
      sub_22581D0(v30, "\")\n", 3);
    }
    v30 = *a3;
    v31 = *(__m128i **)(*a3 + 32);
    v32 = *(_QWORD *)(*a3 + 24) - (_QWORD)v31;
  }
LABEL_29:
  v33 = *(_QWORD *)(a1 + 208);
  v34 = *(const char **)(v33 + 96);
  v35 = *(_QWORD *)(v33 + 104);
  if ( !v35 )
  {
    v35 = v121;
    v34 = v118;
  }
  LOBYTE(v122) = 34;
  v127[0].m128i_i8[0] = 34;
  v125 = v35;
  v123.m128i_i64[0] = v122;
  v129.m128i_i64[0] = (__int64)&v123;
  v124 = v34;
  v126 = 1288;
  v130 = v127[0].m128i_i64[0];
  v131 = 2050;
  v132[0] = "__loongarch_tune";
  v133 = 259;
  LOWORD(v138) = 257;
  if ( v32 > 7 )
  {
    v31->m128i_i64[0] = 0x20656E6966656423LL;
    *(_QWORD *)(v30 + 32) += 8LL;
  }
  else
  {
    v30 = sub_22581D0(v30, "#define ", 8);
  }
  sub_2230440(v132, v30);
  v36 = *(_BYTE **)(v30 + 32);
  if ( (unsigned __int64)v36 >= *(_QWORD *)(v30 + 24) )
  {
    v30 = sub_2257CD0(v30, 32);
  }
  else
  {
    *(_QWORD *)(v30 + 32) = v36 + 1;
    *v36 = 32;
  }
  sub_2230440(&v129, v30);
  v39 = *(_BYTE **)(v30 + 32);
  if ( (unsigned __int64)v39 >= *(_QWORD *)(v30 + 24) )
  {
    sub_2257CD0(v30, 10);
  }
  else
  {
    v40 = (__int64)(v39 + 1);
    *(_QWORD *)(v30 + 32) = v39 + 1;
    *v39 = 10;
  }
  if ( (unsigned __int8)v138 > 1u )
  {
    v85 = *a3;
    v86 = *(__m128i **)(*a3 + 32);
    if ( *(_QWORD *)(*a3 + 24) - (_QWORD)v86 > 0x18u )
    {
      v96 = _mm_load_si128((const __m128i *)&xmmword_2385620);
      v86[1].m128i_i8[8] = 40;
      v86[1].m128i_i64[0] = 0x6465746163657270LL;
      *v86 = v96;
      *(_QWORD *)(v85 + 32) += 25LL;
    }
    else
    {
      v85 = sub_22581D0(*a3, "#pragma clang deprecated(", 25);
    }
    v119 = v85;
    sub_2230440(v132, v85);
    v87 = v119;
    v88 = *(_QWORD *)(v119 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v119 + 24) - v88) > 2 )
    {
      *(_BYTE *)(v88 + 2) = 34;
      *(_WORD *)v88 = 8236;
      *(_QWORD *)(v119 + 32) += 3LL;
    }
    else
    {
      v87 = sub_22581D0(v119, ", \"", 3);
    }
    v120 = v87;
    sub_2230440(&v134, v87);
    v40 = *(_QWORD *)(v120 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v120 + 24) - v40) > 2 )
    {
      *(_BYTE *)(v40 + 2) = 10;
      *(_WORD *)v40 = 10530;
      *(_QWORD *)(v120 + 32) += 3LL;
    }
    else
    {
      sub_22581D0(v120, "\")\n", 3);
    }
  }
  if ( *(_BYTE *)(a1 + 579) )
  {
    v132[0] = "256";
    v133 = 259;
    v129.m128i_i64[0] = (__int64)"__loongarch_simd_width";
    v131 = 259;
    LOWORD(v138) = 257;
    sub_10160F0(a3, (__int64)&v129, (__int64)v132, v40, v37, v38, v134, v135, v136, v137, 1u);
    LOWORD(v138) = 257;
    v131 = 266;
    v132[0] = "__loongarch_sx";
    v133 = 259;
    v129.m128i_i32[0] = 1;
    sub_10160F0(a3, (__int64)v132, (__int64)&v129, v78, v79, v80, v134, v135, v136, v137, 1u);
    v129.m128i_i32[0] = 1;
    v131 = 266;
    LOWORD(v138) = 257;
    v84 = "__loongarch_asx";
  }
  else
  {
    if ( !*(_BYTE *)(a1 + 578) )
      goto LABEL_40;
    LOWORD(v138) = 257;
    v132[0] = "128";
    v129.m128i_i64[0] = (__int64)"__loongarch_simd_width";
    v133 = 259;
    v131 = 259;
    sub_10160F0(a3, (__int64)&v129, (__int64)v132, v40, 259, 259, v134, v135, v136, v137, 1u);
    v129.m128i_i32[0] = 1;
    LOWORD(v138) = 257;
    v84 = "__loongarch_sx";
    v131 = 266;
  }
  v132[0] = v84;
  v133 = 259;
  sub_10160F0(a3, (__int64)v132, (__int64)&v129, v81, v82, v83, v134, v135, v136, v137, v138);
LABEL_40:
  if ( *(_BYTE *)(a1 + 580) )
  {
    LOWORD(v138) = 257;
    v131 = 266;
    v129.m128i_i32[0] = 1;
    v132[0] = "__loongarch_frecipe";
    v133 = 259;
    sub_10160F0(a3, (__int64)v132, (__int64)&v129, 259, v37, v38, v134, v135, v136, v137, 1u);
  }
  if ( *(_BYTE *)(a1 + 581) )
  {
    LOWORD(v138) = 257;
    v131 = 266;
    v132[0] = "__loongarch_lam_bh";
    v129.m128i_i32[0] = 1;
    v133 = 259;
    sub_10160F0(a3, (__int64)v132, (__int64)&v129, v40, v37, v38, v134, v135, v136, v137, 1u);
  }
  if ( *(_BYTE *)(a1 + 582) )
  {
    v131 = 266;
    v132[0] = "__loongarch_lamcas";
    LOWORD(v138) = 257;
    v129.m128i_i32[0] = 1;
    v133 = 259;
    sub_10160F0(a3, (__int64)v132, (__int64)&v129, v40, v37, v38, v134, v135, v136, v137, 1u);
  }
  if ( *(_BYTE *)(a1 + 583) )
  {
    LOWORD(v138) = 257;
    v131 = 266;
    v129.m128i_i32[0] = 1;
    v132[0] = "__loongarch_ld_seq_sa";
    v133 = 259;
    sub_10160F0(a3, (__int64)v132, (__int64)&v129, v40, v37, 257, v134, v135, v136, v137, 1u);
  }
  if ( *(_BYTE *)(a1 + 584) )
  {
    LOWORD(v138) = 257;
    v131 = 266;
    v129.m128i_i32[0] = 1;
    v132[0] = "__loongarch_div32";
    v133 = 259;
    sub_10160F0(a3, (__int64)v132, (__int64)&v129, v40, 259, v38, v134, v135, v136, v137, 1u);
  }
  if ( *(_BYTE *)(a1 + 585) )
  {
    LOWORD(v138) = 257;
    v131 = 266;
    v129.m128i_i32[0] = 1;
    v132[0] = "__loongarch_scq";
    v133 = 259;
    sub_10160F0(a3, (__int64)v132, (__int64)&v129, 259, v37, v38, v134, v135, v136, v137, 1u);
  }
  v41 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 448LL);
  if ( v41 == sub_100FBD0 )
  {
    v42 = *(_QWORD *)(a1 + 520);
    v43 = *(_QWORD *)(a1 + 512);
  }
  else
  {
    v43 = v41(a1);
  }
  if ( v42 == 5 )
  {
    if ( *(_DWORD *)v43 == 875982956 && *(_BYTE *)(v43 + 4) == 100
      || *(_DWORD *)v43 == 875982956 && *(_BYTE *)(v43 + 4) == 102
      || *(_DWORD *)v43 == 875982956 && *(_BYTE *)(v43 + 4) == 115 )
    {
      v97 = *a3;
      v132[0] = "1";
      v133 = 259;
      v129.m128i_i64[0] = (__int64)"__loongarch_lp64";
      v98 = *(_QWORD **)(v97 + 32);
      v131 = 259;
      LOWORD(v138) = 257;
      if ( *(_QWORD *)(v97 + 24) - (_QWORD)v98 > 7u )
      {
        *v98 = 0x20656E6966656423LL;
        *(_QWORD *)(v97 + 32) += 8LL;
      }
      else
      {
        v97 = sub_22581D0(v97, "#define ", 8);
      }
      sub_2230440(&v129, v97);
      v99 = *(_BYTE **)(v97 + 32);
      if ( (unsigned __int64)v99 >= *(_QWORD *)(v97 + 24) )
      {
        v97 = sub_2257CD0(v97, 32);
      }
      else
      {
        *(_QWORD *)(v97 + 32) = v99 + 1;
        *v99 = 32;
      }
      sub_2230440(v132, v97);
      v100 = *(_BYTE **)(v97 + 32);
      if ( (unsigned __int64)v100 >= *(_QWORD *)(v97 + 24) )
      {
        sub_2257CD0(v97, 10);
      }
      else
      {
        *(_QWORD *)(v97 + 32) = v100 + 1;
        *v100 = 10;
      }
      if ( (unsigned __int8)v138 > 1u )
      {
        v101 = *a3;
        v102 = *(__m128i **)(*a3 + 32);
        if ( *(_QWORD *)(*a3 + 24) - (_QWORD)v102 > 0x18u )
        {
          v114 = _mm_load_si128((const __m128i *)&xmmword_2385620);
          v102[1].m128i_i8[8] = 40;
          v102[1].m128i_i64[0] = 0x6465746163657270LL;
          *v102 = v114;
          *(_QWORD *)(v101 + 32) += 25LL;
        }
        else
        {
          v101 = sub_22581D0(*a3, "#pragma clang deprecated(", 25);
        }
        sub_2230440(&v129, v101);
        v103 = *(_QWORD *)(v101 + 32);
        if ( (unsigned __int64)(*(_QWORD *)(v101 + 24) - v103) > 2 )
        {
          *(_BYTE *)(v103 + 2) = 34;
          *(_WORD *)v103 = 8236;
          *(_QWORD *)(v101 + 32) += 3LL;
        }
        else
        {
          v101 = sub_22581D0(v101, ", \"", 3);
        }
        sub_2230440(&v134, v101);
        v104 = *(_QWORD *)(v101 + 32);
        if ( (unsigned __int64)(*(_QWORD *)(v101 + 24) - v104) > 2 )
        {
          *(_BYTE *)(v104 + 2) = 10;
          *(_WORD *)v104 = 10530;
          *(_QWORD *)(v101 + 32) += 3LL;
        }
        else
        {
          sub_22581D0(v101, "\")\n", 3);
        }
      }
    }
    if ( *(_DWORD *)v43 == 875982956 && *(_BYTE *)(v43 + 4) == 100 )
    {
LABEL_196:
      LOWORD(v138) = 257;
      v105 = *a3;
      v129.m128i_i64[0] = (__int64)"__loongarch_hard_float";
      v106 = *(_QWORD **)(v105 + 32);
      v107 = *(_QWORD *)(v105 + 24);
      v132[0] = "1";
      v133 = 259;
      v131 = 259;
      if ( (unsigned __int64)(v107 - (_QWORD)v106) > 7 )
      {
        *v106 = 0x20656E6966656423LL;
        *(_QWORD *)(v105 + 32) += 8LL;
      }
      else
      {
        v105 = sub_22581D0(v105, "#define ", 8);
      }
      sub_2230440(&v129, v105);
      v108 = *(_BYTE **)(v105 + 32);
      if ( (unsigned __int64)v108 >= *(_QWORD *)(v105 + 24) )
      {
        v105 = sub_2257CD0(v105, 32);
      }
      else
      {
        *(_QWORD *)(v105 + 32) = v108 + 1;
        *v108 = 32;
      }
      sub_2230440(v132, v105);
      v109 = *(_BYTE **)(v105 + 32);
      if ( (unsigned __int64)v109 >= *(_QWORD *)(v105 + 24) )
      {
        sub_2257CD0(v105, 10);
      }
      else
      {
        *(_QWORD *)(v105 + 32) = v109 + 1;
        *v109 = 10;
      }
      if ( (unsigned __int8)v138 > 1u )
      {
        v110 = *a3;
        v111 = *(__m128i **)(*a3 + 32);
        if ( *(_QWORD *)(*a3 + 24) - (_QWORD)v111 > 0x18u )
        {
          v116 = _mm_load_si128((const __m128i *)&xmmword_2385620);
          v111[1].m128i_i8[8] = 40;
          v111[1].m128i_i64[0] = 0x6465746163657270LL;
          *v111 = v116;
          *(_QWORD *)(v110 + 32) += 25LL;
        }
        else
        {
          v110 = sub_22581D0(*a3, "#pragma clang deprecated(", 25);
        }
        sub_2230440(&v129, v110);
        v112 = *(_QWORD *)(v110 + 32);
        if ( (unsigned __int64)(*(_QWORD *)(v110 + 24) - v112) > 2 )
        {
          *(_BYTE *)(v112 + 2) = 34;
          *(_WORD *)v112 = 8236;
          *(_QWORD *)(v110 + 32) += 3LL;
        }
        else
        {
          v110 = sub_22581D0(v110, ", \"", 3);
        }
        sub_2230440(&v134, v110);
        v113 = *(_QWORD *)(v110 + 32);
        if ( (unsigned __int64)(*(_QWORD *)(v110 + 24) - v113) > 2 )
        {
          v37 = 10530;
          *(_BYTE *)(v113 + 2) = 10;
          *(_WORD *)v113 = 10530;
          *(_QWORD *)(v110 + 32) += 3LL;
        }
        else
        {
          sub_22581D0(v110, "\")\n", 3);
        }
      }
      v132[0] = "1";
      v62 = "__loongarch_double_float";
      LOWORD(v138) = 257;
      v133 = 259;
      goto LABEL_204;
    }
    if ( *(_DWORD *)v43 == 875982956 && *(_BYTE *)(v43 + 4) == 102 )
    {
LABEL_244:
      LOWORD(v138) = 257;
      v133 = 259;
      v129.m128i_i64[0] = (__int64)"__loongarch_hard_float";
      v131 = 259;
      v132[0] = "1";
      sub_10160F0(a3, (__int64)&v129, (__int64)v132, v40, v37, v38, v134, v135, v136, v137, 1u);
      v40 = 259;
      LOWORD(v138) = 257;
      v132[0] = "1";
      v133 = 259;
      v129.m128i_i64[0] = (__int64)"__loongarch_single_float";
      v131 = 259;
      goto LABEL_205;
    }
    if ( *(_DWORD *)v43 != 875982956 || *(_BYTE *)(v43 + 4) != 115 )
      goto LABEL_59;
  }
  else
  {
    if ( v42 != 6 )
      goto LABEL_59;
    if ( *(_DWORD *)v43 == 863005801 && *(_WORD *)(v43 + 4) == 25650 )
      goto LABEL_196;
    if ( *(_DWORD *)v43 == 863005801 && *(_WORD *)(v43 + 4) == 26162 )
      goto LABEL_244;
    if ( *(_DWORD *)v43 != 863005801 || *(_WORD *)(v43 + 4) != 29490 )
      goto LABEL_59;
  }
  v132[0] = "1";
  LOWORD(v138) = 257;
  v133 = 259;
  v62 = "__loongarch_soft_float";
LABEL_204:
  v129.m128i_i64[0] = (__int64)v62;
  v131 = 259;
LABEL_205:
  sub_10160F0(a3, (__int64)&v129, (__int64)v132, v40, v37, v38, v134, v135, v136, v137, v138);
LABEL_59:
  LOWORD(v138) = 257;
  v44 = *a3;
  v129.m128i_i64[0] = (__int64)"__GCC_HAVE_SYNC_COMPARE_AND_SWAP_1";
  v45 = *(_QWORD **)(v44 + 32);
  v46 = *(_QWORD *)(v44 + 24);
  v132[0] = "1";
  v133 = 259;
  v131 = 259;
  if ( (unsigned __int64)(v46 - (_QWORD)v45) > 7 )
  {
    *v45 = 0x20656E6966656423LL;
    *(_QWORD *)(v44 + 32) += 8LL;
  }
  else
  {
    v44 = sub_22581D0(v44, "#define ", 8);
  }
  sub_2230440(&v129, v44);
  v47 = *(_BYTE **)(v44 + 32);
  if ( (unsigned __int64)v47 >= *(_QWORD *)(v44 + 24) )
  {
    v44 = sub_2257CD0(v44, 32);
  }
  else
  {
    *(_QWORD *)(v44 + 32) = v47 + 1;
    *v47 = 32;
  }
  sub_2230440(v132, v44);
  v48 = *(_BYTE **)(v44 + 32);
  if ( (unsigned __int64)v48 >= *(_QWORD *)(v44 + 24) )
  {
    sub_2257CD0(v44, 10);
  }
  else
  {
    *(_QWORD *)(v44 + 32) = v48 + 1;
    *v48 = 10;
  }
  v49 = *a3;
  v50 = *(__m128i **)(*a3 + 32);
  v51 = *(_QWORD *)(*a3 + 24) - (_QWORD)v50;
  if ( (unsigned __int8)v138 > 1u )
  {
    if ( v51 > 0x18 )
    {
      v93 = _mm_load_si128((const __m128i *)&xmmword_2385620);
      v50[1].m128i_i8[8] = 40;
      v50[1].m128i_i64[0] = 0x6465746163657270LL;
      *v50 = v93;
      *(_QWORD *)(v49 + 32) += 25LL;
    }
    else
    {
      v49 = sub_22581D0(*a3, "#pragma clang deprecated(", 25);
    }
    sub_2230440(&v129, v49);
    v69 = *(_QWORD *)(v49 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v49 + 24) - v69) > 2 )
    {
      *(_BYTE *)(v69 + 2) = 34;
      *(_WORD *)v69 = 8236;
      *(_QWORD *)(v49 + 32) += 3LL;
    }
    else
    {
      v49 = sub_22581D0(v49, ", \"", 3);
    }
    sub_2230440(&v134, v49);
    v70 = *(_QWORD *)(v49 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v49 + 24) - v70) > 2 )
    {
      *(_BYTE *)(v70 + 2) = 10;
      *(_WORD *)v70 = 10530;
      *(_QWORD *)(v49 + 32) += 3LL;
    }
    else
    {
      sub_22581D0(v49, "\")\n", 3);
    }
    v49 = *a3;
    v50 = *(__m128i **)(*a3 + 32);
    v51 = *(_QWORD *)(*a3 + 24) - (_QWORD)v50;
  }
  v132[0] = "1";
  v133 = 259;
  v129.m128i_i64[0] = (__int64)"__GCC_HAVE_SYNC_COMPARE_AND_SWAP_2";
  v131 = 259;
  LOWORD(v138) = 257;
  if ( v51 > 7 )
  {
    v50->m128i_i64[0] = 0x20656E6966656423LL;
    *(_QWORD *)(v49 + 32) += 8LL;
  }
  else
  {
    v49 = sub_22581D0(v49, "#define ", 8);
  }
  sub_2230440(&v129, v49);
  v52 = *(_BYTE **)(v49 + 32);
  if ( (unsigned __int64)v52 >= *(_QWORD *)(v49 + 24) )
  {
    v49 = sub_2257CD0(v49, 32);
  }
  else
  {
    *(_QWORD *)(v49 + 32) = v52 + 1;
    *v52 = 32;
  }
  sub_2230440(v132, v49);
  v53 = *(_BYTE **)(v49 + 32);
  if ( (unsigned __int64)v53 >= *(_QWORD *)(v49 + 24) )
  {
    sub_2257CD0(v49, 10);
  }
  else
  {
    *(_QWORD *)(v49 + 32) = v53 + 1;
    *v53 = 10;
  }
  v54 = *a3;
  v55 = *(__m128i **)(*a3 + 32);
  v56 = *(_QWORD *)(*a3 + 24) - (_QWORD)v55;
  if ( (unsigned __int8)v138 > 1u )
  {
    if ( v56 > 0x18 )
    {
      v91 = _mm_load_si128((const __m128i *)&xmmword_2385620);
      v55[1].m128i_i8[8] = 40;
      v55[1].m128i_i64[0] = 0x6465746163657270LL;
      *v55 = v91;
      *(_QWORD *)(v54 + 32) += 25LL;
    }
    else
    {
      v54 = sub_22581D0(*a3, "#pragma clang deprecated(", 25);
    }
    sub_2230440(&v129, v54);
    v67 = *(_QWORD *)(v54 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v54 + 24) - v67) > 2 )
    {
      *(_BYTE *)(v67 + 2) = 34;
      *(_WORD *)v67 = 8236;
      *(_QWORD *)(v54 + 32) += 3LL;
    }
    else
    {
      v54 = sub_22581D0(v54, ", \"", 3);
    }
    sub_2230440(&v134, v54);
    v68 = *(_QWORD *)(v54 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v54 + 24) - v68) > 2 )
    {
      *(_BYTE *)(v68 + 2) = 10;
      *(_WORD *)v68 = 10530;
      *(_QWORD *)(v54 + 32) += 3LL;
    }
    else
    {
      sub_22581D0(v54, "\")\n", 3);
    }
    v54 = *a3;
    v55 = *(__m128i **)(*a3 + 32);
    v56 = *(_QWORD *)(*a3 + 24) - (_QWORD)v55;
  }
  v132[0] = "1";
  v133 = 259;
  v129.m128i_i64[0] = (__int64)"__GCC_HAVE_SYNC_COMPARE_AND_SWAP_4";
  v131 = 259;
  LOWORD(v138) = 257;
  if ( v56 > 7 )
  {
    v55->m128i_i64[0] = 0x20656E6966656423LL;
    *(_QWORD *)(v54 + 32) += 8LL;
  }
  else
  {
    v54 = sub_22581D0(v54, "#define ", 8);
  }
  sub_2230440(&v129, v54);
  v57 = *(_BYTE **)(v54 + 32);
  if ( (unsigned __int64)v57 >= *(_QWORD *)(v54 + 24) )
  {
    v54 = sub_2257CD0(v54, 32);
  }
  else
  {
    *(_QWORD *)(v54 + 32) = v57 + 1;
    *v57 = 32;
  }
  sub_2230440(v132, v54);
  result = *(_BYTE **)(v54 + 32);
  if ( (unsigned __int64)result >= *(_QWORD *)(v54 + 24) )
  {
    result = (_BYTE *)sub_2257CD0(v54, 10);
  }
  else
  {
    *(_QWORD *)(v54 + 32) = result + 1;
    *result = 10;
  }
  if ( (unsigned __int8)v138 <= 1u )
  {
LABEL_80:
    if ( v117 != 64 )
      return result;
LABEL_109:
    LOWORD(v138) = 257;
    v133 = 259;
    v132[0] = "1";
    v129.m128i_i64[0] = (__int64)"__GCC_HAVE_SYNC_COMPARE_AND_SWAP_8";
    v131 = 259;
    return sub_10160F0(a3, (__int64)&v129, (__int64)v132, 259, v58, v59, v134, v135, v136, v137, 1u);
  }
  v63 = *a3;
  v64 = *(__m128i **)(*a3 + 32);
  if ( *(_QWORD *)(*a3 + 24) - (_QWORD)v64 > 0x18u )
  {
    v92 = _mm_load_si128((const __m128i *)&xmmword_2385620);
    v64[1].m128i_i8[8] = 40;
    v64[1].m128i_i64[0] = 0x6465746163657270LL;
    *v64 = v92;
    *(_QWORD *)(v63 + 32) += 25LL;
  }
  else
  {
    v63 = sub_22581D0(*a3, "#pragma clang deprecated(", 25);
  }
  sub_2230440(&v129, v63);
  v65 = *(_QWORD *)(v63 + 32);
  if ( (unsigned __int64)(*(_QWORD *)(v63 + 24) - v65) > 2 )
  {
    *(_BYTE *)(v65 + 2) = 34;
    *(_WORD *)v65 = 8236;
    *(_QWORD *)(v63 + 32) += 3LL;
  }
  else
  {
    v63 = sub_22581D0(v63, ", \"", 3);
  }
  sub_2230440(&v134, v63);
  v66 = *(_QWORD *)(v63 + 32);
  result = (_BYTE *)(*(_QWORD *)(v63 + 24) - v66);
  if ( (unsigned __int64)result > 2 )
  {
    *(_BYTE *)(v66 + 2) = 10;
    *(_WORD *)v66 = 10530;
    *(_QWORD *)(v63 + 32) += 3LL;
    goto LABEL_80;
  }
  result = (_BYTE *)sub_22581D0(v63, "\")\n", 3);
  if ( v117 == 64 )
    goto LABEL_109;
  return result;
}

