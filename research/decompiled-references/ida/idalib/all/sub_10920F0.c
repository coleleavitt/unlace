unsigned __int64 __fastcall sub_10920F0(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // r15
  _QWORD *v5; // rcx
  __int64 v6; // rdx
  _BYTE *v7; // rdx
  _BYTE *v8; // rdx
  __int64 v9; // r15
  __m128i *v10; // rcx
  unsigned __int64 v11; // rdx
  _BYTE *v12; // rdx
  _BYTE *v13; // rdx
  unsigned __int64 result; // rax
  __int64 v15; // rax
  __m128i *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __m128i v22; // xmm0
  __m128i si128; // xmm0
  char *v24; // rax
  __int64 v25; // r15
  _QWORD *v26; // rcx
  __int64 v27; // rdx
  _BYTE *v28; // rdx
  _BYTE *v29; // rdx
  unsigned int v30; // ecx
  unsigned __int64 v31; // rax
  __int64 v32; // r13
  _QWORD *v33; // rdx
  __int64 v34; // rax
  _BYTE *v35; // rax
  __int64 v36; // rbx
  __m128i *v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rax
  __m128i *v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rcx
  __m128i v45; // xmm0
  __m128i v46; // xmm0
  unsigned __int64 v47; // [rsp+0h] [rbp-118h]
  __int64 v48; // [rsp+8h] [rbp-110h]
  __int64 v49; // [rsp+8h] [rbp-110h]
  char *v50; // [rsp+8h] [rbp-110h]
  unsigned __int64 v51; // [rsp+10h] [rbp-108h]
  __int64 v52; // [rsp+18h] [rbp-100h]
  unsigned __int64 v53; // [rsp+18h] [rbp-100h]
  _QWORD v54[4]; // [rsp+20h] [rbp-F8h] BYREF
  __int16 v55; // [rsp+40h] [rbp-D8h]
  _QWORD v56[4]; // [rsp+50h] [rbp-C8h] BYREF
  __int16 v57; // [rsp+70h] [rbp-A8h]
  _QWORD v58[4]; // [rsp+80h] [rbp-98h] BYREF
  __int16 v59; // [rsp+A0h] [rbp-78h]
  _BYTE v60[32]; // [rsp+B0h] [rbp-68h] BYREF
  __int16 v61; // [rsp+D0h] [rbp-48h]

  v61 = 257;
  v4 = *a3;
  v5 = *(_QWORD **)(*a3 + 32);
  v6 = *(_QWORD *)(*a3 + 24);
  v58[0] = "1";
  v59 = 259;
  v56[0] = "__PTX__";
  v57 = 259;
  if ( (unsigned __int64)(v6 - (_QWORD)v5) > 7 )
  {
    *v5 = 0x20656E6966656423LL;
    *(_QWORD *)(v4 + 32) += 8LL;
  }
  else
  {
    v4 = sub_227BF10(v4, "#define ", 8);
  }
  sub_2254180(v56, v4);
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
  sub_2254180(v58, v4);
  v8 = *(_BYTE **)(v4 + 32);
  if ( (unsigned __int64)v8 >= *(_QWORD *)(v4 + 24) )
  {
    sub_227BA10(v4, 10);
  }
  else
  {
    *(_QWORD *)(v4 + 32) = v8 + 1;
    *v8 = 10;
  }
  v9 = *a3;
  v10 = *(__m128i **)(*a3 + 32);
  v11 = *(_QWORD *)(*a3 + 24) - (_QWORD)v10;
  if ( (unsigned __int8)v61 > 1u )
  {
    if ( v11 > 0x18 )
    {
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A9650);
      v10[1].m128i_i8[8] = 40;
      v10[1].m128i_i64[0] = 0x6465746163657270LL;
      *v10 = si128;
      *(_QWORD *)(v9 + 32) += 25LL;
    }
    else
    {
      v9 = sub_227BF10(*a3, "#pragma clang deprecated(", 25);
    }
    sub_2254180(v56, v9);
    v20 = *(_QWORD *)(v9 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v9 + 24) - v20) > 2 )
    {
      *(_BYTE *)(v20 + 2) = 34;
      *(_WORD *)v20 = 8236;
      *(_QWORD *)(v9 + 32) += 3LL;
    }
    else
    {
      v9 = sub_227BF10(v9, ", \"", 3);
    }
    sub_2254180(v60, v9);
    v21 = *(_QWORD *)(v9 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v9 + 24) - v21) > 2 )
    {
      *(_BYTE *)(v21 + 2) = 10;
      *(_WORD *)v21 = 10530;
      *(_QWORD *)(v9 + 32) += 3LL;
    }
    else
    {
      sub_227BF10(v9, "\")\n", 3);
    }
    v9 = *a3;
    v10 = *(__m128i **)(*a3 + 32);
    v11 = *(_QWORD *)(*a3 + 24) - (_QWORD)v10;
  }
  v58[0] = "1";
  v59 = 259;
  v56[0] = "__NVPTX__";
  v57 = 259;
  v61 = 257;
  if ( v11 > 7 )
  {
    v10->m128i_i64[0] = 0x20656E6966656423LL;
    *(_QWORD *)(v9 + 32) += 8LL;
  }
  else
  {
    v9 = sub_227BF10(v9, "#define ", 8);
  }
  sub_2254180(v56, v9);
  v12 = *(_BYTE **)(v9 + 32);
  if ( (unsigned __int64)v12 >= *(_QWORD *)(v9 + 24) )
  {
    v9 = sub_227BA10(v9, 32);
  }
  else
  {
    *(_QWORD *)(v9 + 32) = v12 + 1;
    *v12 = 32;
  }
  sub_2254180(v58, v9);
  v13 = *(_BYTE **)(v9 + 32);
  if ( (unsigned __int64)v13 >= *(_QWORD *)(v9 + 24) )
  {
    sub_227BA10(v9, 10);
  }
  else
  {
    *(_QWORD *)(v9 + 32) = v13 + 1;
    *v13 = 10;
  }
  if ( (unsigned __int8)v61 > 1u )
  {
    v15 = *a3;
    v16 = *(__m128i **)(*a3 + 32);
    if ( *(_QWORD *)(*a3 + 24) - (_QWORD)v16 > 0x18u )
    {
      v22 = _mm_load_si128((const __m128i *)&xmmword_23A9650);
      v16[1].m128i_i8[8] = 40;
      v16[1].m128i_i64[0] = 0x6465746163657270LL;
      *v16 = v22;
      *(_QWORD *)(v15 + 32) += 25LL;
    }
    else
    {
      v15 = sub_227BF10(*a3, "#pragma clang deprecated(", 25);
    }
    v48 = v15;
    sub_2254180(v56, v15);
    v17 = v48;
    v18 = *(_QWORD *)(v48 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v48 + 24) - v18) > 2 )
    {
      *(_BYTE *)(v18 + 2) = 34;
      *(_WORD *)v18 = 8236;
      *(_QWORD *)(v48 + 32) += 3LL;
    }
    else
    {
      v17 = sub_227BF10(v48, ", \"", 3);
    }
    v49 = v17;
    sub_2254180(v60, v17);
    v19 = *(_QWORD *)(v49 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v49 + 24) - v19) > 2 )
    {
      *(_BYTE *)(v19 + 2) = 10;
      *(_WORD *)v19 = 10530;
      *(_QWORD *)(v49 + 32) += 3LL;
    }
    else
    {
      sub_227BF10(v49, "\")\n", 3);
    }
  }
  result = *(unsigned int *)(a1 + 512);
  if ( (_DWORD)result )
  {
    if ( (*(_BYTE *)(a2 + 89) & 4) != 0 || (*(_BYTE *)(a2 + 68) & 8) != 0 )
      goto LABEL_22;
    goto LABEL_19;
  }
  if ( !*(_QWORD *)(a1 + 520) )
    return result;
  if ( (*(_BYTE *)(a2 + 89) & 4) == 0 && (*(_BYTE *)(a2 + 68) & 8) == 0 )
  {
LABEL_19:
    if ( *(_QWORD *)(a1 + 520) )
      return result;
LABEL_22:
    switch ( *(_DWORD *)(a1 + 512) )
    {
      case 0:
      case 2:
        break;
      case 1:
        v24 = (char *)&byte_22F0C30;
        v47 = 0;
        v51 = -1;
        v50 = (char *)&byte_22F0C30;
        goto LABEL_51;
      case 3:
        v24 = "210";
        v47 = 3;
        v51 = 2;
        v50 = "210";
        goto LABEL_51;
      case 4:
        v24 = "300";
        v47 = 3;
        v51 = 2;
        v50 = "300";
        goto LABEL_51;
      case 5:
        v24 = "320";
        v47 = 3;
        v51 = 2;
        v50 = "320";
        goto LABEL_51;
      case 6:
        v24 = "350";
        v47 = 3;
        v51 = 2;
        v50 = "350";
        goto LABEL_51;
      case 7:
        v24 = "370";
        v47 = 3;
        v51 = 2;
        v50 = "370";
        goto LABEL_51;
      case 8:
        v24 = "500";
        v47 = 3;
        v51 = 2;
        v50 = "500";
        goto LABEL_51;
      case 9:
        v24 = "520";
        v47 = 3;
        v51 = 2;
        v50 = "520";
        goto LABEL_51;
      case 0xA:
        v24 = "530";
        v47 = 3;
        v51 = 2;
        v50 = "530";
        goto LABEL_51;
      case 0xB:
        v24 = (char *)"600";
        v47 = 3;
        v51 = 2;
        v50 = (char *)"600";
        goto LABEL_51;
      case 0xC:
        v24 = "610";
        v47 = 3;
        v51 = 2;
        v50 = "610";
        goto LABEL_51;
      case 0xD:
        v24 = "620";
        v47 = 3;
        v51 = 2;
        v50 = "620";
        goto LABEL_51;
      case 0xE:
        v24 = "700";
        v47 = 3;
        v51 = 2;
        v50 = "700";
        goto LABEL_51;
      case 0xF:
        v24 = "720";
        v47 = 3;
        v51 = 2;
        v50 = "720";
        goto LABEL_51;
      case 0x10:
        v24 = (char *)"750";
        v47 = 3;
        v51 = 2;
        v50 = (char *)"750";
        goto LABEL_51;
      case 0x11:
        v24 = "800";
        v47 = 3;
        v51 = 2;
        v50 = "800";
        goto LABEL_51;
      case 0x12:
        v24 = "860";
        v47 = 3;
        v51 = 2;
        v50 = "860";
        goto LABEL_51;
      case 0x13:
        v24 = "870";
        v47 = 3;
        v51 = 2;
        v50 = "870";
        goto LABEL_51;
      case 0x14:
        v24 = "890";
        v47 = 3;
        v51 = 2;
        v50 = "890";
        goto LABEL_51;
      case 0x15:
      case 0x16:
        v24 = (char *)"900";
        v47 = 3;
        v51 = 2;
        v50 = (char *)"900";
        goto LABEL_51;
      case 0x17:
      case 0x18:
        v24 = "1000";
        v47 = 4;
        v51 = 3;
        v50 = "1000";
        goto LABEL_51;
      case 0x19:
      case 0x1A:
        v24 = (char *)"1010";
        v47 = 4;
        v51 = 3;
        v50 = (char *)"1010";
        goto LABEL_51;
      case 0x1B:
      case 0x1C:
        v24 = "1200";
        v47 = 4;
        v51 = 3;
        v50 = "1200";
        goto LABEL_51;
      default:
        abort();
    }
  }
  v24 = "200";
  v47 = 3;
  v51 = 2;
  v50 = "200";
LABEL_51:
  v58[0] = v24;
  v59 = 261;
  v25 = *a3;
  v58[1] = v47;
  v26 = *(_QWORD **)(v25 + 32);
  v27 = *(_QWORD *)(v25 + 24);
  v56[0] = "__CUDA_ARCH__";
  v57 = 259;
  v61 = 257;
  if ( (unsigned __int64)(v27 - (_QWORD)v26) > 7 )
  {
    *v26 = 0x20656E6966656423LL;
    *(_QWORD *)(v25 + 32) += 8LL;
  }
  else
  {
    v25 = sub_227BF10(v25, "#define ", 8);
  }
  sub_2254180(v56, v25);
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
  result = sub_2254180(v58, v25);
  v29 = *(_BYTE **)(v25 + 32);
  if ( (unsigned __int64)v29 >= *(_QWORD *)(v25 + 24) )
  {
    result = sub_227BA10(v25, 10);
  }
  else
  {
    *(_QWORD *)(v25 + 32) = v29 + 1;
    *v29 = 10;
  }
  if ( (unsigned __int8)v61 > 1u )
  {
    v40 = *a3;
    v41 = *(__m128i **)(*a3 + 32);
    if ( *(_QWORD *)(*a3 + 24) - (_QWORD)v41 > 0x18u )
    {
      v45 = _mm_load_si128((const __m128i *)&xmmword_23A9650);
      v41[1].m128i_i8[8] = 40;
      v41[1].m128i_i64[0] = 0x6465746163657270LL;
      *v41 = v45;
      *(_QWORD *)(v40 + 32) += 25LL;
    }
    else
    {
      v40 = sub_227BF10(*a3, "#pragma clang deprecated(", 25);
    }
    v52 = v40;
    sub_2254180(v56, v40);
    v42 = v52;
    v43 = *(_QWORD *)(v52 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v52 + 24) - v43) > 2 )
    {
      *(_BYTE *)(v43 + 2) = 34;
      *(_WORD *)v43 = 8236;
      *(_QWORD *)(v52 + 32) += 3LL;
    }
    else
    {
      v42 = sub_227BF10(v52, ", \"", 3);
    }
    v53 = v42;
    sub_2254180(v60, v42);
    result = v53;
    v44 = *(_QWORD *)(v53 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v53 + 24) - v44) > 2 )
    {
      *(_BYTE *)(v44 + 2) = 10;
      *(_WORD *)v44 = 10530;
      *(_QWORD *)(v53 + 32) += 3LL;
    }
    else
    {
      result = sub_227BF10(v53, "\")\n", 3);
    }
  }
  v30 = *(_DWORD *)(a1 + 512);
  if ( v30 <= 0x1C )
  {
    result = 1LL << v30;
    if ( ((1LL << v30) & 0x15400000) != 0 )
    {
      v31 = 0;
      v32 = *a3;
      v59 = 259;
      v55 = 1283;
      if ( v47 >= v51 )
        v31 = v51;
      v33 = *(_QWORD **)(v32 + 32);
      v54[0] = "__CUDA_ARCH_FEAT_SM";
      v57 = 770;
      v54[3] = v31;
      v56[0] = v54;
      v56[2] = "_ALL";
      v34 = *(_QWORD *)(v32 + 24);
      v58[0] = "1";
      v54[2] = v50;
      v61 = 257;
      if ( (unsigned __int64)(v34 - (_QWORD)v33) > 7 )
      {
        *v33 = 0x20656E6966656423LL;
        *(_QWORD *)(v32 + 32) += 8LL;
      }
      else
      {
        v32 = sub_227BF10(v32, "#define ", 8);
      }
      sub_2254180(v56, v32);
      v35 = *(_BYTE **)(v32 + 32);
      if ( (unsigned __int64)v35 >= *(_QWORD *)(v32 + 24) )
      {
        v32 = sub_227BA10(v32, 32);
      }
      else
      {
        *(_QWORD *)(v32 + 32) = v35 + 1;
        *v35 = 32;
      }
      sub_2254180(v58, v32);
      result = *(_QWORD *)(v32 + 32);
      if ( result >= *(_QWORD *)(v32 + 24) )
      {
        result = sub_227BA10(v32, 10);
      }
      else
      {
        *(_QWORD *)(v32 + 32) = result + 1;
        *(_BYTE *)result = 10;
      }
      if ( (unsigned __int8)v61 > 1u )
      {
        v36 = *a3;
        v37 = *(__m128i **)(v36 + 32);
        if ( *(_QWORD *)(v36 + 24) - (_QWORD)v37 > 0x18u )
        {
          v46 = _mm_load_si128((const __m128i *)&xmmword_23A9650);
          v37[1].m128i_i8[8] = 40;
          v37[1].m128i_i64[0] = 0x6465746163657270LL;
          *v37 = v46;
          *(_QWORD *)(v36 + 32) += 25LL;
        }
        else
        {
          v36 = sub_227BF10(v36, "#pragma clang deprecated(", 25);
        }
        sub_2254180(v56, v36);
        v38 = *(_QWORD *)(v36 + 32);
        if ( (unsigned __int64)(*(_QWORD *)(v36 + 24) - v38) > 2 )
        {
          *(_BYTE *)(v38 + 2) = 34;
          *(_WORD *)v38 = 8236;
          *(_QWORD *)(v36 + 32) += 3LL;
        }
        else
        {
          v36 = sub_227BF10(v36, ", \"", 3);
        }
        sub_2254180(v60, v36);
        v39 = *(_QWORD *)(v36 + 32);
        if ( (unsigned __int64)(*(_QWORD *)(v36 + 24) - v39) > 2 )
        {
          *(_BYTE *)(v39 + 2) = 10;
          *(_WORD *)v39 = 10530;
          *(_QWORD *)(v36 + 32) += 3LL;
          return 10530;
        }
        else
        {
          return sub_227BF10(v36, "\")\n", 3);
        }
      }
    }
  }
  return result;
}
