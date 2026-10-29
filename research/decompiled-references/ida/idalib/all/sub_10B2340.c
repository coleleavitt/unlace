_BYTE *__fastcall sub_10B2340(__int64 a1, __int64 a2, __int64 *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rbx
  _QWORD *v8; // rdx
  _BYTE *v9; // rax
  _BYTE *v10; // rax
  __int64 v11; // rbx
  __m128i *v12; // rdx
  unsigned __int64 v13; // rax
  _BYTE *v14; // rax
  _BYTE *v15; // rax
  __int64 v16; // rbx
  __m128i *v17; // rdx
  unsigned __int64 v18; // rax
  _BYTE *v19; // rax
  _BYTE *v20; // rax
  __int64 v21; // rbx
  __m128i *v22; // rdx
  unsigned __int64 v23; // rax
  _BYTE *v24; // rax
  _BYTE *result; // rax
  __int64 v26; // rbx
  __m128i *v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rdx
  __m128i v36; // xmm0
  __m128i si128; // xmm0
  __m128i v38; // xmm0
  __m128i v39; // xmm0
  _QWORD v40[4]; // [rsp+0h] [rbp-B8h] BYREF
  __int16 v41; // [rsp+20h] [rbp-98h]
  _QWORD v42[4]; // [rsp+30h] [rbp-88h] BYREF
  __int16 v43; // [rsp+50h] [rbp-68h]
  _BYTE v44[32]; // [rsp+60h] [rbp-58h] BYREF
  __int16 v45; // [rsp+80h] [rbp-38h]

  sub_10474F0(a3, "tcele", 5, a2, a5, a6);
  v7 = *a3;
  v42[0] = "1";
  v43 = 259;
  v40[0] = "__TCE__";
  v8 = *(_QWORD **)(v7 + 32);
  v41 = 259;
  v45 = 257;
  if ( *(_QWORD *)(v7 + 24) - (_QWORD)v8 > 7u )
  {
    *v8 = 0x20656E6966656423LL;
    *(_QWORD *)(v7 + 32) += 8LL;
  }
  else
  {
    v7 = sub_227BF10(v7, "#define ", 8);
  }
  sub_2254180(v40, v7);
  v9 = *(_BYTE **)(v7 + 32);
  if ( (unsigned __int64)v9 >= *(_QWORD *)(v7 + 24) )
  {
    v7 = sub_227BA10(v7, 32);
  }
  else
  {
    *(_QWORD *)(v7 + 32) = v9 + 1;
    *v9 = 32;
  }
  sub_2254180(v42, v7);
  v10 = *(_BYTE **)(v7 + 32);
  if ( (unsigned __int64)v10 >= *(_QWORD *)(v7 + 24) )
  {
    sub_227BA10(v7, 10);
  }
  else
  {
    *(_QWORD *)(v7 + 32) = v10 + 1;
    *v10 = 10;
  }
  v11 = *a3;
  v12 = *(__m128i **)(*a3 + 32);
  v13 = *(_QWORD *)(*a3 + 24) - (_QWORD)v12;
  if ( (unsigned __int8)v45 > 1u )
  {
    if ( v13 > 0x18 )
    {
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A9650);
      v12[1].m128i_i8[8] = 40;
      v12[1].m128i_i64[0] = 0x6465746163657270LL;
      *v12 = si128;
      *(_QWORD *)(v11 + 32) += 25LL;
    }
    else
    {
      v11 = sub_227BF10(*a3, "#pragma clang deprecated(", 25);
    }
    sub_2254180(v40, v11);
    v34 = *(_QWORD *)(v11 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v11 + 24) - v34) > 2 )
    {
      *(_BYTE *)(v34 + 2) = 34;
      *(_WORD *)v34 = 8236;
      *(_QWORD *)(v11 + 32) += 3LL;
    }
    else
    {
      v11 = sub_227BF10(v11, ", \"", 3);
    }
    sub_2254180(v44, v11);
    v35 = *(_QWORD *)(v11 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v11 + 24) - v35) > 2 )
    {
      *(_BYTE *)(v35 + 2) = 10;
      *(_WORD *)v35 = 10530;
      *(_QWORD *)(v11 + 32) += 3LL;
    }
    else
    {
      sub_227BF10(v11, "\")\n", 3);
    }
    v11 = *a3;
    v12 = *(__m128i **)(*a3 + 32);
    v13 = *(_QWORD *)(*a3 + 24) - (_QWORD)v12;
  }
  v42[0] = "1";
  v43 = 259;
  v40[0] = "__TCE_V1__";
  v41 = 259;
  v45 = 257;
  if ( v13 > 7 )
  {
    v12->m128i_i64[0] = 0x20656E6966656423LL;
    *(_QWORD *)(v11 + 32) += 8LL;
  }
  else
  {
    v11 = sub_227BF10(v11, "#define ", 8);
  }
  sub_2254180(v40, v11);
  v14 = *(_BYTE **)(v11 + 32);
  if ( (unsigned __int64)v14 >= *(_QWORD *)(v11 + 24) )
  {
    v11 = sub_227BA10(v11, 32);
  }
  else
  {
    *(_QWORD *)(v11 + 32) = v14 + 1;
    *v14 = 32;
  }
  sub_2254180(v42, v11);
  v15 = *(_BYTE **)(v11 + 32);
  if ( (unsigned __int64)v15 >= *(_QWORD *)(v11 + 24) )
  {
    sub_227BA10(v11, 10);
  }
  else
  {
    *(_QWORD *)(v11 + 32) = v15 + 1;
    *v15 = 10;
  }
  v16 = *a3;
  v17 = *(__m128i **)(*a3 + 32);
  v18 = *(_QWORD *)(*a3 + 24) - (_QWORD)v17;
  if ( (unsigned __int8)v45 > 1u )
  {
    if ( v18 > 0x18 )
    {
      v38 = _mm_load_si128((const __m128i *)&xmmword_23A9650);
      v17[1].m128i_i8[8] = 40;
      v17[1].m128i_i64[0] = 0x6465746163657270LL;
      *v17 = v38;
      *(_QWORD *)(v16 + 32) += 25LL;
    }
    else
    {
      v16 = sub_227BF10(*a3, "#pragma clang deprecated(", 25);
    }
    sub_2254180(v40, v16);
    v32 = *(_QWORD *)(v16 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v16 + 24) - v32) > 2 )
    {
      *(_BYTE *)(v32 + 2) = 34;
      *(_WORD *)v32 = 8236;
      *(_QWORD *)(v16 + 32) += 3LL;
    }
    else
    {
      v16 = sub_227BF10(v16, ", \"", 3);
    }
    sub_2254180(v44, v16);
    v33 = *(_QWORD *)(v16 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v16 + 24) - v33) > 2 )
    {
      *(_BYTE *)(v33 + 2) = 10;
      *(_WORD *)v33 = 10530;
      *(_QWORD *)(v16 + 32) += 3LL;
    }
    else
    {
      sub_227BF10(v16, "\")\n", 3);
    }
    v16 = *a3;
    v17 = *(__m128i **)(*a3 + 32);
    v18 = *(_QWORD *)(*a3 + 24) - (_QWORD)v17;
  }
  v42[0] = "1";
  v40[0] = "__TCELE__";
  v43 = 259;
  v41 = 259;
  v45 = 257;
  if ( v18 > 7 )
  {
    v17->m128i_i64[0] = 0x20656E6966656423LL;
    *(_QWORD *)(v16 + 32) += 8LL;
  }
  else
  {
    v16 = sub_227BF10(v16, "#define ", 8);
  }
  sub_2254180(v40, v16);
  v19 = *(_BYTE **)(v16 + 32);
  if ( (unsigned __int64)v19 >= *(_QWORD *)(v16 + 24) )
  {
    v16 = sub_227BA10(v16, 32);
  }
  else
  {
    *(_QWORD *)(v16 + 32) = v19 + 1;
    *v19 = 32;
  }
  sub_2254180(v42, v16);
  v20 = *(_BYTE **)(v16 + 32);
  if ( (unsigned __int64)v20 >= *(_QWORD *)(v16 + 24) )
  {
    sub_227BA10(v16, 10);
  }
  else
  {
    *(_QWORD *)(v16 + 32) = v20 + 1;
    *v20 = 10;
  }
  v21 = *a3;
  v22 = *(__m128i **)(*a3 + 32);
  v23 = *(_QWORD *)(*a3 + 24) - (_QWORD)v22;
  if ( (unsigned __int8)v45 > 1u )
  {
    if ( v23 > 0x18 )
    {
      v39 = _mm_load_si128((const __m128i *)&xmmword_23A9650);
      v22[1].m128i_i8[8] = 40;
      v22[1].m128i_i64[0] = 0x6465746163657270LL;
      *v22 = v39;
      *(_QWORD *)(v21 + 32) += 25LL;
    }
    else
    {
      v21 = sub_227BF10(*a3, "#pragma clang deprecated(", 25);
    }
    sub_2254180(v40, v21);
    v30 = *(_QWORD *)(v21 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v21 + 24) - v30) > 2 )
    {
      *(_BYTE *)(v30 + 2) = 34;
      *(_WORD *)v30 = 8236;
      *(_QWORD *)(v21 + 32) += 3LL;
    }
    else
    {
      v21 = sub_227BF10(v21, ", \"", 3);
    }
    sub_2254180(v44, v21);
    v31 = *(_QWORD *)(v21 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v21 + 24) - v31) > 2 )
    {
      *(_BYTE *)(v31 + 2) = 10;
      *(_WORD *)v31 = 10530;
      *(_QWORD *)(v21 + 32) += 3LL;
    }
    else
    {
      sub_227BF10(v21, "\")\n", 3);
    }
    v21 = *a3;
    v22 = *(__m128i **)(*a3 + 32);
    v23 = *(_QWORD *)(*a3 + 24) - (_QWORD)v22;
  }
  v42[0] = "1";
  v43 = 259;
  v40[0] = "__TCELE_V1__";
  v41 = 259;
  v45 = 257;
  if ( v23 > 7 )
  {
    v22->m128i_i64[0] = 0x20656E6966656423LL;
    *(_QWORD *)(v21 + 32) += 8LL;
  }
  else
  {
    v21 = sub_227BF10(v21, "#define ", 8);
  }
  sub_2254180(v40, v21);
  v24 = *(_BYTE **)(v21 + 32);
  if ( (unsigned __int64)v24 >= *(_QWORD *)(v21 + 24) )
  {
    v21 = sub_227BA10(v21, 32);
  }
  else
  {
    *(_QWORD *)(v21 + 32) = v24 + 1;
    *v24 = 32;
  }
  sub_2254180(v42, v21);
  result = *(_BYTE **)(v21 + 32);
  if ( (unsigned __int64)result >= *(_QWORD *)(v21 + 24) )
  {
    result = (_BYTE *)sub_227BA10(v21, 10);
  }
  else
  {
    *(_QWORD *)(v21 + 32) = result + 1;
    *result = 10;
  }
  if ( (unsigned __int8)v45 > 1u )
  {
    v26 = *a3;
    v27 = *(__m128i **)(*a3 + 32);
    if ( *(_QWORD *)(*a3 + 24) - (_QWORD)v27 > 0x18u )
    {
      v36 = _mm_load_si128((const __m128i *)&xmmword_23A9650);
      v27[1].m128i_i8[8] = 40;
      v27[1].m128i_i64[0] = 0x6465746163657270LL;
      *v27 = v36;
      *(_QWORD *)(v26 + 32) += 25LL;
    }
    else
    {
      v26 = sub_227BF10(*a3, "#pragma clang deprecated(", 25);
    }
    sub_2254180(v40, v26);
    v28 = *(_QWORD *)(v26 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v26 + 24) - v28) > 2 )
    {
      *(_BYTE *)(v28 + 2) = 34;
      *(_WORD *)v28 = 8236;
      *(_QWORD *)(v26 + 32) += 3LL;
    }
    else
    {
      v26 = sub_227BF10(v26, ", \"", 3);
    }
    sub_2254180(v44, v26);
    v29 = *(_QWORD *)(v26 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v26 + 24) - v29) > 2 )
    {
      *(_BYTE *)(v29 + 2) = 10;
      *(_WORD *)v29 = 10530;
      *(_QWORD *)(v26 + 32) += 3LL;
      return (_BYTE *)(elf_gnu_hash_chain + 3750);
    }
    else
    {
      return (_BYTE *)sub_227BF10(v26, "\")\n", 3);
    }
  }
  return result;
}
