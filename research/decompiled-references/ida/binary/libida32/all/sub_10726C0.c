unsigned __int64 __fastcall sub_10726C0(__int64 *a1, _BYTE *a2, _DWORD *a3)
{
  __int64 v3; // r14
  __int64 v4; // rax
  _QWORD *v5; // rdx
  _BYTE *v6; // rax
  _BYTE *v7; // rax
  __int64 v8; // r15
  __m128i *v9; // rcx
  unsigned __int64 v10; // rdx
  _BYTE *v11; // rdx
  _BYTE *v12; // rdx
  __int64 v13; // r15
  __m128i *v14; // rcx
  unsigned __int64 v15; // rdx
  _BYTE *v16; // rdx
  _BYTE *v17; // rdx
  bool v18; // zf
  _BYTE *v19; // rdx
  _BYTE *v20; // rdx
  __int64 v21; // r15
  __m128i *v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  _BYTE *v25; // rdx
  _BYTE *v26; // rdx
  unsigned __int64 result; // rax
  __int64 v28; // rdx
  __int64 v29; // r13
  _QWORD *v30; // rdx
  __int64 v31; // rax
  _BYTE *v32; // rax
  __int64 v33; // r13
  _QWORD *v34; // rdx
  __int64 v35; // rax
  _BYTE *v36; // rax
  _BYTE *v37; // rax
  __int64 v38; // r13
  __m128i *v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rdx
  _BYTE *v42; // rdx
  _BYTE *v43; // rdx
  __int64 v44; // r15
  __m128i *v45; // rcx
  unsigned __int64 v46; // rdx
  _BYTE *v47; // rdx
  _BYTE *v48; // rdx
  __int64 v49; // r15
  __m128i *v50; // rcx
  unsigned __int64 v51; // rdx
  _BYTE *v52; // rdx
  _BYTE *v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rcx
  __int64 v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // rcx
  __int64 v59; // rcx
  __int64 v60; // rbp
  __m128i *v61; // rdx
  __int64 v62; // rdx
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rcx
  __m128i v66; // xmm0
  __m128i si128; // xmm0
  __m128i v68; // xmm0
  __int64 v69; // rax
  __m128i *v70; // rcx
  __int64 v71; // rax
  __int64 v72; // rcx
  __int64 v73; // rcx
  __int64 v74; // rcx
  __int64 v75; // rcx
  __int64 v76; // rcx
  __int64 v77; // rcx
  __m128i v78; // xmm0
  __m128i v79; // xmm0
  __m128i v80; // xmm0
  __m128i v81; // xmm0
  __m128i v82; // xmm0
  __m128i v83; // xmm0
  __m128i v84; // xmm0
  __int64 v86; // [rsp+8h] [rbp-D0h]
  __int64 v87; // [rsp+8h] [rbp-D0h]
  _QWORD v88[4]; // [rsp+10h] [rbp-C8h] BYREF
  __int16 v89; // [rsp+30h] [rbp-A8h]
  _QWORD v90[4]; // [rsp+40h] [rbp-98h] BYREF
  __int16 v91; // [rsp+60h] [rbp-78h]
  _BYTE v92[32]; // [rsp+70h] [rbp-68h] BYREF
  __int16 v93; // [rsp+90h] [rbp-48h]

  v3 = *a1;
  v90[0] = "6000";
  v91 = 259;
  v88[0] = "__APPLE_CC__";
  v89 = 259;
  v4 = *(_QWORD *)(v3 + 24);
  v93 = 257;
  v5 = *(_QWORD **)(v3 + 32);
  if ( (unsigned __int64)(v4 - (_QWORD)v5) > 7 )
  {
    *v5 = 0x20656E6966656423LL;
    *(_QWORD *)(v3 + 32) += 8LL;
  }
  else
  {
    v3 = sub_22581D0(v3, "#define ", 8);
  }
  sub_2230440(v88, v3);
  v6 = *(_BYTE **)(v3 + 32);
  if ( (unsigned __int64)v6 >= *(_QWORD *)(v3 + 24) )
  {
    v3 = sub_2257CD0(v3, 32);
  }
  else
  {
    *(_QWORD *)(v3 + 32) = v6 + 1;
    *v6 = 32;
  }
  sub_2230440(v90, v3);
  v7 = *(_BYTE **)(v3 + 32);
  if ( (unsigned __int64)v7 >= *(_QWORD *)(v3 + 24) )
  {
    sub_2257CD0(v3, 10);
  }
  else
  {
    *(_QWORD *)(v3 + 32) = v7 + 1;
    *v7 = 10;
  }
  v8 = *a1;
  v9 = *(__m128i **)(*a1 + 32);
  v10 = *(_QWORD *)(*a1 + 24) - (_QWORD)v9;
  if ( (unsigned __int8)v93 > 1u )
  {
    if ( v10 > 0x18 )
    {
      si128 = _mm_load_si128((const __m128i *)&xmmword_2385620);
      v9[1].m128i_i8[8] = 40;
      v9[1].m128i_i64[0] = 0x6465746163657270LL;
      *v9 = si128;
      *(_QWORD *)(v8 + 32) += 25LL;
    }
    else
    {
      v8 = sub_22581D0(*a1, "#pragma clang deprecated(", 25);
    }
    sub_2230440(v88, v8);
    v58 = *(_QWORD *)(v8 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v8 + 24) - v58) > 2 )
    {
      *(_BYTE *)(v58 + 2) = 34;
      *(_WORD *)v58 = 8236;
      *(_QWORD *)(v8 + 32) += 3LL;
    }
    else
    {
      v8 = sub_22581D0(v8, ", \"", 3);
    }
    sub_2230440(v92, v8);
    v59 = *(_QWORD *)(v8 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v8 + 24) - v59) > 2 )
    {
      *(_BYTE *)(v59 + 2) = 10;
      *(_WORD *)v59 = 10530;
      *(_QWORD *)(v8 + 32) += 3LL;
    }
    else
    {
      sub_22581D0(v8, "\")\n", 3);
    }
    v8 = *a1;
    v9 = *(__m128i **)(*a1 + 32);
    v10 = *(_QWORD *)(*a1 + 24) - (_QWORD)v9;
  }
  v88[0] = "__APPLE__";
  v89 = 259;
  v90[0] = "1";
  v91 = 259;
  v93 = 257;
  if ( v10 > 7 )
  {
    v9->m128i_i64[0] = 0x20656E6966656423LL;
    *(_QWORD *)(v8 + 32) += 8LL;
  }
  else
  {
    v8 = sub_22581D0(v8, "#define ", 8);
  }
  sub_2230440(v88, v8);
  v11 = *(_BYTE **)(v8 + 32);
  if ( (unsigned __int64)v11 >= *(_QWORD *)(v8 + 24) )
  {
    v8 = sub_2257CD0(v8, 32);
  }
  else
  {
    *(_QWORD *)(v8 + 32) = v11 + 1;
    *v11 = 32;
  }
  sub_2230440(v90, v8);
  v12 = *(_BYTE **)(v8 + 32);
  if ( (unsigned __int64)v12 >= *(_QWORD *)(v8 + 24) )
  {
    sub_2257CD0(v8, 10);
  }
  else
  {
    *(_QWORD *)(v8 + 32) = v12 + 1;
    *v12 = 10;
  }
  v13 = *a1;
  v14 = *(__m128i **)(*a1 + 32);
  v15 = *(_QWORD *)(*a1 + 24) - (_QWORD)v14;
  if ( (unsigned __int8)v93 > 1u )
  {
    if ( v15 > 0x18 )
    {
      v66 = _mm_load_si128((const __m128i *)&xmmword_2385620);
      v14[1].m128i_i8[8] = 40;
      v14[1].m128i_i64[0] = 0x6465746163657270LL;
      *v14 = v66;
      *(_QWORD *)(v13 + 32) += 25LL;
    }
    else
    {
      v13 = sub_22581D0(*a1, "#pragma clang deprecated(", 25);
    }
    sub_2230440(v88, v13);
    v56 = *(_QWORD *)(v13 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v13 + 24) - v56) > 2 )
    {
      *(_BYTE *)(v56 + 2) = 34;
      *(_WORD *)v56 = 8236;
      *(_QWORD *)(v13 + 32) += 3LL;
    }
    else
    {
      v13 = sub_22581D0(v13, ", \"", 3);
    }
    sub_2230440(v92, v13);
    v57 = *(_QWORD *)(v13 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v13 + 24) - v57) > 2 )
    {
      *(_BYTE *)(v57 + 2) = 10;
      *(_WORD *)v57 = 10530;
      *(_QWORD *)(v13 + 32) += 3LL;
    }
    else
    {
      sub_22581D0(v13, "\")\n", 3);
    }
    v13 = *a1;
    v14 = *(__m128i **)(*a1 + 32);
    v15 = *(_QWORD *)(*a1 + 24) - (_QWORD)v14;
  }
  if ( (a2[224] & 1) != 0 )
  {
    v90[0] = "0";
    v91 = 259;
    v88[0] = "_FORTIFY_SOURCE";
    v89 = 259;
    v93 = 257;
    if ( v15 > 7 )
    {
      v14->m128i_i64[0] = 0x20656E6966656423LL;
      *(_QWORD *)(v13 + 32) += 8LL;
    }
    else
    {
      v13 = sub_22581D0(v13, "#define ", 8);
    }
    sub_2230440(v88, v13);
    v16 = *(_BYTE **)(v13 + 32);
    if ( (unsigned __int64)v16 >= *(_QWORD *)(v13 + 24) )
    {
      v13 = sub_2257CD0(v13, 32);
    }
    else
    {
      *(_QWORD *)(v13 + 32) = v16 + 1;
      *v16 = 32;
    }
    sub_2230440(v90, v13);
    v17 = *(_BYTE **)(v13 + 32);
    if ( (unsigned __int64)v17 >= *(_QWORD *)(v13 + 24) )
    {
      sub_2257CD0(v13, 10);
    }
    else
    {
      *(_QWORD *)(v13 + 32) = v17 + 1;
      *v17 = 10;
    }
    v13 = *a1;
    v14 = *(__m128i **)(*a1 + 32);
    v15 = *(_QWORD *)(*a1 + 24) - (_QWORD)v14;
    if ( (unsigned __int8)v93 > 1u )
    {
      if ( v15 > 0x18 )
      {
        v80 = _mm_load_si128((const __m128i *)&xmmword_2385620);
        v14[1].m128i_i8[8] = 40;
        v14[1].m128i_i64[0] = 0x6465746163657270LL;
        *v14 = v80;
        *(_QWORD *)(v13 + 32) += 25LL;
      }
      else
      {
        v13 = sub_22581D0(*a1, "#pragma clang deprecated(", 25);
      }
      sub_2230440(v88, v13);
      v64 = *(_QWORD *)(v13 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v13 + 24) - v64) > 2 )
      {
        *(_BYTE *)(v64 + 2) = 34;
        *(_WORD *)v64 = 8236;
        *(_QWORD *)(v13 + 32) += 3LL;
      }
      else
      {
        v13 = sub_22581D0(v13, ", \"", 3);
      }
      sub_2230440(v92, v13);
      v65 = *(_QWORD *)(v13 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v13 + 24) - v65) > 2 )
      {
        *(_BYTE *)(v65 + 2) = 10;
        *(_WORD *)v65 = 10530;
        *(_QWORD *)(v13 + 32) += 3LL;
      }
      else
      {
        sub_22581D0(v13, "\")\n", 3);
      }
      v13 = *a1;
      v14 = *(__m128i **)(*a1 + 32);
      v15 = *(_QWORD *)(*a1 + 24) - (_QWORD)v14;
    }
  }
  if ( (a2[2] & 4) == 0 )
  {
    v90[0] = "__attribute__((objc_gc(weak)))";
    v91 = 259;
    v88[0] = "__weak";
    v89 = 259;
    v93 = 257;
    if ( v15 > 7 )
    {
      v14->m128i_i64[0] = 0x20656E6966656423LL;
      *(_QWORD *)(v13 + 32) += 8LL;
    }
    else
    {
      v13 = sub_22581D0(v13, "#define ", 8);
    }
    sub_2230440(v88, v13);
    v42 = *(_BYTE **)(v13 + 32);
    if ( (unsigned __int64)v42 >= *(_QWORD *)(v13 + 24) )
    {
      v13 = sub_2257CD0(v13, 32);
    }
    else
    {
      *(_QWORD *)(v13 + 32) = v42 + 1;
      *v42 = 32;
    }
    sub_2230440(v90, v13);
    v43 = *(_BYTE **)(v13 + 32);
    if ( (unsigned __int64)v43 >= *(_QWORD *)(v13 + 24) )
    {
      sub_2257CD0(v13, 10);
    }
    else
    {
      *(_QWORD *)(v13 + 32) = v43 + 1;
      *v43 = 10;
    }
    v44 = *a1;
    v45 = *(__m128i **)(*a1 + 32);
    v46 = *(_QWORD *)(*a1 + 24) - (_QWORD)v45;
    if ( (unsigned __int8)v93 > 1u )
    {
      if ( v46 > 0x18 )
      {
        v81 = _mm_load_si128((const __m128i *)&xmmword_2385620);
        v45[1].m128i_i8[8] = 40;
        v45[1].m128i_i64[0] = 0x6465746163657270LL;
        *v45 = v81;
        *(_QWORD *)(v44 + 32) += 25LL;
      }
      else
      {
        v44 = sub_22581D0(*a1, "#pragma clang deprecated(", 25);
      }
      sub_2230440(v88, v44);
      v76 = *(_QWORD *)(v44 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v44 + 24) - v76) > 2 )
      {
        *(_BYTE *)(v76 + 2) = 34;
        *(_WORD *)v76 = 8236;
        *(_QWORD *)(v44 + 32) += 3LL;
      }
      else
      {
        v44 = sub_22581D0(v44, ", \"", 3);
      }
      sub_2230440(v92, v44);
      v77 = *(_QWORD *)(v44 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v44 + 24) - v77) > 2 )
      {
        *(_BYTE *)(v77 + 2) = 10;
        *(_WORD *)v77 = 10530;
        *(_QWORD *)(v44 + 32) += 3LL;
      }
      else
      {
        sub_22581D0(v44, "\")\n", 3);
      }
      v44 = *a1;
      v45 = *(__m128i **)(*a1 + 32);
      v46 = *(_QWORD *)(*a1 + 24) - (_QWORD)v45;
    }
    v91 = 257;
    v88[0] = "__strong";
    v89 = 259;
    v93 = 257;
    if ( v46 > 7 )
    {
      v45->m128i_i64[0] = 0x20656E6966656423LL;
      *(_QWORD *)(v44 + 32) += 8LL;
    }
    else
    {
      v44 = sub_22581D0(v44, "#define ", 8);
    }
    sub_2230440(v88, v44);
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
    sub_2230440(v90, v44);
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
    v49 = *a1;
    v50 = *(__m128i **)(*a1 + 32);
    v51 = *(_QWORD *)(*a1 + 24) - (_QWORD)v50;
    if ( (unsigned __int8)v93 > 1u )
    {
      if ( v51 > 0x18 )
      {
        v82 = _mm_load_si128((const __m128i *)&xmmword_2385620);
        v50[1].m128i_i8[8] = 40;
        v50[1].m128i_i64[0] = 0x6465746163657270LL;
        *v50 = v82;
        *(_QWORD *)(v49 + 32) += 25LL;
      }
      else
      {
        v49 = sub_22581D0(*a1, "#pragma clang deprecated(", 25);
      }
      sub_2230440(v88, v49);
      v74 = *(_QWORD *)(v49 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v49 + 24) - v74) > 2 )
      {
        *(_BYTE *)(v74 + 2) = 34;
        *(_WORD *)v74 = 8236;
        *(_QWORD *)(v49 + 32) += 3LL;
      }
      else
      {
        v49 = sub_22581D0(v49, ", \"", 3);
      }
      sub_2230440(v92, v49);
      v75 = *(_QWORD *)(v49 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v49 + 24) - v75) > 2 )
      {
        *(_BYTE *)(v75 + 2) = 10;
        *(_WORD *)v75 = 10530;
        *(_QWORD *)(v49 + 32) += 3LL;
      }
      else
      {
        sub_22581D0(v49, "\")\n", 3);
      }
      v49 = *a1;
      v50 = *(__m128i **)(*a1 + 32);
      v51 = *(_QWORD *)(*a1 + 24) - (_QWORD)v50;
    }
    v91 = 257;
    v88[0] = "__unsafe_unretained";
    v89 = 259;
    v93 = 257;
    if ( v51 > 7 )
    {
      v50->m128i_i64[0] = 0x20656E6966656423LL;
      *(_QWORD *)(v49 + 32) += 8LL;
    }
    else
    {
      v49 = sub_22581D0(v49, "#define ", 8);
    }
    sub_2230440(v88, v49);
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
    sub_2230440(v90, v49);
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
    v13 = *a1;
    v14 = *(__m128i **)(*a1 + 32);
    v15 = *(_QWORD *)(*a1 + 24) - (_QWORD)v14;
    if ( (unsigned __int8)v93 > 1u )
    {
      if ( v15 > 0x18 )
      {
        v84 = _mm_load_si128((const __m128i *)&xmmword_2385620);
        v14[1].m128i_i8[8] = 40;
        v14[1].m128i_i64[0] = 0x6465746163657270LL;
        *v14 = v84;
        *(_QWORD *)(v13 + 32) += 25LL;
      }
      else
      {
        v13 = sub_22581D0(*a1, "#pragma clang deprecated(", 25);
      }
      sub_2230440(v88, v13);
      v54 = *(_QWORD *)(v13 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v13 + 24) - v54) > 2 )
      {
        *(_BYTE *)(v54 + 2) = 34;
        *(_WORD *)v54 = 8236;
        *(_QWORD *)(v13 + 32) += 3LL;
      }
      else
      {
        v13 = sub_22581D0(v13, ", \"", 3);
      }
      sub_2230440(v92, v13);
      v55 = *(_QWORD *)(v13 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v13 + 24) - v55) > 2 )
      {
        *(_BYTE *)(v55 + 2) = 10;
        *(_WORD *)v55 = 10530;
        *(_QWORD *)(v13 + 32) += 3LL;
      }
      else
      {
        sub_22581D0(v13, "\")\n", 3);
      }
      v13 = *a1;
      v14 = *(__m128i **)(*a1 + 32);
      v15 = *(_QWORD *)(*a1 + 24) - (_QWORD)v14;
    }
  }
  v18 = (a2[23] & 4) == 0;
  v90[0] = "1";
  v91 = 259;
  if ( v18 )
  {
    v88[0] = "__DYNAMIC__";
    v89 = 259;
    v93 = 257;
    if ( v15 > 7 )
    {
      v14->m128i_i64[0] = 0x20656E6966656423LL;
      *(_QWORD *)(v13 + 32) += 8LL;
    }
    else
    {
      v13 = sub_22581D0(v13, "#define ", 8);
    }
    sub_2230440(v88, v13);
    v25 = *(_BYTE **)(v13 + 32);
    if ( (unsigned __int64)v25 >= *(_QWORD *)(v13 + 24) )
    {
      v13 = sub_2257CD0(v13, 32);
    }
    else
    {
      *(_QWORD *)(v13 + 32) = v25 + 1;
      *v25 = 32;
    }
    sub_2230440(v90, v13);
    v26 = *(_BYTE **)(v13 + 32);
    if ( (unsigned __int64)v26 >= *(_QWORD *)(v13 + 24) )
    {
      sub_2257CD0(v13, 10);
    }
    else
    {
      *(_QWORD *)(v13 + 32) = v26 + 1;
      *v26 = 10;
    }
    if ( (unsigned __int8)v93 > 1u )
    {
      v69 = *a1;
      v70 = *(__m128i **)(*a1 + 32);
      if ( *(_QWORD *)(*a1 + 24) - (_QWORD)v70 > 0x18u )
      {
        v79 = _mm_load_si128((const __m128i *)&xmmword_2385620);
        v70[1].m128i_i8[8] = 40;
        v70[1].m128i_i64[0] = 0x6465746163657270LL;
        *v70 = v79;
        *(_QWORD *)(v69 + 32) += 25LL;
      }
      else
      {
        v69 = sub_22581D0(*a1, "#pragma clang deprecated(", 25);
      }
      v86 = v69;
      sub_2230440(v88, v69);
      v71 = v86;
      v72 = *(_QWORD *)(v86 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v86 + 24) - v72) > 2 )
      {
        *(_BYTE *)(v72 + 2) = 34;
        *(_WORD *)v72 = 8236;
        *(_QWORD *)(v86 + 32) += 3LL;
      }
      else
      {
        v71 = sub_22581D0(v86, ", \"", 3);
      }
      v87 = v71;
      sub_2230440(v92, v71);
      v73 = *(_QWORD *)(v87 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v87 + 24) - v73) > 2 )
      {
        *(_BYTE *)(v73 + 2) = 10;
        *(_WORD *)v73 = 10530;
        *(_QWORD *)(v87 + 32) += 3LL;
      }
      else
      {
        sub_22581D0(v87, "\")\n", 3);
      }
    }
  }
  else
  {
    v88[0] = "__STATIC__";
    v89 = 259;
    v93 = 257;
    if ( v15 > 7 )
    {
      v14->m128i_i64[0] = 0x20656E6966656423LL;
      *(_QWORD *)(v13 + 32) += 8LL;
    }
    else
    {
      v13 = sub_22581D0(v13, "#define ", 8);
    }
    sub_2230440(v88, v13);
    v19 = *(_BYTE **)(v13 + 32);
    if ( (unsigned __int64)v19 >= *(_QWORD *)(v13 + 24) )
    {
      v13 = sub_2257CD0(v13, 32);
    }
    else
    {
      *(_QWORD *)(v13 + 32) = v19 + 1;
      *v19 = 32;
    }
    sub_2230440(v90, v13);
    v20 = *(_BYTE **)(v13 + 32);
    if ( (unsigned __int64)v20 >= *(_QWORD *)(v13 + 24) )
    {
      sub_2257CD0(v13, 10);
    }
    else
    {
      *(_QWORD *)(v13 + 32) = v20 + 1;
      *v20 = 10;
    }
    if ( (unsigned __int8)v93 > 1u )
    {
      v21 = *a1;
      v22 = *(__m128i **)(*a1 + 32);
      if ( *(_QWORD *)(*a1 + 24) - (_QWORD)v22 > 0x18u )
      {
        v78 = _mm_load_si128((const __m128i *)&xmmword_2385620);
        v22[1].m128i_i8[8] = 40;
        v22[1].m128i_i64[0] = 0x6465746163657270LL;
        *v22 = v78;
        *(_QWORD *)(v21 + 32) += 25LL;
      }
      else
      {
        v21 = sub_22581D0(*a1, "#pragma clang deprecated(", 25);
      }
      sub_2230440(v88, v21);
      v23 = *(_QWORD *)(v21 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v21 + 24) - v23) > 2 )
      {
        *(_BYTE *)(v23 + 2) = 34;
        *(_WORD *)v23 = 8236;
        *(_QWORD *)(v21 + 32) += 3LL;
      }
      else
      {
        v21 = sub_22581D0(v21, ", \"", 3);
      }
      sub_2230440(v92, v21);
      v24 = *(_QWORD *)(v21 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v21 + 24) - v24) > 2 )
      {
        *(_BYTE *)(v24 + 2) = 10;
        *(_WORD *)v24 = 10530;
        *(_QWORD *)(v21 + 32) += 3LL;
      }
      else
      {
        sub_22581D0(v21, "\")\n", 3);
      }
    }
  }
  if ( (a2[20] & 0x20) != 0 )
  {
    v90[0] = "1";
    v89 = 259;
    v33 = *a1;
    v88[0] = "_REENTRANT";
    v34 = *(_QWORD **)(v33 + 32);
    v35 = *(_QWORD *)(v33 + 24);
    v91 = 259;
    v93 = 257;
    if ( (unsigned __int64)(v35 - (_QWORD)v34) > 7 )
    {
      *v34 = 0x20656E6966656423LL;
      *(_QWORD *)(v33 + 32) += 8LL;
    }
    else
    {
      v33 = sub_22581D0(v33, "#define ", 8);
    }
    sub_2230440(v88, v33);
    v36 = *(_BYTE **)(v33 + 32);
    if ( (unsigned __int64)v36 >= *(_QWORD *)(v33 + 24) )
    {
      v33 = sub_2257CD0(v33, 32);
    }
    else
    {
      *(_QWORD *)(v33 + 32) = v36 + 1;
      *v36 = 32;
    }
    sub_2230440(v90, v33);
    v37 = *(_BYTE **)(v33 + 32);
    if ( (unsigned __int64)v37 >= *(_QWORD *)(v33 + 24) )
    {
      sub_2257CD0(v33, 10);
    }
    else
    {
      *(_QWORD *)(v33 + 32) = v37 + 1;
      *v37 = 10;
    }
    if ( (unsigned __int8)v93 > 1u )
    {
      v38 = *a1;
      v39 = *(__m128i **)(*a1 + 32);
      if ( *(_QWORD *)(*a1 + 24) - (_QWORD)v39 > 0x18u )
      {
        v83 = _mm_load_si128((const __m128i *)&xmmword_2385620);
        v39[1].m128i_i8[8] = 40;
        v39[1].m128i_i64[0] = 0x6465746163657270LL;
        *v39 = v83;
        *(_QWORD *)(v38 + 32) += 25LL;
      }
      else
      {
        v38 = sub_22581D0(*a1, "#pragma clang deprecated(", 25);
      }
      sub_2230440(v88, v38);
      v40 = *(_QWORD *)(v38 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v38 + 24) - v40) > 2 )
      {
        *(_BYTE *)(v40 + 2) = 34;
        *(_WORD *)v40 = 8236;
        *(_QWORD *)(v38 + 32) += 3LL;
      }
      else
      {
        v38 = sub_22581D0(v38, ", \"", 3);
      }
      sub_2230440(v92, v38);
      v41 = *(_QWORD *)(v38 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v38 + 24) - v41) > 2 )
      {
        *(_BYTE *)(v41 + 2) = 10;
        *(_WORD *)v41 = 10530;
        *(_QWORD *)(v38 + 32) += 3LL;
      }
      else
      {
        sub_22581D0(v38, "\")\n", 3);
      }
    }
  }
  if ( a3[10] == 1 && a3[13] == 5
    || (result = (unsigned int)a3[11], (unsigned int)result <= 0x1F) && (v28 = 4160750114LL, _bittest64(&v28, result)) )
  {
    v29 = *a1;
    v88[0] = "__MACH__";
    v30 = *(_QWORD **)(v29 + 32);
    v31 = *(_QWORD *)(v29 + 24);
    v90[0] = "1";
    v91 = 259;
    v89 = 259;
    v93 = 257;
    if ( (unsigned __int64)(v31 - (_QWORD)v30) > 7 )
    {
      *v30 = 0x20656E6966656423LL;
      *(_QWORD *)(v29 + 32) += 8LL;
    }
    else
    {
      v29 = sub_22581D0(v29, "#define ", 8);
    }
    sub_2230440(v88, v29);
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
    sub_2230440(v90, v29);
    result = *(_QWORD *)(v29 + 32);
    if ( result >= *(_QWORD *)(v29 + 24) )
    {
      result = sub_2257CD0(v29, 10);
    }
    else
    {
      *(_QWORD *)(v29 + 32) = result + 1;
      *(_BYTE *)result = 10;
    }
    if ( (unsigned __int8)v93 > 1u )
    {
      v60 = *a1;
      v61 = *(__m128i **)(*a1 + 32);
      if ( *(_QWORD *)(*a1 + 24) - (_QWORD)v61 > 0x18u )
      {
        v68 = _mm_load_si128((const __m128i *)&xmmword_2385620);
        v61[1].m128i_i8[8] = 40;
        v61[1].m128i_i64[0] = 0x6465746163657270LL;
        *v61 = v68;
        *(_QWORD *)(v60 + 32) += 25LL;
      }
      else
      {
        v60 = sub_22581D0(v60, "#pragma clang deprecated(", 25);
      }
      sub_2230440(v88, v60);
      v62 = *(_QWORD *)(v60 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v60 + 24) - v62) > 2 )
      {
        *(_BYTE *)(v62 + 2) = 34;
        *(_WORD *)v62 = 8236;
        *(_QWORD *)(v60 + 32) += 3LL;
      }
      else
      {
        v60 = sub_22581D0(v60, ", \"", 3);
      }
      sub_2230440(v92, v60);
      v63 = *(_QWORD *)(v60 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v60 + 24) - v63) > 2 )
      {
        *(_BYTE *)(v63 + 2) = 10;
        *(_WORD *)v63 = 10530;
        *(_QWORD *)(v60 + 32) += 3LL;
        return 10530;
      }
      else
      {
        return sub_22581D0(v60, "\")\n", 3);
      }
    }
  }
  return result;
}

