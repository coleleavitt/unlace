_BYTE *__fastcall sub_10545A0(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rbp
  _QWORD *v5; // rdx
  __int64 v6; // rax
  _BYTE *v7; // rax
  _BYTE *v8; // rax
  __int64 v9; // rbp
  __m128i *v10; // rdx
  unsigned __int64 v11; // rax
  _BYTE *v12; // rax
  _BYTE *v13; // rax
  __int64 v14; // rbp
  __m128i *v15; // rdx
  unsigned __int64 v16; // rax
  _BYTE *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  _BYTE *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rbp
  __int64 v24; // rax
  _QWORD *v25; // rdx
  __int64 v26; // rax
  _BYTE *v27; // rax
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  _BYTE *v31; // rax
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rax
  unsigned __int8 *v40; // rdx
  int v41; // eax
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rax
  _BYTE *v46; // rdx
  __int64 v47; // rbp
  __m128i *v48; // rdx
  __int64 v49; // rax
  _BYTE *v50; // rax
  _BYTE *result; // rax
  __int64 v52; // rax
  __int64 v53; // rbp
  __int64 v54; // rdx
  _QWORD *v55; // rax
  _BYTE *v56; // rax
  _BYTE *v57; // rax
  __int64 v58; // rbp
  __m128i *v59; // rdx
  __int64 v60; // rdx
  __int64 v61; // rdx
  __int64 v62; // rbp
  _QWORD *v63; // rdx
  __int64 v64; // rax
  _BYTE *v65; // rax
  __int64 v66; // rbp
  _QWORD *v67; // rdx
  _BYTE *v68; // rax
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // rcx
  __int64 v75; // r9
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 v78; // rbp
  _QWORD *v79; // rdx
  __int64 v80; // rax
  _BYTE *v81; // rax
  _BYTE *v82; // rax
  unsigned __int64 v83; // rax
  __int64 v84; // rbp
  __m128i *v85; // rdx
  __int64 v86; // rdx
  __int64 v87; // rdx
  __int64 v88; // rdx
  __int64 v89; // rbp
  __m128i *v90; // rdx
  __int64 v91; // rdx
  __int64 v92; // rdx
  __int64 v93; // rdx
  __int64 v94; // rdx
  __int64 v95; // rbp
  __m128i *v96; // rdx
  __int64 v97; // rdx
  __int64 v98; // rdx
  __int64 v99; // rdx
  __int64 v100; // rdx
  __m128i v101; // xmm0
  __m128i si128; // xmm0
  __m128i v103; // xmm0
  __m128i v104; // xmm0
  __m128i v105; // xmm0
  __int64 v106; // rdx
  __int64 v107; // rdx
  __int64 v108; // rbp
  __m128i *v109; // rdx
  __int64 v110; // rdx
  __int64 v111; // rdx
  __int64 v112; // rbp
  __m128i *v113; // rdx
  __int64 v114; // rdx
  __int64 v115; // rdx
  __m128i v116; // xmm0
  __m128i v117; // xmm0
  __m128i v118; // xmm0
  __m128i v119; // xmm0
  _QWORD v120[4]; // [rsp+0h] [rbp-C8h] BYREF
  __int16 v121; // [rsp+20h] [rbp-A8h]
  _QWORD v122[4]; // [rsp+30h] [rbp-98h] BYREF
  __int16 v123; // [rsp+50h] [rbp-78h]
  __int64 v124; // [rsp+60h] [rbp-68h] BYREF
  __int64 v125; // [rsp+68h] [rbp-60h]
  __int64 v126; // [rsp+70h] [rbp-58h]
  __int64 v127; // [rsp+78h] [rbp-50h]
  __int64 v128; // [rsp+80h] [rbp-48h]

  v4 = *a3;
  v120[0] = "AVR";
  v5 = *(_QWORD **)(v4 + 32);
  v6 = *(_QWORD *)(v4 + 24);
  v122[0] = "1";
  v123 = 259;
  v121 = 259;
  LOWORD(v128) = 257;
  if ( (unsigned __int64)(v6 - (_QWORD)v5) > 7 )
  {
    *v5 = 0x20656E6966656423LL;
    *(_QWORD *)(v4 + 32) += 8LL;
  }
  else
  {
    v4 = sub_22581D0(v4, "#define ", 8);
  }
  sub_2230440(v120, v4);
  v7 = *(_BYTE **)(v4 + 32);
  if ( (unsigned __int64)v7 >= *(_QWORD *)(v4 + 24) )
  {
    v4 = sub_2257CD0(v4, 32);
  }
  else
  {
    *(_QWORD *)(v4 + 32) = v7 + 1;
    *v7 = 32;
  }
  sub_2230440(v122, v4);
  v8 = *(_BYTE **)(v4 + 32);
  if ( (unsigned __int64)v8 >= *(_QWORD *)(v4 + 24) )
  {
    sub_2257CD0(v4, 10);
  }
  else
  {
    *(_QWORD *)(v4 + 32) = v8 + 1;
    *v8 = 10;
  }
  v9 = *a3;
  v10 = *(__m128i **)(*a3 + 32);
  v11 = *(_QWORD *)(*a3 + 24) - (_QWORD)v10;
  if ( (unsigned __int8)v128 > 1u )
  {
    if ( v11 > 0x18 )
    {
      si128 = _mm_load_si128((const __m128i *)&xmmword_2385620);
      v10[1].m128i_i8[8] = 40;
      v10[1].m128i_i64[0] = 0x6465746163657270LL;
      *v10 = si128;
      *(_QWORD *)(v9 + 32) += 25LL;
    }
    else
    {
      v9 = sub_22581D0(*a3, "#pragma clang deprecated(", 25);
    }
    sub_2230440(v120, v9);
    v99 = *(_QWORD *)(v9 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v9 + 24) - v99) > 2 )
    {
      *(_BYTE *)(v99 + 2) = 34;
      *(_WORD *)v99 = 8236;
      *(_QWORD *)(v9 + 32) += 3LL;
    }
    else
    {
      v9 = sub_22581D0(v9, ", \"", 3);
    }
    sub_2230440(&v124, v9);
    v100 = *(_QWORD *)(v9 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v9 + 24) - v100) > 2 )
    {
      *(_BYTE *)(v100 + 2) = 10;
      *(_WORD *)v100 = 10530;
      *(_QWORD *)(v9 + 32) += 3LL;
    }
    else
    {
      sub_22581D0(v9, "\")\n", 3);
    }
    v9 = *a3;
    v10 = *(__m128i **)(*a3 + 32);
    v11 = *(_QWORD *)(*a3 + 24) - (_QWORD)v10;
  }
  v122[0] = "1";
  v120[0] = "__AVR";
  v123 = 259;
  v121 = 259;
  LOWORD(v128) = 257;
  if ( v11 > 7 )
  {
    v10->m128i_i64[0] = 0x20656E6966656423LL;
    *(_QWORD *)(v9 + 32) += 8LL;
  }
  else
  {
    v9 = sub_22581D0(v9, "#define ", 8);
  }
  sub_2230440(v120, v9);
  v12 = *(_BYTE **)(v9 + 32);
  if ( (unsigned __int64)v12 >= *(_QWORD *)(v9 + 24) )
  {
    v9 = sub_2257CD0(v9, 32);
  }
  else
  {
    *(_QWORD *)(v9 + 32) = v12 + 1;
    *v12 = 32;
  }
  sub_2230440(v122, v9);
  v13 = *(_BYTE **)(v9 + 32);
  if ( (unsigned __int64)v13 >= *(_QWORD *)(v9 + 24) )
  {
    sub_2257CD0(v9, 10);
  }
  else
  {
    *(_QWORD *)(v9 + 32) = v13 + 1;
    *v13 = 10;
  }
  v14 = *a3;
  v15 = *(__m128i **)(*a3 + 32);
  v16 = *(_QWORD *)(*a3 + 24) - (_QWORD)v15;
  if ( (unsigned __int8)v128 > 1u )
  {
    if ( v16 > 0x18 )
    {
      v103 = _mm_load_si128((const __m128i *)&xmmword_2385620);
      v15[1].m128i_i8[8] = 40;
      v15[1].m128i_i64[0] = 0x6465746163657270LL;
      *v15 = v103;
      *(_QWORD *)(v14 + 32) += 25LL;
    }
    else
    {
      v14 = sub_22581D0(*a3, "#pragma clang deprecated(", 25);
    }
    sub_2230440(v120, v14);
    v93 = *(_QWORD *)(v14 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v14 + 24) - v93) > 2 )
    {
      *(_BYTE *)(v93 + 2) = 34;
      *(_WORD *)v93 = 8236;
      *(_QWORD *)(v14 + 32) += 3LL;
    }
    else
    {
      v14 = sub_22581D0(v14, ", \"", 3);
    }
    sub_2230440(&v124, v14);
    v94 = *(_QWORD *)(v14 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v14 + 24) - v94) > 2 )
    {
      *(_BYTE *)(v94 + 2) = 10;
      *(_WORD *)v94 = 10530;
      *(_QWORD *)(v14 + 32) += 3LL;
    }
    else
    {
      sub_22581D0(v14, "\")\n", 3);
    }
    v14 = *a3;
    v15 = *(__m128i **)(*a3 + 32);
    v16 = *(_QWORD *)(*a3 + 24) - (_QWORD)v15;
  }
  v122[0] = "1";
  v123 = 259;
  v120[0] = "__AVR__";
  v121 = 259;
  LOWORD(v128) = 257;
  if ( v16 > 7 )
  {
    v15->m128i_i64[0] = 0x20656E6966656423LL;
    *(_QWORD *)(v14 + 32) += 8LL;
  }
  else
  {
    v14 = sub_22581D0(v14, "#define ", 8);
  }
  sub_2230440(v120, v14);
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
  sub_2230440(v122, v14);
  v20 = *(_BYTE **)(v14 + 32);
  if ( (unsigned __int64)v20 >= *(_QWORD *)(v14 + 24) )
  {
    sub_2257CD0(v14, 10);
    if ( (unsigned __int8)v128 <= 1u )
      goto LABEL_21;
  }
  else
  {
    *(_QWORD *)(v14 + 32) = v20 + 1;
    *v20 = 10;
    if ( (unsigned __int8)v128 <= 1u )
      goto LABEL_21;
  }
  v89 = *a3;
  v90 = *(__m128i **)(*a3 + 32);
  if ( *(_QWORD *)(*a3 + 24) - (_QWORD)v90 > 0x18u )
  {
    v101 = _mm_load_si128((const __m128i *)&xmmword_2385620);
    v90[1].m128i_i8[8] = 40;
    v90[1].m128i_i64[0] = 0x6465746163657270LL;
    *v90 = v101;
    *(_QWORD *)(v89 + 32) += 25LL;
  }
  else
  {
    v89 = sub_22581D0(*a3, "#pragma clang deprecated(", 25);
  }
  sub_2230440(v120, v89);
  v91 = *(_QWORD *)(v89 + 32);
  if ( (unsigned __int64)(*(_QWORD *)(v89 + 24) - v91) > 2 )
  {
    *(_BYTE *)(v91 + 2) = 34;
    *(_WORD *)v91 = 8236;
    *(_QWORD *)(v89 + 32) += 3LL;
  }
  else
  {
    v89 = sub_22581D0(v89, ", \"", 3);
  }
  sub_2230440(&v124, v89);
  v92 = *(_QWORD *)(v89 + 32);
  if ( (unsigned __int64)(*(_QWORD *)(v89 + 24) - v92) > 2 )
  {
    *(_BYTE *)(v92 + 2) = 10;
    *(_WORD *)v92 = 10530;
    *(_QWORD *)(v89 + 32) += 3LL;
  }
  else
  {
    sub_22581D0(v89, "\")\n", 3);
  }
LABEL_21:
  if ( *(_QWORD *)(a1 + 552) == 7 )
  {
    v52 = *(_QWORD *)(a1 + 544);
    if ( *(_DWORD *)v52 == 1953658465 && *(_WORD *)(v52 + 4) == 28265 && *(_BYTE *)(v52 + 6) == 121 )
    {
      v53 = *a3;
      v122[0] = "1";
      v123 = 259;
      v120[0] = "__AVR_TINY__";
      v54 = *(_QWORD *)(v53 + 24);
      v121 = 259;
      LOWORD(v128) = 257;
      v55 = *(_QWORD **)(v53 + 32);
      if ( (unsigned __int64)(v54 - (_QWORD)v55) > 7 )
      {
        *v55 = 0x20656E6966656423LL;
        *(_QWORD *)(v53 + 32) += 8LL;
      }
      else
      {
        v53 = sub_22581D0(v53, "#define ", 8);
      }
      sub_2230440(v120, v53);
      v56 = *(_BYTE **)(v53 + 32);
      if ( (unsigned __int64)v56 >= *(_QWORD *)(v53 + 24) )
      {
        v53 = sub_2257CD0(v53, 32);
      }
      else
      {
        *(_QWORD *)(v53 + 32) = v56 + 1;
        *v56 = 32;
      }
      sub_2230440(v122, v53);
      v57 = *(_BYTE **)(v53 + 32);
      if ( (unsigned __int64)v57 >= *(_QWORD *)(v53 + 24) )
      {
        sub_2257CD0(v53, 10);
      }
      else
      {
        *(_QWORD *)(v53 + 32) = v57 + 1;
        *v57 = 10;
      }
      if ( (unsigned __int8)v128 > 1u )
      {
        v58 = *a3;
        v59 = *(__m128i **)(*a3 + 32);
        if ( *(_QWORD *)(*a3 + 24) - (_QWORD)v59 > 0x18u )
        {
          v119 = _mm_load_si128((const __m128i *)&xmmword_2385620);
          v59[1].m128i_i8[8] = 40;
          v59[1].m128i_i64[0] = 0x6465746163657270LL;
          *v59 = v119;
          *(_QWORD *)(v58 + 32) += 25LL;
        }
        else
        {
          v58 = sub_22581D0(*a3, "#pragma clang deprecated(", 25);
        }
        sub_2230440(v120, v58);
        v60 = *(_QWORD *)(v58 + 32);
        if ( (unsigned __int64)(*(_QWORD *)(v58 + 24) - v60) > 2 )
        {
          *(_BYTE *)(v60 + 2) = 34;
          *(_WORD *)v60 = 8236;
          *(_QWORD *)(v58 + 32) += 3LL;
        }
        else
        {
          v58 = sub_22581D0(v58, ", \"", 3);
        }
        sub_2230440(&v124, v58);
        v61 = *(_QWORD *)(v58 + 32);
        if ( (unsigned __int64)(*(_QWORD *)(v58 + 24) - v61) > 2 )
        {
          *(_BYTE *)(v61 + 2) = 10;
          *(_WORD *)v61 = 10530;
          *(_QWORD *)(v58 + 32) += 3LL;
        }
        else
        {
          sub_22581D0(v58, "\")\n", 3);
        }
      }
    }
  }
  v21 = *(_QWORD *)(a1 + 568);
  if ( v21 )
  {
    v88 = *(_QWORD *)(a1 + 560);
    v122[0] = "1";
    v120[0] = v88;
    LOWORD(v128) = 257;
    v123 = 259;
    v121 = 261;
    v120[1] = v21;
    sub_10160F0(a3, (__int64)v120, (__int64)v122, v18, v19, 257, v124, v125, v126, v127, 1u);
  }
  v22 = *(_QWORD *)(a1 + 576);
  v23 = *a3;
  v123 = 261;
  v122[0] = v22;
  v24 = *(_QWORD *)(a1 + 584);
  v25 = *(_QWORD **)(v23 + 32);
  v121 = 259;
  v122[1] = v24;
  v120[0] = "__AVR_ARCH__";
  v26 = *(_QWORD *)(v23 + 24);
  LOWORD(v128) = 257;
  if ( (unsigned __int64)(v26 - (_QWORD)v25) > 7 )
  {
    *v25 = 0x20656E6966656423LL;
    *(_QWORD *)(v23 + 32) += 8LL;
  }
  else
  {
    v23 = sub_22581D0(v23, "#define ", 8);
  }
  sub_2230440(v120, v23);
  v27 = *(_BYTE **)(v23 + 32);
  if ( (unsigned __int64)v27 >= *(_QWORD *)(v23 + 24) )
  {
    v23 = sub_2257CD0(v23, 32);
  }
  else
  {
    *(_QWORD *)(v23 + 32) = v27 + 1;
    *v27 = 32;
  }
  sub_2230440(v122, v23);
  v31 = *(_BYTE **)(v23 + 32);
  if ( (unsigned __int64)v31 >= *(_QWORD *)(v23 + 24) )
  {
    sub_2257CD0(v23, 10);
    if ( (unsigned __int8)v128 <= 1u )
      goto LABEL_30;
  }
  else
  {
    *(_QWORD *)(v23 + 32) = v31 + 1;
    *v31 = 10;
    if ( (unsigned __int8)v128 <= 1u )
      goto LABEL_30;
  }
  v95 = *a3;
  v96 = *(__m128i **)(*a3 + 32);
  if ( *(_QWORD *)(*a3 + 24) - (_QWORD)v96 > 0x18u )
  {
    v105 = _mm_load_si128((const __m128i *)&xmmword_2385620);
    v96[1].m128i_i8[8] = 40;
    v96[1].m128i_i64[0] = 0x6465746163657270LL;
    *v96 = v105;
    *(_QWORD *)(v95 + 32) += 25LL;
  }
  else
  {
    v95 = sub_22581D0(*a3, "#pragma clang deprecated(", 25);
  }
  sub_2230440(v120, v95);
  v97 = *(_QWORD *)(v95 + 32);
  if ( (unsigned __int64)(*(_QWORD *)(v95 + 24) - v97) > 2 )
  {
    *(_BYTE *)(v97 + 2) = 34;
    *(_WORD *)v97 = 8236;
    *(_QWORD *)(v95 + 32) += 3LL;
  }
  else
  {
    v95 = sub_22581D0(v95, ", \"", 3);
  }
  sub_2230440(&v124, v95);
  v98 = *(_QWORD *)(v95 + 32);
  if ( (unsigned __int64)(*(_QWORD *)(v95 + 24) - v98) > 2 )
  {
    *(_BYTE *)(v98 + 2) = 10;
    *(_WORD *)v98 = 10530;
    *(_QWORD *)(v95 + 32) += 3LL;
  }
  else
  {
    sub_22581D0(v95, "\")\n", 3);
  }
LABEL_30:
  v32 = *(_QWORD *)(a1 + 584);
  v33 = *(_QWORD *)(a1 + 576);
  switch ( v32 )
  {
    case 2LL:
      if ( *(_WORD *)v33 != 12595 && *(_WORD *)v33 != 12597 )
      {
LABEL_88:
        if ( *(_WORD *)v33 != 12597 )
          goto LABEL_45;
        goto LABEL_89;
      }
      break;
    case 1LL:
      if ( *(_BYTE *)v33 != 54 )
        goto LABEL_97;
      break;
    case 3LL:
      if ( (*(_WORD *)v33 != 12337 || *(_BYTE *)(v33 + 2) != 50)
        && (*(_WORD *)v33 != 12337 || *(_BYTE *)(v33 + 2) != 52)
        && (*(_WORD *)v33 != 12337 || *(_BYTE *)(v33 + 2) != 53)
        && (*(_WORD *)v33 != 12337 || *(_BYTE *)(v33 + 2) != 54)
        && (*(_WORD *)v33 != 12337 || *(_BYTE *)(v33 + 2) != 55) )
      {
        goto LABEL_39;
      }
      break;
    default:
      goto LABEL_87;
  }
  v122[0] = "1";
  LOWORD(v128) = 257;
  v123 = 259;
  v120[0] = "__AVR_HAVE_ELPM__";
  v121 = 259;
  sub_10160F0(a3, (__int64)v120, (__int64)v122, v28, v29, v30, v124, v125, v126, v127, 1u);
  v33 = *(_QWORD *)(a1 + 576);
  v32 = *(_QWORD *)(a1 + 584);
LABEL_87:
  if ( v32 == 2 )
    goto LABEL_88;
  if ( v32 == 1 )
  {
LABEL_97:
    if ( *(_BYTE *)v33 != 54 )
      goto LABEL_45;
LABEL_89:
    v123 = 259;
    v120[0] = "__AVR_HAVE_ELPMX__";
    LOWORD(v128) = 257;
    v122[0] = "1";
    v121 = 259;
    sub_10160F0(a3, (__int64)v120, (__int64)v122, v28, v29, v30, v124, v125, v126, v127, 1u);
    goto LABEL_45;
  }
  if ( v32 != 3 )
    goto LABEL_45;
LABEL_39:
  if ( *(_WORD *)v33 == 12337 && *(_BYTE *)(v33 + 2) == 50
    || *(_WORD *)v33 == 12337 && *(_BYTE *)(v33 + 2) == 52
    || *(_WORD *)v33 == 12337 && *(_BYTE *)(v33 + 2) == 53
    || *(_WORD *)v33 == 12337 && *(_BYTE *)(v33 + 2) == 54
    || *(_WORD *)v33 == 12337 && *(_BYTE *)(v33 + 2) == 55 )
  {
    goto LABEL_89;
  }
LABEL_45:
  if ( (unsigned __int8)sub_10542D0(*(_BYTE **)(a1 + 576), *(_QWORD *)(a1 + 584)) )
  {
    v122[0] = "1";
    v120[0] = "__AVR_HAVE_MOVW__";
    LOWORD(v128) = 257;
    v123 = 259;
    v121 = 259;
    sub_10160F0(a3, (__int64)v120, (__int64)v122, v34, v35, 257, v124, v125, v126, v127, 1u);
  }
  if ( (unsigned __int8)sub_10542D0(*(_BYTE **)(a1 + 576), *(_QWORD *)(a1 + 584)) )
  {
    v122[0] = "1";
    v123 = 259;
    LOWORD(v128) = 257;
    v120[0] = "__AVR_HAVE_LPMX__";
    v121 = 259;
    sub_10160F0(a3, (__int64)v120, (__int64)v122, v36, 259, v38, v124, v125, v126, v127, 1u);
  }
  v39 = *(_QWORD *)(a1 + 584);
  v40 = *(unsigned __int8 **)(a1 + 576);
  if ( v39 == 1 )
  {
    v41 = *v40;
    if ( v41 == 52 || v41 == 53 || *v40 == 54 )
      goto LABEL_53;
  }
  else if ( v39 == 2 )
  {
    if ( *(_WORD *)v40 == 12597 )
    {
LABEL_53:
      v123 = 259;
      LOWORD(v128) = 257;
      v122[0] = "1";
      v120[0] = "__AVR_HAVE_MUL__";
      v121 = 259;
      sub_10160F0(a3, (__int64)v120, (__int64)v122, 259, v37, v38, v124, v125, v126, v127, 1u);
    }
  }
  else if ( v39 == 3
         && (*(_WORD *)v40 == 12337 && v40[2] == 50
          || *(_WORD *)v40 == 12337 && v40[2] == 51
          || *(_WORD *)v40 == 12337 && v40[2] == 52
          || *(_WORD *)v40 == 12337 && v40[2] == 53
          || *(_WORD *)v40 == 12337 && v40[2] == 54
          || *(_WORD *)v40 == 12337 && v40[2] == 55) )
  {
    goto LABEL_53;
  }
  if ( sub_10543C0(*(_BYTE **)(a1 + 576), *(_QWORD *)(a1 + 584)) )
  {
    v122[0] = "1";
    LOWORD(v128) = 257;
    v123 = 259;
    v120[0] = "__AVR_HAVE_JMP_CALL__";
    v121 = 259;
    sub_10160F0(a3, (__int64)v120, (__int64)v122, v42, v43, v44, v124, v125, v126, v127, 1u);
  }
  v45 = *(_QWORD *)(a1 + 584);
  v46 = *(_BYTE **)(a1 + 576);
  if ( v45 == 1 )
  {
    if ( *v46 == 54 )
    {
LABEL_120:
      v122[0] = "1";
      LOWORD(v128) = 257;
      v78 = *a3;
      v120[0] = "__AVR_HAVE_EIJMP_EICALL__";
      v79 = *(_QWORD **)(v78 + 32);
      v80 = *(_QWORD *)(v78 + 24);
      v123 = 259;
      v121 = 259;
      if ( (unsigned __int64)(v80 - (_QWORD)v79) > 7 )
      {
        *v79 = 0x20656E6966656423LL;
        *(_QWORD *)(v78 + 32) += 8LL;
      }
      else
      {
        v78 = sub_22581D0(v78, "#define ", 8);
      }
      sub_2230440(v120, v78);
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
      sub_2230440(v122, v78);
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
      v47 = *a3;
      v48 = *(__m128i **)(*a3 + 32);
      v83 = *(_QWORD *)(*a3 + 24) - (_QWORD)v48;
      if ( (unsigned __int8)v128 > 1u )
      {
        if ( v83 > 0x18 )
        {
          v116 = _mm_load_si128((const __m128i *)&xmmword_2385620);
          v48[1].m128i_i8[8] = 40;
          v48[1].m128i_i64[0] = 0x6465746163657270LL;
          *v48 = v116;
          *(_QWORD *)(v47 + 32) += 25LL;
        }
        else
        {
          v47 = sub_22581D0(*a3, "#pragma clang deprecated(", 25);
        }
        sub_2230440(v120, v47);
        v106 = *(_QWORD *)(v47 + 32);
        if ( (unsigned __int64)(*(_QWORD *)(v47 + 24) - v106) > 2 )
        {
          *(_BYTE *)(v106 + 2) = 34;
          *(_WORD *)v106 = 8236;
          *(_QWORD *)(v47 + 32) += 3LL;
        }
        else
        {
          v47 = sub_22581D0(v47, ", \"", 3);
        }
        sub_2230440(&v124, v47);
        v107 = *(_QWORD *)(v47 + 32);
        if ( (unsigned __int64)(*(_QWORD *)(v47 + 24) - v107) > 2 )
        {
          *(_BYTE *)(v107 + 2) = 10;
          *(_WORD *)v107 = 10530;
          *(_QWORD *)(v47 + 32) += 3LL;
        }
        else
        {
          sub_22581D0(v47, "\")\n", 3);
        }
        v47 = *a3;
        v48 = *(__m128i **)(*a3 + 32);
        v83 = *(_QWORD *)(*a3 + 24) - (_QWORD)v48;
      }
      v122[0] = "1";
      v123 = 259;
      v120[0] = "__AVR_3_BYTE_PC__";
      v121 = 259;
      LOWORD(v128) = 257;
      if ( v83 > 7 )
        goto LABEL_128;
LABEL_60:
      v47 = sub_22581D0(v47, "#define ", 8);
      goto LABEL_61;
    }
  }
  else if ( v45 == 3 && *(_WORD *)v46 == 12337 && v46[2] == 54 )
  {
    goto LABEL_120;
  }
  v47 = *a3;
  v122[0] = "1";
  v120[0] = "__AVR_2_BYTE_PC__";
  v121 = 259;
  v48 = *(__m128i **)(v47 + 32);
  LOWORD(v128) = 257;
  v49 = *(_QWORD *)(v47 + 24);
  v123 = 259;
  if ( (unsigned __int64)(v49 - (_QWORD)v48) <= 7 )
    goto LABEL_60;
LABEL_128:
  v48->m128i_i64[0] = 0x20656E6966656423LL;
  *(_QWORD *)(v47 + 32) += 8LL;
LABEL_61:
  sub_2230440(v120, v47);
  v50 = *(_BYTE **)(v47 + 32);
  if ( (unsigned __int64)v50 >= *(_QWORD *)(v47 + 24) )
  {
    v47 = sub_2257CD0(v47, 32);
  }
  else
  {
    *(_QWORD *)(v47 + 32) = v50 + 1;
    *v50 = 32;
  }
  sub_2230440(v122, v47);
  result = *(_BYTE **)(v47 + 32);
  if ( (unsigned __int64)result >= *(_QWORD *)(v47 + 24) )
  {
    result = (_BYTE *)sub_2257CD0(v47, 10);
  }
  else
  {
    *(_QWORD *)(v47 + 32) = result + 1;
    *result = 10;
  }
  if ( (unsigned __int8)v128 > 1u )
  {
    v84 = *a3;
    v85 = *(__m128i **)(*a3 + 32);
    if ( *(_QWORD *)(*a3 + 24) - (_QWORD)v85 > 0x18u )
    {
      v104 = _mm_load_si128((const __m128i *)&xmmword_2385620);
      v85[1].m128i_i8[8] = 40;
      v85[1].m128i_i64[0] = 0x6465746163657270LL;
      *v85 = v104;
      *(_QWORD *)(v84 + 32) += 25LL;
    }
    else
    {
      v84 = sub_22581D0(*a3, "#pragma clang deprecated(", 25);
    }
    sub_2230440(v120, v84);
    v86 = *(_QWORD *)(v84 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v84 + 24) - v86) > 2 )
    {
      *(_BYTE *)(v86 + 2) = 34;
      *(_WORD *)v86 = 8236;
      *(_QWORD *)(v84 + 32) += 3LL;
    }
    else
    {
      v84 = sub_22581D0(v84, ", \"", 3);
    }
    sub_2230440(&v124, v84);
    v87 = *(_QWORD *)(v84 + 32);
    result = (_BYTE *)(*(_QWORD *)(v84 + 24) - v87);
    if ( (unsigned __int64)result > 2 )
    {
      *(_BYTE *)(v87 + 2) = 10;
      *(_WORD *)v87 = 10530;
      *(_QWORD *)(v84 + 32) += 3LL;
    }
    else
    {
      result = (_BYTE *)sub_22581D0(v84, "\")\n", 3);
    }
  }
  if ( *(int *)(a1 + 592) > 0 )
  {
    v62 = *a3;
    v122[0] = "__attribute__((__address_space__(1)))";
    v120[0] = "__flash";
    v63 = *(_QWORD **)(v62 + 32);
    v64 = *(_QWORD *)(v62 + 24);
    v123 = 259;
    v121 = 259;
    LOWORD(v128) = 257;
    if ( (unsigned __int64)(v64 - (_QWORD)v63) > 7 )
    {
      *v63 = 0x20656E6966656423LL;
      *(_QWORD *)(v62 + 32) += 8LL;
    }
    else
    {
      v62 = sub_22581D0(v62, "#define ", 8);
    }
    sub_2230440(v120, v62);
    v65 = *(_BYTE **)(v62 + 32);
    if ( (unsigned __int64)v65 >= *(_QWORD *)(v62 + 24) )
    {
      v62 = sub_2257CD0(v62, 32);
    }
    else
    {
      *(_QWORD *)(v62 + 32) = v65 + 1;
      *v65 = 32;
    }
    sub_2230440(v122, v62);
    result = *(_BYTE **)(v62 + 32);
    if ( (unsigned __int64)result >= *(_QWORD *)(v62 + 24) )
    {
      result = (_BYTE *)sub_2257CD0(v62, 10);
    }
    else
    {
      *(_QWORD *)(v62 + 32) = result + 1;
      *result = 10;
    }
    if ( (unsigned __int8)v128 > 1u )
    {
      v112 = *a3;
      v113 = *(__m128i **)(*a3 + 32);
      if ( *(_QWORD *)(*a3 + 24) - (_QWORD)v113 > 0x18u )
      {
        v118 = _mm_load_si128((const __m128i *)&xmmword_2385620);
        v113[1].m128i_i8[8] = 40;
        v113[1].m128i_i64[0] = 0x6465746163657270LL;
        *v113 = v118;
        *(_QWORD *)(v112 + 32) += 25LL;
      }
      else
      {
        v112 = sub_22581D0(*a3, "#pragma clang deprecated(", 25);
      }
      sub_2230440(v120, v112);
      v114 = *(_QWORD *)(v112 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v112 + 24) - v114) > 2 )
      {
        *(_BYTE *)(v114 + 2) = 34;
        *(_WORD *)v114 = 8236;
        *(_QWORD *)(v112 + 32) += 3LL;
      }
      else
      {
        v112 = sub_22581D0(v112, ", \"", 3);
      }
      sub_2230440(&v124, v112);
      v115 = *(_QWORD *)(v112 + 32);
      result = (_BYTE *)(*(_QWORD *)(v112 + 24) - v115);
      if ( (unsigned __int64)result > 2 )
      {
        *(_BYTE *)(v115 + 2) = 10;
        *(_WORD *)v115 = 10530;
        *(_QWORD *)(v112 + 32) += 3LL;
      }
      else
      {
        result = (_BYTE *)sub_22581D0(v112, "\")\n", 3);
      }
    }
    if ( *(int *)(a1 + 592) > 1 )
    {
      v66 = *a3;
      v122[0] = "__attribute__((__address_space__(2)))";
      v123 = 259;
      v67 = *(_QWORD **)(v66 + 32);
      v120[0] = "__flash1";
      v121 = 259;
      LOWORD(v128) = 257;
      if ( *(_QWORD *)(v66 + 24) - (_QWORD)v67 > 7u )
      {
        *v67 = 0x20656E6966656423LL;
        *(_QWORD *)(v66 + 32) += 8LL;
      }
      else
      {
        v66 = sub_22581D0(v66, "#define ", 8);
      }
      sub_2230440(v120, v66);
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
      result = *(_BYTE **)(v66 + 32);
      if ( (unsigned __int64)result >= *(_QWORD *)(v66 + 24) )
      {
        result = (_BYTE *)sub_2257CD0(v66, 10);
      }
      else
      {
        *(_QWORD *)(v66 + 32) = result + 1;
        *result = 10;
      }
      if ( (unsigned __int8)v128 > 1u )
      {
        v108 = *a3;
        v109 = *(__m128i **)(*a3 + 32);
        if ( *(_QWORD *)(*a3 + 24) - (_QWORD)v109 > 0x18u )
        {
          v117 = _mm_load_si128((const __m128i *)&xmmword_2385620);
          v109[1].m128i_i8[8] = 40;
          v109[1].m128i_i64[0] = 0x6465746163657270LL;
          *v109 = v117;
          *(_QWORD *)(v108 + 32) += 25LL;
        }
        else
        {
          v108 = sub_22581D0(*a3, "#pragma clang deprecated(", 25);
        }
        sub_2230440(v120, v108);
        v110 = *(_QWORD *)(v108 + 32);
        if ( (unsigned __int64)(*(_QWORD *)(v108 + 24) - v110) > 2 )
        {
          *(_BYTE *)(v110 + 2) = 34;
          *(_WORD *)v110 = 8236;
          *(_QWORD *)(v108 + 32) += 3LL;
        }
        else
        {
          v108 = sub_22581D0(v108, ", \"", 3);
        }
        sub_2230440(&v124, v108);
        v111 = *(_QWORD *)(v108 + 32);
        if ( (unsigned __int64)(*(_QWORD *)(v108 + 24) - v111) > 2 )
        {
          result = (_BYTE *)(elf_gnu_hash_chain + 3734);
          *(_BYTE *)(v111 + 2) = 10;
          *(_WORD *)v111 = 10530;
          *(_QWORD *)(v108 + 32) += 3LL;
        }
        else
        {
          result = (_BYTE *)sub_22581D0(v108, "\")\n", 3);
        }
      }
      if ( *(int *)(a1 + 592) > 2 )
      {
        v122[0] = "__attribute__((__address_space__(3)))";
        v120[0] = "__flash2";
        LOWORD(v128) = 257;
        v123 = 259;
        v121 = 259;
        result = sub_10160F0(a3, (__int64)v120, (__int64)v122, v69, v70, v71, v124, v125, v126, v127, 1u);
        if ( *(int *)(a1 + 592) > 3 )
        {
          v122[0] = "__attribute__((__address_space__(4)))";
          LOWORD(v128) = 257;
          v123 = 259;
          v120[0] = "__flash3";
          v121 = 259;
          result = sub_10160F0(a3, (__int64)v120, (__int64)v122, v72, v73, 257, v124, v125, v126, v127, 1u);
          if ( *(int *)(a1 + 592) > 4 )
          {
            v122[0] = "__attribute__((__address_space__(5)))";
            LOWORD(v128) = 257;
            v123 = 259;
            v120[0] = "__flash4";
            v121 = 259;
            result = sub_10160F0(a3, (__int64)v120, (__int64)v122, v74, 259, v75, v124, v125, v126, v127, 1u);
            if ( *(int *)(a1 + 592) > 5 )
            {
              LOWORD(v128) = 257;
              v122[0] = "__attribute__((__address_space__(6)))";
              v123 = 259;
              v120[0] = "__flash5";
              v121 = 259;
              return sub_10160F0(a3, (__int64)v120, (__int64)v122, 259, v76, v77, v124, v125, v126, v127, 1u);
            }
          }
        }
      }
    }
  }
  return result;
}

