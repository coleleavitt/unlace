_BYTE *__fastcall sub_10B44F0(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rbx
  __int64 v8; // rdx
  unsigned __int64 v9; // rax
  _BYTE *v10; // rax
  _BYTE *v11; // rax
  __int64 v12; // rbx
  __m128i *v13; // rdx
  unsigned __int64 v14; // rax
  _BYTE *v15; // rax
  _BYTE *v16; // rax
  __int64 v17; // rbx
  __m128i *v18; // rdx
  unsigned __int64 v19; // rax
  _BYTE *v20; // rax
  _BYTE *v21; // rax
  __int64 v22; // rbx
  __m128i *v23; // rdx
  unsigned __int64 v24; // rax
  _BYTE *v25; // rax
  _BYTE *result; // rax
  __int64 v27; // rbx
  _QWORD *v28; // rdx
  _BYTE *v29; // rax
  _BYTE *v30; // rax
  __int64 v31; // rbx
  __m128i *v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rdx
  _BYTE *v35; // rax
  _BYTE *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rdx
  _BYTE *v39; // rax
  _BYTE *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rdx
  _BYTE *v43; // rax
  _BYTE *v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rdx
  __int64 v47; // rbx
  _QWORD *v48; // rdx
  __int64 v49; // rax
  _BYTE *v50; // rax
  _BYTE *v51; // rax
  __int64 v52; // rbx
  __m128i *v53; // rdx
  __int64 v54; // rdx
  __int64 v55; // rdx
  __int64 v56; // rbx
  _QWORD *v57; // rdx
  __int64 v58; // rax
  _BYTE *v59; // rax
  _BYTE *v60; // rax
  __int64 v61; // rbx
  __m128i *v62; // rdx
  __int64 v63; // rdx
  __int64 v64; // rdx
  __int64 v65; // rbx
  __int64 v66; // rax
  _QWORD *v67; // rdx
  _BYTE *v68; // rax
  _BYTE *v69; // rax
  __int64 v70; // rbx
  __m128i *v71; // rdx
  __int64 v72; // rdx
  __int64 v73; // rdx
  __int64 v74; // rbx
  _QWORD *v75; // rdx
  __int64 v76; // rax
  _BYTE *v77; // rax
  _BYTE *v78; // rax
  __int64 v79; // rbx
  __m128i *v80; // rdx
  __int64 v81; // rdx
  __int64 v82; // rdx
  __int64 v83; // rbx
  _QWORD *v84; // rdx
  __int64 v85; // rax
  _BYTE *v86; // rax
  _BYTE *v87; // rax
  __int64 v88; // rbx
  __m128i *v89; // rdx
  __int64 v90; // rdx
  __int64 v91; // rdx
  __int64 v92; // rbx
  __m128i *v93; // rdx
  __int64 v94; // rdx
  __int64 v95; // rdx
  __int64 v96; // rbx
  __int64 v97; // rax
  _QWORD *v98; // rdx
  _BYTE *v99; // rax
  _BYTE *v100; // rax
  __int64 v101; // rbx
  __m128i *v102; // rdx
  __int64 v103; // rdx
  __int64 v104; // rdx
  __int64 v105; // rdx
  __int64 v106; // rdx
  __int64 v107; // rdx
  __int64 v108; // rdx
  __int64 v109; // rdx
  __int64 v110; // rdx
  __m128i v111; // xmm0
  __m128i v112; // xmm0
  __m128i v113; // xmm0
  __m128i v114; // xmm0
  __m128i v115; // xmm0
  __m128i v116; // xmm0
  __m128i v117; // xmm0
  __m128i v118; // xmm0
  __m128i v119; // xmm0
  __m128i si128; // xmm0
  __m128i v121; // xmm0
  __m128i v122; // xmm0
  __m128i v123; // xmm0
  __m128i v124; // xmm0
  _QWORD v125[4]; // [rsp+0h] [rbp-C8h] BYREF
  __int16 v126; // [rsp+20h] [rbp-A8h]
  _QWORD v127[4]; // [rsp+30h] [rbp-98h] BYREF
  __int16 v128; // [rsp+50h] [rbp-78h]
  __int64 v129; // [rsp+60h] [rbp-68h] BYREF
  __int64 v130; // [rsp+68h] [rbp-60h]
  __int64 v131; // [rsp+70h] [rbp-58h]
  __int64 v132; // [rsp+78h] [rbp-50h]
  __int64 v133; // [rsp+80h] [rbp-48h]

  sub_10502B0(a3, "wasm", 4, 0);
  if ( *(_BYTE *)(a1 + 516) )
  {
    v127[0] = "1";
    v128 = 259;
    v83 = *a3;
    v125[0] = "__wasm_atomics__";
    v84 = *(_QWORD **)(v83 + 32);
    v85 = *(_QWORD *)(v83 + 24);
    v126 = 259;
    LOWORD(v133) = 257;
    if ( (unsigned __int64)(v85 - (_QWORD)v84) > 7 )
    {
      *v84 = 0x20656E6966656423LL;
      *(_QWORD *)(v83 + 32) += 8LL;
    }
    else
    {
      v83 = sub_227BF10(v83, "#define ", 8);
    }
    sub_2254180(v125, v83);
    v86 = *(_BYTE **)(v83 + 32);
    if ( (unsigned __int64)v86 >= *(_QWORD *)(v83 + 24) )
    {
      v83 = sub_227BA10(v83, 32);
    }
    else
    {
      *(_QWORD *)(v83 + 32) = v86 + 1;
      *v86 = 32;
    }
    sub_2254180(v127, v83);
    v87 = *(_BYTE **)(v83 + 32);
    if ( (unsigned __int64)v87 >= *(_QWORD *)(v83 + 24) )
    {
      sub_227BA10(v83, 10);
    }
    else
    {
      *(_QWORD *)(v83 + 32) = v87 + 1;
      *v87 = 10;
    }
    if ( (unsigned __int8)v133 > 1u )
    {
      v88 = *a3;
      v89 = *(__m128i **)(*a3 + 32);
      if ( *(_QWORD *)(*a3 + 24) - (_QWORD)v89 > 0x18u )
      {
        si128 = _mm_load_si128((const __m128i *)&xmmword_23A9650);
        v89[1].m128i_i8[8] = 40;
        v89[1].m128i_i64[0] = 0x6465746163657270LL;
        *v89 = si128;
        *(_QWORD *)(v88 + 32) += 25LL;
      }
      else
      {
        v88 = sub_227BF10(*a3, "#pragma clang deprecated(", 25);
      }
      sub_2254180(v125, v88);
      v90 = *(_QWORD *)(v88 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v88 + 24) - v90) > 2 )
      {
        *(_BYTE *)(v90 + 2) = 34;
        *(_WORD *)v90 = 8236;
        *(_QWORD *)(v88 + 32) += 3LL;
      }
      else
      {
        v88 = sub_227BF10(v88, ", \"", 3);
      }
      sub_2254180(&v129, v88);
      v91 = *(_QWORD *)(v88 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v88 + 24) - v91) > 2 )
      {
        *(_BYTE *)(v91 + 2) = 10;
        *(_WORD *)v91 = 10530;
        *(_QWORD *)(v88 + 32) += 3LL;
      }
      else
      {
        sub_227BF10(v88, "\")\n", 3);
      }
    }
  }
  if ( *(_BYTE *)(a1 + 517) )
  {
    v74 = *a3;
    v125[0] = "__wasm_bulk_memory__";
    v75 = *(_QWORD **)(v74 + 32);
    v76 = *(_QWORD *)(v74 + 24);
    v127[0] = "1";
    v128 = 259;
    v126 = 259;
    LOWORD(v133) = 257;
    if ( (unsigned __int64)(v76 - (_QWORD)v75) > 7 )
    {
      *v75 = 0x20656E6966656423LL;
      *(_QWORD *)(v74 + 32) += 8LL;
    }
    else
    {
      v74 = sub_227BF10(v74, "#define ", 8);
    }
    sub_2254180(v125, v74);
    v77 = *(_BYTE **)(v74 + 32);
    if ( (unsigned __int64)v77 >= *(_QWORD *)(v74 + 24) )
    {
      v74 = sub_227BA10(v74, 32);
    }
    else
    {
      *(_QWORD *)(v74 + 32) = v77 + 1;
      *v77 = 32;
    }
    sub_2254180(v127, v74);
    v78 = *(_BYTE **)(v74 + 32);
    if ( (unsigned __int64)v78 >= *(_QWORD *)(v74 + 24) )
    {
      sub_227BA10(v74, 10);
    }
    else
    {
      *(_QWORD *)(v74 + 32) = v78 + 1;
      *v78 = 10;
    }
    if ( (unsigned __int8)v133 > 1u )
    {
      v79 = *a3;
      v80 = *(__m128i **)(*a3 + 32);
      if ( *(_QWORD *)(*a3 + 24) - (_QWORD)v80 > 0x18u )
      {
        v117 = _mm_load_si128((const __m128i *)&xmmword_23A9650);
        v80[1].m128i_i8[8] = 40;
        v80[1].m128i_i64[0] = 0x6465746163657270LL;
        *v80 = v117;
        *(_QWORD *)(v79 + 32) += 25LL;
      }
      else
      {
        v79 = sub_227BF10(*a3, "#pragma clang deprecated(", 25);
      }
      sub_2254180(v125, v79);
      v81 = *(_QWORD *)(v79 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v79 + 24) - v81) > 2 )
      {
        *(_BYTE *)(v81 + 2) = 34;
        *(_WORD *)v81 = 8236;
        *(_QWORD *)(v79 + 32) += 3LL;
      }
      else
      {
        v79 = sub_227BF10(v79, ", \"", 3);
      }
      sub_2254180(&v129, v79);
      v82 = *(_QWORD *)(v79 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v79 + 24) - v82) > 2 )
      {
        v4 = 10530;
        *(_BYTE *)(v82 + 2) = 10;
        *(_WORD *)v82 = 10530;
        *(_QWORD *)(v79 + 32) += 3LL;
      }
      else
      {
        sub_227BF10(v79, "\")\n", 3);
      }
    }
  }
  if ( *(_BYTE *)(a1 + 518) )
  {
    v65 = *a3;
    v127[0] = "1";
    v128 = 259;
    v125[0] = "__wasm_bulk_memory_opt__";
    v126 = 259;
    v66 = *(_QWORD *)(v65 + 24);
    LOWORD(v133) = 257;
    v67 = *(_QWORD **)(v65 + 32);
    if ( (unsigned __int64)(v66 - (_QWORD)v67) > 7 )
    {
      *v67 = 0x20656E6966656423LL;
      *(_QWORD *)(v65 + 32) += 8LL;
    }
    else
    {
      v65 = sub_227BF10(v65, "#define ", 8);
    }
    sub_2254180(v125, v65);
    v68 = *(_BYTE **)(v65 + 32);
    if ( (unsigned __int64)v68 >= *(_QWORD *)(v65 + 24) )
    {
      v65 = sub_227BA10(v65, 32);
    }
    else
    {
      *(_QWORD *)(v65 + 32) = v68 + 1;
      *v68 = 32;
    }
    sub_2254180(v127, v65);
    v69 = *(_BYTE **)(v65 + 32);
    if ( (unsigned __int64)v69 >= *(_QWORD *)(v65 + 24) )
    {
      sub_227BA10(v65, 10);
    }
    else
    {
      *(_QWORD *)(v65 + 32) = v69 + 1;
      *v69 = 10;
    }
    if ( (unsigned __int8)v133 > 1u )
    {
      v70 = *a3;
      v71 = *(__m128i **)(*a3 + 32);
      if ( *(_QWORD *)(*a3 + 24) - (_QWORD)v71 > 0x18u )
      {
        v121 = _mm_load_si128((const __m128i *)&xmmword_23A9650);
        v71[1].m128i_i8[8] = 40;
        v71[1].m128i_i64[0] = 0x6465746163657270LL;
        *v71 = v121;
        *(_QWORD *)(v70 + 32) += 25LL;
      }
      else
      {
        v70 = sub_227BF10(*a3, "#pragma clang deprecated(", 25);
      }
      sub_2254180(v125, v70);
      v72 = *(_QWORD *)(v70 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v70 + 24) - v72) > 2 )
      {
        *(_BYTE *)(v72 + 2) = 34;
        *(_WORD *)v72 = 8236;
        *(_QWORD *)(v70 + 32) += 3LL;
      }
      else
      {
        v70 = sub_227BF10(v70, ", \"", 3);
      }
      sub_2254180(&v129, v70);
      v73 = *(_QWORD *)(v70 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v70 + 24) - v73) > 2 )
      {
        *(_BYTE *)(v73 + 2) = 10;
        *(_WORD *)v73 = 10530;
        *(_QWORD *)(v70 + 32) += 3LL;
      }
      else
      {
        sub_227BF10(v70, "\")\n", 3);
      }
    }
  }
  if ( *(_BYTE *)(a1 + 520) )
  {
    v128 = 259;
    v125[0] = "__wasm_exception_handling__";
    LOWORD(v133) = 257;
    v127[0] = "1";
    v126 = 259;
    sub_1039E30(a3, (__int64)v125, (__int64)v127, v4, v5, v6, v129, v130, v131, v132, 1u);
  }
  if ( *(_BYTE *)(a1 + 521) )
  {
    v56 = *a3;
    v125[0] = "__wasm_extended_const__";
    v57 = *(_QWORD **)(v56 + 32);
    v58 = *(_QWORD *)(v56 + 24);
    v127[0] = "1";
    v128 = 259;
    v126 = 259;
    LOWORD(v133) = 257;
    if ( (unsigned __int64)(v58 - (_QWORD)v57) > 7 )
    {
      *v57 = 0x20656E6966656423LL;
      *(_QWORD *)(v56 + 32) += 8LL;
    }
    else
    {
      v56 = sub_227BF10(v56, "#define ", 8);
    }
    sub_2254180(v125, v56);
    v59 = *(_BYTE **)(v56 + 32);
    if ( (unsigned __int64)v59 >= *(_QWORD *)(v56 + 24) )
    {
      v56 = sub_227BA10(v56, 32);
    }
    else
    {
      *(_QWORD *)(v56 + 32) = v59 + 1;
      *v59 = 32;
    }
    sub_2254180(v127, v56);
    v60 = *(_BYTE **)(v56 + 32);
    if ( (unsigned __int64)v60 >= *(_QWORD *)(v56 + 24) )
    {
      sub_227BA10(v56, 10);
    }
    else
    {
      *(_QWORD *)(v56 + 32) = v60 + 1;
      *v60 = 10;
    }
    if ( (unsigned __int8)v133 > 1u )
    {
      v61 = *a3;
      v62 = *(__m128i **)(*a3 + 32);
      if ( *(_QWORD *)(*a3 + 24) - (_QWORD)v62 > 0x18u )
      {
        v124 = _mm_load_si128((const __m128i *)&xmmword_23A9650);
        v62[1].m128i_i8[8] = 40;
        v62[1].m128i_i64[0] = 0x6465746163657270LL;
        *v62 = v124;
        *(_QWORD *)(v61 + 32) += 25LL;
      }
      else
      {
        v61 = sub_227BF10(*a3, "#pragma clang deprecated(", 25);
      }
      sub_2254180(v125, v61);
      v63 = *(_QWORD *)(v61 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v61 + 24) - v63) > 2 )
      {
        *(_BYTE *)(v63 + 2) = 34;
        *(_WORD *)v63 = 8236;
        *(_QWORD *)(v61 + 32) += 3LL;
      }
      else
      {
        v61 = sub_227BF10(v61, ", \"", 3);
      }
      sub_2254180(&v129, v61);
      v64 = *(_QWORD *)(v61 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v61 + 24) - v64) > 2 )
      {
        *(_BYTE *)(v64 + 2) = 10;
        *(_WORD *)v64 = 10530;
        *(_QWORD *)(v61 + 32) += 3LL;
      }
      else
      {
        sub_227BF10(v61, "\")\n", 3);
      }
    }
  }
  if ( *(_BYTE *)(a1 + 523) )
  {
    v126 = 259;
    LOWORD(v133) = 257;
    v127[0] = "1";
    v128 = 259;
    v125[0] = "__wasm_multimemory__";
    sub_1039E30(a3, (__int64)v125, (__int64)v127, 259, v5, v6, v129, v130, v131, v132, 1u);
  }
  if ( *(_BYTE *)(a1 + 522) )
  {
    v127[0] = "1";
    LOWORD(v133) = 257;
    v128 = 259;
    v125[0] = "__wasm_fp16__";
    v126 = 259;
    sub_1039E30(a3, (__int64)v125, (__int64)v127, v4, v5, v6, v129, v130, v131, v132, 1u);
  }
  if ( *(_BYTE *)(a1 + 524) )
  {
    v127[0] = "1";
    LOWORD(v133) = 257;
    v128 = 259;
    v125[0] = "__wasm_multivalue__";
    v126 = 259;
    sub_1039E30(a3, (__int64)v125, (__int64)v127, v4, v5, v6, v129, v130, v131, v132, 1u);
  }
  if ( *(_BYTE *)(a1 + 525) )
  {
    v127[0] = "1";
    v128 = 259;
    LOWORD(v133) = 257;
    v125[0] = "__wasm_mutable_globals__";
    v126 = 259;
    sub_1039E30(a3, (__int64)v125, (__int64)v127, v4, v5, v6, v129, v130, v131, v132, 1u);
  }
  if ( *(_BYTE *)(a1 + 526) )
  {
    v47 = *a3;
    v125[0] = "__wasm_nontrapping_fptoint__";
    v48 = *(_QWORD **)(v47 + 32);
    v49 = *(_QWORD *)(v47 + 24);
    v127[0] = "1";
    v128 = 259;
    v126 = 259;
    LOWORD(v133) = 257;
    if ( (unsigned __int64)(v49 - (_QWORD)v48) > 7 )
    {
      *v48 = 0x20656E6966656423LL;
      *(_QWORD *)(v47 + 32) += 8LL;
    }
    else
    {
      v47 = sub_227BF10(v47, "#define ", 8);
    }
    sub_2254180(v125, v47);
    v50 = *(_BYTE **)(v47 + 32);
    if ( (unsigned __int64)v50 >= *(_QWORD *)(v47 + 24) )
    {
      v47 = sub_227BA10(v47, 32);
    }
    else
    {
      *(_QWORD *)(v47 + 32) = v50 + 1;
      *v50 = 32;
    }
    sub_2254180(v127, v47);
    v51 = *(_BYTE **)(v47 + 32);
    if ( (unsigned __int64)v51 >= *(_QWORD *)(v47 + 24) )
    {
      sub_227BA10(v47, 10);
    }
    else
    {
      *(_QWORD *)(v47 + 32) = v51 + 1;
      *v51 = 10;
    }
    if ( (unsigned __int8)v133 > 1u )
    {
      v52 = *a3;
      v53 = *(__m128i **)(*a3 + 32);
      if ( *(_QWORD *)(*a3 + 24) - (_QWORD)v53 > 0x18u )
      {
        v123 = _mm_load_si128((const __m128i *)&xmmword_23A9650);
        v53[1].m128i_i8[8] = 40;
        v53[1].m128i_i64[0] = 0x6465746163657270LL;
        *v53 = v123;
        *(_QWORD *)(v52 + 32) += 25LL;
      }
      else
      {
        v52 = sub_227BF10(*a3, "#pragma clang deprecated(", 25);
      }
      sub_2254180(v125, v52);
      v54 = *(_QWORD *)(v52 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v52 + 24) - v54) > 2 )
      {
        *(_BYTE *)(v54 + 2) = 34;
        *(_WORD *)v54 = 8236;
        *(_QWORD *)(v52 + 32) += 3LL;
      }
      else
      {
        v52 = sub_227BF10(v52, ", \"", 3);
      }
      sub_2254180(&v129, v52);
      v55 = *(_QWORD *)(v52 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v52 + 24) - v55) > 2 )
      {
        v4 = 10530;
        *(_BYTE *)(v55 + 2) = 10;
        *(_WORD *)v55 = 10530;
        *(_QWORD *)(v52 + 32) += 3LL;
      }
      else
      {
        sub_227BF10(v52, "\")\n", 3);
      }
    }
  }
  if ( *(_BYTE *)(a1 + 527) )
  {
    v96 = *a3;
    v127[0] = "1";
    v128 = 259;
    v125[0] = "__wasm_reference_types__";
    v126 = 259;
    v97 = *(_QWORD *)(v96 + 24);
    LOWORD(v133) = 257;
    v98 = *(_QWORD **)(v96 + 32);
    if ( (unsigned __int64)(v97 - (_QWORD)v98) > 7 )
    {
      *v98 = 0x20656E6966656423LL;
      *(_QWORD *)(v96 + 32) += 8LL;
    }
    else
    {
      v96 = sub_227BF10(v96, "#define ", 8);
    }
    sub_2254180(v125, v96);
    v99 = *(_BYTE **)(v96 + 32);
    if ( (unsigned __int64)v99 >= *(_QWORD *)(v96 + 24) )
    {
      v96 = sub_227BA10(v96, 32);
    }
    else
    {
      *(_QWORD *)(v96 + 32) = v99 + 1;
      *v99 = 32;
    }
    sub_2254180(v127, v96);
    v100 = *(_BYTE **)(v96 + 32);
    if ( (unsigned __int64)v100 >= *(_QWORD *)(v96 + 24) )
    {
      sub_227BA10(v96, 10);
    }
    else
    {
      *(_QWORD *)(v96 + 32) = v100 + 1;
      *v100 = 10;
    }
    if ( (unsigned __int8)v133 > 1u )
    {
      v101 = *a3;
      v102 = *(__m128i **)(*a3 + 32);
      if ( *(_QWORD *)(*a3 + 24) - (_QWORD)v102 > 0x18u )
      {
        v118 = _mm_load_si128((const __m128i *)&xmmword_23A9650);
        v102[1].m128i_i8[8] = 40;
        v102[1].m128i_i64[0] = 0x6465746163657270LL;
        *v102 = v118;
        *(_QWORD *)(v101 + 32) += 25LL;
      }
      else
      {
        v101 = sub_227BF10(*a3, "#pragma clang deprecated(", 25);
      }
      sub_2254180(v125, v101);
      v103 = *(_QWORD *)(v101 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v101 + 24) - v103) > 2 )
      {
        *(_BYTE *)(v103 + 2) = 34;
        *(_WORD *)v103 = 8236;
        *(_QWORD *)(v101 + 32) += 3LL;
      }
      else
      {
        v101 = sub_227BF10(v101, ", \"", 3);
      }
      sub_2254180(&v129, v101);
      v104 = *(_QWORD *)(v101 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v101 + 24) - v104) > 2 )
      {
        *(_BYTE *)(v104 + 2) = 10;
        *(_WORD *)v104 = 10530;
        *(_QWORD *)(v101 + 32) += 3LL;
      }
      else
      {
        sub_227BF10(v101, "\")\n", 3);
      }
    }
  }
  if ( *(int *)(a1 + 512) > 1 )
  {
    v127[0] = "1";
    v128 = 259;
    v27 = *a3;
    v125[0] = "__wasm_relaxed_simd__";
    v126 = 259;
    v28 = *(_QWORD **)(v27 + 32);
    LOWORD(v133) = 257;
    if ( *(_QWORD *)(v27 + 24) - (_QWORD)v28 > 7u )
    {
      *v28 = 0x20656E6966656423LL;
      *(_QWORD *)(v27 + 32) += 8LL;
    }
    else
    {
      v27 = sub_227BF10(v27, "#define ", 8);
    }
    sub_2254180(v125, v27);
    v29 = *(_BYTE **)(v27 + 32);
    if ( (unsigned __int64)v29 >= *(_QWORD *)(v27 + 24) )
    {
      v27 = sub_227BA10(v27, 32);
    }
    else
    {
      *(_QWORD *)(v27 + 32) = v29 + 1;
      *v29 = 32;
    }
    sub_2254180(v127, v27);
    v30 = *(_BYTE **)(v27 + 32);
    if ( (unsigned __int64)v30 >= *(_QWORD *)(v27 + 24) )
    {
      sub_227BA10(v27, 10);
    }
    else
    {
      *(_QWORD *)(v27 + 32) = v30 + 1;
      *v30 = 10;
    }
    if ( (unsigned __int8)v133 > 1u )
    {
      v31 = *a3;
      v32 = *(__m128i **)(*a3 + 32);
      if ( *(_QWORD *)(*a3 + 24) - (_QWORD)v32 > 0x18u )
      {
        v115 = _mm_load_si128((const __m128i *)&xmmword_23A9650);
        v32[1].m128i_i8[8] = 40;
        v32[1].m128i_i64[0] = 0x6465746163657270LL;
        *v32 = v115;
        *(_QWORD *)(v31 + 32) += 25LL;
      }
      else
      {
        v31 = sub_227BF10(*a3, "#pragma clang deprecated(", 25);
      }
      sub_2254180(v125, v31);
      v33 = *(_QWORD *)(v31 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v31 + 24) - v33) > 2 )
      {
        *(_BYTE *)(v33 + 2) = 34;
        *(_WORD *)v33 = 8236;
        *(_QWORD *)(v31 + 32) += 3LL;
      }
      else
      {
        v31 = sub_227BF10(v31, ", \"", 3);
      }
      sub_2254180(&v129, v31);
      v34 = *(_QWORD *)(v31 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v31 + 24) - v34) > 2 )
      {
        *(_BYTE *)(v34 + 2) = 10;
        *(_WORD *)v34 = 10530;
        *(_QWORD *)(v31 + 32) += 3LL;
      }
      else
      {
        sub_227BF10(v31, "\")\n", 3);
      }
    }
  }
  if ( *(_BYTE *)(a1 + 528) )
  {
    v127[0] = "1";
    LOWORD(v133) = 257;
    v128 = 259;
    v125[0] = "__wasm_sign_ext__";
    v126 = 259;
    sub_1039E30(a3, (__int64)v125, (__int64)v127, v4, 259, 259, v129, v130, v131, v132, 1u);
  }
  v7 = *a3;
  v8 = *(_QWORD *)(*a3 + 32);
  v9 = *(_QWORD *)(*a3 + 24) - v8;
  if ( *(int *)(a1 + 512) <= 0 )
    goto LABEL_298;
  v127[0] = "1";
  v125[0] = "__wasm_simd128__";
  v128 = 259;
  v126 = 259;
  LOWORD(v133) = 257;
  if ( v9 > 7 )
  {
    *(_QWORD *)v8 = 0x20656E6966656423LL;
    *(_QWORD *)(v7 + 32) += 8LL;
  }
  else
  {
    v7 = sub_227BF10(v7, "#define ", 8);
  }
  sub_2254180(v125, v7);
  v35 = *(_BYTE **)(v7 + 32);
  if ( (unsigned __int64)v35 >= *(_QWORD *)(v7 + 24) )
  {
    v7 = sub_227BA10(v7, 32);
  }
  else
  {
    *(_QWORD *)(v7 + 32) = v35 + 1;
    *v35 = 32;
  }
  sub_2254180(v127, v7);
  v36 = *(_BYTE **)(v7 + 32);
  if ( (unsigned __int64)v36 >= *(_QWORD *)(v7 + 24) )
  {
    sub_227BA10(v7, 10);
  }
  else
  {
    *(_QWORD *)(v7 + 32) = v36 + 1;
    *v36 = 10;
  }
  v7 = *a3;
  v8 = *(_QWORD *)(*a3 + 32);
  v9 = *(_QWORD *)(*a3 + 24) - v8;
  if ( (unsigned __int8)v133 <= 1u )
  {
LABEL_298:
    if ( !*(_BYTE *)(a1 + 529) )
      goto LABEL_22;
  }
  else
  {
    if ( v9 > 0x18 )
    {
      v116 = _mm_load_si128((const __m128i *)&xmmword_23A9650);
      *(_BYTE *)(v8 + 24) = 40;
      *(_QWORD *)(v8 + 16) = 0x6465746163657270LL;
      *(__m128i *)v8 = v116;
      *(_QWORD *)(v7 + 32) += 25LL;
    }
    else
    {
      v7 = sub_227BF10(*a3, "#pragma clang deprecated(", 25);
    }
    sub_2254180(v125, v7);
    v37 = *(_QWORD *)(v7 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v7 + 24) - v37) > 2 )
    {
      *(_BYTE *)(v37 + 2) = 34;
      *(_WORD *)v37 = 8236;
      *(_QWORD *)(v7 + 32) += 3LL;
    }
    else
    {
      v7 = sub_227BF10(v7, ", \"", 3);
    }
    sub_2254180(&v129, v7);
    v38 = *(_QWORD *)(v7 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v7 + 24) - v38) > 2 )
    {
      *(_BYTE *)(v38 + 2) = 10;
      *(_WORD *)v38 = 10530;
      *(_QWORD *)(v7 + 32) += 3LL;
    }
    else
    {
      sub_227BF10(v7, "\")\n", 3);
    }
    v7 = *a3;
    v8 = *(_QWORD *)(*a3 + 32);
    v9 = *(_QWORD *)(*a3 + 24) - v8;
    if ( !*(_BYTE *)(a1 + 529) )
      goto LABEL_22;
  }
  v127[0] = "1";
  v128 = 259;
  v125[0] = "__wasm_tail_call__";
  v126 = 259;
  LOWORD(v133) = 257;
  if ( v9 > 7 )
  {
    *(_QWORD *)v8 = 0x20656E6966656423LL;
    *(_QWORD *)(v7 + 32) += 8LL;
  }
  else
  {
    v7 = sub_227BF10(v7, "#define ", 8);
  }
  sub_2254180(v125, v7);
  v39 = *(_BYTE **)(v7 + 32);
  if ( (unsigned __int64)v39 >= *(_QWORD *)(v7 + 24) )
  {
    v7 = sub_227BA10(v7, 32);
  }
  else
  {
    *(_QWORD *)(v7 + 32) = v39 + 1;
    *v39 = 32;
  }
  sub_2254180(v127, v7);
  v40 = *(_BYTE **)(v7 + 32);
  if ( (unsigned __int64)v40 >= *(_QWORD *)(v7 + 24) )
  {
    sub_227BA10(v7, 10);
  }
  else
  {
    *(_QWORD *)(v7 + 32) = v40 + 1;
    *v40 = 10;
  }
  v7 = *a3;
  v8 = *(_QWORD *)(*a3 + 32);
  v9 = *(_QWORD *)(*a3 + 24) - v8;
  if ( (unsigned __int8)v133 > 1u )
  {
    if ( v9 > 0x18 )
    {
      v122 = _mm_load_si128((const __m128i *)&xmmword_23A9650);
      *(_BYTE *)(v8 + 24) = 40;
      *(_QWORD *)(v8 + 16) = 0x6465746163657270LL;
      *(__m128i *)v8 = v122;
      *(_QWORD *)(v7 + 32) += 25LL;
    }
    else
    {
      v7 = sub_227BF10(*a3, "#pragma clang deprecated(", 25);
    }
    sub_2254180(v125, v7);
    v41 = *(_QWORD *)(v7 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v7 + 24) - v41) > 2 )
    {
      *(_BYTE *)(v41 + 2) = 34;
      *(_WORD *)v41 = 8236;
      *(_QWORD *)(v7 + 32) += 3LL;
    }
    else
    {
      v7 = sub_227BF10(v7, ", \"", 3);
    }
    sub_2254180(&v129, v7);
    v42 = *(_QWORD *)(v7 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v7 + 24) - v42) > 2 )
    {
      *(_BYTE *)(v42 + 2) = 10;
      *(_WORD *)v42 = 10530;
      *(_QWORD *)(v7 + 32) += 3LL;
    }
    else
    {
      sub_227BF10(v7, "\")\n", 3);
    }
    v7 = *a3;
    v8 = *(_QWORD *)(*a3 + 32);
    v9 = *(_QWORD *)(*a3 + 24) - v8;
    if ( !*(_BYTE *)(a1 + 530) )
      goto LABEL_23;
    goto LABEL_93;
  }
LABEL_22:
  if ( !*(_BYTE *)(a1 + 530) )
    goto LABEL_23;
LABEL_93:
  v127[0] = "1";
  v128 = 259;
  v125[0] = "__wasm_wide_arithmetic__";
  v126 = 259;
  LOWORD(v133) = 257;
  if ( v9 > 7 )
  {
    *(_QWORD *)v8 = 0x20656E6966656423LL;
    *(_QWORD *)(v7 + 32) += 8LL;
  }
  else
  {
    v7 = sub_227BF10(v7, "#define ", 8);
  }
  sub_2254180(v125, v7);
  v43 = *(_BYTE **)(v7 + 32);
  if ( (unsigned __int64)v43 >= *(_QWORD *)(v7 + 24) )
  {
    v7 = sub_227BA10(v7, 32);
  }
  else
  {
    *(_QWORD *)(v7 + 32) = v43 + 1;
    *v43 = 32;
  }
  sub_2254180(v127, v7);
  v44 = *(_BYTE **)(v7 + 32);
  if ( (unsigned __int64)v44 >= *(_QWORD *)(v7 + 24) )
  {
    sub_227BA10(v7, 10);
  }
  else
  {
    *(_QWORD *)(v7 + 32) = v44 + 1;
    *v44 = 10;
  }
  v7 = *a3;
  v8 = *(_QWORD *)(*a3 + 32);
  v9 = *(_QWORD *)(*a3 + 24) - v8;
  if ( (unsigned __int8)v133 > 1u )
  {
    if ( v9 > 0x18 )
    {
      v119 = _mm_load_si128((const __m128i *)&xmmword_23A9650);
      *(_BYTE *)(v8 + 24) = 40;
      *(_QWORD *)(v8 + 16) = 0x6465746163657270LL;
      *(__m128i *)v8 = v119;
      *(_QWORD *)(v7 + 32) += 25LL;
    }
    else
    {
      v7 = sub_227BF10(*a3, "#pragma clang deprecated(", 25);
    }
    sub_2254180(v125, v7);
    v45 = *(_QWORD *)(v7 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v7 + 24) - v45) > 2 )
    {
      *(_BYTE *)(v45 + 2) = 34;
      *(_WORD *)v45 = 8236;
      *(_QWORD *)(v7 + 32) += 3LL;
    }
    else
    {
      v7 = sub_227BF10(v7, ", \"", 3);
    }
    sub_2254180(&v129, v7);
    v46 = *(_QWORD *)(v7 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v7 + 24) - v46) > 2 )
    {
      *(_BYTE *)(v46 + 2) = 10;
      *(_WORD *)v46 = 10530;
      *(_QWORD *)(v7 + 32) += 3LL;
    }
    else
    {
      sub_227BF10(v7, "\")\n", 3);
    }
    v7 = *a3;
    v8 = *(_QWORD *)(*a3 + 32);
    v9 = *(_QWORD *)(*a3 + 24) - v8;
  }
LABEL_23:
  v127[0] = "1";
  v128 = 259;
  v125[0] = "__GCC_HAVE_SYNC_COMPARE_AND_SWAP_1";
  v126 = 259;
  LOWORD(v133) = 257;
  if ( v9 > 7 )
  {
    *(_QWORD *)v8 = 0x20656E6966656423LL;
    *(_QWORD *)(v7 + 32) += 8LL;
  }
  else
  {
    v7 = sub_227BF10(v7, "#define ", 8);
  }
  sub_2254180(v125, v7);
  v10 = *(_BYTE **)(v7 + 32);
  if ( (unsigned __int64)v10 >= *(_QWORD *)(v7 + 24) )
  {
    v7 = sub_227BA10(v7, 32);
  }
  else
  {
    *(_QWORD *)(v7 + 32) = v10 + 1;
    *v10 = 32;
  }
  sub_2254180(v127, v7);
  v11 = *(_BYTE **)(v7 + 32);
  if ( (unsigned __int64)v11 >= *(_QWORD *)(v7 + 24) )
  {
    sub_227BA10(v7, 10);
  }
  else
  {
    *(_QWORD *)(v7 + 32) = v11 + 1;
    *v11 = 10;
  }
  v12 = *a3;
  v13 = *(__m128i **)(*a3 + 32);
  v14 = *(_QWORD *)(*a3 + 24) - (_QWORD)v13;
  if ( (unsigned __int8)v133 > 1u )
  {
    if ( v14 > 0x18 )
    {
      v114 = _mm_load_si128((const __m128i *)&xmmword_23A9650);
      v13[1].m128i_i8[8] = 40;
      v13[1].m128i_i64[0] = 0x6465746163657270LL;
      *v13 = v114;
      *(_QWORD *)(v12 + 32) += 25LL;
    }
    else
    {
      v12 = sub_227BF10(*a3, "#pragma clang deprecated(", 25);
    }
    sub_2254180(v125, v12);
    v105 = *(_QWORD *)(v12 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v12 + 24) - v105) > 2 )
    {
      *(_BYTE *)(v105 + 2) = 34;
      *(_WORD *)v105 = 8236;
      *(_QWORD *)(v12 + 32) += 3LL;
    }
    else
    {
      v12 = sub_227BF10(v12, ", \"", 3);
    }
    sub_2254180(&v129, v12);
    v106 = *(_QWORD *)(v12 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v12 + 24) - v106) > 2 )
    {
      *(_BYTE *)(v106 + 2) = 10;
      *(_WORD *)v106 = 10530;
      *(_QWORD *)(v12 + 32) += 3LL;
    }
    else
    {
      sub_227BF10(v12, "\")\n", 3);
    }
    v12 = *a3;
    v13 = *(__m128i **)(*a3 + 32);
    v14 = *(_QWORD *)(*a3 + 24) - (_QWORD)v13;
  }
  v127[0] = "1";
  v128 = 259;
  v125[0] = "__GCC_HAVE_SYNC_COMPARE_AND_SWAP_2";
  v126 = 259;
  LOWORD(v133) = 257;
  if ( v14 > 7 )
  {
    v13->m128i_i64[0] = 0x20656E6966656423LL;
    *(_QWORD *)(v12 + 32) += 8LL;
  }
  else
  {
    v12 = sub_227BF10(v12, "#define ", 8);
  }
  sub_2254180(v125, v12);
  v15 = *(_BYTE **)(v12 + 32);
  if ( (unsigned __int64)v15 >= *(_QWORD *)(v12 + 24) )
  {
    v12 = sub_227BA10(v12, 32);
  }
  else
  {
    *(_QWORD *)(v12 + 32) = v15 + 1;
    *v15 = 32;
  }
  sub_2254180(v127, v12);
  v16 = *(_BYTE **)(v12 + 32);
  if ( (unsigned __int64)v16 >= *(_QWORD *)(v12 + 24) )
  {
    sub_227BA10(v12, 10);
  }
  else
  {
    *(_QWORD *)(v12 + 32) = v16 + 1;
    *v16 = 10;
  }
  v17 = *a3;
  v18 = *(__m128i **)(*a3 + 32);
  v19 = *(_QWORD *)(*a3 + 24) - (_QWORD)v18;
  if ( (unsigned __int8)v133 > 1u )
  {
    if ( v19 > 0x18 )
    {
      v112 = _mm_load_si128((const __m128i *)&xmmword_23A9650);
      v18[1].m128i_i8[8] = 40;
      v18[1].m128i_i64[0] = 0x6465746163657270LL;
      *v18 = v112;
      *(_QWORD *)(v17 + 32) += 25LL;
    }
    else
    {
      v17 = sub_227BF10(*a3, "#pragma clang deprecated(", 25);
    }
    sub_2254180(v125, v17);
    v109 = *(_QWORD *)(v17 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v17 + 24) - v109) > 2 )
    {
      *(_BYTE *)(v109 + 2) = 34;
      *(_WORD *)v109 = 8236;
      *(_QWORD *)(v17 + 32) += 3LL;
    }
    else
    {
      v17 = sub_227BF10(v17, ", \"", 3);
    }
    sub_2254180(&v129, v17);
    v110 = *(_QWORD *)(v17 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v17 + 24) - v110) > 2 )
    {
      *(_BYTE *)(v110 + 2) = 10;
      *(_WORD *)v110 = 10530;
      *(_QWORD *)(v17 + 32) += 3LL;
    }
    else
    {
      sub_227BF10(v17, "\")\n", 3);
    }
    v17 = *a3;
    v18 = *(__m128i **)(*a3 + 32);
    v19 = *(_QWORD *)(*a3 + 24) - (_QWORD)v18;
  }
  v127[0] = "1";
  v125[0] = "__GCC_HAVE_SYNC_COMPARE_AND_SWAP_4";
  v128 = 259;
  v126 = 259;
  LOWORD(v133) = 257;
  if ( v19 > 7 )
  {
    v18->m128i_i64[0] = 0x20656E6966656423LL;
    *(_QWORD *)(v17 + 32) += 8LL;
  }
  else
  {
    v17 = sub_227BF10(v17, "#define ", 8);
  }
  sub_2254180(v125, v17);
  v20 = *(_BYTE **)(v17 + 32);
  if ( (unsigned __int64)v20 >= *(_QWORD *)(v17 + 24) )
  {
    v17 = sub_227BA10(v17, 32);
  }
  else
  {
    *(_QWORD *)(v17 + 32) = v20 + 1;
    *v20 = 32;
  }
  sub_2254180(v127, v17);
  v21 = *(_BYTE **)(v17 + 32);
  if ( (unsigned __int64)v21 >= *(_QWORD *)(v17 + 24) )
  {
    sub_227BA10(v17, 10);
  }
  else
  {
    *(_QWORD *)(v17 + 32) = v21 + 1;
    *v21 = 10;
  }
  v22 = *a3;
  v23 = *(__m128i **)(*a3 + 32);
  v24 = *(_QWORD *)(*a3 + 24) - (_QWORD)v23;
  if ( (unsigned __int8)v133 > 1u )
  {
    if ( v24 > 0x18 )
    {
      v113 = _mm_load_si128((const __m128i *)&xmmword_23A9650);
      v23[1].m128i_i8[8] = 40;
      v23[1].m128i_i64[0] = 0x6465746163657270LL;
      *v23 = v113;
      *(_QWORD *)(v22 + 32) += 25LL;
    }
    else
    {
      v22 = sub_227BF10(*a3, "#pragma clang deprecated(", 25);
    }
    sub_2254180(v125, v22);
    v107 = *(_QWORD *)(v22 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v22 + 24) - v107) > 2 )
    {
      *(_BYTE *)(v107 + 2) = 34;
      *(_WORD *)v107 = 8236;
      *(_QWORD *)(v22 + 32) += 3LL;
    }
    else
    {
      v22 = sub_227BF10(v22, ", \"", 3);
    }
    sub_2254180(&v129, v22);
    v108 = *(_QWORD *)(v22 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v22 + 24) - v108) > 2 )
    {
      *(_BYTE *)(v108 + 2) = 10;
      *(_WORD *)v108 = 10530;
      *(_QWORD *)(v22 + 32) += 3LL;
    }
    else
    {
      sub_227BF10(v22, "\")\n", 3);
    }
    v22 = *a3;
    v23 = *(__m128i **)(*a3 + 32);
    v24 = *(_QWORD *)(*a3 + 24) - (_QWORD)v23;
  }
  v127[0] = "1";
  v128 = 259;
  v125[0] = "__GCC_HAVE_SYNC_COMPARE_AND_SWAP_8";
  v126 = 259;
  LOWORD(v133) = 257;
  if ( v24 > 7 )
  {
    v23->m128i_i64[0] = 0x20656E6966656423LL;
    *(_QWORD *)(v22 + 32) += 8LL;
  }
  else
  {
    v22 = sub_227BF10(v22, "#define ", 8);
  }
  sub_2254180(v125, v22);
  v25 = *(_BYTE **)(v22 + 32);
  if ( (unsigned __int64)v25 >= *(_QWORD *)(v22 + 24) )
  {
    v22 = sub_227BA10(v22, 32);
  }
  else
  {
    *(_QWORD *)(v22 + 32) = v25 + 1;
    *v25 = 32;
  }
  sub_2254180(v127, v22);
  result = *(_BYTE **)(v22 + 32);
  if ( (unsigned __int64)result >= *(_QWORD *)(v22 + 24) )
  {
    result = (_BYTE *)sub_227BA10(v22, 10);
  }
  else
  {
    *(_QWORD *)(v22 + 32) = result + 1;
    *result = 10;
  }
  if ( (unsigned __int8)v133 > 1u )
  {
    v92 = *a3;
    v93 = *(__m128i **)(*a3 + 32);
    if ( *(_QWORD *)(*a3 + 24) - (_QWORD)v93 > 0x18u )
    {
      v111 = _mm_load_si128((const __m128i *)&xmmword_23A9650);
      v93[1].m128i_i8[8] = 40;
      v93[1].m128i_i64[0] = 0x6465746163657270LL;
      *v93 = v111;
      *(_QWORD *)(v92 + 32) += 25LL;
    }
    else
    {
      v92 = sub_227BF10(*a3, "#pragma clang deprecated(", 25);
    }
    sub_2254180(v125, v92);
    v94 = *(_QWORD *)(v92 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v92 + 24) - v94) > 2 )
    {
      *(_BYTE *)(v94 + 2) = 34;
      *(_WORD *)v94 = 8236;
      *(_QWORD *)(v92 + 32) += 3LL;
    }
    else
    {
      v92 = sub_227BF10(v92, ", \"", 3);
    }
    sub_2254180(&v129, v92);
    v95 = *(_QWORD *)(v92 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v92 + 24) - v95) > 2 )
    {
      *(_BYTE *)(v95 + 2) = 10;
      *(_WORD *)v95 = 10530;
      *(_QWORD *)(v92 + 32) += 3LL;
      return (_BYTE *)(elf_gnu_hash_chain + 3750);
    }
    else
    {
      return (_BYTE *)sub_227BF10(v92, "\")\n", 3);
    }
  }
  return result;
}
