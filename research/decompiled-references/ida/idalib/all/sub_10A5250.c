_BYTE *__fastcall sub_10A5250(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v5; // rbx
  _QWORD *v6; // rdx
  __int64 v7; // rax
  _BYTE *v8; // rax
  _BYTE *v9; // rax
  __int64 v10; // rbx
  __m128i *v11; // rcx
  unsigned __int64 v12; // rax
  int v13; // esi
  char *v14; // rdx
  _BYTE *v15; // rax
  __int64 v16; // r8
  __int64 v17; // r9
  _BYTE *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rdx
  _DWORD *v22; // rax
  __int64 (__fastcall *v23)(__int64); // rax
  __int64 v24; // r15
  __int64 v25; // rbx
  const char *v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rbx
  _QWORD *v31; // rdx
  __int64 v32; // rax
  _BYTE *v33; // rax
  _BYTE *v34; // rax
  __int64 v35; // rdi
  __int64 v36; // rbx
  __int64 v37; // r15
  _BYTE *v38; // rdx
  _BYTE *v39; // rdx
  int v40; // edx
  int v41; // eax
  _QWORD *v42; // rcx
  __int64 v43; // rdx
  const char *v44; // rax
  __int64 v45; // r15
  __m128i *v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rcx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // rbx
  _QWORD *v63; // rdx
  __int64 v64; // rax
  _BYTE *v65; // rax
  __int64 v66; // r8
  __int64 v67; // r9
  _BYTE *v68; // rax
  __int64 (__fastcall *v69)(__int64, __int64); // rax
  __int64 v70; // rcx
  unsigned int v71; // eax
  unsigned __int64 v72; // rax
  bool v73; // zf
  const char *v74; // rax
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  const char *v78; // rax
  _BYTE *result; // rax
  char v80; // al
  int v81; // ebx
  __int64 (*v82)(); // rax
  __int64 v83; // rcx
  const char *v84; // rax
  __m128i v85; // xmm0
  char v86; // dl
  __int64 v87; // rbx
  __m128i *v88; // rdx
  __int64 v89; // rdx
  __int64 v90; // rdx
  __int64 v91; // rbx
  __m128i *v92; // rdx
  __int64 v93; // rdx
  __int64 v94; // rdx
  __int64 v95; // rdx
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // r9
  __int64 v99; // rcx
  __int64 v100; // r8
  __int64 v101; // rcx
  __int64 v102; // r8
  __int64 v103; // r9
  __int64 v104; // r8
  __int64 v105; // r9
  __int64 v106; // rcx
  __int64 v107; // r8
  __int64 v108; // r9
  __int64 v109; // rcx
  __int64 v110; // r8
  __int64 v111; // r9
  __int64 v112; // r8
  __int64 v113; // r9
  __int64 v114; // rcx
  __int64 v115; // r8
  __int64 v116; // r9
  __int64 v117; // rbx
  __m128i *v118; // rdx
  __int64 v119; // rdx
  __int64 v120; // rdx
  __int64 v121; // rdx
  __m128i v122; // xmm0
  __m128i si128; // xmm0
  __m128i v124; // xmm0
  __m128i v125; // xmm0
  __int64 v126; // rcx
  unsigned __int64 v127; // rax
  int v128; // edx
  int v130; // [rsp+2Ch] [rbp-FCh]
  int v131; // [rsp+30h] [rbp-F8h]
  int v132; // [rsp+38h] [rbp-F0h]
  int v133; // [rsp+3Ch] [rbp-ECh]
  void *v134; // [rsp+40h] [rbp-E8h] BYREF
  __int64 v135; // [rsp+48h] [rbp-E0h]
  _BYTE v136[16]; // [rsp+50h] [rbp-D8h] BYREF
  _QWORD v137[4]; // [rsp+60h] [rbp-C8h] BYREF
  __int16 v138; // [rsp+80h] [rbp-A8h]
  _QWORD v139[4]; // [rsp+90h] [rbp-98h] BYREF
  __int16 v140; // [rsp+B0h] [rbp-78h]
  __int64 v141; // [rsp+C0h] [rbp-68h] BYREF
  __int64 v142; // [rsp+C8h] [rbp-60h]
  __int64 v143; // [rsp+D0h] [rbp-58h]
  __int64 v144; // [rsp+D8h] [rbp-50h]
  __int64 v145; // [rsp+E0h] [rbp-48h]

  LOWORD(v145) = 257;
  v5 = *a3;
  v139[0] = "1";
  v137[0] = "__riscv";
  v6 = *(_QWORD **)(v5 + 32);
  v7 = *(_QWORD *)(v5 + 24);
  v140 = 259;
  v138 = 259;
  if ( (unsigned __int64)(v7 - (_QWORD)v6) > 7 )
  {
    *v6 = 0x20656E6966656423LL;
    *(_QWORD *)(v5 + 32) += 8LL;
  }
  else
  {
    v5 = sub_227BF10(v5, "#define ", 8);
  }
  sub_2254180(v137, v5);
  v8 = *(_BYTE **)(v5 + 32);
  if ( (unsigned __int64)v8 >= *(_QWORD *)(v5 + 24) )
  {
    v5 = sub_227BA10(v5, 32);
  }
  else
  {
    *(_QWORD *)(v5 + 32) = v8 + 1;
    *v8 = 32;
  }
  sub_2254180(v139, v5);
  v9 = *(_BYTE **)(v5 + 32);
  if ( (unsigned __int64)v9 >= *(_QWORD *)(v5 + 24) )
  {
    sub_227BA10(v5, 10);
  }
  else
  {
    *(_QWORD *)(v5 + 32) = v9 + 1;
    *v9 = 10;
  }
  v10 = *a3;
  v11 = *(__m128i **)(*a3 + 32);
  v12 = *(_QWORD *)(*a3 + 24) - (_QWORD)v11;
  if ( (unsigned __int8)v145 > 1u )
  {
    if ( v12 > 0x18 )
    {
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A9650);
      v11[1].m128i_i8[8] = 40;
      v11[1].m128i_i64[0] = 0x6465746163657270LL;
      *v11 = si128;
      *(_QWORD *)(v10 + 32) += 25LL;
    }
    else
    {
      v10 = sub_227BF10(*a3, "#pragma clang deprecated(", 25);
    }
    sub_2254180(v137, v10);
    v95 = *(_QWORD *)(v10 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v10 + 24) - v95) > 2 )
    {
      *(_BYTE *)(v95 + 2) = 34;
      *(_WORD *)v95 = 8236;
      *(_QWORD *)(v10 + 32) += 3LL;
    }
    else
    {
      v10 = sub_227BF10(v10, ", \"", 3);
    }
    sub_2254180(&v141, v10);
    v96 = *(_QWORD *)(v10 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v10 + 24) - v96) > 2 )
    {
      *(_BYTE *)(v96 + 2) = 10;
      *(_WORD *)v96 = 10530;
      *(_QWORD *)(v10 + 32) += 3LL;
    }
    else
    {
      sub_227BF10(v10, "\")\n", 3);
    }
    v10 = *a3;
    v11 = *(__m128i **)(*a3 + 32);
    v12 = *(_QWORD *)(*a3 + 24) - (_QWORD)v11;
  }
  v13 = *(_DWORD *)(a1 + 248);
  v14 = "64";
  LOWORD(v145) = 257;
  if ( v13 != 28 )
    v14 = "32";
  v137[0] = "__riscv_xlen";
  v139[0] = v14;
  v140 = 259;
  v138 = 259;
  if ( v12 > 7 )
  {
    v11->m128i_i64[0] = 0x20656E6966656423LL;
    *(_QWORD *)(v10 + 32) += 8LL;
  }
  else
  {
    v10 = sub_227BF10(v10, "#define ", 8);
  }
  sub_2254180(v137, v10);
  v15 = *(_BYTE **)(v10 + 32);
  if ( (unsigned __int64)v15 >= *(_QWORD *)(v10 + 24) )
  {
    v10 = sub_227BA10(v10, 32);
  }
  else
  {
    *(_QWORD *)(v10 + 32) = v15 + 1;
    *v15 = 32;
  }
  sub_2254180(v139, v10);
  v18 = *(_BYTE **)(v10 + 32);
  if ( (unsigned __int64)v18 >= *(_QWORD *)(v10 + 24) )
  {
    sub_227BA10(v10, 10);
  }
  else
  {
    *(_QWORD *)(v10 + 32) = v18 + 1;
    *v18 = 10;
  }
  if ( (unsigned __int8)v145 > 1u )
  {
    v91 = *a3;
    v92 = *(__m128i **)(*a3 + 32);
    if ( *(_QWORD *)(*a3 + 24) - (_QWORD)v92 > 0x18u )
    {
      v124 = _mm_load_si128((const __m128i *)&xmmword_23A9650);
      v92[1].m128i_i8[8] = 40;
      v92[1].m128i_i64[0] = 0x6465746163657270LL;
      *v92 = v124;
      *(_QWORD *)(v91 + 32) += 25LL;
    }
    else
    {
      v91 = sub_227BF10(*a3, "#pragma clang deprecated(", 25);
    }
    sub_2254180(v137, v91);
    v93 = *(_QWORD *)(v91 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v91 + 24) - v93) > 2 )
    {
      *(_BYTE *)(v93 + 2) = 34;
      *(_WORD *)v93 = 8236;
      *(_QWORD *)(v91 + 32) += 3LL;
    }
    else
    {
      v91 = sub_227BF10(v91, ", \"", 3);
    }
    sub_2254180(&v141, v91);
    v94 = *(_QWORD *)(v91 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v91 + 24) - v94) > 2 )
    {
      *(_BYTE *)(v94 + 2) = 10;
      *(_WORD *)v94 = 10530;
      *(_QWORD *)(v91 + 32) += 3LL;
    }
    else
    {
      sub_227BF10(v91, "\")\n", 3);
    }
  }
  v19 = *(_QWORD *)(a1 + 208);
  v20 = *(_QWORD *)(v19 + 368);
  v21 = *(_QWORD *)(v19 + 376);
  v22 = *(_DWORD **)(a1 + 576);
  v130 = v22[1];
  v131 = v22[2];
  v132 = v22[3];
  v133 = v22[4];
  if ( v21 == 7 )
  {
    if ( *(_DWORD *)v20 != 1634100580 || *(_WORD *)(v20 + 4) != 27765 || *(_BYTE *)(v20 + 6) != 116 )
      goto LABEL_19;
  }
  else
  {
    if ( v21 != 5 )
    {
      if ( v21 != 6 || *(_DWORD *)v20 != 1768187245 || *(_WORD *)(v20 + 4) != 28021 )
        goto LABEL_19;
      v16 = 259;
      v139[0] = "1";
      v44 = "__riscv_cmodel_medany";
      LOWORD(v145) = 257;
      v140 = 259;
      goto LABEL_188;
    }
    if ( *(_DWORD *)v20 != 1818324339 || *(_BYTE *)(v20 + 4) != 108 )
    {
      if ( *(_DWORD *)v20 != 1735549292 || *(_BYTE *)(v20 + 4) != 101 )
        goto LABEL_19;
      v17 = 257;
      v139[0] = "1";
      v44 = "__riscv_cmodel_large";
      LOWORD(v145) = 257;
      v140 = 259;
      goto LABEL_188;
    }
  }
  LOWORD(v145) = 257;
  v140 = 259;
  v139[0] = "1";
  v44 = "__riscv_cmodel_medlow";
LABEL_188:
  v137[0] = v44;
  v138 = 259;
  sub_1039E30(a3, (__int64)v137, (__int64)v139, v20, v16, v17, v141, v142, v143, v144, v145);
LABEL_19:
  v23 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 448LL);
  if ( v23 == sub_1033CB0 )
  {
    v24 = *(_QWORD *)(a1 + 512);
    v25 = *(_QWORD *)(a1 + 520);
  }
  else
  {
    v24 = v23(a1);
    v25 = v121;
  }
  if ( v25 != 6 )
  {
    if ( v25 == 5 )
    {
      if ( *(_DWORD *)v24 == 875982956 && *(_BYTE *)(v24 + 4) == 102 )
        goto LABEL_180;
      if ( *(_DWORD *)v24 == 875982956 && *(_BYTE *)(v24 + 4) == 100 )
      {
LABEL_25:
        LOWORD(v145) = 257;
        v139[0] = "1";
        v140 = 259;
        v26 = "__riscv_float_abi_double";
        goto LABEL_26;
      }
    }
LABEL_58:
    LOWORD(v145) = 257;
    v139[0] = "1";
    v140 = 259;
    v26 = "__riscv_float_abi_soft";
    goto LABEL_26;
  }
  if ( *(_DWORD *)v24 != 863005801 || *(_WORD *)(v24 + 4) != 26162 )
  {
    if ( *(_DWORD *)v24 == 863005801 && *(_WORD *)(v24 + 4) == 25650 )
      goto LABEL_25;
    goto LABEL_58;
  }
LABEL_180:
  v20 = 259;
  v139[0] = "1";
  v26 = "__riscv_float_abi_single";
  LOWORD(v145) = 257;
  v140 = 259;
LABEL_26:
  v137[0] = v26;
  v138 = 259;
  sub_1039E30(a3, (__int64)v137, (__int64)v139, v20, v16, v17, v141, v142, v143, v144, v145);
  if ( v25 == 6 )
  {
    if ( *(_DWORD *)v24 != 863005801 || *(_WORD *)(v24 + 4) != 25906 )
      goto LABEL_28;
  }
  else if ( v25 != 5 || *(_DWORD *)v24 != 875982956 || *(_BYTE *)(v24 + 4) != 101 )
  {
    goto LABEL_28;
  }
  v139[0] = "1";
  v137[0] = "__riscv_abi_rve";
  LOWORD(v145) = 257;
  v140 = 259;
  v138 = 259;
  sub_1039E30(a3, (__int64)v137, (__int64)v139, v27, v28, v29, v141, v142, v143, v144, 1u);
LABEL_28:
  v30 = *a3;
  v139[0] = "1";
  v137[0] = "__riscv_arch_test";
  v31 = *(_QWORD **)(v30 + 32);
  v140 = 259;
  v32 = *(_QWORD *)(v30 + 24);
  v138 = 259;
  LOWORD(v145) = 257;
  if ( (unsigned __int64)(v32 - (_QWORD)v31) > 7 )
  {
    *v31 = 0x20656E6966656423LL;
    *(_QWORD *)(v30 + 32) += 8LL;
  }
  else
  {
    v30 = sub_227BF10(v30, "#define ", 8);
  }
  sub_2254180(v137, v30);
  v33 = *(_BYTE **)(v30 + 32);
  if ( (unsigned __int64)v33 >= *(_QWORD *)(v30 + 24) )
  {
    v30 = sub_227BA10(v30, 32);
  }
  else
  {
    *(_QWORD *)(v30 + 32) = v33 + 1;
    *v33 = 32;
  }
  sub_2254180(v139, v30);
  v34 = *(_BYTE **)(v30 + 32);
  if ( (unsigned __int64)v34 >= *(_QWORD *)(v30 + 24) )
  {
    sub_227BA10(v30, 10);
  }
  else
  {
    *(_QWORD *)(v30 + 32) = v34 + 1;
    *v34 = 10;
  }
  if ( (unsigned __int8)v145 > 1u )
  {
    v117 = *a3;
    v118 = *(__m128i **)(*a3 + 32);
    if ( *(_QWORD *)(*a3 + 24) - (_QWORD)v118 > 0x18u )
    {
      v125 = _mm_load_si128((const __m128i *)&xmmword_23A9650);
      v118[1].m128i_i8[8] = 40;
      v118[1].m128i_i64[0] = 0x6465746163657270LL;
      *v118 = v125;
      *(_QWORD *)(v117 + 32) += 25LL;
    }
    else
    {
      v117 = sub_227BF10(*a3, "#pragma clang deprecated(", 25);
    }
    sub_2254180(v137, v117);
    v119 = *(_QWORD *)(v117 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v117 + 24) - v119) > 2 )
    {
      *(_BYTE *)(v119 + 2) = 34;
      *(_WORD *)v119 = 8236;
      *(_QWORD *)(v117 + 32) += 3LL;
    }
    else
    {
      v117 = sub_227BF10(v117, ", \"", 3);
    }
    sub_2254180(&v141, v117);
    v120 = *(_QWORD *)(v117 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v117 + 24) - v120) > 2 )
    {
      *(_BYTE *)(v120 + 2) = 10;
      *(_WORD *)v120 = 10530;
      *(_QWORD *)(v117 + 32) += 3LL;
    }
    else
    {
      sub_227BF10(v117, "\")\n", 3);
    }
  }
  v35 = *(_QWORD *)(a1 + 576);
  v36 = *(_QWORD *)(v35 + 48);
  if ( v35 + 32 != v36 )
  {
    do
    {
      v134 = v136;
      sub_10A4EC0(&v134, *(_BYTE **)(v36 + 32), *(_QWORD *)(v36 + 32) + *(_QWORD *)(v36 + 40));
      v40 = 1000 * *(_DWORD *)(v36 + 68);
      v37 = *a3;
      v41 = 1000000 * *(_DWORD *)(v36 + 64);
      v138 = 1283;
      v42 = *(_QWORD **)(v37 + 32);
      LOWORD(v145) = 257;
      LODWORD(v139[0]) = v40 + v41;
      v137[0] = "__riscv_";
      v140 = 265;
      v43 = *(_QWORD *)(v37 + 24);
      v137[2] = v134;
      v137[3] = v135;
      if ( (unsigned __int64)(v43 - (_QWORD)v42) <= 7 )
      {
        v37 = sub_227BF10(v37, "#define ", 8);
      }
      else
      {
        *v42 = 0x20656E6966656423LL;
        *(_QWORD *)(v37 + 32) += 8LL;
      }
      sub_2254180(v137, v37);
      v38 = *(_BYTE **)(v37 + 32);
      if ( (unsigned __int64)v38 >= *(_QWORD *)(v37 + 24) )
      {
        v37 = sub_227BA10(v37, 32);
      }
      else
      {
        *(_QWORD *)(v37 + 32) = v38 + 1;
        *v38 = 32;
      }
      sub_2254180(v139, v37);
      v39 = *(_BYTE **)(v37 + 32);
      if ( (unsigned __int64)v39 >= *(_QWORD *)(v37 + 24) )
      {
        sub_227BA10(v37, 10);
      }
      else
      {
        *(_QWORD *)(v37 + 32) = v39 + 1;
        *v39 = 10;
      }
      if ( (unsigned __int8)v145 > 1u )
      {
        v45 = *a3;
        v46 = *(__m128i **)(*a3 + 32);
        if ( *(_QWORD *)(*a3 + 24) - (_QWORD)v46 > 0x18u )
        {
          v85 = _mm_load_si128((const __m128i *)&xmmword_23A9650);
          v46[1].m128i_i8[8] = 40;
          v46[1].m128i_i64[0] = 0x6465746163657270LL;
          *v46 = v85;
          *(_QWORD *)(v45 + 32) += 25LL;
        }
        else
        {
          v45 = sub_227BF10(*a3, "#pragma clang deprecated(", 25);
        }
        sub_2254180(v137, v45);
        v47 = *(_QWORD *)(v45 + 32);
        if ( (unsigned __int64)(*(_QWORD *)(v45 + 24) - v47) > 2 )
        {
          *(_BYTE *)(v47 + 2) = 34;
          *(_WORD *)v47 = 8236;
          *(_QWORD *)(v45 + 32) += 3LL;
        }
        else
        {
          v45 = sub_227BF10(v45, ", \"", 3);
        }
        sub_2254180(&v141, v45);
        v48 = *(_QWORD *)(v45 + 32);
        if ( (unsigned __int64)(*(_QWORD *)(v45 + 24) - v48) > 2 )
        {
          *(_BYTE *)(v48 + 2) = 10;
          *(_WORD *)v48 = 10530;
          *(_QWORD *)(v45 + 32) += 3LL;
        }
        else
        {
          sub_227BF10(v45, "\")\n", 3);
        }
      }
      if ( v134 != v136 )
        operator delete(v134);
      v36 = std::_Rb_tree_increment(v36);
    }
    while ( v35 + 32 != v36 );
    v35 = *(_QWORD *)(a1 + 576);
  }
  if ( (unsigned __int8)sub_22A9F40(v35, "zmmul", 5) )
  {
    v139[0] = "1";
    v140 = 259;
    v137[0] = "__riscv_mul";
    LOWORD(v145) = 257;
    v138 = 259;
    sub_1039E30(a3, (__int64)v137, (__int64)v139, v49, v50, v51, v141, v142, v143, v144, 1u);
  }
  if ( (unsigned __int8)sub_22A9F40(*(_QWORD *)(a1 + 576), "m", 1) )
  {
    LOWORD(v145) = 257;
    v139[0] = "1";
    v140 = 259;
    v137[0] = "__riscv_div";
    v138 = 259;
    sub_1039E30(a3, (__int64)v137, (__int64)v139, v52, 259, 259, v141, v142, v143, v144, 1u);
    v139[0] = "1";
    v138 = 259;
    LOWORD(v145) = 257;
    v140 = 259;
    v137[0] = "__riscv_muldiv";
    sub_1039E30(a3, (__int64)v137, (__int64)v139, v114, v115, v116, v141, v142, v143, v144, 1u);
  }
  if ( (unsigned __int8)sub_22A9F40(*(_QWORD *)(a1 + 576), "a", 1) )
  {
    LOWORD(v145) = 257;
    v140 = 259;
    v137[0] = "__riscv_atomic";
    v139[0] = "1";
    v138 = 259;
    sub_1039E30(a3, (__int64)v137, (__int64)v139, v53, v54, v55, v141, v142, v143, v144, 1u);
    LOWORD(v145) = 257;
    v140 = 259;
    v137[0] = "__GCC_HAVE_SYNC_COMPARE_AND_SWAP_1";
    v138 = 259;
    v139[0] = "1";
    sub_1039E30(a3, (__int64)v137, (__int64)v139, v106, v107, v108, v141, v142, v143, v144, 1u);
    LOWORD(v145) = 257;
    v140 = 259;
    v137[0] = "__GCC_HAVE_SYNC_COMPARE_AND_SWAP_2";
    v138 = 259;
    v139[0] = "1";
    sub_1039E30(a3, (__int64)v137, (__int64)v139, v109, v110, v111, v141, v142, v143, v144, 1u);
    LOWORD(v145) = 257;
    v138 = 259;
    v139[0] = "1";
    v140 = 259;
    v137[0] = "__GCC_HAVE_SYNC_COMPARE_AND_SWAP_4";
    sub_1039E30(a3, (__int64)v137, (__int64)v139, 259, v112, v113, v141, v142, v143, v144, 1u);
    if ( v13 == 28 )
    {
      v137[0] = "__GCC_HAVE_SYNC_COMPARE_AND_SWAP_8";
      LOWORD(v145) = 257;
      v139[0] = "1";
      v140 = 259;
      v138 = 259;
      sub_1039E30(a3, (__int64)v137, (__int64)v139, v53, 259, 259, v141, v142, v143, v144, 1u);
    }
  }
  if ( v130 )
  {
    v138 = 265;
    LOWORD(v145) = 257;
    LODWORD(v137[0]) = v130;
    v139[0] = "__riscv_flen";
    v140 = 259;
    sub_1039E30(a3, (__int64)v139, (__int64)v137, v53, v54, v55, v141, v142, v143, v144, 1u);
    LOWORD(v145) = 257;
    v140 = 259;
    v137[0] = "__riscv_fdiv";
    v138 = 259;
    v139[0] = "1";
    sub_1039E30(a3, (__int64)v137, (__int64)v139, v101, v102, v103, v141, v142, v143, v144, 1u);
    LOWORD(v145) = 257;
    v140 = 259;
    v139[0] = "1";
    v137[0] = "__riscv_fsqrt";
    v138 = 259;
    sub_1039E30(a3, (__int64)v137, (__int64)v139, 259, v104, v105, v141, v142, v143, v144, 1u);
  }
  if ( v131 )
  {
    LOWORD(v145) = 257;
    v140 = 259;
    LODWORD(v137[0]) = v131;
    v138 = 265;
    v139[0] = "__riscv_v_min_vlen";
    sub_1039E30(a3, (__int64)v139, (__int64)v137, 259, v54, v55, v141, v142, v143, v144, 1u);
    v140 = 259;
    LODWORD(v137[0]) = v132;
    LOWORD(v145) = 257;
    v138 = 265;
    v139[0] = "__riscv_v_elen";
    sub_1039E30(a3, (__int64)v139, (__int64)v137, v97, 259, v98, v141, v142, v143, v144, 1u);
    LODWORD(v137[0]) = v133;
    LOWORD(v145) = 257;
    v138 = 265;
    v139[0] = "__riscv_v_elen_fp";
    v140 = 259;
    sub_1039E30(a3, (__int64)v139, (__int64)v137, v99, v100, 257, v141, v142, v143, v144, 1u);
  }
  if ( (unsigned __int8)sub_22A9F40(*(_QWORD *)(a1 + 576), "c", 1) )
  {
    LOWORD(v145) = 257;
    v139[0] = "1";
    v140 = 259;
    v137[0] = "__riscv_compressed";
    v138 = 259;
    sub_1039E30(a3, (__int64)v137, (__int64)v139, v56, v57, v58, v141, v142, v143, v144, 1u);
  }
  if ( (unsigned __int8)sub_22A9F40(*(_QWORD *)(a1 + 576), "zve32x", 6) )
  {
    v139[0] = "1";
    v140 = 259;
    v137[0] = "__riscv_vector";
    LOWORD(v145) = 257;
    v138 = 259;
    sub_1039E30(a3, (__int64)v137, (__int64)v139, v59, v60, v61, v141, v142, v143, v144, 1u);
  }
  LOWORD(v145) = 257;
  v62 = *a3;
  v139[0] = "__riscv_v_intrinsic";
  v63 = *(_QWORD **)(v62 + 32);
  v64 = *(_QWORD *)(v62 + 24);
  v138 = 265;
  LODWORD(v137[0]) = 1000000;
  v140 = 259;
  if ( (unsigned __int64)(v64 - (_QWORD)v63) > 7 )
  {
    *v63 = 0x20656E6966656423LL;
    *(_QWORD *)(v62 + 32) += 8LL;
  }
  else
  {
    v62 = sub_227BF10(v62, "#define ", 8);
  }
  sub_2254180(v139, v62);
  v65 = *(_BYTE **)(v62 + 32);
  if ( (unsigned __int64)v65 >= *(_QWORD *)(v62 + 24) )
  {
    v62 = sub_227BA10(v62, 32);
  }
  else
  {
    *(_QWORD *)(v62 + 32) = v65 + 1;
    *v65 = 32;
  }
  sub_2254180(v137, v62);
  v68 = *(_BYTE **)(v62 + 32);
  if ( (unsigned __int64)v68 >= *(_QWORD *)(v62 + 24) )
  {
    sub_227BA10(v62, 10);
  }
  else
  {
    *(_QWORD *)(v62 + 32) = v68 + 1;
    *v68 = 10;
  }
  if ( (unsigned __int8)v145 > 1u )
  {
    v87 = *a3;
    v88 = *(__m128i **)(*a3 + 32);
    if ( *(_QWORD *)(*a3 + 24) - (_QWORD)v88 > 0x18u )
    {
      v122 = _mm_load_si128((const __m128i *)&xmmword_23A9650);
      v88[1].m128i_i8[8] = 40;
      v88[1].m128i_i64[0] = 0x6465746163657270LL;
      *v88 = v122;
      *(_QWORD *)(v87 + 32) += 25LL;
    }
    else
    {
      v87 = sub_227BF10(*a3, "#pragma clang deprecated(", 25);
    }
    sub_2254180(v139, v87);
    v89 = *(_QWORD *)(v87 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v87 + 24) - v89) > 2 )
    {
      *(_BYTE *)(v89 + 2) = 34;
      *(_WORD *)v89 = 8236;
      *(_QWORD *)(v87 + 32) += 3LL;
    }
    else
    {
      v87 = sub_227BF10(v87, ", \"", 3);
    }
    sub_2254180(&v141, v87);
    v90 = *(_QWORD *)(v87 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v87 + 24) - v90) > 2 )
    {
      v66 = 10530;
      *(_BYTE *)(v90 + 2) = 10;
      *(_WORD *)v90 = 10530;
      *(_QWORD *)(v87 + 32) += 3LL;
    }
    else
    {
      sub_227BF10(v87, "\")\n", 3);
    }
  }
  v69 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 280LL);
  if ( v69 != sub_10A4A60 )
  {
    v127 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD))v69)(a1, a2, 0, 0);
    v70 = (unsigned int)v127;
    v134 = (void *)v127;
    v72 = HIDWORD(v127);
    LODWORD(v135) = v128;
    v86 = ((_DWORD)v70 != 0) & v128;
    goto LABEL_120;
  }
  v70 = *(_DWORD *)(*(_QWORD *)(a1 + 576) + 8LL) >> 6;
  if ( !*(_QWORD *)(a2 + 176) )
  {
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 576) + 8LL) <= 0x3Fu )
      goto LABEL_97;
    LODWORD(v72) = 1024;
    v86 = (_DWORD)v70 != 0;
LABEL_120:
    if ( !v86 )
      goto LABEL_97;
    goto LABEL_95;
  }
  v71 = *(_DWORD *)(a2 + 176);
  if ( (unsigned int)v70 < v71 )
    v70 = v71;
  LODWORD(v72) = *(_DWORD *)(a2 + 180);
  if ( (_DWORD)v72 && (unsigned int)v72 < (unsigned int)v70 )
    LODWORD(v72) = v70;
  if ( !(_DWORD)v70 )
    v70 = 1;
LABEL_95:
  if ( (_DWORD)v70 == (_DWORD)v72 )
  {
    v126 = (unsigned int)((_DWORD)v70 << 6);
    LOWORD(v145) = 257;
    v138 = 265;
    v140 = 259;
    LODWORD(v137[0]) = v126;
    v139[0] = "__riscv_v_fixed_vlen";
    sub_1039E30(a3, (__int64)v139, (__int64)v137, v126, v66, v67, v141, v142, v143, v144, 1u);
  }
LABEL_97:
  v73 = *(_BYTE *)(a1 + 584) == 0;
  LOWORD(v145) = 257;
  v139[0] = "1";
  v140 = 259;
  if ( v73 )
    v74 = "__riscv_misaligned_avoid";
  else
    v74 = "__riscv_misaligned_fast";
  v137[0] = v74;
  v138 = 259;
  sub_1039E30(a3, (__int64)v137, (__int64)v139, v70, v66, v67, v141, v142, v143, v144, v145);
  if ( (unsigned __int8)sub_22A9F40(*(_QWORD *)(a1 + 576), "e", 1) )
  {
    LOWORD(v145) = 257;
    v139[0] = "1";
    v140 = 259;
    if ( v13 == 28 )
      v78 = "__riscv_64e";
    else
      v78 = "__riscv_32e";
    v137[0] = v78;
    v138 = 259;
    sub_1039E30(a3, (__int64)v137, (__int64)v139, v75, v76, v77, v141, v142, v143, v144, v145);
  }
  result = (_BYTE *)*(unsigned __int8 *)(a2 + 108);
  if ( ((unsigned __int8)result & 2) != 0 )
  {
    if ( (unsigned __int8)sub_22A9F40(*(_QWORD *)(a1 + 576), "zicfiss", 7) )
    {
      v139[0] = "1";
      LOWORD(v145) = 257;
      v140 = 259;
      v137[0] = "__riscv_shadow_stack";
      v138 = 259;
      sub_1039E30(a3, (__int64)v137, (__int64)v139, v75, v76, v77, v141, v142, v143, v144, 1u);
    }
    result = (_BYTE *)*(unsigned __int8 *)(a2 + 108);
  }
  if ( ((unsigned __int8)result & 1) != 0 )
  {
    v80 = *(_BYTE *)(a2 + 208) >> 2;
    v81 = v80 & 3;
    if ( (v80 & 3) == 0 )
    {
      v82 = *(__int64 (**)())(*(_QWORD *)a1 + 800LL);
      if ( v82 == sub_1033D90 )
      {
        v83 = 259;
        LOWORD(v145) = 257;
        v140 = 259;
        v139[0] = "1";
        v84 = "__riscv_landing_pad";
LABEL_108:
        v137[0] = v84;
        v138 = 259;
        return sub_1039E30(a3, (__int64)v137, (__int64)v139, v83, v76, v77, v141, v142, v143, v144, v145);
      }
      v81 = ((__int64 (__fastcall *)(__int64))v82)(a1);
    }
    v139[0] = "1";
    LOWORD(v145) = 257;
    v140 = 259;
    v137[0] = "__riscv_landing_pad";
    v138 = 259;
    result = sub_1039E30(a3, (__int64)v137, (__int64)v139, v75, 257, 259, v141, v142, v143, v144, 1u);
    if ( v81 == 1 )
    {
      v139[0] = "1";
      v84 = "__riscv_landing_pad_unlabeled";
      LOWORD(v145) = 257;
      v140 = 259;
      goto LABEL_108;
    }
  }
  return result;
}
