_BYTE *__fastcall sub_10AE730(__int64 a1, __int64 a2, __int64 *a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v7; // ecx
  _BYTE *result; // rax
  int v9; // ecx
  __int64 v10; // rbx
  _QWORD *v11; // rdx
  __int64 v12; // rax
  _BYTE *v13; // rax
  _BYTE *v14; // rax
  __int64 v15; // rbx
  __m128i *v16; // rdx
  unsigned __int64 v17; // rax
  _BYTE *v18; // rax
  const char *v19; // rax
  _QWORD *v20; // rdx
  _BYTE *v21; // rax
  __int64 v22; // rbx
  __m128i *v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rdx
  __m128i v26; // xmm0
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rbx
  _QWORD *v30; // rdx
  __int64 v31; // rax
  _BYTE *v32; // rax
  _BYTE *v33; // rax
  __int64 v34; // rbx
  __m128i *v35; // rdx
  unsigned __int64 v36; // rax
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
  __int64 v48; // rbx
  __m128i *v49; // rdx
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
  _QWORD v63[4]; // [rsp+0h] [rbp-C8h] BYREF
  __int16 v64; // [rsp+20h] [rbp-A8h]
  _QWORD v65[4]; // [rsp+30h] [rbp-98h] BYREF
  __int16 v66; // [rsp+50h] [rbp-78h]
  _BYTE v67[32]; // [rsp+60h] [rbp-68h] BYREF
  __int16 v68; // [rsp+80h] [rbp-48h]

  sub_10ACF20(a1, a2, a3, a4, a5, a6);
  if ( *(_DWORD *)(a1 + 260) == 13 )
  {
    v66 = 259;
    v65[0] = "1";
    v19 = "__sparcv8";
    goto LABEL_23;
  }
  v7 = *(_DWORD *)(a1 + 512);
  if ( !v7 || (result = (_BYTE *)sub_10ACA10(v7), !(_DWORD)result) )
  {
    v68 = 257;
    v10 = *a3;
    v63[0] = "__sparcv8";
    v11 = *(_QWORD **)(v10 + 32);
    v12 = *(_QWORD *)(v10 + 24);
    v65[0] = "1";
    v66 = 259;
    v64 = 259;
    if ( (unsigned __int64)(v12 - (_QWORD)v11) > 7 )
    {
      *v11 = 0x20656E6966656423LL;
      *(_QWORD *)(v10 + 32) += 8LL;
    }
    else
    {
      v10 = sub_227BF10(v10, "#define ", 8);
    }
    sub_2254180(v63, v10);
    v13 = *(_BYTE **)(v10 + 32);
    if ( (unsigned __int64)v13 >= *(_QWORD *)(v10 + 24) )
    {
      v10 = sub_227BA10(v10, 32);
    }
    else
    {
      *(_QWORD *)(v10 + 32) = v13 + 1;
      *v13 = 32;
    }
    sub_2254180(v65, v10);
    v14 = *(_BYTE **)(v10 + 32);
    if ( (unsigned __int64)v14 >= *(_QWORD *)(v10 + 24) )
    {
      sub_227BA10(v10, 10);
    }
    else
    {
      *(_QWORD *)(v10 + 32) = v14 + 1;
      *v14 = 10;
    }
    v15 = *a3;
    v16 = *(__m128i **)(*a3 + 32);
    v17 = *(_QWORD *)(*a3 + 24) - (_QWORD)v16;
    if ( (unsigned __int8)v68 > 1u )
    {
      if ( v17 > 0x18 )
      {
        si128 = _mm_load_si128((const __m128i *)&xmmword_23A9650);
        v16[1].m128i_i8[8] = 40;
        v16[1].m128i_i64[0] = 0x6465746163657270LL;
        *v16 = si128;
        *(_QWORD *)(v15 + 32) += 25LL;
      }
      else
      {
        v15 = sub_227BF10(*a3, "#pragma clang deprecated(", 25);
      }
      sub_2254180(v63, v15);
      v27 = *(_QWORD *)(v15 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v15 + 24) - v27) > 2 )
      {
        *(_BYTE *)(v27 + 2) = 34;
        *(_WORD *)v27 = 8236;
        *(_QWORD *)(v15 + 32) += 3LL;
      }
      else
      {
        v15 = sub_227BF10(v15, ", \"", 3);
      }
      sub_2254180(v67, v15);
      v28 = *(_QWORD *)(v15 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v15 + 24) - v28) > 2 )
      {
        *(_BYTE *)(v28 + 2) = 10;
        *(_WORD *)v28 = 10530;
        *(_QWORD *)(v15 + 32) += 3LL;
      }
      else
      {
        sub_227BF10(v15, "\")\n", 3);
      }
      v15 = *a3;
      v16 = *(__m128i **)(*a3 + 32);
      v17 = *(_QWORD *)(*a3 + 24) - (_QWORD)v16;
    }
    v65[0] = "1";
    v66 = 259;
    v63[0] = "__sparcv8__";
    v64 = 259;
    v68 = 257;
    if ( v17 > 7 )
    {
      v16->m128i_i64[0] = 0x20656E6966656423LL;
      *(_QWORD *)(v15 + 32) += 8LL;
    }
    else
    {
      v15 = sub_227BF10(v15, "#define ", 8);
    }
    sub_2254180(v63, v15);
    v18 = *(_BYTE **)(v15 + 32);
    if ( (unsigned __int64)v18 >= *(_QWORD *)(v15 + 24) )
    {
      v15 = sub_227BA10(v15, 32);
    }
    else
    {
      *(_QWORD *)(v15 + 32) = v18 + 1;
      *v18 = 32;
    }
    sub_2254180(v65, v15);
    result = *(_BYTE **)(v15 + 32);
    if ( (unsigned __int64)result >= *(_QWORD *)(v15 + 24) )
    {
LABEL_28:
      result = (_BYTE *)sub_227BA10(v15, 10);
      if ( (unsigned __int8)v68 > 1u )
        goto LABEL_29;
      goto LABEL_21;
    }
LABEL_20:
    *(_QWORD *)(v15 + 32) = result + 1;
    *result = 10;
    if ( (unsigned __int8)v68 > 1u )
    {
LABEL_29:
      v22 = *a3;
      v23 = *(__m128i **)(*a3 + 32);
      if ( *(_QWORD *)(*a3 + 24) - (_QWORD)v23 > 0x18u )
      {
        v26 = _mm_load_si128((const __m128i *)&xmmword_23A9650);
        v23[1].m128i_i8[8] = 40;
        v23[1].m128i_i64[0] = 0x6465746163657270LL;
        *v23 = v26;
        *(_QWORD *)(v22 + 32) += 25LL;
      }
      else
      {
        v22 = sub_227BF10(*a3, "#pragma clang deprecated(", 25);
      }
      sub_2254180(v63, v22);
      v24 = *(_QWORD *)(v22 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v22 + 24) - v24) > 2 )
      {
        *(_BYTE *)(v24 + 2) = 34;
        *(_WORD *)v24 = 8236;
        *(_QWORD *)(v22 + 32) += 3LL;
      }
      else
      {
        v22 = sub_227BF10(v22, ", \"", 3);
      }
      sub_2254180(v67, v22);
      v25 = *(_QWORD *)(v22 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v22 + 24) - v25) > 2 )
      {
        result = (_BYTE *)(elf_gnu_hash_chain + 3750);
        *(_BYTE *)(v25 + 2) = 10;
        *(_WORD *)v25 = 10530;
        *(_QWORD *)(v22 + 32) += 3LL;
      }
      else
      {
        result = (_BYTE *)sub_227BF10(v22, "\")\n", 3);
      }
    }
LABEL_21:
    v9 = *(_DWORD *)(a1 + 512);
    goto LABEL_5;
  }
  if ( (_DWORD)result == 1 )
  {
    v65[0] = "1";
    v66 = 259;
    v19 = "__sparc_v9__";
LABEL_23:
    v63[0] = v19;
    v15 = *a3;
    v64 = 259;
    v68 = 257;
    v20 = *(_QWORD **)(v15 + 32);
    if ( *(_QWORD *)(v15 + 24) - (_QWORD)v20 > 7u )
    {
      *v20 = 0x20656E6966656423LL;
      *(_QWORD *)(v15 + 32) += 8LL;
    }
    else
    {
      v15 = sub_227BF10(v15, "#define ", 8);
    }
    sub_2254180(v63, v15);
    v21 = *(_BYTE **)(v15 + 32);
    if ( (unsigned __int64)v21 >= *(_QWORD *)(v15 + 24) )
    {
      v15 = sub_227BA10(v15, 32);
    }
    else
    {
      *(_QWORD *)(v15 + 32) = v21 + 1;
      *v21 = 32;
    }
    sub_2254180(v65, v15);
    result = *(_BYTE **)(v15 + 32);
    if ( (unsigned __int64)result >= *(_QWORD *)(v15 + 24) )
      goto LABEL_28;
    goto LABEL_20;
  }
LABEL_5:
  if ( v9 )
  {
    result = (_BYTE *)sub_10ACA10(v9);
    if ( (_DWORD)result == 1 )
    {
      v29 = *a3;
      v63[0] = "__GCC_HAVE_SYNC_COMPARE_AND_SWAP_1";
      v68 = 257;
      v30 = *(_QWORD **)(v29 + 32);
      v31 = *(_QWORD *)(v29 + 24);
      v65[0] = "1";
      v66 = 259;
      v64 = 259;
      if ( (unsigned __int64)(v31 - (_QWORD)v30) > 7 )
      {
        *v30 = 0x20656E6966656423LL;
        *(_QWORD *)(v29 + 32) += 8LL;
      }
      else
      {
        v29 = sub_227BF10(v29, "#define ", 8);
      }
      sub_2254180(v63, v29);
      v32 = *(_BYTE **)(v29 + 32);
      if ( (unsigned __int64)v32 >= *(_QWORD *)(v29 + 24) )
      {
        v29 = sub_227BA10(v29, 32);
      }
      else
      {
        *(_QWORD *)(v29 + 32) = v32 + 1;
        *v32 = 32;
      }
      sub_2254180(v65, v29);
      v33 = *(_BYTE **)(v29 + 32);
      if ( (unsigned __int64)v33 >= *(_QWORD *)(v29 + 24) )
      {
        sub_227BA10(v29, 10);
      }
      else
      {
        *(_QWORD *)(v29 + 32) = v33 + 1;
        *v33 = 10;
      }
      v34 = *a3;
      v35 = *(__m128i **)(*a3 + 32);
      v36 = *(_QWORD *)(*a3 + 24) - (_QWORD)v35;
      if ( (unsigned __int8)v68 > 1u )
      {
        if ( v36 > 0x18 )
        {
          v60 = _mm_load_si128((const __m128i *)&xmmword_23A9650);
          v35[1].m128i_i8[8] = 40;
          v35[1].m128i_i64[0] = 0x6465746163657270LL;
          *v35 = v60;
          *(_QWORD *)(v34 + 32) += 25LL;
        }
        else
        {
          v34 = sub_227BF10(*a3, "#pragma clang deprecated(", 25);
        }
        sub_2254180(v63, v34);
        v56 = *(_QWORD *)(v34 + 32);
        if ( (unsigned __int64)(*(_QWORD *)(v34 + 24) - v56) > 2 )
        {
          *(_BYTE *)(v56 + 2) = 34;
          *(_WORD *)v56 = 8236;
          *(_QWORD *)(v34 + 32) += 3LL;
        }
        else
        {
          v34 = sub_227BF10(v34, ", \"", 3);
        }
        sub_2254180(v67, v34);
        v57 = *(_QWORD *)(v34 + 32);
        if ( (unsigned __int64)(*(_QWORD *)(v34 + 24) - v57) > 2 )
        {
          *(_BYTE *)(v57 + 2) = 10;
          *(_WORD *)v57 = 10530;
          *(_QWORD *)(v34 + 32) += 3LL;
        }
        else
        {
          sub_227BF10(v34, "\")\n", 3);
        }
        v34 = *a3;
        v35 = *(__m128i **)(*a3 + 32);
        v36 = *(_QWORD *)(*a3 + 24) - (_QWORD)v35;
      }
      v65[0] = "1";
      v66 = 259;
      v63[0] = "__GCC_HAVE_SYNC_COMPARE_AND_SWAP_2";
      v64 = 259;
      v68 = 257;
      if ( v36 > 7 )
      {
        v35->m128i_i64[0] = 0x20656E6966656423LL;
        *(_QWORD *)(v34 + 32) += 8LL;
      }
      else
      {
        v34 = sub_227BF10(v34, "#define ", 8);
      }
      sub_2254180(v63, v34);
      v37 = *(_BYTE **)(v34 + 32);
      if ( (unsigned __int64)v37 >= *(_QWORD *)(v34 + 24) )
      {
        v34 = sub_227BA10(v34, 32);
      }
      else
      {
        *(_QWORD *)(v34 + 32) = v37 + 1;
        *v37 = 32;
      }
      sub_2254180(v65, v34);
      v38 = *(_BYTE **)(v34 + 32);
      if ( (unsigned __int64)v38 >= *(_QWORD *)(v34 + 24) )
      {
        sub_227BA10(v34, 10);
      }
      else
      {
        *(_QWORD *)(v34 + 32) = v38 + 1;
        *v38 = 10;
      }
      v39 = *a3;
      v40 = *(__m128i **)(*a3 + 32);
      v41 = *(_QWORD *)(*a3 + 24) - (_QWORD)v40;
      if ( (unsigned __int8)v68 > 1u )
      {
        if ( v41 > 0x18 )
        {
          v59 = _mm_load_si128((const __m128i *)&xmmword_23A9650);
          v40[1].m128i_i8[8] = 40;
          v40[1].m128i_i64[0] = 0x6465746163657270LL;
          *v40 = v59;
          *(_QWORD *)(v39 + 32) += 25LL;
        }
        else
        {
          v39 = sub_227BF10(*a3, "#pragma clang deprecated(", 25);
        }
        sub_2254180(v63, v39);
        v54 = *(_QWORD *)(v39 + 32);
        if ( (unsigned __int64)(*(_QWORD *)(v39 + 24) - v54) > 2 )
        {
          *(_BYTE *)(v54 + 2) = 34;
          *(_WORD *)v54 = 8236;
          *(_QWORD *)(v39 + 32) += 3LL;
        }
        else
        {
          v39 = sub_227BF10(v39, ", \"", 3);
        }
        sub_2254180(v67, v39);
        v55 = *(_QWORD *)(v39 + 32);
        if ( (unsigned __int64)(*(_QWORD *)(v39 + 24) - v55) > 2 )
        {
          *(_BYTE *)(v55 + 2) = 10;
          *(_WORD *)v55 = 10530;
          *(_QWORD *)(v39 + 32) += 3LL;
        }
        else
        {
          sub_227BF10(v39, "\")\n", 3);
        }
        v39 = *a3;
        v40 = *(__m128i **)(*a3 + 32);
        v41 = *(_QWORD *)(*a3 + 24) - (_QWORD)v40;
      }
      v65[0] = "1";
      v63[0] = "__GCC_HAVE_SYNC_COMPARE_AND_SWAP_4";
      v66 = 259;
      v64 = 259;
      v68 = 257;
      if ( v41 > 7 )
      {
        v40->m128i_i64[0] = 0x20656E6966656423LL;
        *(_QWORD *)(v39 + 32) += 8LL;
      }
      else
      {
        v39 = sub_227BF10(v39, "#define ", 8);
      }
      sub_2254180(v63, v39);
      v42 = *(_BYTE **)(v39 + 32);
      if ( (unsigned __int64)v42 >= *(_QWORD *)(v39 + 24) )
      {
        v39 = sub_227BA10(v39, 32);
      }
      else
      {
        *(_QWORD *)(v39 + 32) = v42 + 1;
        *v42 = 32;
      }
      sub_2254180(v65, v39);
      v43 = *(_BYTE **)(v39 + 32);
      if ( (unsigned __int64)v43 >= *(_QWORD *)(v39 + 24) )
      {
        sub_227BA10(v39, 10);
      }
      else
      {
        *(_QWORD *)(v39 + 32) = v43 + 1;
        *v43 = 10;
      }
      v44 = *a3;
      v45 = *(__m128i **)(*a3 + 32);
      v46 = *(_QWORD *)(*a3 + 24) - (_QWORD)v45;
      if ( (unsigned __int8)v68 > 1u )
      {
        if ( v46 > 0x18 )
        {
          v62 = _mm_load_si128((const __m128i *)&xmmword_23A9650);
          v45[1].m128i_i8[8] = 40;
          v45[1].m128i_i64[0] = 0x6465746163657270LL;
          *v45 = v62;
          *(_QWORD *)(v44 + 32) += 25LL;
        }
        else
        {
          v44 = sub_227BF10(*a3, "#pragma clang deprecated(", 25);
        }
        sub_2254180(v63, v44);
        v52 = *(_QWORD *)(v44 + 32);
        if ( (unsigned __int64)(*(_QWORD *)(v44 + 24) - v52) > 2 )
        {
          *(_BYTE *)(v52 + 2) = 34;
          *(_WORD *)v52 = 8236;
          *(_QWORD *)(v44 + 32) += 3LL;
        }
        else
        {
          v44 = sub_227BF10(v44, ", \"", 3);
        }
        sub_2254180(v67, v44);
        v53 = *(_QWORD *)(v44 + 32);
        if ( (unsigned __int64)(*(_QWORD *)(v44 + 24) - v53) > 2 )
        {
          *(_BYTE *)(v53 + 2) = 10;
          *(_WORD *)v53 = 10530;
          *(_QWORD *)(v44 + 32) += 3LL;
        }
        else
        {
          sub_227BF10(v44, "\")\n", 3);
        }
        v44 = *a3;
        v45 = *(__m128i **)(*a3 + 32);
        v46 = *(_QWORD *)(*a3 + 24) - (_QWORD)v45;
      }
      v65[0] = "1";
      v66 = 259;
      v63[0] = "__GCC_HAVE_SYNC_COMPARE_AND_SWAP_8";
      v64 = 259;
      v68 = 257;
      if ( v46 > 7 )
      {
        v45->m128i_i64[0] = 0x20656E6966656423LL;
        *(_QWORD *)(v44 + 32) += 8LL;
      }
      else
      {
        v44 = sub_227BF10(v44, "#define ", 8);
      }
      sub_2254180(v63, v44);
      v47 = *(_BYTE **)(v44 + 32);
      if ( (unsigned __int64)v47 >= *(_QWORD *)(v44 + 24) )
      {
        v44 = sub_227BA10(v44, 32);
      }
      else
      {
        *(_QWORD *)(v44 + 32) = v47 + 1;
        *v47 = 32;
      }
      sub_2254180(v65, v44);
      result = *(_BYTE **)(v44 + 32);
      if ( (unsigned __int64)result >= *(_QWORD *)(v44 + 24) )
      {
        result = (_BYTE *)sub_227BA10(v44, 10);
      }
      else
      {
        *(_QWORD *)(v44 + 32) = result + 1;
        *result = 10;
      }
      if ( (unsigned __int8)v68 > 1u )
      {
        v48 = *a3;
        v49 = *(__m128i **)(*a3 + 32);
        if ( *(_QWORD *)(*a3 + 24) - (_QWORD)v49 > 0x18u )
        {
          v61 = _mm_load_si128((const __m128i *)&xmmword_23A9650);
          v49[1].m128i_i8[8] = 40;
          v49[1].m128i_i64[0] = 0x6465746163657270LL;
          *v49 = v61;
          *(_QWORD *)(v48 + 32) += 25LL;
        }
        else
        {
          v48 = sub_227BF10(*a3, "#pragma clang deprecated(", 25);
        }
        sub_2254180(v63, v48);
        v50 = *(_QWORD *)(v48 + 32);
        if ( (unsigned __int64)(*(_QWORD *)(v48 + 24) - v50) > 2 )
        {
          *(_BYTE *)(v50 + 2) = 34;
          *(_WORD *)v50 = 8236;
          *(_QWORD *)(v48 + 32) += 3LL;
        }
        else
        {
          v48 = sub_227BF10(v48, ", \"", 3);
        }
        sub_2254180(v67, v48);
        v51 = *(_QWORD *)(v48 + 32);
        if ( (unsigned __int64)(*(_QWORD *)(v48 + 24) - v51) > 2 )
        {
          *(_BYTE *)(v51 + 2) = 10;
          *(_WORD *)v51 = 10530;
          *(_QWORD *)(v48 + 32) += 3LL;
          return (_BYTE *)(elf_gnu_hash_chain + 3750);
        }
        else
        {
          return (_BYTE *)sub_227BF10(v48, "\")\n", 3);
        }
      }
    }
  }
  return result;
}
