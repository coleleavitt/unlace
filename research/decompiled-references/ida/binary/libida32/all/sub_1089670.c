_BYTE *__fastcall sub_1089670(__int64 a1, __int64 a2, __int64 *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rbx
  _QWORD *v8; // rdx
  __int64 v9; // rax
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
  _BYTE *v26; // rax
  __int64 v27; // rbx
  __m128i *v28; // rdx
  unsigned __int64 v29; // rax
  _BYTE *v30; // rax
  _BYTE *v31; // rax
  __int64 v32; // rbx
  __m128i *v33; // rdx
  unsigned __int64 v34; // rax
  _BYTE *v35; // rax
  _BYTE *result; // rax
  _BYTE *v37; // rax
  _BYTE *v38; // rax
  __int64 v39; // rbx
  __m128i *v40; // rdx
  unsigned __int64 v41; // rax
  _BYTE *v42; // rax
  _BYTE *v43; // rax
  __int64 v44; // rbx
  __m128i *v45; // rdx
  unsigned __int64 v46; // rax
  _BYTE *v47; // rax
  _BYTE *v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rdx
  __int64 v51; // rdx
  __int64 v52; // rdx
  __int64 v53; // rdx
  __int64 v54; // rdx
  __int64 v55; // rbx
  __m128i *v56; // rdx
  __int64 v57; // rdx
  __int64 v58; // rdx
  __int64 v59; // rdx
  __int64 v60; // rdx
  __int64 v61; // rdx
  __int64 v62; // rdx
  __int64 v63; // rdx
  __int64 v64; // rdx
  __m128i v65; // xmm0
  __m128i v66; // xmm0
  __m128i si128; // xmm0
  __m128i v68; // xmm0
  __m128i v69; // xmm0
  __m128i v70; // xmm0
  __int64 v71; // rdx
  __int64 v72; // rdx
  __int64 v73; // rdx
  __int64 v74; // rdx
  __m128i v75; // xmm0
  __m128i v76; // xmm0
  __m128i v77; // xmm0
  _QWORD v78[4]; // [rsp+0h] [rbp-C8h] BYREF
  __int16 v79; // [rsp+20h] [rbp-A8h]
  _QWORD v80[4]; // [rsp+30h] [rbp-98h] BYREF
  __int16 v81; // [rsp+50h] [rbp-78h]
  _BYTE v82[32]; // [rsp+60h] [rbp-68h] BYREF
  __int16 v83; // [rsp+80h] [rbp-48h]

  sub_10891E0(a1, a2, a3, a4, a5, a6);
  v80[0] = "1";
  v83 = 257;
  v7 = *a3;
  v78[0] = "__sparcv9";
  v8 = *(_QWORD **)(v7 + 32);
  v9 = *(_QWORD *)(v7 + 24);
  v81 = 259;
  v79 = 259;
  if ( (unsigned __int64)(v9 - (_QWORD)v8) > 7 )
  {
    *v8 = 0x20656E6966656423LL;
    *(_QWORD *)(v7 + 32) += 8LL;
  }
  else
  {
    v7 = sub_22581D0(v7, "#define ", 8);
  }
  sub_2230440(v78, v7);
  v10 = *(_BYTE **)(v7 + 32);
  if ( (unsigned __int64)v10 >= *(_QWORD *)(v7 + 24) )
  {
    v7 = sub_2257CD0(v7, 32);
  }
  else
  {
    *(_QWORD *)(v7 + 32) = v10 + 1;
    *v10 = 32;
  }
  sub_2230440(v80, v7);
  v11 = *(_BYTE **)(v7 + 32);
  if ( (unsigned __int64)v11 >= *(_QWORD *)(v7 + 24) )
  {
    sub_2257CD0(v7, 10);
  }
  else
  {
    *(_QWORD *)(v7 + 32) = v11 + 1;
    *v11 = 10;
  }
  v12 = *a3;
  v13 = *(__m128i **)(*a3 + 32);
  v14 = *(_QWORD *)(*a3 + 24) - (_QWORD)v13;
  if ( (unsigned __int8)v83 > 1u )
  {
    if ( v14 > 0x18 )
    {
      si128 = _mm_load_si128((const __m128i *)&xmmword_2385620);
      v13[1].m128i_i8[8] = 40;
      v13[1].m128i_i64[0] = 0x6465746163657270LL;
      *v13 = si128;
      *(_QWORD *)(v12 + 32) += 25LL;
    }
    else
    {
      v12 = sub_22581D0(*a3, "#pragma clang deprecated(", 25);
    }
    sub_2230440(v78, v12);
    v53 = *(_QWORD *)(v12 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v12 + 24) - v53) > 2 )
    {
      *(_BYTE *)(v53 + 2) = 34;
      *(_WORD *)v53 = 8236;
      *(_QWORD *)(v12 + 32) += 3LL;
    }
    else
    {
      v12 = sub_22581D0(v12, ", \"", 3);
    }
    sub_2230440(v82, v12);
    v54 = *(_QWORD *)(v12 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v12 + 24) - v54) > 2 )
    {
      *(_BYTE *)(v54 + 2) = 10;
      *(_WORD *)v54 = 10530;
      *(_QWORD *)(v12 + 32) += 3LL;
    }
    else
    {
      sub_22581D0(v12, "\")\n", 3);
    }
    v12 = *a3;
    v13 = *(__m128i **)(*a3 + 32);
    v14 = *(_QWORD *)(*a3 + 24) - (_QWORD)v13;
  }
  v80[0] = "1";
  v81 = 259;
  v78[0] = "__arch64__";
  v79 = 259;
  v83 = 257;
  if ( v14 > 7 )
  {
    v13->m128i_i64[0] = 0x20656E6966656423LL;
    *(_QWORD *)(v12 + 32) += 8LL;
  }
  else
  {
    v12 = sub_22581D0(v12, "#define ", 8);
  }
  sub_2230440(v78, v12);
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
  sub_2230440(v80, v12);
  v16 = *(_BYTE **)(v12 + 32);
  if ( (unsigned __int64)v16 >= *(_QWORD *)(v12 + 24) )
  {
    sub_2257CD0(v12, 10);
  }
  else
  {
    *(_QWORD *)(v12 + 32) = v16 + 1;
    *v16 = 10;
  }
  v17 = *a3;
  v18 = *(__m128i **)(*a3 + 32);
  v19 = *(_QWORD *)(*a3 + 24) - (_QWORD)v18;
  if ( (unsigned __int8)v83 > 1u )
  {
    if ( v19 > 0x18 )
    {
      v65 = _mm_load_si128((const __m128i *)&xmmword_2385620);
      v18[1].m128i_i8[8] = 40;
      v18[1].m128i_i64[0] = 0x6465746163657270LL;
      *v18 = v65;
      *(_QWORD *)(v17 + 32) += 25LL;
    }
    else
    {
      v17 = sub_22581D0(*a3, "#pragma clang deprecated(", 25);
    }
    sub_2230440(v78, v17);
    v51 = *(_QWORD *)(v17 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v17 + 24) - v51) > 2 )
    {
      *(_BYTE *)(v51 + 2) = 34;
      *(_WORD *)v51 = 8236;
      *(_QWORD *)(v17 + 32) += 3LL;
    }
    else
    {
      v17 = sub_22581D0(v17, ", \"", 3);
    }
    sub_2230440(v82, v17);
    v52 = *(_QWORD *)(v17 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v17 + 24) - v52) > 2 )
    {
      *(_BYTE *)(v52 + 2) = 10;
      *(_WORD *)v52 = 10530;
      *(_QWORD *)(v17 + 32) += 3LL;
    }
    else
    {
      sub_22581D0(v17, "\")\n", 3);
    }
    v17 = *a3;
    v18 = *(__m128i **)(*a3 + 32);
    v19 = *(_QWORD *)(*a3 + 24) - (_QWORD)v18;
  }
  if ( *(_DWORD *)(a1 + 260) != 13 )
  {
    v80[0] = "1";
    v81 = 259;
    v78[0] = "__sparc64__";
    v79 = 259;
    v83 = 257;
    if ( v19 > 7 )
    {
      v18->m128i_i64[0] = 0x20656E6966656423LL;
      *(_QWORD *)(v17 + 32) += 8LL;
    }
    else
    {
      v17 = sub_22581D0(v17, "#define ", 8);
    }
    sub_2230440(v78, v17);
    v37 = *(_BYTE **)(v17 + 32);
    if ( (unsigned __int64)v37 >= *(_QWORD *)(v17 + 24) )
    {
      v17 = sub_2257CD0(v17, 32);
    }
    else
    {
      *(_QWORD *)(v17 + 32) = v37 + 1;
      *v37 = 32;
    }
    sub_2230440(v80, v17);
    v38 = *(_BYTE **)(v17 + 32);
    if ( (unsigned __int64)v38 >= *(_QWORD *)(v17 + 24) )
    {
      sub_2257CD0(v17, 10);
    }
    else
    {
      *(_QWORD *)(v17 + 32) = v38 + 1;
      *v38 = 10;
    }
    v39 = *a3;
    v40 = *(__m128i **)(*a3 + 32);
    v41 = *(_QWORD *)(*a3 + 24) - (_QWORD)v40;
    if ( (unsigned __int8)v83 > 1u )
    {
      if ( v41 > 0x18 )
      {
        v77 = _mm_load_si128((const __m128i *)&xmmword_2385620);
        v40[1].m128i_i8[8] = 40;
        v40[1].m128i_i64[0] = 0x6465746163657270LL;
        *v40 = v77;
        *(_QWORD *)(v39 + 32) += 25LL;
      }
      else
      {
        v39 = sub_22581D0(*a3, "#pragma clang deprecated(", 25);
      }
      sub_2230440(v78, v39);
      v71 = *(_QWORD *)(v39 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v39 + 24) - v71) > 2 )
      {
        *(_BYTE *)(v71 + 2) = 34;
        *(_WORD *)v71 = 8236;
        *(_QWORD *)(v39 + 32) += 3LL;
      }
      else
      {
        v39 = sub_22581D0(v39, ", \"", 3);
      }
      sub_2230440(v82, v39);
      v72 = *(_QWORD *)(v39 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v39 + 24) - v72) > 2 )
      {
        *(_BYTE *)(v72 + 2) = 10;
        *(_WORD *)v72 = 10530;
        *(_QWORD *)(v39 + 32) += 3LL;
      }
      else
      {
        sub_22581D0(v39, "\")\n", 3);
      }
      v39 = *a3;
      v40 = *(__m128i **)(*a3 + 32);
      v41 = *(_QWORD *)(*a3 + 24) - (_QWORD)v40;
    }
    v80[0] = "1";
    v81 = 259;
    v78[0] = "__sparc_v9__";
    v79 = 259;
    v83 = 257;
    if ( v41 > 7 )
    {
      v40->m128i_i64[0] = 0x20656E6966656423LL;
      *(_QWORD *)(v39 + 32) += 8LL;
    }
    else
    {
      v39 = sub_22581D0(v39, "#define ", 8);
    }
    sub_2230440(v78, v39);
    v42 = *(_BYTE **)(v39 + 32);
    if ( (unsigned __int64)v42 >= *(_QWORD *)(v39 + 24) )
    {
      v39 = sub_2257CD0(v39, 32);
    }
    else
    {
      *(_QWORD *)(v39 + 32) = v42 + 1;
      *v42 = 32;
    }
    sub_2230440(v80, v39);
    v43 = *(_BYTE **)(v39 + 32);
    if ( (unsigned __int64)v43 >= *(_QWORD *)(v39 + 24) )
    {
      sub_2257CD0(v39, 10);
    }
    else
    {
      *(_QWORD *)(v39 + 32) = v43 + 1;
      *v43 = 10;
    }
    v44 = *a3;
    v45 = *(__m128i **)(*a3 + 32);
    v46 = *(_QWORD *)(*a3 + 24) - (_QWORD)v45;
    if ( (unsigned __int8)v83 > 1u )
    {
      if ( v46 > 0x18 )
      {
        v76 = _mm_load_si128((const __m128i *)&xmmword_2385620);
        v45[1].m128i_i8[8] = 40;
        v45[1].m128i_i64[0] = 0x6465746163657270LL;
        *v45 = v76;
        *(_QWORD *)(v44 + 32) += 25LL;
      }
      else
      {
        v44 = sub_22581D0(*a3, "#pragma clang deprecated(", 25);
      }
      sub_2230440(v78, v44);
      v73 = *(_QWORD *)(v44 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v44 + 24) - v73) > 2 )
      {
        *(_BYTE *)(v73 + 2) = 34;
        *(_WORD *)v73 = 8236;
        *(_QWORD *)(v44 + 32) += 3LL;
      }
      else
      {
        v44 = sub_22581D0(v44, ", \"", 3);
      }
      sub_2230440(v82, v44);
      v74 = *(_QWORD *)(v44 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v44 + 24) - v74) > 2 )
      {
        *(_BYTE *)(v74 + 2) = 10;
        *(_WORD *)v74 = 10530;
        *(_QWORD *)(v44 + 32) += 3LL;
      }
      else
      {
        sub_22581D0(v44, "\")\n", 3);
      }
      v44 = *a3;
      v45 = *(__m128i **)(*a3 + 32);
      v46 = *(_QWORD *)(*a3 + 24) - (_QWORD)v45;
    }
    v80[0] = "1";
    v81 = 259;
    v78[0] = "__sparcv9__";
    v79 = 259;
    v83 = 257;
    if ( v46 > 7 )
    {
      v45->m128i_i64[0] = 0x20656E6966656423LL;
      *(_QWORD *)(v44 + 32) += 8LL;
    }
    else
    {
      v44 = sub_22581D0(v44, "#define ", 8);
    }
    sub_2230440(v78, v44);
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
    sub_2230440(v80, v44);
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
    v17 = *a3;
    v18 = *(__m128i **)(*a3 + 32);
    v19 = *(_QWORD *)(*a3 + 24) - (_QWORD)v18;
    if ( (unsigned __int8)v83 > 1u )
    {
      if ( v19 > 0x18 )
      {
        v75 = _mm_load_si128((const __m128i *)&xmmword_2385620);
        v18[1].m128i_i8[8] = 40;
        v18[1].m128i_i64[0] = 0x6465746163657270LL;
        *v18 = v75;
        *(_QWORD *)(v17 + 32) += 25LL;
      }
      else
      {
        v17 = sub_22581D0(*a3, "#pragma clang deprecated(", 25);
      }
      sub_2230440(v78, v17);
      v49 = *(_QWORD *)(v17 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v17 + 24) - v49) > 2 )
      {
        *(_BYTE *)(v49 + 2) = 34;
        *(_WORD *)v49 = 8236;
        *(_QWORD *)(v17 + 32) += 3LL;
      }
      else
      {
        v17 = sub_22581D0(v17, ", \"", 3);
      }
      sub_2230440(v82, v17);
      v50 = *(_QWORD *)(v17 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v17 + 24) - v50) > 2 )
      {
        *(_BYTE *)(v50 + 2) = 10;
        *(_WORD *)v50 = 10530;
        *(_QWORD *)(v17 + 32) += 3LL;
      }
      else
      {
        sub_22581D0(v17, "\")\n", 3);
      }
      v17 = *a3;
      v18 = *(__m128i **)(*a3 + 32);
      v19 = *(_QWORD *)(*a3 + 24) - (_QWORD)v18;
    }
  }
  v80[0] = "1";
  v81 = 259;
  v78[0] = "__GCC_HAVE_SYNC_COMPARE_AND_SWAP_1";
  v79 = 259;
  v83 = 257;
  if ( v19 > 7 )
  {
    v18->m128i_i64[0] = 0x20656E6966656423LL;
    *(_QWORD *)(v17 + 32) += 8LL;
  }
  else
  {
    v17 = sub_22581D0(v17, "#define ", 8);
  }
  sub_2230440(v78, v17);
  v20 = *(_BYTE **)(v17 + 32);
  if ( (unsigned __int64)v20 >= *(_QWORD *)(v17 + 24) )
  {
    v17 = sub_2257CD0(v17, 32);
  }
  else
  {
    *(_QWORD *)(v17 + 32) = v20 + 1;
    *v20 = 32;
  }
  sub_2230440(v80, v17);
  v21 = *(_BYTE **)(v17 + 32);
  if ( (unsigned __int64)v21 >= *(_QWORD *)(v17 + 24) )
  {
    sub_2257CD0(v17, 10);
  }
  else
  {
    *(_QWORD *)(v17 + 32) = v21 + 1;
    *v21 = 10;
  }
  v22 = *a3;
  v23 = *(__m128i **)(*a3 + 32);
  v24 = *(_QWORD *)(*a3 + 24) - (_QWORD)v23;
  if ( (unsigned __int8)v83 > 1u )
  {
    if ( v24 > 0x18 )
    {
      v70 = _mm_load_si128((const __m128i *)&xmmword_2385620);
      v23[1].m128i_i8[8] = 40;
      v23[1].m128i_i64[0] = 0x6465746163657270LL;
      *v23 = v70;
      *(_QWORD *)(v22 + 32) += 25LL;
    }
    else
    {
      v22 = sub_22581D0(*a3, "#pragma clang deprecated(", 25);
    }
    sub_2230440(v78, v22);
    v63 = *(_QWORD *)(v22 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v22 + 24) - v63) > 2 )
    {
      *(_BYTE *)(v63 + 2) = 34;
      *(_WORD *)v63 = 8236;
      *(_QWORD *)(v22 + 32) += 3LL;
    }
    else
    {
      v22 = sub_22581D0(v22, ", \"", 3);
    }
    sub_2230440(v82, v22);
    v64 = *(_QWORD *)(v22 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v22 + 24) - v64) > 2 )
    {
      *(_BYTE *)(v64 + 2) = 10;
      *(_WORD *)v64 = 10530;
      *(_QWORD *)(v22 + 32) += 3LL;
    }
    else
    {
      sub_22581D0(v22, "\")\n", 3);
    }
    v22 = *a3;
    v23 = *(__m128i **)(*a3 + 32);
    v24 = *(_QWORD *)(*a3 + 24) - (_QWORD)v23;
  }
  v80[0] = "1";
  v81 = 259;
  v78[0] = "__GCC_HAVE_SYNC_COMPARE_AND_SWAP_2";
  v79 = 259;
  v83 = 257;
  if ( v24 > 7 )
  {
    v23->m128i_i64[0] = 0x20656E6966656423LL;
    *(_QWORD *)(v22 + 32) += 8LL;
  }
  else
  {
    v22 = sub_22581D0(v22, "#define ", 8);
  }
  sub_2230440(v78, v22);
  v25 = *(_BYTE **)(v22 + 32);
  if ( (unsigned __int64)v25 >= *(_QWORD *)(v22 + 24) )
  {
    v22 = sub_2257CD0(v22, 32);
  }
  else
  {
    *(_QWORD *)(v22 + 32) = v25 + 1;
    *v25 = 32;
  }
  sub_2230440(v80, v22);
  v26 = *(_BYTE **)(v22 + 32);
  if ( (unsigned __int64)v26 >= *(_QWORD *)(v22 + 24) )
  {
    sub_2257CD0(v22, 10);
  }
  else
  {
    *(_QWORD *)(v22 + 32) = v26 + 1;
    *v26 = 10;
  }
  v27 = *a3;
  v28 = *(__m128i **)(*a3 + 32);
  v29 = *(_QWORD *)(*a3 + 24) - (_QWORD)v28;
  if ( (unsigned __int8)v83 > 1u )
  {
    if ( v29 > 0x18 )
    {
      v68 = _mm_load_si128((const __m128i *)&xmmword_2385620);
      v28[1].m128i_i8[8] = 40;
      v28[1].m128i_i64[0] = 0x6465746163657270LL;
      *v28 = v68;
      *(_QWORD *)(v27 + 32) += 25LL;
    }
    else
    {
      v27 = sub_22581D0(*a3, "#pragma clang deprecated(", 25);
    }
    sub_2230440(v78, v27);
    v61 = *(_QWORD *)(v27 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v27 + 24) - v61) > 2 )
    {
      *(_BYTE *)(v61 + 2) = 34;
      *(_WORD *)v61 = 8236;
      *(_QWORD *)(v27 + 32) += 3LL;
    }
    else
    {
      v27 = sub_22581D0(v27, ", \"", 3);
    }
    sub_2230440(v82, v27);
    v62 = *(_QWORD *)(v27 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v27 + 24) - v62) > 2 )
    {
      *(_BYTE *)(v62 + 2) = 10;
      *(_WORD *)v62 = 10530;
      *(_QWORD *)(v27 + 32) += 3LL;
    }
    else
    {
      sub_22581D0(v27, "\")\n", 3);
    }
    v27 = *a3;
    v28 = *(__m128i **)(*a3 + 32);
    v29 = *(_QWORD *)(*a3 + 24) - (_QWORD)v28;
  }
  v80[0] = "1";
  v78[0] = "__GCC_HAVE_SYNC_COMPARE_AND_SWAP_4";
  v81 = 259;
  v79 = 259;
  v83 = 257;
  if ( v29 > 7 )
  {
    v28->m128i_i64[0] = 0x20656E6966656423LL;
    *(_QWORD *)(v27 + 32) += 8LL;
  }
  else
  {
    v27 = sub_22581D0(v27, "#define ", 8);
  }
  sub_2230440(v78, v27);
  v30 = *(_BYTE **)(v27 + 32);
  if ( (unsigned __int64)v30 >= *(_QWORD *)(v27 + 24) )
  {
    v27 = sub_2257CD0(v27, 32);
  }
  else
  {
    *(_QWORD *)(v27 + 32) = v30 + 1;
    *v30 = 32;
  }
  sub_2230440(v80, v27);
  v31 = *(_BYTE **)(v27 + 32);
  if ( (unsigned __int64)v31 >= *(_QWORD *)(v27 + 24) )
  {
    sub_2257CD0(v27, 10);
  }
  else
  {
    *(_QWORD *)(v27 + 32) = v31 + 1;
    *v31 = 10;
  }
  v32 = *a3;
  v33 = *(__m128i **)(*a3 + 32);
  v34 = *(_QWORD *)(*a3 + 24) - (_QWORD)v33;
  if ( (unsigned __int8)v83 > 1u )
  {
    if ( v34 > 0x18 )
    {
      v69 = _mm_load_si128((const __m128i *)&xmmword_2385620);
      v33[1].m128i_i8[8] = 40;
      v33[1].m128i_i64[0] = 0x6465746163657270LL;
      *v33 = v69;
      *(_QWORD *)(v32 + 32) += 25LL;
    }
    else
    {
      v32 = sub_22581D0(*a3, "#pragma clang deprecated(", 25);
    }
    sub_2230440(v78, v32);
    v59 = *(_QWORD *)(v32 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v32 + 24) - v59) > 2 )
    {
      *(_BYTE *)(v59 + 2) = 34;
      *(_WORD *)v59 = 8236;
      *(_QWORD *)(v32 + 32) += 3LL;
    }
    else
    {
      v32 = sub_22581D0(v32, ", \"", 3);
    }
    sub_2230440(v82, v32);
    v60 = *(_QWORD *)(v32 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v32 + 24) - v60) > 2 )
    {
      *(_BYTE *)(v60 + 2) = 10;
      *(_WORD *)v60 = 10530;
      *(_QWORD *)(v32 + 32) += 3LL;
    }
    else
    {
      sub_22581D0(v32, "\")\n", 3);
    }
    v32 = *a3;
    v33 = *(__m128i **)(*a3 + 32);
    v34 = *(_QWORD *)(*a3 + 24) - (_QWORD)v33;
  }
  v80[0] = "1";
  v81 = 259;
  v78[0] = "__GCC_HAVE_SYNC_COMPARE_AND_SWAP_8";
  v79 = 259;
  v83 = 257;
  if ( v34 > 7 )
  {
    v33->m128i_i64[0] = 0x20656E6966656423LL;
    *(_QWORD *)(v32 + 32) += 8LL;
  }
  else
  {
    v32 = sub_22581D0(v32, "#define ", 8);
  }
  sub_2230440(v78, v32);
  v35 = *(_BYTE **)(v32 + 32);
  if ( (unsigned __int64)v35 >= *(_QWORD *)(v32 + 24) )
  {
    v32 = sub_2257CD0(v32, 32);
  }
  else
  {
    *(_QWORD *)(v32 + 32) = v35 + 1;
    *v35 = 32;
  }
  sub_2230440(v80, v32);
  result = *(_BYTE **)(v32 + 32);
  if ( (unsigned __int64)result >= *(_QWORD *)(v32 + 24) )
  {
    result = (_BYTE *)sub_2257CD0(v32, 10);
  }
  else
  {
    *(_QWORD *)(v32 + 32) = result + 1;
    *result = 10;
  }
  if ( (unsigned __int8)v83 > 1u )
  {
    v55 = *a3;
    v56 = *(__m128i **)(*a3 + 32);
    if ( *(_QWORD *)(*a3 + 24) - (_QWORD)v56 > 0x18u )
    {
      v66 = _mm_load_si128((const __m128i *)&xmmword_2385620);
      v56[1].m128i_i8[8] = 40;
      v56[1].m128i_i64[0] = 0x6465746163657270LL;
      *v56 = v66;
      *(_QWORD *)(v55 + 32) += 25LL;
    }
    else
    {
      v55 = sub_22581D0(*a3, "#pragma clang deprecated(", 25);
    }
    sub_2230440(v78, v55);
    v57 = *(_QWORD *)(v55 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v55 + 24) - v57) > 2 )
    {
      *(_BYTE *)(v57 + 2) = 34;
      *(_WORD *)v57 = 8236;
      *(_QWORD *)(v55 + 32) += 3LL;
    }
    else
    {
      v55 = sub_22581D0(v55, ", \"", 3);
    }
    sub_2230440(v82, v55);
    v58 = *(_QWORD *)(v55 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v55 + 24) - v58) > 2 )
    {
      *(_BYTE *)(v58 + 2) = 10;
      *(_WORD *)v58 = 10530;
      *(_QWORD *)(v55 + 32) += 3LL;
      return (_BYTE *)(elf_gnu_hash_chain + 3734);
    }
    else
    {
      return (_BYTE *)sub_22581D0(v55, "\")\n", 3);
    }
  }
  return result;
}

