_BYTE *__fastcall sub_1089200(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rbp
  _QWORD *v5; // rdx
  __int64 v6; // rax
  _BYTE *v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  _BYTE *v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // eax
  __int64 v14; // r15
  unsigned int v15; // eax
  int v16; // eax
  __int64 v17; // r13
  _QWORD *v18; // rdx
  __int64 v19; // rax
  _BYTE *v20; // rax
  _BYTE *result; // rax
  __int64 v22; // r13
  unsigned int v23; // eax
  int v24; // eax
  __int64 v25; // r15
  _QWORD *v26; // rcx
  __int64 v27; // rdx
  _BYTE *v28; // rdx
  _BYTE *v29; // rdx
  __int64 v30; // r15
  __m128i *v31; // rcx
  unsigned __int64 v32; // rdx
  _BYTE *v33; // rdx
  _BYTE *v34; // rdx
  __int64 v35; // r15
  __m128i *v36; // rcx
  unsigned __int64 v37; // rdx
  _BYTE *v38; // rdx
  _BYTE *v39; // rdx
  __int64 v40; // r15
  __m128i *v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rax
  __m128i *v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // rbx
  __m128i *v50; // rdx
  __int64 v51; // rdx
  __int64 v52; // rdx
  __m128i si128; // xmm0
  __m128i v54; // xmm0
  __int64 v55; // rcx
  __int64 v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // rcx
  __m128i v59; // xmm0
  __m128i v60; // xmm0
  __m128i v61; // xmm0
  __int64 *v62; // [rsp+8h] [rbp-D0h]
  __int64 *v63; // [rsp+8h] [rbp-D0h]
  __int64 v64; // [rsp+8h] [rbp-D0h]
  __int64 v65; // [rsp+8h] [rbp-D0h]
  _QWORD v66[4]; // [rsp+10h] [rbp-C8h] BYREF
  __int16 v67; // [rsp+30h] [rbp-A8h]
  _QWORD v68[4]; // [rsp+40h] [rbp-98h] BYREF
  __int16 v69; // [rsp+60h] [rbp-78h]
  __int64 *v70[4]; // [rsp+70h] [rbp-68h] BYREF
  __int16 v71; // [rsp+90h] [rbp-48h]

  v4 = *a3;
  v66[0] = "__m68k__";
  v5 = *(_QWORD **)(v4 + 32);
  v6 = *(_QWORD *)(v4 + 24);
  v68[0] = "1";
  v69 = 259;
  v67 = 259;
  v71 = 257;
  if ( (unsigned __int64)(v6 - (_QWORD)v5) > 7 )
  {
    *v5 = 0x20656E6966656423LL;
    *(_QWORD *)(v4 + 32) += 8LL;
  }
  else
  {
    v4 = sub_227BF10(v4, "#define ", 8);
  }
  sub_2254180(v66, v4);
  v7 = *(_BYTE **)(v4 + 32);
  if ( (unsigned __int64)v7 >= *(_QWORD *)(v4 + 24) )
  {
    v4 = sub_227BA10(v4, 32);
  }
  else
  {
    *(_QWORD *)(v4 + 32) = v7 + 1;
    *v7 = 32;
  }
  sub_2254180(v68, v4);
  v10 = *(_BYTE **)(v4 + 32);
  if ( (unsigned __int64)v10 >= *(_QWORD *)(v4 + 24) )
  {
    sub_227BA10(v4, 10);
  }
  else
  {
    *(_QWORD *)(v4 + 32) = v10 + 1;
    *v10 = 10;
  }
  if ( (unsigned __int8)v71 > 1u )
  {
    v44 = *a3;
    v45 = *(__m128i **)(*a3 + 32);
    if ( *(_QWORD *)(*a3 + 24) - (_QWORD)v45 > 0x18u )
    {
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A9650);
      v45[1].m128i_i8[8] = 40;
      v45[1].m128i_i64[0] = 0x6465746163657270LL;
      *v45 = si128;
      *(_QWORD *)(v44 + 32) += 25LL;
    }
    else
    {
      v44 = sub_227BF10(*a3, "#pragma clang deprecated(", 25);
    }
    v64 = v44;
    sub_2254180(v66, v44);
    v46 = v64;
    v47 = *(_QWORD *)(v64 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v64 + 24) - v47) > 2 )
    {
      *(_BYTE *)(v47 + 2) = 34;
      *(_WORD *)v47 = 8236;
      *(_QWORD *)(v64 + 32) += 3LL;
    }
    else
    {
      v46 = sub_227BF10(v64, ", \"", 3);
    }
    v65 = v46;
    sub_2254180(v70, v46);
    v48 = *(_QWORD *)(v65 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v65 + 24) - v48) > 2 )
    {
      *(_BYTE *)(v48 + 2) = 10;
      *(_WORD *)v48 = 10530;
      *(_QWORD *)(v65 + 32) += 3LL;
    }
    else
    {
      sub_227BF10(v65, "\")\n", 3);
    }
  }
  sub_10474F0(a3, "mc68000", 7, a2, v8, v9);
  v13 = *(_DWORD *)(a1 + 512);
  switch ( v13 )
  {
    case 2:
      sub_10474F0(a3, "mc68010", 7, a2, v11, v12);
      v13 = *(_DWORD *)(a1 + 512);
      break;
    case 3:
      sub_10474F0(a3, "mc68020", 7, a2, v11, v12);
      v13 = *(_DWORD *)(a1 + 512);
      break;
    case 4:
      sub_10474F0(a3, "mc68030", 7, a2, v11, v12);
      v13 = *(_DWORD *)(a1 + 512);
      break;
    case 5:
      sub_10474F0(a3, "mc68040", 7, a2, v11, v12);
      v13 = *(_DWORD *)(a1 + 512);
      break;
    case 6:
      sub_10474F0(a3, "mc68060", 7, a2, v11, v12);
      v13 = *(_DWORD *)(a1 + 512);
      break;
    default:
      break;
  }
  if ( v13 > 2 )
  {
    v25 = *a3;
    v68[0] = "1";
    v26 = *(_QWORD **)(v25 + 32);
    v27 = *(_QWORD *)(v25 + 24);
    v66[0] = "__GCC_HAVE_SYNC_COMPARE_AND_SWAP_1";
    v69 = 259;
    v67 = 259;
    v71 = 257;
    if ( (unsigned __int64)(v27 - (_QWORD)v26) > 7 )
    {
      *v26 = 0x20656E6966656423LL;
      *(_QWORD *)(v25 + 32) += 8LL;
    }
    else
    {
      v25 = sub_227BF10(v25, "#define ", 8);
    }
    sub_2254180(v66, v25);
    v28 = *(_BYTE **)(v25 + 32);
    if ( (unsigned __int64)v28 >= *(_QWORD *)(v25 + 24) )
    {
      v25 = sub_227BA10(v25, 32);
    }
    else
    {
      *(_QWORD *)(v25 + 32) = v28 + 1;
      *v28 = 32;
    }
    sub_2254180(v68, v25);
    v29 = *(_BYTE **)(v25 + 32);
    if ( (unsigned __int64)v29 >= *(_QWORD *)(v25 + 24) )
    {
      sub_227BA10(v25, 10);
    }
    else
    {
      *(_QWORD *)(v25 + 32) = v29 + 1;
      *v29 = 10;
    }
    v30 = *a3;
    v31 = *(__m128i **)(*a3 + 32);
    v32 = *(_QWORD *)(*a3 + 24) - (_QWORD)v31;
    if ( (unsigned __int8)v71 > 1u )
    {
      if ( v32 > 0x18 )
      {
        v60 = _mm_load_si128((const __m128i *)&xmmword_23A9650);
        v31[1].m128i_i8[8] = 40;
        v31[1].m128i_i64[0] = 0x6465746163657270LL;
        *v31 = v60;
        *(_QWORD *)(v30 + 32) += 25LL;
      }
      else
      {
        v30 = sub_227BF10(*a3, "#pragma clang deprecated(", 25);
      }
      sub_2254180(v66, v30);
      v57 = *(_QWORD *)(v30 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v30 + 24) - v57) > 2 )
      {
        *(_BYTE *)(v57 + 2) = 34;
        *(_WORD *)v57 = 8236;
        *(_QWORD *)(v30 + 32) += 3LL;
      }
      else
      {
        v30 = sub_227BF10(v30, ", \"", 3);
      }
      sub_2254180(v70, v30);
      v58 = *(_QWORD *)(v30 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v30 + 24) - v58) > 2 )
      {
        *(_BYTE *)(v58 + 2) = 10;
        *(_WORD *)v58 = 10530;
        *(_QWORD *)(v30 + 32) += 3LL;
      }
      else
      {
        sub_227BF10(v30, "\")\n", 3);
      }
      v30 = *a3;
      v31 = *(__m128i **)(*a3 + 32);
      v32 = *(_QWORD *)(*a3 + 24) - (_QWORD)v31;
    }
    v68[0] = "1";
    v69 = 259;
    v66[0] = "__GCC_HAVE_SYNC_COMPARE_AND_SWAP_2";
    v67 = 259;
    v71 = 257;
    if ( v32 > 7 )
    {
      v31->m128i_i64[0] = 0x20656E6966656423LL;
      *(_QWORD *)(v30 + 32) += 8LL;
    }
    else
    {
      v30 = sub_227BF10(v30, "#define ", 8);
    }
    sub_2254180(v66, v30);
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
    sub_2254180(v68, v30);
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
    v35 = *a3;
    v36 = *(__m128i **)(*a3 + 32);
    v37 = *(_QWORD *)(*a3 + 24) - (_QWORD)v36;
    if ( (unsigned __int8)v71 > 1u )
    {
      if ( v37 > 0x18 )
      {
        v61 = _mm_load_si128((const __m128i *)&xmmword_23A9650);
        v36[1].m128i_i8[8] = 40;
        v36[1].m128i_i64[0] = 0x6465746163657270LL;
        *v36 = v61;
        *(_QWORD *)(v35 + 32) += 25LL;
      }
      else
      {
        v35 = sub_227BF10(*a3, "#pragma clang deprecated(", 25);
      }
      sub_2254180(v66, v35);
      v55 = *(_QWORD *)(v35 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v35 + 24) - v55) > 2 )
      {
        *(_BYTE *)(v55 + 2) = 34;
        *(_WORD *)v55 = 8236;
        *(_QWORD *)(v35 + 32) += 3LL;
      }
      else
      {
        v35 = sub_227BF10(v35, ", \"", 3);
      }
      sub_2254180(v70, v35);
      v56 = *(_QWORD *)(v35 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v35 + 24) - v56) > 2 )
      {
        *(_BYTE *)(v56 + 2) = 10;
        *(_WORD *)v56 = 10530;
        *(_QWORD *)(v35 + 32) += 3LL;
      }
      else
      {
        sub_227BF10(v35, "\")\n", 3);
      }
      v35 = *a3;
      v36 = *(__m128i **)(*a3 + 32);
      v37 = *(_QWORD *)(*a3 + 24) - (_QWORD)v36;
    }
    v68[0] = "1";
    v66[0] = "__GCC_HAVE_SYNC_COMPARE_AND_SWAP_4";
    v67 = 259;
    v69 = 259;
    v71 = 257;
    if ( v37 > 7 )
    {
      v36->m128i_i64[0] = 0x20656E6966656423LL;
      *(_QWORD *)(v35 + 32) += 8LL;
    }
    else
    {
      v35 = sub_227BF10(v35, "#define ", 8);
    }
    sub_2254180(v66, v35);
    v38 = *(_BYTE **)(v35 + 32);
    if ( (unsigned __int64)v38 >= *(_QWORD *)(v35 + 24) )
    {
      v35 = sub_227BA10(v35, 32);
    }
    else
    {
      *(_QWORD *)(v35 + 32) = v38 + 1;
      *v38 = 32;
    }
    sub_2254180(v68, v35);
    v39 = *(_BYTE **)(v35 + 32);
    if ( (unsigned __int64)v39 >= *(_QWORD *)(v35 + 24) )
    {
      sub_227BA10(v35, 10);
    }
    else
    {
      *(_QWORD *)(v35 + 32) = v39 + 1;
      *v39 = 10;
    }
    if ( (unsigned __int8)v71 > 1u )
    {
      v40 = *a3;
      v41 = *(__m128i **)(*a3 + 32);
      if ( *(_QWORD *)(*a3 + 24) - (_QWORD)v41 > 0x18u )
      {
        v59 = _mm_load_si128((const __m128i *)&xmmword_23A9650);
        v41[1].m128i_i8[8] = 40;
        v41[1].m128i_i64[0] = 0x6465746163657270LL;
        *v41 = v59;
        *(_QWORD *)(v40 + 32) += 25LL;
      }
      else
      {
        v40 = sub_227BF10(*a3, "#pragma clang deprecated(", 25);
      }
      sub_2254180(v66, v40);
      v42 = *(_QWORD *)(v40 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v40 + 24) - v42) > 2 )
      {
        *(_BYTE *)(v42 + 2) = 34;
        *(_WORD *)v42 = 8236;
        *(_QWORD *)(v40 + 32) += 3LL;
      }
      else
      {
        v40 = sub_227BF10(v40, ", \"", 3);
      }
      sub_2254180(v70, v40);
      v43 = *(_QWORD *)(v40 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v40 + 24) - v43) > 2 )
      {
        *(_BYTE *)(v43 + 2) = 10;
        *(_WORD *)v43 = 10530;
        *(_QWORD *)(v40 + 32) += 3LL;
      }
      else
      {
        sub_227BF10(v40, "\")\n", 3);
      }
    }
  }
  v14 = *(_QWORD *)(a1 + 520);
  v15 = sub_2244B30("isa-68881", 9);
  v16 = sub_2244E60(v14 + 280, "isa-68881", 9, v15);
  if ( v16 == -1 )
    sub_EC0F90(v70, (__int64 *)(*(_QWORD *)(v14 + 280) + 8LL * *(unsigned int *)(v14 + 288)), 1);
  else
    sub_EC0F90(v70, (__int64 *)(*(_QWORD *)(v14 + 280) + 8LL * v16), 1);
  v62 = v70[0];
  sub_EC0F90(v70, (__int64 *)(*(_QWORD *)(v14 + 280) + 8LL * *(unsigned int *)(v14 + 288)), 1);
  if ( v70[0] != v62 && *(_BYTE *)(*v62 + 8) )
    goto LABEL_15;
  v22 = *(_QWORD *)(a1 + 520);
  v23 = sub_2244B30("isa-68882", 9);
  v24 = sub_2244E60(v22 + 280, "isa-68882", 9, v23);
  if ( v24 == -1 )
    sub_EC0F90(v70, (__int64 *)(*(_QWORD *)(v22 + 280) + 8LL * *(unsigned int *)(v22 + 288)), 1);
  else
    sub_EC0F90(v70, (__int64 *)(*(_QWORD *)(v22 + 280) + 8LL * v24), 1);
  v63 = v70[0];
  sub_EC0F90(v70, (__int64 *)(*(_QWORD *)(v22 + 280) + 8LL * *(unsigned int *)(v22 + 288)), 1);
  result = v63;
  if ( v70[0] != v63 )
  {
    result = (_BYTE *)*v63;
    if ( *(_BYTE *)(*v63 + 8) )
    {
LABEL_15:
      v17 = *a3;
      v66[0] = "__HAVE_68881__";
      v18 = *(_QWORD **)(v17 + 32);
      v19 = *(_QWORD *)(v17 + 24);
      v68[0] = "1";
      v69 = 259;
      v67 = 259;
      v71 = 257;
      if ( (unsigned __int64)(v19 - (_QWORD)v18) > 7 )
      {
        *v18 = 0x20656E6966656423LL;
        *(_QWORD *)(v17 + 32) += 8LL;
      }
      else
      {
        v17 = sub_227BF10(v17, "#define ", 8);
      }
      sub_2254180(v66, v17);
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
      sub_2254180(v68, v17);
      result = *(_BYTE **)(v17 + 32);
      if ( (unsigned __int64)result >= *(_QWORD *)(v17 + 24) )
      {
        result = (_BYTE *)sub_227BA10(v17, 10);
      }
      else
      {
        *(_QWORD *)(v17 + 32) = result + 1;
        *result = 10;
      }
      if ( (unsigned __int8)v71 > 1u )
      {
        v49 = *a3;
        v50 = *(__m128i **)(v49 + 32);
        if ( *(_QWORD *)(v49 + 24) - (_QWORD)v50 > 0x18u )
        {
          v54 = _mm_load_si128((const __m128i *)&xmmword_23A9650);
          v50[1].m128i_i8[8] = 40;
          v50[1].m128i_i64[0] = 0x6465746163657270LL;
          *v50 = v54;
          *(_QWORD *)(v49 + 32) += 25LL;
        }
        else
        {
          v49 = sub_227BF10(v49, "#pragma clang deprecated(", 25);
        }
        sub_2254180(v66, v49);
        v51 = *(_QWORD *)(v49 + 32);
        if ( (unsigned __int64)(*(_QWORD *)(v49 + 24) - v51) > 2 )
        {
          *(_BYTE *)(v51 + 2) = 34;
          *(_WORD *)v51 = 8236;
          *(_QWORD *)(v49 + 32) += 3LL;
        }
        else
        {
          v49 = sub_227BF10(v49, ", \"", 3);
        }
        sub_2254180(v70, v49);
        v52 = *(_QWORD *)(v49 + 32);
        if ( (unsigned __int64)(*(_QWORD *)(v49 + 24) - v52) > 2 )
        {
          *(_BYTE *)(v52 + 2) = 10;
          *(_WORD *)v52 = 10530;
          *(_QWORD *)(v49 + 32) += 3LL;
          return (_BYTE *)(elf_gnu_hash_chain + 3750);
        }
        else
        {
          return (_BYTE *)sub_227BF10(v49, "\")\n", 3);
        }
      }
    }
  }
  return result;
}
