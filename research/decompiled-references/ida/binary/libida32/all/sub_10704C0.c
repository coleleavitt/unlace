_BYTE *__fastcall sub_10704C0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v6; // eax
  __int64 v7; // rbx
  _QWORD *v8; // rcx
  unsigned __int64 v9; // rdx
  const char *v10; // rax
  _BYTE *v11; // rax
  _BYTE *v12; // rax
  unsigned int v13; // eax
  __int64 v14; // rbx
  __int64 v15; // rdx
  unsigned __int64 v16; // rax
  _BYTE *v17; // rax
  _BYTE *v18; // rax
  __int64 v19; // rbx
  __m128i *v20; // rdx
  unsigned __int64 v21; // rax
  _BYTE *v22; // rax
  _BYTE *v23; // rax
  _BYTE *v24; // rax
  _BYTE *result; // rax
  __int64 v26; // rbx
  _QWORD *v27; // rdx
  __int64 v28; // rax
  _BYTE *v29; // rax
  _BYTE *v30; // rax
  __int64 v31; // rbx
  __m128i *v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rdx
  _BYTE *v37; // rax
  _BYTE *v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rbx
  _QWORD *v42; // rdx
  _BYTE *v43; // rax
  _BYTE *v44; // rax
  __int64 v45; // rbx
  __m128i *v46; // rdx
  __int64 v47; // rdx
  __int64 v48; // rdx
  __int64 v49; // rbx
  __m128i *v50; // rdx
  __int64 v51; // rdx
  __int64 v52; // rdx
  _BYTE *v53; // rax
  _BYTE *v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rdx
  __int64 v57; // rbx
  unsigned int v58; // kr00_4
  __int64 v59; // rax
  _QWORD *v60; // rdx
  _BYTE *v61; // rax
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  _BYTE *v65; // rax
  __int64 v66; // rbx
  _QWORD *v67; // rdx
  _BYTE *v68; // rax
  _BYTE *v69; // rax
  __int64 v70; // rbx
  __m128i *v71; // rdx
  unsigned __int64 v72; // rax
  _BYTE *v73; // rax
  _BYTE *v74; // rax
  unsigned int v75; // eax
  char v76; // dl
  const char *v77; // rax
  __int64 v78; // rbx
  _QWORD *v79; // rdx
  __int64 v80; // rax
  _BYTE *v81; // rax
  _BYTE *v82; // rax
  __int64 v83; // rbx
  __m128i *v84; // rdx
  __int64 v85; // rdx
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // r9
  __int64 v89; // rcx
  __int64 v90; // r8
  __int64 v91; // rcx
  __int64 v92; // r8
  __int64 v93; // r9
  __int64 v94; // rbx
  __m128i *v95; // rdx
  __int64 v96; // rdx
  __int64 v97; // rdx
  __int64 v98; // rdx
  __int64 v99; // rdx
  __m128i v100; // xmm0
  __m128i v101; // xmm0
  __m128i v102; // xmm0
  __int64 v103; // rbx
  __m128i *v104; // rdx
  __int64 v105; // rdx
  __int64 v106; // rdx
  __int64 v107; // rbx
  __m128i *v108; // rdx
  __int64 v109; // rdx
  __int64 v110; // rdx
  __int64 v111; // rdx
  __int64 v112; // rdx
  __m128i v113; // xmm0
  __m128i v114; // xmm0
  __m128i v115; // xmm0
  __m128i si128; // xmm0
  __m128i v117; // xmm0
  __m128i v118; // xmm0
  __m128i v119; // xmm0
  __m128i v120; // xmm0
  __m128i v121; // xmm0
  _QWORD v122[4]; // [rsp+0h] [rbp-B8h] BYREF
  __int16 v123; // [rsp+20h] [rbp-98h]
  _QWORD v124[4]; // [rsp+30h] [rbp-88h] BYREF
  __int16 v125; // [rsp+50h] [rbp-68h]
  __int64 v126; // [rsp+60h] [rbp-58h] BYREF
  __int64 v127; // [rsp+68h] [rbp-50h]
  __int64 v128; // [rsp+70h] [rbp-48h]
  __int64 v129; // [rsp+78h] [rbp-40h]
  __int64 v130; // [rsp+80h] [rbp-38h]

  if ( (*(_BYTE *)(a1 + 1) & 8) == 0 )
    goto LABEL_2;
  if ( (*(_BYTE *)(a1 + 14) & 0x10) != 0 )
  {
    v124[0] = "1";
    v122[0] = "_CPPRTTI";
    LOWORD(v130) = 257;
    v125 = 259;
    v123 = 259;
    sub_10160F0(a2, (__int64)v122, (__int64)v124, a4, a5, a6, v126, v127, v128, v129, 1u);
  }
  if ( (*(_BYTE *)(a1 + 13) & 0x20) != 0 )
  {
    v124[0] = "1";
    LOWORD(v130) = 257;
    v125 = 259;
    v122[0] = "_CPPUNWIND";
    v123 = 259;
    sub_10160F0(a2, (__int64)v122, (__int64)v124, a4, a5, a6, v126, v127, v128, v129, 1u);
    if ( (*(_BYTE *)(a1 + 3) & 4) == 0 )
      goto LABEL_3;
  }
  else
  {
LABEL_2:
    if ( (*(_BYTE *)(a1 + 3) & 4) == 0 )
      goto LABEL_3;
  }
  v26 = *a2;
  v124[0] = "1";
  v122[0] = "__BOOL_DEFINED";
  v27 = *(_QWORD **)(v26 + 32);
  v28 = *(_QWORD *)(v26 + 24);
  v125 = 259;
  v123 = 259;
  LOWORD(v130) = 257;
  if ( (unsigned __int64)(v28 - (_QWORD)v27) > 7 )
  {
    *v27 = 0x20656E6966656423LL;
    *(_QWORD *)(v26 + 32) += 8LL;
  }
  else
  {
    v26 = sub_22581D0(v26, "#define ", 8);
  }
  sub_2230440(v122, v26);
  v29 = *(_BYTE **)(v26 + 32);
  if ( (unsigned __int64)v29 >= *(_QWORD *)(v26 + 24) )
  {
    v26 = sub_2257CD0(v26, 32);
  }
  else
  {
    *(_QWORD *)(v26 + 32) = v29 + 1;
    *v29 = 32;
  }
  sub_2230440(v124, v26);
  v30 = *(_BYTE **)(v26 + 32);
  if ( (unsigned __int64)v30 >= *(_QWORD *)(v26 + 24) )
  {
    sub_2257CD0(v26, 10);
  }
  else
  {
    *(_QWORD *)(v26 + 32) = v30 + 1;
    *v30 = 10;
  }
  if ( (unsigned __int8)v130 > 1u )
  {
    v31 = *a2;
    v32 = *(__m128i **)(*a2 + 32);
    if ( *(_QWORD *)(*a2 + 24) - (_QWORD)v32 > 0x18u )
    {
      si128 = _mm_load_si128((const __m128i *)&xmmword_2385620);
      v32[1].m128i_i8[8] = 40;
      v32[1].m128i_i64[0] = 0x6465746163657270LL;
      *v32 = si128;
      *(_QWORD *)(v31 + 32) += 25LL;
    }
    else
    {
      v31 = sub_22581D0(*a2, "#pragma clang deprecated(", 25);
    }
    sub_2230440(v122, v31);
    v33 = *(_QWORD *)(v31 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v31 + 24) - v33) > 2 )
    {
      *(_BYTE *)(v33 + 2) = 34;
      *(_WORD *)v33 = 8236;
      *(_QWORD *)(v31 + 32) += 3LL;
    }
    else
    {
      v31 = sub_22581D0(v31, ", \"", 3);
    }
    sub_2230440(&v126, v31);
    v34 = *(_QWORD *)(v31 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v31 + 24) - v34) > 2 )
    {
      a4 = 10530;
      *(_BYTE *)(v34 + 2) = 10;
      *(_WORD *)v34 = 10530;
      *(_QWORD *)(v31 + 32) += 3LL;
    }
    else
    {
      sub_22581D0(v31, "\")\n", 3);
    }
  }
LABEL_3:
  if ( (*(_BYTE *)(a1 + 46) & 0x40) == 0 )
  {
    LOWORD(v130) = 257;
    v124[0] = "1";
    v125 = 259;
    v123 = 259;
    v122[0] = "_CHAR_UNSIGNED";
    sub_10160F0(a2, (__int64)v122, (__int64)v124, a4, a5, a6, v126, v127, v128, v129, 1u);
  }
  if ( (*(_WORD *)(a1 + 206) & 0x180) != 0 )
  {
    v41 = *a2;
    v124[0] = "1";
    v125 = 259;
    v42 = *(_QWORD **)(v41 + 32);
    v122[0] = "_M_FP_CONTRACT";
    v123 = 259;
    LOWORD(v130) = 257;
    if ( *(_QWORD *)(v41 + 24) - (_QWORD)v42 > 7u )
    {
      *v42 = 0x20656E6966656423LL;
      *(_QWORD *)(v41 + 32) += 8LL;
    }
    else
    {
      v41 = sub_22581D0(v41, "#define ", 8);
    }
    sub_2230440(v122, v41);
    v43 = *(_BYTE **)(v41 + 32);
    if ( (unsigned __int64)v43 >= *(_QWORD *)(v41 + 24) )
    {
      v41 = sub_2257CD0(v41, 32);
    }
    else
    {
      *(_QWORD *)(v41 + 32) = v43 + 1;
      *v43 = 32;
    }
    sub_2230440(v124, v41);
    v44 = *(_BYTE **)(v41 + 32);
    if ( (unsigned __int64)v44 >= *(_QWORD *)(v41 + 24) )
    {
      sub_2257CD0(v41, 10);
    }
    else
    {
      *(_QWORD *)(v41 + 32) = v44 + 1;
      *v44 = 10;
    }
    if ( (unsigned __int8)v130 > 1u )
    {
      v45 = *a2;
      v46 = *(__m128i **)(*a2 + 32);
      if ( *(_QWORD *)(*a2 + 24) - (_QWORD)v46 > 0x18u )
      {
        v117 = _mm_load_si128((const __m128i *)&xmmword_2385620);
        v46[1].m128i_i8[8] = 40;
        v46[1].m128i_i64[0] = 0x6465746163657270LL;
        *v46 = v117;
        *(_QWORD *)(v45 + 32) += 25LL;
      }
      else
      {
        v45 = sub_22581D0(*a2, "#pragma clang deprecated(", 25);
      }
      sub_2230440(v122, v45);
      v47 = *(_QWORD *)(v45 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v45 + 24) - v47) > 2 )
      {
        *(_BYTE *)(v47 + 2) = 34;
        *(_WORD *)v47 = 8236;
        *(_QWORD *)(v45 + 32) += 3LL;
      }
      else
      {
        v45 = sub_22581D0(v45, ", \"", 3);
      }
      sub_2230440(&v126, v45);
      v48 = *(_QWORD *)(v45 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v45 + 24) - v48) > 2 )
      {
        *(_BYTE *)(v48 + 2) = 10;
        *(_WORD *)v48 = 10530;
        *(_QWORD *)(v45 + 32) += 3LL;
      }
      else
      {
        sub_22581D0(v45, "\")\n", 3);
      }
    }
  }
  if ( ((*(_BYTE *)(a1 + 207) >> 1) & 3) == 2 )
  {
    v124[0] = "1";
    LOWORD(v130) = 257;
    v125 = 259;
    v122[0] = "_M_FP_EXCEPT";
    v123 = 259;
    sub_10160F0(a2, (__int64)v122, (__int64)v124, a4, 257, 259, v126, v127, v128, v129, 1u);
  }
  v6 = *(_DWORD *)(a1 + 44) & 0xFD800;
  if ( *(char *)(a1 + 106) < 0 )
  {
    if ( !v6 )
    {
      v124[0] = "1";
      v125 = 259;
      v122[0] = "_M_FP_STRICT";
      LOWORD(v130) = 257;
      v123 = 259;
      sub_10160F0(a2, (__int64)v122, (__int64)v124, a4, a5, a6, v126, v127, v128, v129, 1u);
    }
  }
  else
  {
    v7 = *a2;
    v8 = *(_QWORD **)(*a2 + 32);
    v9 = *(_QWORD *)(*a2 + 24) - (_QWORD)v8;
    if ( v6 )
    {
      v124[0] = "1";
      v10 = "_M_FP_FAST";
      v125 = 259;
    }
    else
    {
      v125 = 259;
      v124[0] = "1";
      v10 = "_M_FP_PRECISE";
    }
    v122[0] = v10;
    v123 = 259;
    LOWORD(v130) = 257;
    if ( v9 > 7 )
    {
      *v8 = 0x20656E6966656423LL;
      *(_QWORD *)(v7 + 32) += 8LL;
    }
    else
    {
      v7 = sub_22581D0(v7, "#define ", 8);
    }
    sub_2230440(v122, v7);
    v11 = *(_BYTE **)(v7 + 32);
    if ( (unsigned __int64)v11 >= *(_QWORD *)(v7 + 24) )
    {
      v7 = sub_2257CD0(v7, 32);
    }
    else
    {
      *(_QWORD *)(v7 + 32) = v11 + 1;
      *v11 = 32;
    }
    sub_2230440(v124, v7);
    v12 = *(_BYTE **)(v7 + 32);
    if ( (unsigned __int64)v12 >= *(_QWORD *)(v7 + 24) )
    {
      sub_2257CD0(v7, 10);
    }
    else
    {
      *(_QWORD *)(v7 + 32) = v12 + 1;
      *v12 = 10;
    }
    if ( (unsigned __int8)v130 > 1u )
    {
      v94 = *a2;
      v95 = *(__m128i **)(*a2 + 32);
      if ( *(_QWORD *)(*a2 + 24) - (_QWORD)v95 > 0x18u )
      {
        v102 = _mm_load_si128((const __m128i *)&xmmword_2385620);
        v95[1].m128i_i8[8] = 40;
        v95[1].m128i_i64[0] = 0x6465746163657270LL;
        *v95 = v102;
        *(_QWORD *)(v94 + 32) += 25LL;
      }
      else
      {
        v94 = sub_22581D0(*a2, "#pragma clang deprecated(", 25);
      }
      sub_2230440(v122, v94);
      v96 = *(_QWORD *)(v94 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v94 + 24) - v96) > 2 )
      {
        *(_BYTE *)(v96 + 2) = 34;
        *(_WORD *)v96 = 8236;
        *(_QWORD *)(v94 + 32) += 3LL;
      }
      else
      {
        v94 = sub_22581D0(v94, ", \"", 3);
      }
      sub_2230440(&v126, v94);
      v97 = *(_QWORD *)(v94 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v94 + 24) - v97) > 2 )
      {
        *(_BYTE *)(v97 + 2) = 10;
        *(_WORD *)v97 = 10530;
        *(_QWORD *)(v94 + 32) += 3LL;
      }
      else
      {
        sub_22581D0(v94, "\")\n", 3);
      }
    }
  }
  if ( (*(_BYTE *)(a1 + 20) & 0x20) != 0 )
  {
    v78 = *a2;
    v124[0] = "1";
    v122[0] = "_MT";
    v79 = *(_QWORD **)(v78 + 32);
    v80 = *(_QWORD *)(v78 + 24);
    v125 = 259;
    v123 = 259;
    LOWORD(v130) = 257;
    if ( (unsigned __int64)(v80 - (_QWORD)v79) > 7 )
    {
      *v79 = 0x20656E6966656423LL;
      *(_QWORD *)(v78 + 32) += 8LL;
    }
    else
    {
      v78 = sub_22581D0(v78, "#define ", 8);
    }
    sub_2230440(v122, v78);
    v81 = *(_BYTE **)(v78 + 32);
    if ( (unsigned __int64)v81 >= *(_QWORD *)(v78 + 24) )
    {
      v78 = sub_2257CD0(v78, 32);
    }
    else
    {
      *(_QWORD *)(v78 + 32) = v81 + 1;
      *v81 = 32;
    }
    sub_2230440(v124, v78);
    v82 = *(_BYTE **)(v78 + 32);
    if ( (unsigned __int64)v82 >= *(_QWORD *)(v78 + 24) )
    {
      sub_2257CD0(v78, 10);
    }
    else
    {
      *(_QWORD *)(v78 + 32) = v82 + 1;
      *v82 = 10;
    }
    if ( (unsigned __int8)v130 > 1u )
    {
      v83 = *a2;
      v84 = *(__m128i **)(*a2 + 32);
      if ( *(_QWORD *)(*a2 + 24) - (_QWORD)v84 > 0x18u )
      {
        v114 = _mm_load_si128((const __m128i *)&xmmword_2385620);
        v84[1].m128i_i8[8] = 40;
        v84[1].m128i_i64[0] = 0x6465746163657270LL;
        *v84 = v114;
        *(_QWORD *)(v83 + 32) += 25LL;
      }
      else
      {
        v83 = sub_22581D0(*a2, "#pragma clang deprecated(", 25);
      }
      sub_2230440(v122, v83);
      v85 = *(_QWORD *)(v83 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v83 + 24) - v85) > 2 )
      {
        *(_BYTE *)(v85 + 2) = 34;
        *(_WORD *)v85 = 8236;
        *(_QWORD *)(v83 + 32) += 3LL;
      }
      else
      {
        v83 = sub_22581D0(v83, ", \"", 3);
      }
      sub_2230440(&v126, v83);
      v86 = *(_QWORD *)(v83 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v83 + 24) - v86) > 2 )
      {
        *(_BYTE *)(v86 + 2) = 10;
        *(_WORD *)v86 = 10530;
        *(_QWORD *)(v83 + 32) += 3LL;
      }
      else
      {
        sub_22581D0(v83, "\")\n", 3);
      }
    }
  }
  v13 = *(_DWORD *)(a1 + 152);
  if ( v13 )
  {
    v57 = *a2;
    v123 = 265;
    v58 = v13;
    v125 = 259;
    v124[0] = "_MSC_VER";
    v59 = *(_QWORD *)(v57 + 24);
    LOWORD(v130) = 257;
    LODWORD(v122[0]) = v58 / 0x186A0;
    v60 = *(_QWORD **)(v57 + 32);
    if ( (unsigned __int64)(v59 - (_QWORD)v60) > 7 )
    {
      *v60 = 0x20656E6966656423LL;
      *(_QWORD *)(v57 + 32) += 8LL;
    }
    else
    {
      v57 = sub_22581D0(v57, "#define ", 8);
    }
    sub_2230440(v124, v57);
    v61 = *(_BYTE **)(v57 + 32);
    if ( (unsigned __int64)v61 >= *(_QWORD *)(v57 + 24) )
    {
      v57 = sub_2257CD0(v57, 32);
    }
    else
    {
      *(_QWORD *)(v57 + 32) = v61 + 1;
      *v61 = 32;
    }
    sub_2230440(v122, v57);
    v65 = *(_BYTE **)(v57 + 32);
    if ( (unsigned __int64)v65 >= *(_QWORD *)(v57 + 24) )
    {
      sub_2257CD0(v57, 10);
    }
    else
    {
      *(_QWORD *)(v57 + 32) = v65 + 1;
      *v65 = 10;
    }
    if ( (unsigned __int8)v130 > 1u )
    {
      v107 = *a2;
      v108 = *(__m128i **)(*a2 + 32);
      if ( *(_QWORD *)(*a2 + 24) - (_QWORD)v108 > 0x18u )
      {
        v120 = _mm_load_si128((const __m128i *)&xmmword_2385620);
        v108[1].m128i_i8[8] = 40;
        v108[1].m128i_i64[0] = 0x6465746163657270LL;
        *v108 = v120;
        *(_QWORD *)(v107 + 32) += 25LL;
      }
      else
      {
        v107 = sub_22581D0(*a2, "#pragma clang deprecated(", 25);
      }
      sub_2230440(v124, v107);
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
      sub_2230440(&v126, v107);
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
    LODWORD(v122[0]) = *(_DWORD *)(a1 + 152);
    v124[0] = "_MSC_FULL_VER";
    v125 = 259;
    LOWORD(v130) = 257;
    v123 = 265;
    sub_10160F0(a2, (__int64)v124, (__int64)v122, v62, v63, v64, v126, v127, v128, v129, 1u);
    v66 = *a2;
    LODWORD(v122[0]) = 1;
    v123 = 266;
    v124[0] = "_MSC_BUILD";
    v67 = *(_QWORD **)(v66 + 32);
    v125 = 259;
    LOWORD(v130) = 257;
    if ( *(_QWORD *)(v66 + 24) - (_QWORD)v67 > 7u )
    {
      *v67 = 0x20656E6966656423LL;
      *(_QWORD *)(v66 + 32) += 8LL;
    }
    else
    {
      v66 = sub_22581D0(v66, "#define ", 8);
    }
    sub_2230440(v124, v66);
    v68 = *(_BYTE **)(v66 + 32);
    if ( (unsigned __int64)v68 >= *(_QWORD *)(v66 + 24) )
    {
      v66 = sub_2257CD0(v66, 32);
    }
    else
    {
      *(_QWORD *)(v66 + 32) = v68 + 1;
      *v68 = 32;
    }
    sub_2230440(v122, v66);
    v69 = *(_BYTE **)(v66 + 32);
    if ( (unsigned __int64)v69 >= *(_QWORD *)(v66 + 24) )
    {
      sub_2257CD0(v66, 10);
    }
    else
    {
      *(_QWORD *)(v66 + 32) = v69 + 1;
      *v69 = 10;
    }
    v70 = *a2;
    v71 = *(__m128i **)(*a2 + 32);
    v72 = *(_QWORD *)(*a2 + 24) - (_QWORD)v71;
    if ( (unsigned __int8)v130 > 1u )
    {
      if ( v72 > 0x18 )
      {
        v115 = _mm_load_si128((const __m128i *)&xmmword_2385620);
        v71[1].m128i_i8[8] = 40;
        v71[1].m128i_i64[0] = 0x6465746163657270LL;
        *v71 = v115;
        *(_QWORD *)(v70 + 32) += 25LL;
      }
      else
      {
        v70 = sub_22581D0(*a2, "#pragma clang deprecated(", 25);
      }
      sub_2230440(v124, v70);
      v111 = *(_QWORD *)(v70 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v70 + 24) - v111) > 2 )
      {
        *(_BYTE *)(v111 + 2) = 34;
        *(_WORD *)v111 = 8236;
        *(_QWORD *)(v70 + 32) += 3LL;
      }
      else
      {
        v70 = sub_22581D0(v70, ", \"", 3);
      }
      sub_2230440(&v126, v70);
      v112 = *(_QWORD *)(v70 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v70 + 24) - v112) > 2 )
      {
        *(_BYTE *)(v112 + 2) = 10;
        *(_WORD *)v112 = 10530;
        *(_QWORD *)(v70 + 32) += 3LL;
      }
      else
      {
        sub_22581D0(v70, "\")\n", 3);
      }
      v70 = *a2;
      v71 = *(__m128i **)(*a2 + 32);
      v72 = *(_QWORD *)(*a2 + 24) - (_QWORD)v71;
    }
    LODWORD(v122[0]) = 1;
    v123 = 266;
    v124[0] = "_CRT_USE_BUILTIN_OFFSETOF";
    v125 = 259;
    LOWORD(v130) = 257;
    if ( v72 > 7 )
    {
      v71->m128i_i64[0] = 0x20656E6966656423LL;
      *(_QWORD *)(v70 + 32) += 8LL;
    }
    else
    {
      v70 = sub_22581D0(v70, "#define ", 8);
    }
    sub_2230440(v124, v70);
    v73 = *(_BYTE **)(v70 + 32);
    if ( (unsigned __int64)v73 >= *(_QWORD *)(v70 + 24) )
    {
      v70 = sub_2257CD0(v70, 32);
    }
    else
    {
      *(_QWORD *)(v70 + 32) = v73 + 1;
      *v73 = 32;
    }
    sub_2230440(v122, v70);
    v74 = *(_BYTE **)(v70 + 32);
    if ( (unsigned __int64)v74 >= *(_QWORD *)(v70 + 24) )
    {
      sub_2257CD0(v70, 10);
    }
    else
    {
      *(_QWORD *)(v70 + 32) = v74 + 1;
      *v74 = 10;
    }
    if ( (unsigned __int8)v130 > 1u )
    {
      v103 = *a2;
      v104 = *(__m128i **)(*a2 + 32);
      if ( *(_QWORD *)(*a2 + 24) - (_QWORD)v104 > 0x18u )
      {
        v121 = _mm_load_si128((const __m128i *)&xmmword_2385620);
        v104[1].m128i_i8[8] = 40;
        v104[1].m128i_i64[0] = 0x6465746163657270LL;
        *v104 = v121;
        *(_QWORD *)(v103 + 32) += 25LL;
      }
      else
      {
        v103 = sub_22581D0(*a2, "#pragma clang deprecated(", 25);
      }
      sub_2230440(v124, v103);
      v105 = *(_QWORD *)(v103 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v103 + 24) - v105) > 2 )
      {
        *(_BYTE *)(v105 + 2) = 34;
        *(_WORD *)v105 = 8236;
        *(_QWORD *)(v103 + 32) += 3LL;
      }
      else
      {
        v103 = sub_22581D0(v103, ", \"", 3);
      }
      sub_2230440(&v126, v103);
      v106 = *(_QWORD *)(v103 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v103 + 24) - v106) > 2 )
      {
        *(_BYTE *)(v106 + 2) = 10;
        *(_WORD *)v106 = 10530;
        *(_QWORD *)(v103 + 32) += 3LL;
      }
      else
      {
        sub_22581D0(v103, "\")\n", 3);
      }
    }
    v75 = *(_DWORD *)(a1 + 152);
    if ( (*(_BYTE *)(a1 + 1) & 0x10) != 0 )
    {
      if ( v75 <= 0xB532B7F )
        goto LABEL_20;
      LOWORD(v130) = 257;
      v123 = 266;
      v124[0] = "_HAS_CHAR16_T_LANGUAGE_SUPPORT";
      v125 = 259;
      LODWORD(v122[0]) = 1;
      sub_10160F0(a2, (__int64)v124, (__int64)v122, a4, a5, a6, v126, v127, v128, v129, 1u);
      v75 = *(_DWORD *)(a1 + 152);
    }
    if ( v75 <= 0xB532B7F )
      goto LABEL_20;
    if ( (*(_BYTE *)(a1 + 2) & 2) != 0 )
    {
      LOWORD(v130) = 257;
      v77 = "202400L";
    }
    else if ( (*(_BYTE *)(a1 + 2) & 1) != 0 )
    {
      v77 = "202302L";
      LOWORD(v130) = 257;
    }
    else
    {
      v76 = *(_BYTE *)(a1 + 1);
      if ( v76 < 0 )
      {
        v77 = "202002L";
        LOWORD(v130) = 257;
      }
      else if ( (v76 & 0x40) != 0 )
      {
        v77 = "201703L";
        LOWORD(v130) = 257;
      }
      else
      {
        if ( (*(_BYTE *)(a1 + 1) & 0x20) == 0 )
          goto LABEL_244;
        a6 = 257;
        v77 = "201402L";
        LOWORD(v130) = 257;
      }
    }
    v124[0] = v77;
    v125 = 259;
    v122[0] = "_MSVC_LANG";
    v123 = 259;
    sub_10160F0(a2, (__int64)v122, (__int64)v124, a4, 259, a6, v126, v127, v128, v129, v130);
    v75 = *(_DWORD *)(a1 + 152);
LABEL_244:
    if ( v75 > 0xB85861F )
    {
      v124[0] = "1";
      LOWORD(v130) = 257;
      v123 = 259;
      v125 = 259;
      v122[0] = "_MSVC_CONSTEXPR_ATTRIBUTE";
      sub_10160F0(a2, (__int64)v122, (__int64)v124, 259, a5, a6, v126, v127, v128, v129, 1u);
    }
  }
LABEL_20:
  if ( *(char *)a1 < 0 )
  {
    LOWORD(v130) = 257;
    v125 = 259;
    v122[0] = "_MSC_EXTENSIONS";
    v124[0] = "1";
    v123 = 259;
    sub_10160F0(a2, (__int64)v122, (__int64)v124, a4, a5, a6, v126, v127, v128, v129, 1u);
    if ( (*(_BYTE *)(a1 + 1) & 0x10) != 0 )
    {
      v123 = 259;
      LOWORD(v130) = 257;
      v125 = 259;
      v122[0] = "_RVALUE_REFERENCES_V2_SUPPORTED";
      v124[0] = "1";
      sub_10160F0(a2, (__int64)v122, (__int64)v124, v87, 259, v88, v126, v127, v128, v129, 1u);
      v124[0] = "1";
      v122[0] = "_RVALUE_REFERENCES_SUPPORTED";
      LOWORD(v130) = 257;
      v125 = 259;
      v123 = 259;
      sub_10160F0(a2, (__int64)v122, (__int64)v124, v89, v90, 257, v126, v127, v128, v129, 1u);
      LOWORD(v130) = 257;
      v125 = 259;
      v122[0] = "_NATIVE_NULLPTR_SUPPORTED";
      v124[0] = "1";
      v123 = 259;
      sub_10160F0(a2, (__int64)v122, (__int64)v124, v91, v92, v93, v126, v127, v128, v129, 1u);
    }
  }
  v14 = *a2;
  v15 = *(_QWORD *)(*a2 + 32);
  v16 = *(_QWORD *)(*a2 + 24) - v15;
  if ( (*(_BYTE *)(a1 + 14) & 0x40) == 0 )
  {
    v124[0] = "1";
    v122[0] = "_ISO_VOLATILE";
    v125 = 259;
    v123 = 259;
    LOWORD(v130) = 257;
    if ( v16 > 7 )
    {
      *(_QWORD *)v15 = 0x20656E6966656423LL;
      *(_QWORD *)(v14 + 32) += 8LL;
    }
    else
    {
      v14 = sub_22581D0(v14, "#define ", 8);
    }
    sub_2230440(v122, v14);
    v53 = *(_BYTE **)(v14 + 32);
    if ( (unsigned __int64)v53 >= *(_QWORD *)(v14 + 24) )
    {
      v14 = sub_2257CD0(v14, 32);
    }
    else
    {
      *(_QWORD *)(v14 + 32) = v53 + 1;
      *v53 = 32;
    }
    sub_2230440(v124, v14);
    v54 = *(_BYTE **)(v14 + 32);
    if ( (unsigned __int64)v54 >= *(_QWORD *)(v14 + 24) )
    {
      sub_2257CD0(v14, 10);
    }
    else
    {
      *(_QWORD *)(v14 + 32) = v54 + 1;
      *v54 = 10;
    }
    v14 = *a2;
    v15 = *(_QWORD *)(*a2 + 32);
    v16 = *(_QWORD *)(*a2 + 24) - v15;
    if ( (unsigned __int8)v130 > 1u )
    {
      if ( v16 > 0x18 )
      {
        v119 = _mm_load_si128((const __m128i *)&xmmword_2385620);
        *(_BYTE *)(v15 + 24) = 40;
        *(_QWORD *)(v15 + 16) = 0x6465746163657270LL;
        *(__m128i *)v15 = v119;
        *(_QWORD *)(v14 + 32) += 25LL;
      }
      else
      {
        v14 = sub_22581D0(*a2, "#pragma clang deprecated(", 25);
      }
      sub_2230440(v122, v14);
      v55 = *(_QWORD *)(v14 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v14 + 24) - v55) > 2 )
      {
        *(_BYTE *)(v55 + 2) = 34;
        *(_WORD *)v55 = 8236;
        *(_QWORD *)(v14 + 32) += 3LL;
      }
      else
      {
        v14 = sub_22581D0(v14, ", \"", 3);
      }
      sub_2230440(&v126, v14);
      v56 = *(_QWORD *)(v14 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v14 + 24) - v56) > 2 )
      {
        *(_BYTE *)(v56 + 2) = 10;
        *(_WORD *)v56 = 10530;
        *(_QWORD *)(v14 + 32) += 3LL;
      }
      else
      {
        sub_22581D0(v14, "\")\n", 3);
      }
      v14 = *a2;
      v15 = *(_QWORD *)(*a2 + 32);
      v16 = *(_QWORD *)(*a2 + 24) - v15;
    }
  }
  if ( (*(_BYTE *)a1 & 0x40) != 0 )
  {
    v124[0] = "1";
    v125 = 259;
    v122[0] = "_KERNEL_MODE";
    v123 = 259;
    LOWORD(v130) = 257;
    if ( v16 > 7 )
    {
      *(_QWORD *)v15 = 0x20656E6966656423LL;
      *(_QWORD *)(v14 + 32) += 8LL;
    }
    else
    {
      v14 = sub_22581D0(v14, "#define ", 8);
    }
    sub_2230440(v122, v14);
    v37 = *(_BYTE **)(v14 + 32);
    if ( (unsigned __int64)v37 >= *(_QWORD *)(v14 + 24) )
    {
      v14 = sub_2257CD0(v14, 32);
    }
    else
    {
      *(_QWORD *)(v14 + 32) = v37 + 1;
      *v37 = 32;
    }
    sub_2230440(v124, v14);
    v38 = *(_BYTE **)(v14 + 32);
    if ( (unsigned __int64)v38 >= *(_QWORD *)(v14 + 24) )
    {
      sub_2257CD0(v14, 10);
    }
    else
    {
      *(_QWORD *)(v14 + 32) = v38 + 1;
      *v38 = 10;
    }
    v14 = *a2;
    v15 = *(_QWORD *)(*a2 + 32);
    v16 = *(_QWORD *)(*a2 + 24) - v15;
    if ( (unsigned __int8)v130 > 1u )
    {
      if ( v16 > 0x18 )
      {
        v118 = _mm_load_si128((const __m128i *)&xmmword_2385620);
        *(_BYTE *)(v15 + 24) = 40;
        *(_QWORD *)(v15 + 16) = 0x6465746163657270LL;
        *(__m128i *)v15 = v118;
        *(_QWORD *)(v14 + 32) += 25LL;
      }
      else
      {
        v14 = sub_22581D0(*a2, "#pragma clang deprecated(", 25);
      }
      sub_2230440(v122, v14);
      v39 = *(_QWORD *)(v14 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v14 + 24) - v39) > 2 )
      {
        *(_BYTE *)(v39 + 2) = 34;
        *(_WORD *)v39 = 8236;
        *(_QWORD *)(v14 + 32) += 3LL;
      }
      else
      {
        v14 = sub_22581D0(v14, ", \"", 3);
      }
      sub_2230440(&v126, v14);
      v40 = *(_QWORD *)(v14 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v14 + 24) - v40) > 2 )
      {
        *(_BYTE *)(v40 + 2) = 10;
        *(_WORD *)v40 = 10530;
        *(_QWORD *)(v14 + 32) += 3LL;
      }
      else
      {
        sub_22581D0(v14, "\")\n", 3);
      }
      v14 = *a2;
      v15 = *(_QWORD *)(*a2 + 32);
      v16 = *(_QWORD *)(*a2 + 24) - v15;
    }
  }
  v124[0] = "64";
  v125 = 259;
  v122[0] = "_INTEGRAL_MAX_BITS";
  v123 = 259;
  LOWORD(v130) = 257;
  if ( v16 > 7 )
  {
    *(_QWORD *)v15 = 0x20656E6966656423LL;
    *(_QWORD *)(v14 + 32) += 8LL;
  }
  else
  {
    v14 = sub_22581D0(v14, "#define ", 8);
  }
  sub_2230440(v122, v14);
  v17 = *(_BYTE **)(v14 + 32);
  if ( (unsigned __int64)v17 >= *(_QWORD *)(v14 + 24) )
  {
    v14 = sub_2257CD0(v14, 32);
  }
  else
  {
    *(_QWORD *)(v14 + 32) = v17 + 1;
    *v17 = 32;
  }
  sub_2230440(v124, v14);
  v18 = *(_BYTE **)(v14 + 32);
  if ( (unsigned __int64)v18 >= *(_QWORD *)(v14 + 24) )
  {
    sub_2257CD0(v14, 10);
  }
  else
  {
    *(_QWORD *)(v14 + 32) = v18 + 1;
    *v18 = 10;
  }
  v19 = *a2;
  v20 = *(__m128i **)(*a2 + 32);
  v21 = *(_QWORD *)(*a2 + 24) - (_QWORD)v20;
  if ( (unsigned __int8)v130 > 1u )
  {
    if ( v21 > 0x18 )
    {
      v100 = _mm_load_si128((const __m128i *)&xmmword_2385620);
      v20[1].m128i_i8[8] = 40;
      v20[1].m128i_i64[0] = 0x6465746163657270LL;
      *v20 = v100;
      *(_QWORD *)(v19 + 32) += 25LL;
    }
    else
    {
      v19 = sub_22581D0(*a2, "#pragma clang deprecated(", 25);
    }
    sub_2230440(v122, v19);
    v35 = *(_QWORD *)(v19 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v19 + 24) - v35) > 2 )
    {
      *(_BYTE *)(v35 + 2) = 34;
      *(_WORD *)v35 = 8236;
      *(_QWORD *)(v19 + 32) += 3LL;
    }
    else
    {
      v19 = sub_22581D0(v19, ", \"", 3);
    }
    sub_2230440(&v126, v19);
    v36 = *(_QWORD *)(v19 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v19 + 24) - v36) > 2 )
    {
      *(_BYTE *)(v36 + 2) = 10;
      *(_WORD *)v36 = 10530;
      *(_QWORD *)(v19 + 32) += 3LL;
    }
    else
    {
      sub_22581D0(v19, "\")\n", 3);
    }
    v19 = *a2;
    v20 = *(__m128i **)(*a2 + 32);
    v21 = *(_QWORD *)(*a2 + 24) - (_QWORD)v20;
  }
  if ( *(_DWORD *)(a1 + 152) <= 0xB8EADDFu || (*(_BYTE *)a1 & 2) == 0 )
  {
    v124[0] = "1";
    v122[0] = "__STDC_NO_THREADS__";
    v125 = 259;
    v123 = 259;
    LOWORD(v130) = 257;
    if ( v21 > 7 )
    {
      v20->m128i_i64[0] = 0x20656E6966656423LL;
      *(_QWORD *)(v19 + 32) += 8LL;
    }
    else
    {
      v19 = sub_22581D0(v19, "#define ", 8);
    }
    sub_2230440(v122, v19);
    v22 = *(_BYTE **)(v19 + 32);
    if ( (unsigned __int64)v22 >= *(_QWORD *)(v19 + 24) )
    {
      v19 = sub_2257CD0(v19, 32);
    }
    else
    {
      *(_QWORD *)(v19 + 32) = v22 + 1;
      *v22 = 32;
    }
    sub_2230440(v124, v19);
    v23 = *(_BYTE **)(v19 + 32);
    if ( (unsigned __int64)v23 >= *(_QWORD *)(v19 + 24) )
    {
      sub_2257CD0(v19, 10);
    }
    else
    {
      *(_QWORD *)(v19 + 32) = v23 + 1;
      *v23 = 10;
    }
    v19 = *a2;
    v20 = *(__m128i **)(*a2 + 32);
    v21 = *(_QWORD *)(*a2 + 24) - (_QWORD)v20;
    if ( (unsigned __int8)v130 > 1u )
    {
      if ( v21 > 0x18 )
      {
        v113 = _mm_load_si128((const __m128i *)&xmmword_2385620);
        v20[1].m128i_i8[8] = 40;
        v20[1].m128i_i64[0] = 0x6465746163657270LL;
        *v20 = v113;
        *(_QWORD *)(v19 + 32) += 25LL;
      }
      else
      {
        v19 = sub_22581D0(*a2, "#pragma clang deprecated(", 25);
      }
      sub_2230440(v122, v19);
      v98 = *(_QWORD *)(v19 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v19 + 24) - v98) > 2 )
      {
        *(_BYTE *)(v98 + 2) = 34;
        *(_WORD *)v98 = 8236;
        *(_QWORD *)(v19 + 32) += 3LL;
      }
      else
      {
        v19 = sub_22581D0(v19, ", \"", 3);
      }
      sub_2230440(&v126, v19);
      v99 = *(_QWORD *)(v19 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v19 + 24) - v99) > 2 )
      {
        *(_BYTE *)(v99 + 2) = 10;
        *(_WORD *)v99 = 10530;
        *(_QWORD *)(v19 + 32) += 3LL;
      }
      else
      {
        sub_22581D0(v19, "\")\n", 3);
      }
      v19 = *a2;
      v20 = *(__m128i **)(*a2 + 32);
      v21 = *(_QWORD *)(*a2 + 24) - (_QWORD)v20;
    }
  }
  v124[0] = "65001";
  v125 = 259;
  v122[0] = "_MSVC_EXECUTION_CHARACTER_SET";
  v123 = 259;
  LOWORD(v130) = 257;
  if ( v21 > 7 )
  {
    v20->m128i_i64[0] = 0x20656E6966656423LL;
    *(_QWORD *)(v19 + 32) += 8LL;
  }
  else
  {
    v19 = sub_22581D0(v19, "#define ", 8);
  }
  sub_2230440(v122, v19);
  v24 = *(_BYTE **)(v19 + 32);
  if ( (unsigned __int64)v24 >= *(_QWORD *)(v19 + 24) )
  {
    v19 = sub_2257CD0(v19, 32);
  }
  else
  {
    *(_QWORD *)(v19 + 32) = v24 + 1;
    *v24 = 32;
  }
  sub_2230440(v124, v19);
  result = *(_BYTE **)(v19 + 32);
  if ( (unsigned __int64)result >= *(_QWORD *)(v19 + 24) )
  {
    result = (_BYTE *)sub_2257CD0(v19, 10);
  }
  else
  {
    *(_QWORD *)(v19 + 32) = result + 1;
    *result = 10;
  }
  if ( (unsigned __int8)v130 > 1u )
  {
    v49 = *a2;
    v50 = *(__m128i **)(*a2 + 32);
    if ( *(_QWORD *)(*a2 + 24) - (_QWORD)v50 > 0x18u )
    {
      v101 = _mm_load_si128((const __m128i *)&xmmword_2385620);
      v50[1].m128i_i8[8] = 40;
      v50[1].m128i_i64[0] = 0x6465746163657270LL;
      *v50 = v101;
      *(_QWORD *)(v49 + 32) += 25LL;
    }
    else
    {
      v49 = sub_22581D0(*a2, "#pragma clang deprecated(", 25);
    }
    sub_2230440(v122, v49);
    v51 = *(_QWORD *)(v49 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v49 + 24) - v51) > 2 )
    {
      *(_BYTE *)(v51 + 2) = 34;
      *(_WORD *)v51 = 8236;
      *(_QWORD *)(v49 + 32) += 3LL;
    }
    else
    {
      v49 = sub_22581D0(v49, ", \"", 3);
    }
    sub_2230440(&v126, v49);
    v52 = *(_QWORD *)(v49 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v49 + 24) - v52) > 2 )
    {
      *(_BYTE *)(v52 + 2) = 10;
      *(_WORD *)v52 = 10530;
      *(_QWORD *)(v49 + 32) += 3LL;
      return (_BYTE *)(elf_gnu_hash_chain + 3734);
    }
    else
    {
      return (_BYTE *)sub_22581D0(v49, "\")\n", 3);
    }
  }
  return result;
}

