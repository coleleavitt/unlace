_BYTE *__fastcall sub_10A72B0(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rbx
  _QWORD *v5; // rdx
  __int64 v6; // rax
  _BYTE *v7; // rax
  _BYTE *v8; // rax
  __int64 v9; // rbx
  __m128i *v10; // rdx
  unsigned __int64 v11; // rax
  _BYTE *v12; // rax
  _BYTE *v13; // rax
  __int64 v14; // rbx
  __m128i *v15; // rdx
  unsigned __int64 v16; // rax
  bool v17; // zf
  const char *v18; // rcx
  _BYTE *v19; // rax
  _BYTE *v20; // rax
  __int64 v21; // rbx
  __m128i *v22; // rcx
  unsigned __int64 v23; // rax
  char *v24; // rdx
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
  _BYTE *v36; // rax
  __int64 v37; // rbx
  __m128i *v38; // rdx
  unsigned __int64 v39; // rax
  _BYTE *v40; // rax
  _BYTE *result; // rax
  __int64 v42; // rbx
  __m128i *v43; // rdx
  __int64 v44; // rdx
  __int64 v45; // rdx
  __int64 v46; // rdx
  __int64 v47; // rdx
  __int64 v48; // rdx
  __int64 v49; // rdx
  __int64 v50; // rdx
  __int64 v51; // rdx
  __int64 v52; // rdx
  __int64 v53; // rdx
  __int64 v54; // rdx
  __int64 v55; // rdx
  __int64 v56; // rdx
  __int64 v57; // rdx
  __m128i si128; // xmm0
  __m128i v59; // xmm0
  __m128i v60; // xmm0
  __m128i v61; // xmm0
  __m128i v62; // xmm0
  __m128i v63; // xmm0
  __m128i v64; // xmm0
  _QWORD v65[4]; // [rsp+0h] [rbp-C8h] BYREF
  __int16 v66; // [rsp+20h] [rbp-A8h]
  _QWORD v67[4]; // [rsp+30h] [rbp-98h] BYREF
  __int16 v68; // [rsp+50h] [rbp-78h]
  _BYTE v69[32]; // [rsp+60h] [rbp-68h] BYREF
  __int16 v70; // [rsp+80h] [rbp-48h]

  v4 = *a3;
  v68 = 259;
  v65[0] = "__xtensa__";
  v5 = *(_QWORD **)(v4 + 32);
  v66 = 259;
  v70 = 257;
  v6 = *(_QWORD *)(v4 + 24);
  v67[0] = "1";
  if ( (unsigned __int64)(v6 - (_QWORD)v5) > 7 )
  {
    *v5 = 0x20656E6966656423LL;
    *(_QWORD *)(v4 + 32) += 8LL;
  }
  else
  {
    v4 = sub_22581D0(v4, "#define ", 8);
  }
  sub_2230440(v65, v4);
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
  sub_2230440(v67, v4);
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
  if ( (unsigned __int8)v70 > 1u )
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
    sub_2230440(v65, v9);
    v56 = *(_QWORD *)(v9 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v9 + 24) - v56) > 2 )
    {
      *(_BYTE *)(v56 + 2) = 34;
      *(_WORD *)v56 = 8236;
      *(_QWORD *)(v9 + 32) += 3LL;
    }
    else
    {
      v9 = sub_22581D0(v9, ", \"", 3);
    }
    sub_2230440(v69, v9);
    v57 = *(_QWORD *)(v9 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v9 + 24) - v57) > 2 )
    {
      *(_BYTE *)(v57 + 2) = 10;
      *(_WORD *)v57 = 10530;
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
  v67[0] = "1";
  v68 = 259;
  v65[0] = "__XTENSA__";
  v66 = 259;
  v70 = 257;
  if ( v11 > 7 )
  {
    v10->m128i_i64[0] = 0x20656E6966656423LL;
    *(_QWORD *)(v9 + 32) += 8LL;
  }
  else
  {
    v9 = sub_22581D0(v9, "#define ", 8);
  }
  sub_2230440(v65, v9);
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
  sub_2230440(v67, v9);
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
  if ( (unsigned __int8)v70 > 1u )
  {
    if ( v16 > 0x18 )
    {
      v61 = _mm_load_si128((const __m128i *)&xmmword_2385620);
      v15[1].m128i_i8[8] = 40;
      v15[1].m128i_i64[0] = 0x6465746163657270LL;
      *v15 = v61;
      *(_QWORD *)(v14 + 32) += 25LL;
    }
    else
    {
      v14 = sub_22581D0(*a3, "#pragma clang deprecated(", 25);
    }
    sub_2230440(v65, v14);
    v54 = *(_QWORD *)(v14 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v14 + 24) - v54) > 2 )
    {
      *(_BYTE *)(v54 + 2) = 34;
      *(_WORD *)v54 = 8236;
      *(_QWORD *)(v14 + 32) += 3LL;
    }
    else
    {
      v14 = sub_22581D0(v14, ", \"", 3);
    }
    sub_2230440(v69, v14);
    v55 = *(_QWORD *)(v14 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v14 + 24) - v55) > 2 )
    {
      *(_BYTE *)(v55 + 2) = 10;
      *(_WORD *)v55 = 10530;
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
  v17 = *(_BYTE *)(a1 + 272) == 0;
  v67[0] = "1";
  v68 = 259;
  if ( v17 )
    v18 = "__XTENSA_EL__";
  else
    v18 = "__XTENSA_EB__";
  v65[0] = v18;
  v66 = 259;
  v70 = 257;
  if ( v16 > 7 )
  {
    v15->m128i_i64[0] = 0x20656E6966656423LL;
    *(_QWORD *)(v14 + 32) += 8LL;
  }
  else
  {
    v14 = sub_22581D0(v14, "#define ", 8);
  }
  sub_2230440(v65, v14);
  v19 = *(_BYTE **)(v14 + 32);
  if ( (unsigned __int64)v19 >= *(_QWORD *)(v14 + 24) )
  {
    v14 = sub_2257CD0(v14, 32);
  }
  else
  {
    *(_QWORD *)(v14 + 32) = v19 + 1;
    *v19 = 32;
  }
  sub_2230440(v67, v14);
  v20 = *(_BYTE **)(v14 + 32);
  if ( (unsigned __int64)v20 >= *(_QWORD *)(v14 + 24) )
  {
    sub_2257CD0(v14, 10);
  }
  else
  {
    *(_QWORD *)(v14 + 32) = v20 + 1;
    *v20 = 10;
  }
  v21 = *a3;
  v22 = *(__m128i **)(*a3 + 32);
  v23 = *(_QWORD *)(*a3 + 24) - (_QWORD)v22;
  if ( (unsigned __int8)v70 > 1u )
  {
    if ( v23 > 0x18 )
    {
      v62 = _mm_load_si128((const __m128i *)&xmmword_2385620);
      v22[1].m128i_i8[8] = 40;
      v22[1].m128i_i64[0] = 0x6465746163657270LL;
      *v22 = v62;
      *(_QWORD *)(v21 + 32) += 25LL;
    }
    else
    {
      v21 = sub_22581D0(*a3, "#pragma clang deprecated(", 25);
    }
    sub_2230440(v65, v21);
    v52 = *(_QWORD *)(v21 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v21 + 24) - v52) > 2 )
    {
      *(_BYTE *)(v52 + 2) = 34;
      *(_WORD *)v52 = 8236;
      *(_QWORD *)(v21 + 32) += 3LL;
    }
    else
    {
      v21 = sub_22581D0(v21, ", \"", 3);
    }
    sub_2230440(v69, v21);
    v53 = *(_QWORD *)(v21 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v21 + 24) - v53) > 2 )
    {
      *(_BYTE *)(v53 + 2) = 10;
      *(_WORD *)v53 = 10530;
      *(_QWORD *)(v21 + 32) += 3LL;
    }
    else
    {
      sub_22581D0(v21, "\")\n", 3);
    }
    v21 = *a3;
    v22 = *(__m128i **)(*a3 + 32);
    v23 = *(_QWORD *)(*a3 + 24) - (_QWORD)v22;
  }
  v17 = *(_BYTE *)(a1 + 272) == 0;
  v24 = "1";
  v70 = 257;
  if ( v17 )
    v24 = "0";
  v65[0] = "__XCHAL_HAVE_BE";
  v67[0] = v24;
  v68 = 259;
  v66 = 259;
  if ( v23 > 7 )
  {
    v22->m128i_i64[0] = 0x20656E6966656423LL;
    *(_QWORD *)(v21 + 32) += 8LL;
  }
  else
  {
    v21 = sub_22581D0(v21, "#define ", 8);
  }
  sub_2230440(v65, v21);
  v25 = *(_BYTE **)(v21 + 32);
  if ( (unsigned __int64)v25 >= *(_QWORD *)(v21 + 24) )
  {
    v21 = sub_2257CD0(v21, 32);
  }
  else
  {
    *(_QWORD *)(v21 + 32) = v25 + 1;
    *v25 = 32;
  }
  sub_2230440(v67, v21);
  v26 = *(_BYTE **)(v21 + 32);
  if ( (unsigned __int64)v26 >= *(_QWORD *)(v21 + 24) )
  {
    sub_2257CD0(v21, 10);
  }
  else
  {
    *(_QWORD *)(v21 + 32) = v26 + 1;
    *v26 = 10;
  }
  v27 = *a3;
  v28 = *(__m128i **)(*a3 + 32);
  v29 = *(_QWORD *)(*a3 + 24) - (_QWORD)v28;
  if ( (unsigned __int8)v70 > 1u )
  {
    if ( v29 > 0x18 )
    {
      v63 = _mm_load_si128((const __m128i *)&xmmword_2385620);
      v28[1].m128i_i8[8] = 40;
      v28[1].m128i_i64[0] = 0x6465746163657270LL;
      *v28 = v63;
      *(_QWORD *)(v27 + 32) += 25LL;
    }
    else
    {
      v27 = sub_22581D0(*a3, "#pragma clang deprecated(", 25);
    }
    sub_2230440(v65, v27);
    v50 = *(_QWORD *)(v27 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v27 + 24) - v50) > 2 )
    {
      *(_BYTE *)(v50 + 2) = 34;
      *(_WORD *)v50 = 8236;
      *(_QWORD *)(v27 + 32) += 3LL;
    }
    else
    {
      v27 = sub_22581D0(v27, ", \"", 3);
    }
    sub_2230440(v69, v27);
    v51 = *(_QWORD *)(v27 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v27 + 24) - v51) > 2 )
    {
      *(_BYTE *)(v51 + 2) = 10;
      *(_WORD *)v51 = 10530;
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
  v67[0] = "1";
  v68 = 259;
  v65[0] = "__XCHAL_HAVE_ABS";
  v66 = 259;
  v70 = 257;
  if ( v29 > 7 )
  {
    v28->m128i_i64[0] = 0x20656E6966656423LL;
    *(_QWORD *)(v27 + 32) += 8LL;
  }
  else
  {
    v27 = sub_22581D0(v27, "#define ", 8);
  }
  sub_2230440(v65, v27);
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
  sub_2230440(v67, v27);
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
  if ( (unsigned __int8)v70 > 1u )
  {
    if ( v34 > 0x18 )
    {
      v64 = _mm_load_si128((const __m128i *)&xmmword_2385620);
      v33[1].m128i_i8[8] = 40;
      v33[1].m128i_i64[0] = 0x6465746163657270LL;
      *v33 = v64;
      *(_QWORD *)(v32 + 32) += 25LL;
    }
    else
    {
      v32 = sub_22581D0(*a3, "#pragma clang deprecated(", 25);
    }
    sub_2230440(v65, v32);
    v48 = *(_QWORD *)(v32 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v32 + 24) - v48) > 2 )
    {
      *(_BYTE *)(v48 + 2) = 34;
      *(_WORD *)v48 = 8236;
      *(_QWORD *)(v32 + 32) += 3LL;
    }
    else
    {
      v32 = sub_22581D0(v32, ", \"", 3);
    }
    sub_2230440(v69, v32);
    v49 = *(_QWORD *)(v32 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v32 + 24) - v49) > 2 )
    {
      *(_BYTE *)(v49 + 2) = 10;
      *(_WORD *)v49 = 10530;
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
  v67[0] = "1";
  v65[0] = "__XCHAL_HAVE_ADDX";
  v68 = 259;
  v66 = 259;
  v70 = 257;
  if ( v34 > 7 )
  {
    v33->m128i_i64[0] = 0x20656E6966656423LL;
    *(_QWORD *)(v32 + 32) += 8LL;
  }
  else
  {
    v32 = sub_22581D0(v32, "#define ", 8);
  }
  sub_2230440(v65, v32);
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
  sub_2230440(v67, v32);
  v36 = *(_BYTE **)(v32 + 32);
  if ( (unsigned __int64)v36 >= *(_QWORD *)(v32 + 24) )
  {
    sub_2257CD0(v32, 10);
  }
  else
  {
    *(_QWORD *)(v32 + 32) = v36 + 1;
    *v36 = 10;
  }
  v37 = *a3;
  v38 = *(__m128i **)(*a3 + 32);
  v39 = *(_QWORD *)(*a3 + 24) - (_QWORD)v38;
  if ( (unsigned __int8)v70 > 1u )
  {
    if ( v39 > 0x18 )
    {
      v60 = _mm_load_si128((const __m128i *)&xmmword_2385620);
      v38[1].m128i_i8[8] = 40;
      v38[1].m128i_i64[0] = 0x6465746163657270LL;
      *v38 = v60;
      *(_QWORD *)(v37 + 32) += 25LL;
    }
    else
    {
      v37 = sub_22581D0(*a3, "#pragma clang deprecated(", 25);
    }
    sub_2230440(v65, v37);
    v46 = *(_QWORD *)(v37 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v37 + 24) - v46) > 2 )
    {
      *(_BYTE *)(v46 + 2) = 34;
      *(_WORD *)v46 = 8236;
      *(_QWORD *)(v37 + 32) += 3LL;
    }
    else
    {
      v37 = sub_22581D0(v37, ", \"", 3);
    }
    sub_2230440(v69, v37);
    v47 = *(_QWORD *)(v37 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v37 + 24) - v47) > 2 )
    {
      *(_BYTE *)(v47 + 2) = 10;
      *(_WORD *)v47 = 10530;
      *(_QWORD *)(v37 + 32) += 3LL;
    }
    else
    {
      sub_22581D0(v37, "\")\n", 3);
    }
    v37 = *a3;
    v38 = *(__m128i **)(*a3 + 32);
    v39 = *(_QWORD *)(*a3 + 24) - (_QWORD)v38;
  }
  v67[0] = "1";
  v68 = 259;
  v65[0] = "__XCHAL_HAVE_L32R";
  v66 = 259;
  v70 = 257;
  if ( v39 > 7 )
  {
    v38->m128i_i64[0] = 0x20656E6966656423LL;
    *(_QWORD *)(v37 + 32) += 8LL;
  }
  else
  {
    v37 = sub_22581D0(v37, "#define ", 8);
  }
  sub_2230440(v65, v37);
  v40 = *(_BYTE **)(v37 + 32);
  if ( (unsigned __int64)v40 >= *(_QWORD *)(v37 + 24) )
  {
    v37 = sub_2257CD0(v37, 32);
  }
  else
  {
    *(_QWORD *)(v37 + 32) = v40 + 1;
    *v40 = 32;
  }
  sub_2230440(v67, v37);
  result = *(_BYTE **)(v37 + 32);
  if ( (unsigned __int64)result >= *(_QWORD *)(v37 + 24) )
  {
    result = (_BYTE *)sub_2257CD0(v37, 10);
  }
  else
  {
    *(_QWORD *)(v37 + 32) = result + 1;
    *result = 10;
  }
  if ( (unsigned __int8)v70 > 1u )
  {
    v42 = *a3;
    v43 = *(__m128i **)(*a3 + 32);
    if ( *(_QWORD *)(*a3 + 24) - (_QWORD)v43 > 0x18u )
    {
      v59 = _mm_load_si128((const __m128i *)&xmmword_2385620);
      v43[1].m128i_i8[8] = 40;
      v43[1].m128i_i64[0] = 0x6465746163657270LL;
      *v43 = v59;
      *(_QWORD *)(v42 + 32) += 25LL;
    }
    else
    {
      v42 = sub_22581D0(*a3, "#pragma clang deprecated(", 25);
    }
    sub_2230440(v65, v42);
    v44 = *(_QWORD *)(v42 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v42 + 24) - v44) > 2 )
    {
      *(_BYTE *)(v44 + 2) = 34;
      *(_WORD *)v44 = 8236;
      *(_QWORD *)(v42 + 32) += 3LL;
    }
    else
    {
      v42 = sub_22581D0(v42, ", \"", 3);
    }
    sub_2230440(v69, v42);
    v45 = *(_QWORD *)(v42 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v42 + 24) - v45) > 2 )
    {
      *(_BYTE *)(v45 + 2) = 10;
      *(_WORD *)v45 = 10530;
      *(_QWORD *)(v42 + 32) += 3LL;
      return (_BYTE *)(elf_gnu_hash_chain + 3734);
    }
    else
    {
      return (_BYTE *)sub_22581D0(v42, "\")\n", 3);
    }
  }
  return result;
}

