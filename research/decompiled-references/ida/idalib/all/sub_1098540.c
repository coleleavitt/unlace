void __fastcall sub_1098540(__int64 a1, char *a2, __int64 *a3)
{
  __int64 v4; // r15
  _QWORD *v5; // rcx
  __int64 v6; // rdx
  _BYTE *v7; // rdx
  _BYTE *v8; // rdx
  _BYTE *v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // eax
  __int64 v14; // rax
  _QWORD *v15; // rcx
  __int64 v16; // rax
  _BYTE *v17; // rdx
  __int64 v18; // rax
  __m128i *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  __m128i *v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rcx
  __m128i si128; // xmm0
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rbp
  __m128i *v33; // rdx
  unsigned __int64 v34; // rax
  _BYTE *v35; // rax
  _BYTE *v36; // rax
  __int64 v37; // rbp
  __m128i *v38; // rdx
  unsigned __int64 v39; // rax
  _BYTE *v40; // rax
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  _BYTE *v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rbp
  _QWORD *v47; // rdx
  __int64 v48; // rax
  _BYTE *v49; // rax
  _BYTE *v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rdx
  __int64 v53; // rbp
  __m128i *v54; // rdx
  __int64 v55; // rdx
  __int64 v56; // rdx
  __int64 v57; // rdx
  __m128i v58; // xmm0
  __m128i v59; // xmm0
  __m128i v60; // xmm0
  __m128i v61; // xmm0
  __int64 v62; // [rsp+8h] [rbp-D0h]
  __int64 v63; // [rsp+8h] [rbp-D0h]
  __int64 v64; // [rsp+8h] [rbp-D0h]
  __int64 v65; // [rsp+8h] [rbp-D0h]
  __int64 v66; // [rsp+8h] [rbp-D0h]
  __int64 v67; // [rsp+8h] [rbp-D0h]
  _QWORD v68[4]; // [rsp+10h] [rbp-C8h] BYREF
  __int16 v69; // [rsp+30h] [rbp-A8h]
  _QWORD v70[4]; // [rsp+40h] [rbp-98h] BYREF
  __int16 v71; // [rsp+60h] [rbp-78h]
  _BYTE v72[32]; // [rsp+70h] [rbp-68h] BYREF
  __int16 v73; // [rsp+90h] [rbp-48h]

  v4 = *a3;
  v5 = *(_QWORD **)(*a3 + 32);
  v6 = *(_QWORD *)(*a3 + 24);
  v70[0] = "1";
  v71 = 259;
  v68[0] = "_WIN32";
  v69 = 259;
  v73 = 257;
  if ( (unsigned __int64)(v6 - (_QWORD)v5) > 7 )
  {
    *v5 = 0x20656E6966656423LL;
    *(_QWORD *)(v4 + 32) += 8LL;
  }
  else
  {
    v4 = sub_227BF10(v4, "#define ", 8);
  }
  sub_2254180(v68, v4);
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
  sub_2254180(v70, v4);
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
  if ( (unsigned __int8)v73 > 1u )
  {
    v22 = *a3;
    v23 = *(__m128i **)(*a3 + 32);
    if ( *(_QWORD *)(*a3 + 24) - (_QWORD)v23 > 0x18u )
    {
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A9650);
      v23[1].m128i_i8[8] = 40;
      v23[1].m128i_i64[0] = 0x6465746163657270LL;
      *v23 = si128;
      *(_QWORD *)(v22 + 32) += 25LL;
    }
    else
    {
      v22 = sub_227BF10(*a3, "#pragma clang deprecated(", 25);
    }
    v66 = v22;
    sub_2254180(v68, v22);
    v24 = v66;
    v25 = *(_QWORD *)(v66 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v66 + 24) - v25) > 2 )
    {
      *(_BYTE *)(v25 + 2) = 34;
      *(_WORD *)v25 = 8236;
      *(_QWORD *)(v66 + 32) += 3LL;
    }
    else
    {
      v24 = sub_227BF10(v66, ", \"", 3);
    }
    v67 = v24;
    sub_2254180(v72, v24);
    v26 = *(_QWORD *)(v67 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v67 + 24) - v26) > 2 )
    {
      *(_BYTE *)(v26 + 2) = 10;
      *(_WORD *)v26 = 10530;
      *(_QWORD *)(v67 + 32) += 3LL;
    }
    else
    {
      sub_227BF10(v67, "\")\n", 3);
    }
  }
  if ( (unsigned __int8)sub_22B7EA0(a1) )
  {
    v70[0] = "1";
    v71 = 259;
    v68[0] = "_WIN64";
    v69 = 259;
    v73 = 257;
    v14 = *a3;
    v15 = *(_QWORD **)(*a3 + 32);
    if ( *(_QWORD *)(*a3 + 24) - (_QWORD)v15 > 7u )
    {
      *v15 = 0x20656E6966656423LL;
      *(_QWORD *)(v14 + 32) += 8LL;
    }
    else
    {
      v14 = sub_227BF10(*a3, "#define ", 8);
    }
    v62 = v14;
    sub_2254180(v68, v14);
    v16 = v62;
    v17 = *(_BYTE **)(v62 + 32);
    if ( (unsigned __int64)v17 >= *(_QWORD *)(v62 + 24) )
    {
      v16 = sub_227BA10(v62, 32);
    }
    else
    {
      *(_QWORD *)(v62 + 32) = v17 + 1;
      *v17 = 32;
    }
    v63 = v16;
    sub_2254180(v70, v16);
    v9 = *(_BYTE **)(v63 + 32);
    if ( (unsigned __int64)v9 >= *(_QWORD *)(v63 + 24) )
    {
      sub_227BA10(v63, 10);
    }
    else
    {
      v10 = (__int64)(v9 + 1);
      *(_QWORD *)(v63 + 32) = v9 + 1;
      *v9 = 10;
    }
    if ( (unsigned __int8)v73 > 1u )
    {
      v18 = *a3;
      v19 = *(__m128i **)(*a3 + 32);
      if ( *(_QWORD *)(*a3 + 24) - (_QWORD)v19 > 0x18u )
      {
        v58 = _mm_load_si128((const __m128i *)&xmmword_23A9650);
        v19[1].m128i_i8[8] = 40;
        v19[1].m128i_i64[0] = 0x6465746163657270LL;
        *v19 = v58;
        *(_QWORD *)(v18 + 32) += 25LL;
      }
      else
      {
        v18 = sub_227BF10(*a3, "#pragma clang deprecated(", 25);
      }
      v64 = v18;
      sub_2254180(v68, v18);
      v20 = v64;
      v21 = *(_QWORD *)(v64 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v64 + 24) - v21) > 2 )
      {
        *(_BYTE *)(v21 + 2) = 34;
        *(_WORD *)v21 = 8236;
        *(_QWORD *)(v64 + 32) += 3LL;
      }
      else
      {
        v20 = sub_227BF10(v64, ", \"", 3);
      }
      v65 = v20;
      sub_2254180(v72, v20);
      v10 = *(_QWORD *)(v65 + 32);
      v9 = (_BYTE *)(*(_QWORD *)(v65 + 24) - v10);
      if ( (unsigned __int64)v9 > 2 )
      {
        *(_BYTE *)(v10 + 2) = 10;
        *(_WORD *)v10 = 10530;
        *(_QWORD *)(v65 + 32) += 3LL;
      }
      else
      {
        sub_227BF10(v65, "\")\n", 3);
      }
    }
  }
  if ( *(_DWORD *)(a1 + 44) == 15 )
  {
    v13 = *(_DWORD *)(a1 + 48);
    if ( v13 != 1 )
    {
      if ( v13 == 27 || v13 == 28 && (*a2 & 0x20) != 0 )
        sub_1094200((__int64)a2, a3, (__int64)v9, v10, v11, v12);
      return;
    }
    sub_10474F0(a3, "WIN32", 5, (__int64)a2, v11, v12);
    sub_10474F0(a3, "WINNT", 5, (__int64)a2, v28, v29);
    if ( (unsigned __int8)sub_22B7EA0(a1) )
    {
      sub_10474F0(a3, "WIN64", 5, (__int64)a2, v30, v31);
      v46 = *a3;
      v70[0] = "1";
      v68[0] = "__MINGW64__";
      v47 = *(_QWORD **)(v46 + 32);
      v48 = *(_QWORD *)(v46 + 24);
      v71 = 259;
      v69 = 259;
      v73 = 257;
      if ( (unsigned __int64)(v48 - (_QWORD)v47) > 7 )
      {
        *v47 = 0x20656E6966656423LL;
        *(_QWORD *)(v46 + 32) += 8LL;
      }
      else
      {
        v46 = sub_227BF10(v46, "#define ", 8);
      }
      sub_2254180(v68, v46);
      v49 = *(_BYTE **)(v46 + 32);
      if ( (unsigned __int64)v49 >= *(_QWORD *)(v46 + 24) )
      {
        v46 = sub_227BA10(v46, 32);
      }
      else
      {
        *(_QWORD *)(v46 + 32) = v49 + 1;
        *v49 = 32;
      }
      sub_2254180(v70, v46);
      v50 = *(_BYTE **)(v46 + 32);
      if ( (unsigned __int64)v50 >= *(_QWORD *)(v46 + 24) )
      {
        sub_227BA10(v46, 10);
      }
      else
      {
        *(_QWORD *)(v46 + 32) = v50 + 1;
        *v50 = 10;
      }
      v32 = *a3;
      v33 = *(__m128i **)(*a3 + 32);
      v34 = *(_QWORD *)(*a3 + 24) - (_QWORD)v33;
      if ( (unsigned __int8)v73 <= 1u )
        goto LABEL_42;
      if ( v34 > 0x18 )
      {
        v61 = _mm_load_si128((const __m128i *)&xmmword_23A9650);
        v33[1].m128i_i8[8] = 40;
        v33[1].m128i_i64[0] = 0x6465746163657270LL;
        *v33 = v61;
        *(_QWORD *)(v32 + 32) += 25LL;
      }
      else
      {
        v32 = sub_227BF10(*a3, "#pragma clang deprecated(", 25);
      }
      sub_2254180(v68, v32);
      v51 = *(_QWORD *)(v32 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v32 + 24) - v51) > 2 )
      {
        *(_BYTE *)(v51 + 2) = 34;
        *(_WORD *)v51 = 8236;
        *(_QWORD *)(v32 + 32) += 3LL;
      }
      else
      {
        v32 = sub_227BF10(v32, ", \"", 3);
      }
      sub_2254180(v72, v32);
      v52 = *(_QWORD *)(v32 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v32 + 24) - v52) > 2 )
      {
        *(_BYTE *)(v52 + 2) = 10;
        *(_WORD *)v52 = 10530;
        *(_QWORD *)(v32 + 32) += 3LL;
      }
      else
      {
        sub_227BF10(v32, "\")\n", 3);
      }
    }
    v32 = *a3;
    v33 = *(__m128i **)(*a3 + 32);
    v34 = *(_QWORD *)(*a3 + 24) - (_QWORD)v33;
LABEL_42:
    v70[0] = "1";
    v71 = 259;
    v68[0] = "__MSVCRT__";
    v69 = 259;
    v73 = 257;
    if ( v34 > 7 )
    {
      v33->m128i_i64[0] = 0x20656E6966656423LL;
      *(_QWORD *)(v32 + 32) += 8LL;
    }
    else
    {
      v32 = sub_227BF10(v32, "#define ", 8);
    }
    sub_2254180(v68, v32);
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
    sub_2254180(v70, v32);
    v36 = *(_BYTE **)(v32 + 32);
    if ( (unsigned __int64)v36 >= *(_QWORD *)(v32 + 24) )
    {
      sub_227BA10(v32, 10);
    }
    else
    {
      *(_QWORD *)(v32 + 32) = v36 + 1;
      *v36 = 10;
    }
    v37 = *a3;
    v38 = *(__m128i **)(*a3 + 32);
    v39 = *(_QWORD *)(*a3 + 24) - (_QWORD)v38;
    if ( (unsigned __int8)v73 > 1u )
    {
      if ( v39 > 0x18 )
      {
        v60 = _mm_load_si128((const __m128i *)&xmmword_23A9650);
        v38[1].m128i_i8[8] = 40;
        v38[1].m128i_i64[0] = 0x6465746163657270LL;
        *v38 = v60;
        *(_QWORD *)(v37 + 32) += 25LL;
      }
      else
      {
        v37 = sub_227BF10(*a3, "#pragma clang deprecated(", 25);
      }
      sub_2254180(v68, v37);
      v56 = *(_QWORD *)(v37 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v37 + 24) - v56) > 2 )
      {
        *(_BYTE *)(v56 + 2) = 34;
        *(_WORD *)v56 = 8236;
        *(_QWORD *)(v37 + 32) += 3LL;
      }
      else
      {
        v37 = sub_227BF10(v37, ", \"", 3);
      }
      sub_2254180(v72, v37);
      v57 = *(_QWORD *)(v37 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v37 + 24) - v57) > 2 )
      {
        *(_BYTE *)(v57 + 2) = 10;
        *(_WORD *)v57 = 10530;
        *(_QWORD *)(v37 + 32) += 3LL;
      }
      else
      {
        sub_227BF10(v37, "\")\n", 3);
      }
      v37 = *a3;
      v38 = *(__m128i **)(*a3 + 32);
      v39 = *(_QWORD *)(*a3 + 24) - (_QWORD)v38;
    }
    v70[0] = "1";
    v71 = 259;
    v68[0] = "__MINGW32__";
    v69 = 259;
    v73 = 257;
    if ( v39 > 7 )
    {
      v38->m128i_i64[0] = 0x20656E6966656423LL;
      *(_QWORD *)(v37 + 32) += 8LL;
    }
    else
    {
      v37 = sub_227BF10(v37, "#define ", 8);
    }
    sub_2254180(v68, v37);
    v40 = *(_BYTE **)(v37 + 32);
    if ( (unsigned __int64)v40 >= *(_QWORD *)(v37 + 24) )
    {
      v37 = sub_227BA10(v37, 32);
    }
    else
    {
      *(_QWORD *)(v37 + 32) = v40 + 1;
      *v40 = 32;
    }
    sub_2254180(v70, v37);
    v44 = *(_BYTE **)(v37 + 32);
    if ( (unsigned __int64)v44 >= *(_QWORD *)(v37 + 24) )
    {
      sub_227BA10(v37, 10);
    }
    else
    {
      v45 = (__int64)(v44 + 1);
      *(_QWORD *)(v37 + 32) = v44 + 1;
      *v44 = 10;
    }
    if ( (unsigned __int8)v73 > 1u )
    {
      v53 = *a3;
      v54 = *(__m128i **)(*a3 + 32);
      if ( *(_QWORD *)(*a3 + 24) - (_QWORD)v54 > 0x18u )
      {
        v59 = _mm_load_si128((const __m128i *)&xmmword_23A9650);
        v54[1].m128i_i8[8] = 40;
        v54[1].m128i_i64[0] = 0x6465746163657270LL;
        *v54 = v59;
        *(_QWORD *)(v53 + 32) += 25LL;
      }
      else
      {
        v53 = sub_227BF10(*a3, "#pragma clang deprecated(", 25);
      }
      sub_2254180(v68, v53);
      v55 = *(_QWORD *)(v53 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v53 + 24) - v55) > 2 )
      {
        *(_BYTE *)(v55 + 2) = 34;
        *(_WORD *)v55 = 8236;
        *(_QWORD *)(v53 + 32) += 3LL;
      }
      else
      {
        v53 = sub_227BF10(v53, ", \"", 3);
      }
      sub_2254180(v72, v53);
      v45 = *(_QWORD *)(v53 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v53 + 24) - v45) > 2 )
      {
        *(_BYTE *)(v45 + 2) = 10;
        *(_WORD *)v45 = 10530;
        *(_QWORD *)(v53 + 32) += 3LL;
      }
      else
      {
        sub_227BF10(v53, "\")\n", 3);
      }
    }
    sub_10529D0(a2, a3, v45, v41, v42, v43);
  }
}
