_BYTE *__fastcall sub_1092960(__int64 a1, __int64 *a2)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rbx
  __int64 v6; // rdx
  unsigned __int64 v7; // rax
  _BYTE *v8; // rax
  _BYTE *v9; // rax
  __int64 v10; // rbx
  __m128i *v11; // rdx
  unsigned __int64 v12; // rax
  _BYTE *v13; // rax
  _BYTE *v14; // rax
  __int64 v15; // rbx
  __m128i *v16; // rdx
  unsigned __int64 v17; // rax
  _BYTE *v18; // rax
  _BYTE *v19; // rax
  __int64 v20; // rbx
  __m128i *v21; // rdx
  unsigned __int64 v22; // rax
  _BYTE *v23; // rax
  _BYTE *result; // rax
  __int64 v25; // rbx
  _QWORD *v26; // rdx
  _BYTE *v27; // rax
  _BYTE *v28; // rax
  __int64 v29; // rbx
  __m128i *v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rdx
  _BYTE *v33; // rax
  _BYTE *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rdx
  _BYTE *v37; // rax
  _BYTE *v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rdx
  _BYTE *v41; // rax
  _BYTE *v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rdx
  __int64 v45; // rbx
  __int64 v46; // rax
  _QWORD *v47; // rdx
  _BYTE *v48; // rax
  _BYTE *v49; // rax
  __int64 v50; // rbx
  __m128i *v51; // rdx
  __int64 v52; // rdx
  __int64 v53; // rdx
  __int64 v54; // rbx
  _QWORD *v55; // rdx
  __int64 v56; // rax
  _BYTE *v57; // rax
  _BYTE *v58; // rax
  __int64 v59; // rbx
  __m128i *v60; // rdx
  __int64 v61; // rdx
  __int64 v62; // rdx
  __int64 v63; // rbx
  _QWORD *v64; // rdx
  _BYTE *v65; // rax
  _BYTE *v66; // rax
  __int64 v67; // rbx
  __m128i *v68; // rdx
  __int64 v69; // rdx
  __int64 v70; // rdx
  __int64 v71; // rbx
  __int64 v72; // rax
  _QWORD *v73; // rdx
  _BYTE *v74; // rax
  _BYTE *v75; // rax
  __int64 v76; // rbx
  __m128i *v77; // rdx
  __int64 v78; // rdx
  __int64 v79; // rdx
  __int64 v80; // rbx
  _QWORD *v81; // rdx
  __int64 v82; // rax
  _BYTE *v83; // rax
  _BYTE *v84; // rax
  __int64 v85; // rbx
  __m128i *v86; // rdx
  __int64 v87; // rdx
  __int64 v88; // rdx
  __int64 v89; // rbx
  _QWORD *v90; // rdx
  __int64 v91; // rax
  _BYTE *v92; // rax
  _BYTE *v93; // rax
  __int64 v94; // rbx
  __m128i *v95; // rdx
  __int64 v96; // rdx
  __int64 v97; // rdx
  __int64 v98; // rbx
  __m128i *v99; // rdx
  __int64 v100; // rdx
  __int64 v101; // rdx
  __int64 v102; // rdx
  __int64 v103; // rdx
  __int64 v104; // rdx
  __int64 v105; // rdx
  __int64 v106; // rdx
  __int64 v107; // rdx
  __m128i v108; // xmm0
  __m128i v109; // xmm0
  __m128i v110; // xmm0
  __m128i v111; // xmm0
  __m128i v112; // xmm0
  __m128i v113; // xmm0
  __m128i v114; // xmm0
  __m128i v115; // xmm0
  __m128i v116; // xmm0
  __m128i si128; // xmm0
  __m128i v118; // xmm0
  __m128i v119; // xmm0
  __m128i v120; // xmm0
  __m128i v121; // xmm0
  _QWORD v122[4]; // [rsp+0h] [rbp-C8h] BYREF
  __int16 v123; // [rsp+20h] [rbp-A8h]
  _QWORD v124[4]; // [rsp+30h] [rbp-98h] BYREF
  __int16 v125; // [rsp+50h] [rbp-78h]
  __int64 v126; // [rsp+60h] [rbp-68h] BYREF
  __int64 v127; // [rsp+68h] [rbp-60h]
  __int64 v128; // [rsp+70h] [rbp-58h]
  __int64 v129; // [rsp+78h] [rbp-50h]
  __int64 v130; // [rsp+80h] [rbp-48h]

  sub_102C570(a2, "wasm", 4, 0);
  if ( *(_BYTE *)(a1 + 516) )
  {
    v124[0] = "1";
    v125 = 259;
    v89 = *a2;
    v122[0] = "__wasm_atomics__";
    v90 = *(_QWORD **)(v89 + 32);
    v91 = *(_QWORD *)(v89 + 24);
    v123 = 259;
    LOWORD(v130) = 257;
    if ( (unsigned __int64)(v91 - (_QWORD)v90) > 7 )
    {
      *v90 = 0x20656E6966656423LL;
      *(_QWORD *)(v89 + 32) += 8LL;
    }
    else
    {
      v89 = sub_22581D0(v89, "#define ", 8);
    }
    sub_2230440(v122, v89);
    v92 = *(_BYTE **)(v89 + 32);
    if ( (unsigned __int64)v92 >= *(_QWORD *)(v89 + 24) )
    {
      v89 = sub_2257CD0(v89, 32);
    }
    else
    {
      *(_QWORD *)(v89 + 32) = v92 + 1;
      *v92 = 32;
    }
    sub_2230440(v124, v89);
    v93 = *(_BYTE **)(v89 + 32);
    if ( (unsigned __int64)v93 >= *(_QWORD *)(v89 + 24) )
    {
      sub_2257CD0(v89, 10);
    }
    else
    {
      *(_QWORD *)(v89 + 32) = v93 + 1;
      *v93 = 10;
    }
    if ( (unsigned __int8)v130 > 1u )
    {
      v94 = *a2;
      v95 = *(__m128i **)(*a2 + 32);
      if ( *(_QWORD *)(*a2 + 24) - (_QWORD)v95 > 0x18u )
      {
        si128 = _mm_load_si128((const __m128i *)&xmmword_2385620);
        v95[1].m128i_i8[8] = 40;
        v95[1].m128i_i64[0] = 0x6465746163657270LL;
        *v95 = si128;
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
  if ( *(_BYTE *)(a1 + 517) )
  {
    v80 = *a2;
    v122[0] = "__wasm_bulk_memory__";
    v81 = *(_QWORD **)(v80 + 32);
    v82 = *(_QWORD *)(v80 + 24);
    v124[0] = "1";
    v125 = 259;
    v123 = 259;
    LOWORD(v130) = 257;
    if ( (unsigned __int64)(v82 - (_QWORD)v81) > 7 )
    {
      *v81 = 0x20656E6966656423LL;
      *(_QWORD *)(v80 + 32) += 8LL;
    }
    else
    {
      v80 = sub_22581D0(v80, "#define ", 8);
    }
    sub_2230440(v122, v80);
    v83 = *(_BYTE **)(v80 + 32);
    if ( (unsigned __int64)v83 >= *(_QWORD *)(v80 + 24) )
    {
      v80 = sub_2257CD0(v80, 32);
    }
    else
    {
      *(_QWORD *)(v80 + 32) = v83 + 1;
      *v83 = 32;
    }
    sub_2230440(v124, v80);
    v84 = *(_BYTE **)(v80 + 32);
    if ( (unsigned __int64)v84 >= *(_QWORD *)(v80 + 24) )
    {
      sub_2257CD0(v80, 10);
    }
    else
    {
      *(_QWORD *)(v80 + 32) = v84 + 1;
      *v84 = 10;
    }
    if ( (unsigned __int8)v130 > 1u )
    {
      v85 = *a2;
      v86 = *(__m128i **)(*a2 + 32);
      if ( *(_QWORD *)(*a2 + 24) - (_QWORD)v86 > 0x18u )
      {
        v114 = _mm_load_si128((const __m128i *)&xmmword_2385620);
        v86[1].m128i_i8[8] = 40;
        v86[1].m128i_i64[0] = 0x6465746163657270LL;
        *v86 = v114;
        *(_QWORD *)(v85 + 32) += 25LL;
      }
      else
      {
        v85 = sub_22581D0(*a2, "#pragma clang deprecated(", 25);
      }
      sub_2230440(v122, v85);
      v87 = *(_QWORD *)(v85 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v85 + 24) - v87) > 2 )
      {
        *(_BYTE *)(v87 + 2) = 34;
        *(_WORD *)v87 = 8236;
        *(_QWORD *)(v85 + 32) += 3LL;
      }
      else
      {
        v85 = sub_22581D0(v85, ", \"", 3);
      }
      sub_2230440(&v126, v85);
      v88 = *(_QWORD *)(v85 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v85 + 24) - v88) > 2 )
      {
        v2 = 10530;
        *(_BYTE *)(v88 + 2) = 10;
        *(_WORD *)v88 = 10530;
        *(_QWORD *)(v85 + 32) += 3LL;
      }
      else
      {
        sub_22581D0(v85, "\")\n", 3);
      }
    }
  }
  if ( *(_BYTE *)(a1 + 518) )
  {
    v71 = *a2;
    v124[0] = "1";
    v125 = 259;
    v122[0] = "__wasm_bulk_memory_opt__";
    v123 = 259;
    v72 = *(_QWORD *)(v71 + 24);
    LOWORD(v130) = 257;
    v73 = *(_QWORD **)(v71 + 32);
    if ( (unsigned __int64)(v72 - (_QWORD)v73) > 7 )
    {
      *v73 = 0x20656E6966656423LL;
      *(_QWORD *)(v71 + 32) += 8LL;
    }
    else
    {
      v71 = sub_22581D0(v71, "#define ", 8);
    }
    sub_2230440(v122, v71);
    v74 = *(_BYTE **)(v71 + 32);
    if ( (unsigned __int64)v74 >= *(_QWORD *)(v71 + 24) )
    {
      v71 = sub_2257CD0(v71, 32);
    }
    else
    {
      *(_QWORD *)(v71 + 32) = v74 + 1;
      *v74 = 32;
    }
    sub_2230440(v124, v71);
    v75 = *(_BYTE **)(v71 + 32);
    if ( (unsigned __int64)v75 >= *(_QWORD *)(v71 + 24) )
    {
      sub_2257CD0(v71, 10);
    }
    else
    {
      *(_QWORD *)(v71 + 32) = v75 + 1;
      *v75 = 10;
    }
    if ( (unsigned __int8)v130 > 1u )
    {
      v76 = *a2;
      v77 = *(__m128i **)(*a2 + 32);
      if ( *(_QWORD *)(*a2 + 24) - (_QWORD)v77 > 0x18u )
      {
        v118 = _mm_load_si128((const __m128i *)&xmmword_2385620);
        v77[1].m128i_i8[8] = 40;
        v77[1].m128i_i64[0] = 0x6465746163657270LL;
        *v77 = v118;
        *(_QWORD *)(v76 + 32) += 25LL;
      }
      else
      {
        v76 = sub_22581D0(*a2, "#pragma clang deprecated(", 25);
      }
      sub_2230440(v122, v76);
      v78 = *(_QWORD *)(v76 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v76 + 24) - v78) > 2 )
      {
        *(_BYTE *)(v78 + 2) = 34;
        *(_WORD *)v78 = 8236;
        *(_QWORD *)(v76 + 32) += 3LL;
      }
      else
      {
        v76 = sub_22581D0(v76, ", \"", 3);
      }
      sub_2230440(&v126, v76);
      v79 = *(_QWORD *)(v76 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v76 + 24) - v79) > 2 )
      {
        *(_BYTE *)(v79 + 2) = 10;
        *(_WORD *)v79 = 10530;
        *(_QWORD *)(v76 + 32) += 3LL;
      }
      else
      {
        sub_22581D0(v76, "\")\n", 3);
      }
    }
  }
  if ( *(_BYTE *)(a1 + 520) )
  {
    v125 = 259;
    v122[0] = "__wasm_exception_handling__";
    LOWORD(v130) = 257;
    v124[0] = "1";
    v123 = 259;
    sub_10160F0(a2, (__int64)v122, (__int64)v124, v2, v3, v4, v126, v127, v128, v129, 1u);
  }
  if ( *(_BYTE *)(a1 + 521) )
  {
    v124[0] = "1";
    v122[0] = "__wasm_extended_const__";
    LOWORD(v130) = 257;
    v125 = 259;
    v123 = 259;
    sub_10160F0(a2, (__int64)v122, (__int64)v124, v2, v3, 257, v126, v127, v128, v129, 1u);
  }
  if ( *(_BYTE *)(a1 + 523) )
  {
    v124[0] = "1";
    v125 = 259;
    LOWORD(v130) = 257;
    v122[0] = "__wasm_multimemory__";
    v123 = 259;
    sub_10160F0(a2, (__int64)v122, (__int64)v124, v2, 259, v4, v126, v127, v128, v129, 1u);
  }
  if ( *(_BYTE *)(a1 + 522) )
  {
    v125 = 259;
    LOWORD(v130) = 257;
    v124[0] = "1";
    v122[0] = "__wasm_fp16__";
    v123 = 259;
    sub_10160F0(a2, (__int64)v122, (__int64)v124, 259, v3, v4, v126, v127, v128, v129, 1u);
  }
  if ( *(_BYTE *)(a1 + 524) )
  {
    v63 = *a2;
    v124[0] = "1";
    v125 = 259;
    v122[0] = "__wasm_multivalue__";
    v64 = *(_QWORD **)(v63 + 32);
    v123 = 259;
    LOWORD(v130) = 257;
    if ( *(_QWORD *)(v63 + 24) - (_QWORD)v64 > 7u )
    {
      *v64 = 0x20656E6966656423LL;
      *(_QWORD *)(v63 + 32) += 8LL;
    }
    else
    {
      v63 = sub_22581D0(v63, "#define ", 8);
    }
    sub_2230440(v122, v63);
    v65 = *(_BYTE **)(v63 + 32);
    if ( (unsigned __int64)v65 >= *(_QWORD *)(v63 + 24) )
    {
      v63 = sub_2257CD0(v63, 32);
    }
    else
    {
      *(_QWORD *)(v63 + 32) = v65 + 1;
      *v65 = 32;
    }
    sub_2230440(v124, v63);
    v66 = *(_BYTE **)(v63 + 32);
    if ( (unsigned __int64)v66 >= *(_QWORD *)(v63 + 24) )
    {
      sub_2257CD0(v63, 10);
    }
    else
    {
      *(_QWORD *)(v63 + 32) = v66 + 1;
      *v66 = 10;
    }
    if ( (unsigned __int8)v130 > 1u )
    {
      v67 = *a2;
      v68 = *(__m128i **)(*a2 + 32);
      if ( *(_QWORD *)(*a2 + 24) - (_QWORD)v68 > 0x18u )
      {
        v121 = _mm_load_si128((const __m128i *)&xmmword_2385620);
        v68[1].m128i_i8[8] = 40;
        v68[1].m128i_i64[0] = 0x6465746163657270LL;
        *v68 = v121;
        *(_QWORD *)(v67 + 32) += 25LL;
      }
      else
      {
        v67 = sub_22581D0(*a2, "#pragma clang deprecated(", 25);
      }
      sub_2230440(v122, v67);
      v69 = *(_QWORD *)(v67 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v67 + 24) - v69) > 2 )
      {
        *(_BYTE *)(v69 + 2) = 34;
        *(_WORD *)v69 = 8236;
        *(_QWORD *)(v67 + 32) += 3LL;
      }
      else
      {
        v67 = sub_22581D0(v67, ", \"", 3);
      }
      sub_2230440(&v126, v67);
      v70 = *(_QWORD *)(v67 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v67 + 24) - v70) > 2 )
      {
        *(_BYTE *)(v70 + 2) = 10;
        *(_WORD *)v70 = 10530;
        *(_QWORD *)(v67 + 32) += 3LL;
      }
      else
      {
        sub_22581D0(v67, "\")\n", 3);
      }
    }
  }
  if ( *(_BYTE *)(a1 + 525) )
  {
    v124[0] = "1";
    LOWORD(v130) = 257;
    v54 = *a2;
    v122[0] = "__wasm_mutable_globals__";
    v55 = *(_QWORD **)(v54 + 32);
    v56 = *(_QWORD *)(v54 + 24);
    v125 = 259;
    v123 = 259;
    if ( (unsigned __int64)(v56 - (_QWORD)v55) > 7 )
    {
      *v55 = 0x20656E6966656423LL;
      *(_QWORD *)(v54 + 32) += 8LL;
    }
    else
    {
      v54 = sub_22581D0(v54, "#define ", 8);
    }
    sub_2230440(v122, v54);
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
    sub_2230440(v124, v54);
    v58 = *(_BYTE **)(v54 + 32);
    if ( (unsigned __int64)v58 >= *(_QWORD *)(v54 + 24) )
    {
      sub_2257CD0(v54, 10);
    }
    else
    {
      *(_QWORD *)(v54 + 32) = v58 + 1;
      *v58 = 10;
    }
    if ( (unsigned __int8)v130 > 1u )
    {
      v59 = *a2;
      v60 = *(__m128i **)(*a2 + 32);
      if ( *(_QWORD *)(*a2 + 24) - (_QWORD)v60 > 0x18u )
      {
        v120 = _mm_load_si128((const __m128i *)&xmmword_2385620);
        v60[1].m128i_i8[8] = 40;
        v60[1].m128i_i64[0] = 0x6465746163657270LL;
        *v60 = v120;
        *(_QWORD *)(v59 + 32) += 25LL;
      }
      else
      {
        v59 = sub_22581D0(*a2, "#pragma clang deprecated(", 25);
      }
      sub_2230440(v122, v59);
      v61 = *(_QWORD *)(v59 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v59 + 24) - v61) > 2 )
      {
        *(_BYTE *)(v61 + 2) = 34;
        *(_WORD *)v61 = 8236;
        *(_QWORD *)(v59 + 32) += 3LL;
      }
      else
      {
        v59 = sub_22581D0(v59, ", \"", 3);
      }
      sub_2230440(&v126, v59);
      v62 = *(_QWORD *)(v59 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v59 + 24) - v62) > 2 )
      {
        v3 = 10530;
        *(_BYTE *)(v62 + 2) = 10;
        *(_WORD *)v62 = 10530;
        *(_QWORD *)(v59 + 32) += 3LL;
      }
      else
      {
        sub_22581D0(v59, "\")\n", 3);
      }
    }
  }
  if ( *(_BYTE *)(a1 + 526) )
  {
    v125 = 259;
    v123 = 259;
    LOWORD(v130) = 257;
    v124[0] = "1";
    v122[0] = "__wasm_nontrapping_fptoint__";
    sub_10160F0(a2, (__int64)v122, (__int64)v124, 257, v3, v4, v126, v127, v128, v129, 1u);
    if ( !*(_BYTE *)(a1 + 527) )
      goto LABEL_16;
  }
  else if ( !*(_BYTE *)(a1 + 527) )
  {
    goto LABEL_16;
  }
  v45 = *a2;
  v124[0] = "1";
  v125 = 259;
  v122[0] = "__wasm_reference_types__";
  v123 = 259;
  v46 = *(_QWORD *)(v45 + 24);
  LOWORD(v130) = 257;
  v47 = *(_QWORD **)(v45 + 32);
  if ( (unsigned __int64)(v46 - (_QWORD)v47) > 7 )
  {
    *v47 = 0x20656E6966656423LL;
    *(_QWORD *)(v45 + 32) += 8LL;
  }
  else
  {
    v45 = sub_22581D0(v45, "#define ", 8);
  }
  sub_2230440(v122, v45);
  v48 = *(_BYTE **)(v45 + 32);
  if ( (unsigned __int64)v48 >= *(_QWORD *)(v45 + 24) )
  {
    v45 = sub_2257CD0(v45, 32);
  }
  else
  {
    *(_QWORD *)(v45 + 32) = v48 + 1;
    *v48 = 32;
  }
  sub_2230440(v124, v45);
  v49 = *(_BYTE **)(v45 + 32);
  if ( (unsigned __int64)v49 >= *(_QWORD *)(v45 + 24) )
  {
    sub_2257CD0(v45, 10);
  }
  else
  {
    *(_QWORD *)(v45 + 32) = v49 + 1;
    *v49 = 10;
  }
  if ( (unsigned __int8)v130 > 1u )
  {
    v50 = *a2;
    v51 = *(__m128i **)(*a2 + 32);
    if ( *(_QWORD *)(*a2 + 24) - (_QWORD)v51 > 0x18u )
    {
      v115 = _mm_load_si128((const __m128i *)&xmmword_2385620);
      v51[1].m128i_i8[8] = 40;
      v51[1].m128i_i64[0] = 0x6465746163657270LL;
      *v51 = v115;
      *(_QWORD *)(v50 + 32) += 25LL;
    }
    else
    {
      v50 = sub_22581D0(*a2, "#pragma clang deprecated(", 25);
    }
    sub_2230440(v122, v50);
    v52 = *(_QWORD *)(v50 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v50 + 24) - v52) > 2 )
    {
      *(_BYTE *)(v52 + 2) = 34;
      *(_WORD *)v52 = 8236;
      *(_QWORD *)(v50 + 32) += 3LL;
    }
    else
    {
      v50 = sub_22581D0(v50, ", \"", 3);
    }
    sub_2230440(&v126, v50);
    v53 = *(_QWORD *)(v50 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v50 + 24) - v53) > 2 )
    {
      *(_BYTE *)(v53 + 2) = 10;
      *(_WORD *)v53 = 10530;
      *(_QWORD *)(v50 + 32) += 3LL;
    }
    else
    {
      sub_22581D0(v50, "\")\n", 3);
    }
  }
LABEL_16:
  if ( *(int *)(a1 + 512) > 1 )
  {
    v124[0] = "1";
    v125 = 259;
    v25 = *a2;
    v122[0] = "__wasm_relaxed_simd__";
    v123 = 259;
    v26 = *(_QWORD **)(v25 + 32);
    LOWORD(v130) = 257;
    if ( *(_QWORD *)(v25 + 24) - (_QWORD)v26 > 7u )
    {
      *v26 = 0x20656E6966656423LL;
      *(_QWORD *)(v25 + 32) += 8LL;
    }
    else
    {
      v25 = sub_22581D0(v25, "#define ", 8);
    }
    sub_2230440(v122, v25);
    v27 = *(_BYTE **)(v25 + 32);
    if ( (unsigned __int64)v27 >= *(_QWORD *)(v25 + 24) )
    {
      v25 = sub_2257CD0(v25, 32);
    }
    else
    {
      *(_QWORD *)(v25 + 32) = v27 + 1;
      *v27 = 32;
    }
    sub_2230440(v124, v25);
    v28 = *(_BYTE **)(v25 + 32);
    if ( (unsigned __int64)v28 >= *(_QWORD *)(v25 + 24) )
    {
      sub_2257CD0(v25, 10);
    }
    else
    {
      *(_QWORD *)(v25 + 32) = v28 + 1;
      *v28 = 10;
    }
    if ( (unsigned __int8)v130 > 1u )
    {
      v29 = *a2;
      v30 = *(__m128i **)(*a2 + 32);
      if ( *(_QWORD *)(*a2 + 24) - (_QWORD)v30 > 0x18u )
      {
        v112 = _mm_load_si128((const __m128i *)&xmmword_2385620);
        v30[1].m128i_i8[8] = 40;
        v30[1].m128i_i64[0] = 0x6465746163657270LL;
        *v30 = v112;
        *(_QWORD *)(v29 + 32) += 25LL;
      }
      else
      {
        v29 = sub_22581D0(*a2, "#pragma clang deprecated(", 25);
      }
      sub_2230440(v122, v29);
      v31 = *(_QWORD *)(v29 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v29 + 24) - v31) > 2 )
      {
        *(_BYTE *)(v31 + 2) = 34;
        *(_WORD *)v31 = 8236;
        *(_QWORD *)(v29 + 32) += 3LL;
      }
      else
      {
        v29 = sub_22581D0(v29, ", \"", 3);
      }
      sub_2230440(&v126, v29);
      v32 = *(_QWORD *)(v29 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v29 + 24) - v32) > 2 )
      {
        *(_BYTE *)(v32 + 2) = 10;
        *(_WORD *)v32 = 10530;
        *(_QWORD *)(v29 + 32) += 3LL;
      }
      else
      {
        sub_22581D0(v29, "\")\n", 3);
      }
    }
  }
  if ( *(_BYTE *)(a1 + 528) )
  {
    v124[0] = "1";
    LOWORD(v130) = 257;
    v125 = 259;
    v122[0] = "__wasm_sign_ext__";
    v123 = 259;
    sub_10160F0(a2, (__int64)v122, (__int64)v124, v2, 259, 259, v126, v127, v128, v129, 1u);
  }
  v5 = *a2;
  v6 = *(_QWORD *)(*a2 + 32);
  v7 = *(_QWORD *)(*a2 + 24) - v6;
  if ( *(int *)(a1 + 512) <= 0 )
    goto LABEL_298;
  v124[0] = "1";
  v122[0] = "__wasm_simd128__";
  v125 = 259;
  v123 = 259;
  LOWORD(v130) = 257;
  if ( v7 > 7 )
  {
    *(_QWORD *)v6 = 0x20656E6966656423LL;
    *(_QWORD *)(v5 + 32) += 8LL;
  }
  else
  {
    v5 = sub_22581D0(v5, "#define ", 8);
  }
  sub_2230440(v122, v5);
  v33 = *(_BYTE **)(v5 + 32);
  if ( (unsigned __int64)v33 >= *(_QWORD *)(v5 + 24) )
  {
    v5 = sub_2257CD0(v5, 32);
  }
  else
  {
    *(_QWORD *)(v5 + 32) = v33 + 1;
    *v33 = 32;
  }
  sub_2230440(v124, v5);
  v34 = *(_BYTE **)(v5 + 32);
  if ( (unsigned __int64)v34 >= *(_QWORD *)(v5 + 24) )
  {
    sub_2257CD0(v5, 10);
  }
  else
  {
    *(_QWORD *)(v5 + 32) = v34 + 1;
    *v34 = 10;
  }
  v5 = *a2;
  v6 = *(_QWORD *)(*a2 + 32);
  v7 = *(_QWORD *)(*a2 + 24) - v6;
  if ( (unsigned __int8)v130 <= 1u )
  {
LABEL_298:
    if ( !*(_BYTE *)(a1 + 529) )
      goto LABEL_21;
  }
  else
  {
    if ( v7 > 0x18 )
    {
      v113 = _mm_load_si128((const __m128i *)&xmmword_2385620);
      *(_BYTE *)(v6 + 24) = 40;
      *(_QWORD *)(v6 + 16) = 0x6465746163657270LL;
      *(__m128i *)v6 = v113;
      *(_QWORD *)(v5 + 32) += 25LL;
    }
    else
    {
      v5 = sub_22581D0(*a2, "#pragma clang deprecated(", 25);
    }
    sub_2230440(v122, v5);
    v35 = *(_QWORD *)(v5 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v5 + 24) - v35) > 2 )
    {
      *(_BYTE *)(v35 + 2) = 34;
      *(_WORD *)v35 = 8236;
      *(_QWORD *)(v5 + 32) += 3LL;
    }
    else
    {
      v5 = sub_22581D0(v5, ", \"", 3);
    }
    sub_2230440(&v126, v5);
    v36 = *(_QWORD *)(v5 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v5 + 24) - v36) > 2 )
    {
      *(_BYTE *)(v36 + 2) = 10;
      *(_WORD *)v36 = 10530;
      *(_QWORD *)(v5 + 32) += 3LL;
    }
    else
    {
      sub_22581D0(v5, "\")\n", 3);
    }
    v5 = *a2;
    v6 = *(_QWORD *)(*a2 + 32);
    v7 = *(_QWORD *)(*a2 + 24) - v6;
    if ( !*(_BYTE *)(a1 + 529) )
      goto LABEL_21;
  }
  v124[0] = "1";
  v125 = 259;
  v122[0] = "__wasm_tail_call__";
  v123 = 259;
  LOWORD(v130) = 257;
  if ( v7 > 7 )
  {
    *(_QWORD *)v6 = 0x20656E6966656423LL;
    *(_QWORD *)(v5 + 32) += 8LL;
  }
  else
  {
    v5 = sub_22581D0(v5, "#define ", 8);
  }
  sub_2230440(v122, v5);
  v37 = *(_BYTE **)(v5 + 32);
  if ( (unsigned __int64)v37 >= *(_QWORD *)(v5 + 24) )
  {
    v5 = sub_2257CD0(v5, 32);
  }
  else
  {
    *(_QWORD *)(v5 + 32) = v37 + 1;
    *v37 = 32;
  }
  sub_2230440(v124, v5);
  v38 = *(_BYTE **)(v5 + 32);
  if ( (unsigned __int64)v38 >= *(_QWORD *)(v5 + 24) )
  {
    sub_2257CD0(v5, 10);
  }
  else
  {
    *(_QWORD *)(v5 + 32) = v38 + 1;
    *v38 = 10;
  }
  v5 = *a2;
  v6 = *(_QWORD *)(*a2 + 32);
  v7 = *(_QWORD *)(*a2 + 24) - v6;
  if ( (unsigned __int8)v130 > 1u )
  {
    if ( v7 > 0x18 )
    {
      v119 = _mm_load_si128((const __m128i *)&xmmword_2385620);
      *(_BYTE *)(v6 + 24) = 40;
      *(_QWORD *)(v6 + 16) = 0x6465746163657270LL;
      *(__m128i *)v6 = v119;
      *(_QWORD *)(v5 + 32) += 25LL;
    }
    else
    {
      v5 = sub_22581D0(*a2, "#pragma clang deprecated(", 25);
    }
    sub_2230440(v122, v5);
    v39 = *(_QWORD *)(v5 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v5 + 24) - v39) > 2 )
    {
      *(_BYTE *)(v39 + 2) = 34;
      *(_WORD *)v39 = 8236;
      *(_QWORD *)(v5 + 32) += 3LL;
    }
    else
    {
      v5 = sub_22581D0(v5, ", \"", 3);
    }
    sub_2230440(&v126, v5);
    v40 = *(_QWORD *)(v5 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v5 + 24) - v40) > 2 )
    {
      *(_BYTE *)(v40 + 2) = 10;
      *(_WORD *)v40 = 10530;
      *(_QWORD *)(v5 + 32) += 3LL;
    }
    else
    {
      sub_22581D0(v5, "\")\n", 3);
    }
    v5 = *a2;
    v6 = *(_QWORD *)(*a2 + 32);
    v7 = *(_QWORD *)(*a2 + 24) - v6;
    if ( !*(_BYTE *)(a1 + 530) )
      goto LABEL_22;
    goto LABEL_92;
  }
LABEL_21:
  if ( !*(_BYTE *)(a1 + 530) )
    goto LABEL_22;
LABEL_92:
  v124[0] = "1";
  v125 = 259;
  v122[0] = "__wasm_wide_arithmetic__";
  v123 = 259;
  LOWORD(v130) = 257;
  if ( v7 > 7 )
  {
    *(_QWORD *)v6 = 0x20656E6966656423LL;
    *(_QWORD *)(v5 + 32) += 8LL;
  }
  else
  {
    v5 = sub_22581D0(v5, "#define ", 8);
  }
  sub_2230440(v122, v5);
  v41 = *(_BYTE **)(v5 + 32);
  if ( (unsigned __int64)v41 >= *(_QWORD *)(v5 + 24) )
  {
    v5 = sub_2257CD0(v5, 32);
  }
  else
  {
    *(_QWORD *)(v5 + 32) = v41 + 1;
    *v41 = 32;
  }
  sub_2230440(v124, v5);
  v42 = *(_BYTE **)(v5 + 32);
  if ( (unsigned __int64)v42 >= *(_QWORD *)(v5 + 24) )
  {
    sub_2257CD0(v5, 10);
  }
  else
  {
    *(_QWORD *)(v5 + 32) = v42 + 1;
    *v42 = 10;
  }
  v5 = *a2;
  v6 = *(_QWORD *)(*a2 + 32);
  v7 = *(_QWORD *)(*a2 + 24) - v6;
  if ( (unsigned __int8)v130 > 1u )
  {
    if ( v7 > 0x18 )
    {
      v116 = _mm_load_si128((const __m128i *)&xmmword_2385620);
      *(_BYTE *)(v6 + 24) = 40;
      *(_QWORD *)(v6 + 16) = 0x6465746163657270LL;
      *(__m128i *)v6 = v116;
      *(_QWORD *)(v5 + 32) += 25LL;
    }
    else
    {
      v5 = sub_22581D0(*a2, "#pragma clang deprecated(", 25);
    }
    sub_2230440(v122, v5);
    v43 = *(_QWORD *)(v5 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v5 + 24) - v43) > 2 )
    {
      *(_BYTE *)(v43 + 2) = 34;
      *(_WORD *)v43 = 8236;
      *(_QWORD *)(v5 + 32) += 3LL;
    }
    else
    {
      v5 = sub_22581D0(v5, ", \"", 3);
    }
    sub_2230440(&v126, v5);
    v44 = *(_QWORD *)(v5 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v5 + 24) - v44) > 2 )
    {
      *(_BYTE *)(v44 + 2) = 10;
      *(_WORD *)v44 = 10530;
      *(_QWORD *)(v5 + 32) += 3LL;
    }
    else
    {
      sub_22581D0(v5, "\")\n", 3);
    }
    v5 = *a2;
    v6 = *(_QWORD *)(*a2 + 32);
    v7 = *(_QWORD *)(*a2 + 24) - v6;
  }
LABEL_22:
  v124[0] = "1";
  v125 = 259;
  v122[0] = "__GCC_HAVE_SYNC_COMPARE_AND_SWAP_1";
  v123 = 259;
  LOWORD(v130) = 257;
  if ( v7 > 7 )
  {
    *(_QWORD *)v6 = 0x20656E6966656423LL;
    *(_QWORD *)(v5 + 32) += 8LL;
  }
  else
  {
    v5 = sub_22581D0(v5, "#define ", 8);
  }
  sub_2230440(v122, v5);
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
  sub_2230440(v124, v5);
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
  v10 = *a2;
  v11 = *(__m128i **)(*a2 + 32);
  v12 = *(_QWORD *)(*a2 + 24) - (_QWORD)v11;
  if ( (unsigned __int8)v130 > 1u )
  {
    if ( v12 > 0x18 )
    {
      v111 = _mm_load_si128((const __m128i *)&xmmword_2385620);
      v11[1].m128i_i8[8] = 40;
      v11[1].m128i_i64[0] = 0x6465746163657270LL;
      *v11 = v111;
      *(_QWORD *)(v10 + 32) += 25LL;
    }
    else
    {
      v10 = sub_22581D0(*a2, "#pragma clang deprecated(", 25);
    }
    sub_2230440(v122, v10);
    v102 = *(_QWORD *)(v10 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v10 + 24) - v102) > 2 )
    {
      *(_BYTE *)(v102 + 2) = 34;
      *(_WORD *)v102 = 8236;
      *(_QWORD *)(v10 + 32) += 3LL;
    }
    else
    {
      v10 = sub_22581D0(v10, ", \"", 3);
    }
    sub_2230440(&v126, v10);
    v103 = *(_QWORD *)(v10 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v10 + 24) - v103) > 2 )
    {
      *(_BYTE *)(v103 + 2) = 10;
      *(_WORD *)v103 = 10530;
      *(_QWORD *)(v10 + 32) += 3LL;
    }
    else
    {
      sub_22581D0(v10, "\")\n", 3);
    }
    v10 = *a2;
    v11 = *(__m128i **)(*a2 + 32);
    v12 = *(_QWORD *)(*a2 + 24) - (_QWORD)v11;
  }
  v124[0] = "1";
  v125 = 259;
  v122[0] = "__GCC_HAVE_SYNC_COMPARE_AND_SWAP_2";
  v123 = 259;
  LOWORD(v130) = 257;
  if ( v12 > 7 )
  {
    v11->m128i_i64[0] = 0x20656E6966656423LL;
    *(_QWORD *)(v10 + 32) += 8LL;
  }
  else
  {
    v10 = sub_22581D0(v10, "#define ", 8);
  }
  sub_2230440(v122, v10);
  v13 = *(_BYTE **)(v10 + 32);
  if ( (unsigned __int64)v13 >= *(_QWORD *)(v10 + 24) )
  {
    v10 = sub_2257CD0(v10, 32);
  }
  else
  {
    *(_QWORD *)(v10 + 32) = v13 + 1;
    *v13 = 32;
  }
  sub_2230440(v124, v10);
  v14 = *(_BYTE **)(v10 + 32);
  if ( (unsigned __int64)v14 >= *(_QWORD *)(v10 + 24) )
  {
    sub_2257CD0(v10, 10);
  }
  else
  {
    *(_QWORD *)(v10 + 32) = v14 + 1;
    *v14 = 10;
  }
  v15 = *a2;
  v16 = *(__m128i **)(*a2 + 32);
  v17 = *(_QWORD *)(*a2 + 24) - (_QWORD)v16;
  if ( (unsigned __int8)v130 > 1u )
  {
    if ( v17 > 0x18 )
    {
      v109 = _mm_load_si128((const __m128i *)&xmmword_2385620);
      v16[1].m128i_i8[8] = 40;
      v16[1].m128i_i64[0] = 0x6465746163657270LL;
      *v16 = v109;
      *(_QWORD *)(v15 + 32) += 25LL;
    }
    else
    {
      v15 = sub_22581D0(*a2, "#pragma clang deprecated(", 25);
    }
    sub_2230440(v122, v15);
    v106 = *(_QWORD *)(v15 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v15 + 24) - v106) > 2 )
    {
      *(_BYTE *)(v106 + 2) = 34;
      *(_WORD *)v106 = 8236;
      *(_QWORD *)(v15 + 32) += 3LL;
    }
    else
    {
      v15 = sub_22581D0(v15, ", \"", 3);
    }
    sub_2230440(&v126, v15);
    v107 = *(_QWORD *)(v15 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v15 + 24) - v107) > 2 )
    {
      *(_BYTE *)(v107 + 2) = 10;
      *(_WORD *)v107 = 10530;
      *(_QWORD *)(v15 + 32) += 3LL;
    }
    else
    {
      sub_22581D0(v15, "\")\n", 3);
    }
    v15 = *a2;
    v16 = *(__m128i **)(*a2 + 32);
    v17 = *(_QWORD *)(*a2 + 24) - (_QWORD)v16;
  }
  v124[0] = "1";
  v122[0] = "__GCC_HAVE_SYNC_COMPARE_AND_SWAP_4";
  v125 = 259;
  v123 = 259;
  LOWORD(v130) = 257;
  if ( v17 > 7 )
  {
    v16->m128i_i64[0] = 0x20656E6966656423LL;
    *(_QWORD *)(v15 + 32) += 8LL;
  }
  else
  {
    v15 = sub_22581D0(v15, "#define ", 8);
  }
  sub_2230440(v122, v15);
  v18 = *(_BYTE **)(v15 + 32);
  if ( (unsigned __int64)v18 >= *(_QWORD *)(v15 + 24) )
  {
    v15 = sub_2257CD0(v15, 32);
  }
  else
  {
    *(_QWORD *)(v15 + 32) = v18 + 1;
    *v18 = 32;
  }
  sub_2230440(v124, v15);
  v19 = *(_BYTE **)(v15 + 32);
  if ( (unsigned __int64)v19 >= *(_QWORD *)(v15 + 24) )
  {
    sub_2257CD0(v15, 10);
  }
  else
  {
    *(_QWORD *)(v15 + 32) = v19 + 1;
    *v19 = 10;
  }
  v20 = *a2;
  v21 = *(__m128i **)(*a2 + 32);
  v22 = *(_QWORD *)(*a2 + 24) - (_QWORD)v21;
  if ( (unsigned __int8)v130 > 1u )
  {
    if ( v22 > 0x18 )
    {
      v110 = _mm_load_si128((const __m128i *)&xmmword_2385620);
      v21[1].m128i_i8[8] = 40;
      v21[1].m128i_i64[0] = 0x6465746163657270LL;
      *v21 = v110;
      *(_QWORD *)(v20 + 32) += 25LL;
    }
    else
    {
      v20 = sub_22581D0(*a2, "#pragma clang deprecated(", 25);
    }
    sub_2230440(v122, v20);
    v104 = *(_QWORD *)(v20 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v20 + 24) - v104) > 2 )
    {
      *(_BYTE *)(v104 + 2) = 34;
      *(_WORD *)v104 = 8236;
      *(_QWORD *)(v20 + 32) += 3LL;
    }
    else
    {
      v20 = sub_22581D0(v20, ", \"", 3);
    }
    sub_2230440(&v126, v20);
    v105 = *(_QWORD *)(v20 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v20 + 24) - v105) > 2 )
    {
      *(_BYTE *)(v105 + 2) = 10;
      *(_WORD *)v105 = 10530;
      *(_QWORD *)(v20 + 32) += 3LL;
    }
    else
    {
      sub_22581D0(v20, "\")\n", 3);
    }
    v20 = *a2;
    v21 = *(__m128i **)(*a2 + 32);
    v22 = *(_QWORD *)(*a2 + 24) - (_QWORD)v21;
  }
  v124[0] = "1";
  v125 = 259;
  v122[0] = "__GCC_HAVE_SYNC_COMPARE_AND_SWAP_8";
  v123 = 259;
  LOWORD(v130) = 257;
  if ( v22 > 7 )
  {
    v21->m128i_i64[0] = 0x20656E6966656423LL;
    *(_QWORD *)(v20 + 32) += 8LL;
  }
  else
  {
    v20 = sub_22581D0(v20, "#define ", 8);
  }
  sub_2230440(v122, v20);
  v23 = *(_BYTE **)(v20 + 32);
  if ( (unsigned __int64)v23 >= *(_QWORD *)(v20 + 24) )
  {
    v20 = sub_2257CD0(v20, 32);
  }
  else
  {
    *(_QWORD *)(v20 + 32) = v23 + 1;
    *v23 = 32;
  }
  sub_2230440(v124, v20);
  result = *(_BYTE **)(v20 + 32);
  if ( (unsigned __int64)result >= *(_QWORD *)(v20 + 24) )
  {
    result = (_BYTE *)sub_2257CD0(v20, 10);
  }
  else
  {
    *(_QWORD *)(v20 + 32) = result + 1;
    *result = 10;
  }
  if ( (unsigned __int8)v130 > 1u )
  {
    v98 = *a2;
    v99 = *(__m128i **)(*a2 + 32);
    if ( *(_QWORD *)(*a2 + 24) - (_QWORD)v99 > 0x18u )
    {
      v108 = _mm_load_si128((const __m128i *)&xmmword_2385620);
      v99[1].m128i_i8[8] = 40;
      v99[1].m128i_i64[0] = 0x6465746163657270LL;
      *v99 = v108;
      *(_QWORD *)(v98 + 32) += 25LL;
    }
    else
    {
      v98 = sub_22581D0(*a2, "#pragma clang deprecated(", 25);
    }
    sub_2230440(v122, v98);
    v100 = *(_QWORD *)(v98 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v98 + 24) - v100) > 2 )
    {
      *(_BYTE *)(v100 + 2) = 34;
      *(_WORD *)v100 = 8236;
      *(_QWORD *)(v98 + 32) += 3LL;
    }
    else
    {
      v98 = sub_22581D0(v98, ", \"", 3);
    }
    sub_2230440(&v126, v98);
    v101 = *(_QWORD *)(v98 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v98 + 24) - v101) > 2 )
    {
      *(_BYTE *)(v101 + 2) = 10;
      *(_WORD *)v101 = 10530;
      *(_QWORD *)(v98 + 32) += 3LL;
      return (_BYTE *)(elf_gnu_hash_chain + 3734);
    }
    else
    {
      return (_BYTE *)sub_22581D0(v98, "\")\n", 3);
    }
  }
  return result;
}

