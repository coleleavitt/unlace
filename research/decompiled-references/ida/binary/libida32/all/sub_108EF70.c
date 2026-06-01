_BYTE *__fastcall sub_108EF70(__int64 a1, __int64 a2, __int64 *a3)
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
  _BYTE *v17; // rax
  _BYTE *v18; // rax
  __int64 v19; // rbx
  __m128i *v20; // rdx
  unsigned __int64 v21; // rax
  _BYTE *v22; // rax
  _BYTE *v23; // rax
  __int64 v24; // rbx
  __m128i *v25; // rdx
  unsigned __int64 v26; // rax
  _BYTE *v27; // rax
  _BYTE *v28; // rax
  __int64 v29; // rbx
  __m128i *v30; // rdx
  unsigned __int64 v31; // rax
  _BYTE *v32; // rax
  _BYTE *v33; // rax
  __int64 v34; // rbx
  __m128i *v35; // rdx
  unsigned __int64 v36; // rax
  _BYTE *v37; // rax
  _BYTE *result; // rax
  __int64 v39; // rbx
  __m128i *v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rdx
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
  __m128i si128; // xmm0
  __m128i v56; // xmm0
  __m128i v57; // xmm0
  __m128i v58; // xmm0
  __m128i v59; // xmm0
  __m128i v60; // xmm0
  __m128i v61; // xmm0
  _QWORD v62[4]; // [rsp+0h] [rbp-B8h] BYREF
  __int16 v63; // [rsp+20h] [rbp-98h]
  _QWORD v64[4]; // [rsp+30h] [rbp-88h] BYREF
  __int16 v65; // [rsp+50h] [rbp-68h]
  _BYTE v66[32]; // [rsp+60h] [rbp-58h] BYREF
  __int16 v67; // [rsp+80h] [rbp-38h]

  v4 = *a3;
  v65 = 259;
  v62[0] = "__ve";
  v5 = *(_QWORD **)(v4 + 32);
  v63 = 259;
  v67 = 257;
  v6 = *(_QWORD *)(v4 + 24);
  v64[0] = "1";
  if ( (unsigned __int64)(v6 - (_QWORD)v5) > 7 )
  {
    *v5 = 0x20656E6966656423LL;
    *(_QWORD *)(v4 + 32) += 8LL;
  }
  else
  {
    v4 = sub_22581D0(v4, "#define ", 8);
  }
  sub_2230440(v62, v4);
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
  sub_2230440(v64, v4);
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
  if ( (unsigned __int8)v67 > 1u )
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
    sub_2230440(v62, v9);
    v53 = *(_QWORD *)(v9 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v9 + 24) - v53) > 2 )
    {
      *(_BYTE *)(v53 + 2) = 34;
      *(_WORD *)v53 = 8236;
      *(_QWORD *)(v9 + 32) += 3LL;
    }
    else
    {
      v9 = sub_22581D0(v9, ", \"", 3);
    }
    sub_2230440(v66, v9);
    v54 = *(_QWORD *)(v9 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v9 + 24) - v54) > 2 )
    {
      *(_BYTE *)(v54 + 2) = 10;
      *(_WORD *)v54 = 10530;
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
  v64[0] = "1";
  v65 = 259;
  v62[0] = "__ve__";
  v63 = 259;
  v67 = 257;
  if ( v11 > 7 )
  {
    v10->m128i_i64[0] = 0x20656E6966656423LL;
    *(_QWORD *)(v9 + 32) += 8LL;
  }
  else
  {
    v9 = sub_22581D0(v9, "#define ", 8);
  }
  sub_2230440(v62, v9);
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
  sub_2230440(v64, v9);
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
  if ( (unsigned __int8)v67 > 1u )
  {
    if ( v16 > 0x18 )
    {
      v58 = _mm_load_si128((const __m128i *)&xmmword_2385620);
      v15[1].m128i_i8[8] = 40;
      v15[1].m128i_i64[0] = 0x6465746163657270LL;
      *v15 = v58;
      *(_QWORD *)(v14 + 32) += 25LL;
    }
    else
    {
      v14 = sub_22581D0(*a3, "#pragma clang deprecated(", 25);
    }
    sub_2230440(v62, v14);
    v51 = *(_QWORD *)(v14 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v14 + 24) - v51) > 2 )
    {
      *(_BYTE *)(v51 + 2) = 34;
      *(_WORD *)v51 = 8236;
      *(_QWORD *)(v14 + 32) += 3LL;
    }
    else
    {
      v14 = sub_22581D0(v14, ", \"", 3);
    }
    sub_2230440(v66, v14);
    v52 = *(_QWORD *)(v14 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v14 + 24) - v52) > 2 )
    {
      *(_BYTE *)(v52 + 2) = 10;
      *(_WORD *)v52 = 10530;
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
  v64[0] = "1";
  v62[0] = "__NEC__";
  v65 = 259;
  v63 = 259;
  v67 = 257;
  if ( v16 > 7 )
  {
    v15->m128i_i64[0] = 0x20656E6966656423LL;
    *(_QWORD *)(v14 + 32) += 8LL;
  }
  else
  {
    v14 = sub_22581D0(v14, "#define ", 8);
  }
  sub_2230440(v62, v14);
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
  sub_2230440(v64, v14);
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
  v19 = *a3;
  v20 = *(__m128i **)(*a3 + 32);
  v21 = *(_QWORD *)(*a3 + 24) - (_QWORD)v20;
  if ( (unsigned __int8)v67 > 1u )
  {
    if ( v21 > 0x18 )
    {
      v59 = _mm_load_si128((const __m128i *)&xmmword_2385620);
      v20[1].m128i_i8[8] = 40;
      v20[1].m128i_i64[0] = 0x6465746163657270LL;
      *v20 = v59;
      *(_QWORD *)(v19 + 32) += 25LL;
    }
    else
    {
      v19 = sub_22581D0(*a3, "#pragma clang deprecated(", 25);
    }
    sub_2230440(v62, v19);
    v49 = *(_QWORD *)(v19 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v19 + 24) - v49) > 2 )
    {
      *(_BYTE *)(v49 + 2) = 34;
      *(_WORD *)v49 = 8236;
      *(_QWORD *)(v19 + 32) += 3LL;
    }
    else
    {
      v19 = sub_22581D0(v19, ", \"", 3);
    }
    sub_2230440(v66, v19);
    v50 = *(_QWORD *)(v19 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v19 + 24) - v50) > 2 )
    {
      *(_BYTE *)(v50 + 2) = 10;
      *(_WORD *)v50 = 10530;
      *(_QWORD *)(v19 + 32) += 3LL;
    }
    else
    {
      sub_22581D0(v19, "\")\n", 3);
    }
    v19 = *a3;
    v20 = *(__m128i **)(*a3 + 32);
    v21 = *(_QWORD *)(*a3 + 24) - (_QWORD)v20;
  }
  v64[0] = "1";
  v65 = 259;
  v62[0] = "__GCC_HAVE_SYNC_COMPARE_AND_SWAP_1";
  v63 = 259;
  v67 = 257;
  if ( v21 > 7 )
  {
    v20->m128i_i64[0] = 0x20656E6966656423LL;
    *(_QWORD *)(v19 + 32) += 8LL;
  }
  else
  {
    v19 = sub_22581D0(v19, "#define ", 8);
  }
  sub_2230440(v62, v19);
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
  sub_2230440(v64, v19);
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
  v24 = *a3;
  v25 = *(__m128i **)(*a3 + 32);
  v26 = *(_QWORD *)(*a3 + 24) - (_QWORD)v25;
  if ( (unsigned __int8)v67 > 1u )
  {
    if ( v26 > 0x18 )
    {
      v60 = _mm_load_si128((const __m128i *)&xmmword_2385620);
      v25[1].m128i_i8[8] = 40;
      v25[1].m128i_i64[0] = 0x6465746163657270LL;
      *v25 = v60;
      *(_QWORD *)(v24 + 32) += 25LL;
    }
    else
    {
      v24 = sub_22581D0(*a3, "#pragma clang deprecated(", 25);
    }
    sub_2230440(v62, v24);
    v47 = *(_QWORD *)(v24 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v24 + 24) - v47) > 2 )
    {
      *(_BYTE *)(v47 + 2) = 34;
      *(_WORD *)v47 = 8236;
      *(_QWORD *)(v24 + 32) += 3LL;
    }
    else
    {
      v24 = sub_22581D0(v24, ", \"", 3);
    }
    sub_2230440(v66, v24);
    v48 = *(_QWORD *)(v24 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v24 + 24) - v48) > 2 )
    {
      *(_BYTE *)(v48 + 2) = 10;
      *(_WORD *)v48 = 10530;
      *(_QWORD *)(v24 + 32) += 3LL;
    }
    else
    {
      sub_22581D0(v24, "\")\n", 3);
    }
    v24 = *a3;
    v25 = *(__m128i **)(*a3 + 32);
    v26 = *(_QWORD *)(*a3 + 24) - (_QWORD)v25;
  }
  v64[0] = "1";
  v65 = 259;
  v62[0] = "__GCC_HAVE_SYNC_COMPARE_AND_SWAP_2";
  v63 = 259;
  v67 = 257;
  if ( v26 > 7 )
  {
    v25->m128i_i64[0] = 0x20656E6966656423LL;
    *(_QWORD *)(v24 + 32) += 8LL;
  }
  else
  {
    v24 = sub_22581D0(v24, "#define ", 8);
  }
  sub_2230440(v62, v24);
  v27 = *(_BYTE **)(v24 + 32);
  if ( (unsigned __int64)v27 >= *(_QWORD *)(v24 + 24) )
  {
    v24 = sub_2257CD0(v24, 32);
  }
  else
  {
    *(_QWORD *)(v24 + 32) = v27 + 1;
    *v27 = 32;
  }
  sub_2230440(v64, v24);
  v28 = *(_BYTE **)(v24 + 32);
  if ( (unsigned __int64)v28 >= *(_QWORD *)(v24 + 24) )
  {
    sub_2257CD0(v24, 10);
  }
  else
  {
    *(_QWORD *)(v24 + 32) = v28 + 1;
    *v28 = 10;
  }
  v29 = *a3;
  v30 = *(__m128i **)(*a3 + 32);
  v31 = *(_QWORD *)(*a3 + 24) - (_QWORD)v30;
  if ( (unsigned __int8)v67 > 1u )
  {
    if ( v31 > 0x18 )
    {
      v61 = _mm_load_si128((const __m128i *)&xmmword_2385620);
      v30[1].m128i_i8[8] = 40;
      v30[1].m128i_i64[0] = 0x6465746163657270LL;
      *v30 = v61;
      *(_QWORD *)(v29 + 32) += 25LL;
    }
    else
    {
      v29 = sub_22581D0(*a3, "#pragma clang deprecated(", 25);
    }
    sub_2230440(v62, v29);
    v45 = *(_QWORD *)(v29 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v29 + 24) - v45) > 2 )
    {
      *(_BYTE *)(v45 + 2) = 34;
      *(_WORD *)v45 = 8236;
      *(_QWORD *)(v29 + 32) += 3LL;
    }
    else
    {
      v29 = sub_22581D0(v29, ", \"", 3);
    }
    sub_2230440(v66, v29);
    v46 = *(_QWORD *)(v29 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v29 + 24) - v46) > 2 )
    {
      *(_BYTE *)(v46 + 2) = 10;
      *(_WORD *)v46 = 10530;
      *(_QWORD *)(v29 + 32) += 3LL;
    }
    else
    {
      sub_22581D0(v29, "\")\n", 3);
    }
    v29 = *a3;
    v30 = *(__m128i **)(*a3 + 32);
    v31 = *(_QWORD *)(*a3 + 24) - (_QWORD)v30;
  }
  v64[0] = "1";
  v62[0] = "__GCC_HAVE_SYNC_COMPARE_AND_SWAP_4";
  v65 = 259;
  v63 = 259;
  v67 = 257;
  if ( v31 > 7 )
  {
    v30->m128i_i64[0] = 0x20656E6966656423LL;
    *(_QWORD *)(v29 + 32) += 8LL;
  }
  else
  {
    v29 = sub_22581D0(v29, "#define ", 8);
  }
  sub_2230440(v62, v29);
  v32 = *(_BYTE **)(v29 + 32);
  if ( (unsigned __int64)v32 >= *(_QWORD *)(v29 + 24) )
  {
    v29 = sub_2257CD0(v29, 32);
  }
  else
  {
    *(_QWORD *)(v29 + 32) = v32 + 1;
    *v32 = 32;
  }
  sub_2230440(v64, v29);
  v33 = *(_BYTE **)(v29 + 32);
  if ( (unsigned __int64)v33 >= *(_QWORD *)(v29 + 24) )
  {
    sub_2257CD0(v29, 10);
  }
  else
  {
    *(_QWORD *)(v29 + 32) = v33 + 1;
    *v33 = 10;
  }
  v34 = *a3;
  v35 = *(__m128i **)(*a3 + 32);
  v36 = *(_QWORD *)(*a3 + 24) - (_QWORD)v35;
  if ( (unsigned __int8)v67 > 1u )
  {
    if ( v36 > 0x18 )
    {
      v57 = _mm_load_si128((const __m128i *)&xmmword_2385620);
      v35[1].m128i_i8[8] = 40;
      v35[1].m128i_i64[0] = 0x6465746163657270LL;
      *v35 = v57;
      *(_QWORD *)(v34 + 32) += 25LL;
    }
    else
    {
      v34 = sub_22581D0(*a3, "#pragma clang deprecated(", 25);
    }
    sub_2230440(v62, v34);
    v43 = *(_QWORD *)(v34 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v34 + 24) - v43) > 2 )
    {
      *(_BYTE *)(v43 + 2) = 34;
      *(_WORD *)v43 = 8236;
      *(_QWORD *)(v34 + 32) += 3LL;
    }
    else
    {
      v34 = sub_22581D0(v34, ", \"", 3);
    }
    sub_2230440(v66, v34);
    v44 = *(_QWORD *)(v34 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v34 + 24) - v44) > 2 )
    {
      *(_BYTE *)(v44 + 2) = 10;
      *(_WORD *)v44 = 10530;
      *(_QWORD *)(v34 + 32) += 3LL;
    }
    else
    {
      sub_22581D0(v34, "\")\n", 3);
    }
    v34 = *a3;
    v35 = *(__m128i **)(*a3 + 32);
    v36 = *(_QWORD *)(*a3 + 24) - (_QWORD)v35;
  }
  v64[0] = "1";
  v65 = 259;
  v62[0] = "__GCC_HAVE_SYNC_COMPARE_AND_SWAP_8";
  v63 = 259;
  v67 = 257;
  if ( v36 > 7 )
  {
    v35->m128i_i64[0] = 0x20656E6966656423LL;
    *(_QWORD *)(v34 + 32) += 8LL;
  }
  else
  {
    v34 = sub_22581D0(v34, "#define ", 8);
  }
  sub_2230440(v62, v34);
  v37 = *(_BYTE **)(v34 + 32);
  if ( (unsigned __int64)v37 >= *(_QWORD *)(v34 + 24) )
  {
    v34 = sub_2257CD0(v34, 32);
  }
  else
  {
    *(_QWORD *)(v34 + 32) = v37 + 1;
    *v37 = 32;
  }
  sub_2230440(v64, v34);
  result = *(_BYTE **)(v34 + 32);
  if ( (unsigned __int64)result >= *(_QWORD *)(v34 + 24) )
  {
    result = (_BYTE *)sub_2257CD0(v34, 10);
  }
  else
  {
    *(_QWORD *)(v34 + 32) = result + 1;
    *result = 10;
  }
  if ( (unsigned __int8)v67 > 1u )
  {
    v39 = *a3;
    v40 = *(__m128i **)(*a3 + 32);
    if ( *(_QWORD *)(*a3 + 24) - (_QWORD)v40 > 0x18u )
    {
      v56 = _mm_load_si128((const __m128i *)&xmmword_2385620);
      v40[1].m128i_i8[8] = 40;
      v40[1].m128i_i64[0] = 0x6465746163657270LL;
      *v40 = v56;
      *(_QWORD *)(v39 + 32) += 25LL;
    }
    else
    {
      v39 = sub_22581D0(*a3, "#pragma clang deprecated(", 25);
    }
    sub_2230440(v62, v39);
    v41 = *(_QWORD *)(v39 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v39 + 24) - v41) > 2 )
    {
      *(_BYTE *)(v41 + 2) = 34;
      *(_WORD *)v41 = 8236;
      *(_QWORD *)(v39 + 32) += 3LL;
    }
    else
    {
      v39 = sub_22581D0(v39, ", \"", 3);
    }
    sub_2230440(v66, v39);
    v42 = *(_QWORD *)(v39 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v39 + 24) - v42) > 2 )
    {
      *(_BYTE *)(v42 + 2) = 10;
      *(_WORD *)v42 = 10530;
      *(_QWORD *)(v39 + 32) += 3LL;
      return (_BYTE *)(elf_gnu_hash_chain + 3734);
    }
    else
    {
      return (_BYTE *)sub_22581D0(v39, "\")\n", 3);
    }
  }
  return result;
}

