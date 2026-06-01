_BYTE *__fastcall sub_10AB850(__int64 a1, __int64 a2, __int64 *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx
  _QWORD *v10; // rdx
  __int64 v11; // rax
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
  _BYTE *result; // rax
  __int64 v24; // rbx
  __m128i *v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rdx
  __m128i si128; // xmm0
  __m128i v33; // xmm0
  __m128i v34; // xmm0
  _QWORD v35[4]; // [rsp+0h] [rbp-B8h] BYREF
  __int16 v36; // [rsp+20h] [rbp-98h]
  _QWORD v37[4]; // [rsp+30h] [rbp-88h] BYREF
  __int16 v38; // [rsp+50h] [rbp-68h]
  _BYTE v39[32]; // [rsp+60h] [rbp-58h] BYREF
  __int16 v40; // [rsp+80h] [rbp-38h]

  sub_10474F0(a3, "SPIRV", 5, a2, a5, a6);
  if ( (*(_BYTE *)(a2 + 89) & 1) != 0 )
    sub_10474F0(a3, "spirv", 5, a2, v7, v8);
  sub_10474F0(a3, "SPIRV64", 7, a2, v7, v8);
  v9 = *a3;
  v37[0] = "1";
  v35[0] = "__AMD__";
  v10 = *(_QWORD **)(v9 + 32);
  v11 = *(_QWORD *)(v9 + 24);
  v38 = 259;
  v36 = 259;
  v40 = 257;
  if ( (unsigned __int64)(v11 - (_QWORD)v10) > 7 )
  {
    *v10 = 0x20656E6966656423LL;
    *(_QWORD *)(v9 + 32) += 8LL;
  }
  else
  {
    v9 = sub_227BF10(v9, "#define ", 8);
  }
  sub_2254180(v35, v9);
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
  sub_2254180(v37, v9);
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
  v14 = *a3;
  v15 = *(__m128i **)(*a3 + 32);
  v16 = *(_QWORD *)(*a3 + 24) - (_QWORD)v15;
  if ( (unsigned __int8)v40 > 1u )
  {
    if ( v16 > 0x18 )
    {
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A9650);
      v15[1].m128i_i8[8] = 40;
      v15[1].m128i_i64[0] = 0x6465746163657270LL;
      *v15 = si128;
      *(_QWORD *)(v14 + 32) += 25LL;
    }
    else
    {
      v14 = sub_227BF10(*a3, "#pragma clang deprecated(", 25);
    }
    sub_2254180(v35, v14);
    v30 = *(_QWORD *)(v14 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v14 + 24) - v30) > 2 )
    {
      *(_BYTE *)(v30 + 2) = 34;
      *(_WORD *)v30 = 8236;
      *(_QWORD *)(v14 + 32) += 3LL;
    }
    else
    {
      v14 = sub_227BF10(v14, ", \"", 3);
    }
    sub_2254180(v39, v14);
    v31 = *(_QWORD *)(v14 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v14 + 24) - v31) > 2 )
    {
      *(_BYTE *)(v31 + 2) = 10;
      *(_WORD *)v31 = 10530;
      *(_QWORD *)(v14 + 32) += 3LL;
    }
    else
    {
      sub_227BF10(v14, "\")\n", 3);
    }
    v14 = *a3;
    v15 = *(__m128i **)(*a3 + 32);
    v16 = *(_QWORD *)(*a3 + 24) - (_QWORD)v15;
  }
  v37[0] = "1";
  v35[0] = "__AMDGPU__";
  v38 = 259;
  v36 = 259;
  v40 = 257;
  if ( v16 > 7 )
  {
    v15->m128i_i64[0] = 0x20656E6966656423LL;
    *(_QWORD *)(v14 + 32) += 8LL;
  }
  else
  {
    v14 = sub_227BF10(v14, "#define ", 8);
  }
  sub_2254180(v35, v14);
  v17 = *(_BYTE **)(v14 + 32);
  if ( (unsigned __int64)v17 >= *(_QWORD *)(v14 + 24) )
  {
    v14 = sub_227BA10(v14, 32);
  }
  else
  {
    *(_QWORD *)(v14 + 32) = v17 + 1;
    *v17 = 32;
  }
  sub_2254180(v37, v14);
  v18 = *(_BYTE **)(v14 + 32);
  if ( (unsigned __int64)v18 >= *(_QWORD *)(v14 + 24) )
  {
    sub_227BA10(v14, 10);
  }
  else
  {
    *(_QWORD *)(v14 + 32) = v18 + 1;
    *v18 = 10;
  }
  v19 = *a3;
  v20 = *(__m128i **)(*a3 + 32);
  v21 = *(_QWORD *)(*a3 + 24) - (_QWORD)v20;
  if ( (unsigned __int8)v40 > 1u )
  {
    if ( v21 > 0x18 )
    {
      v33 = _mm_load_si128((const __m128i *)&xmmword_23A9650);
      v20[1].m128i_i8[8] = 40;
      v20[1].m128i_i64[0] = 0x6465746163657270LL;
      *v20 = v33;
      *(_QWORD *)(v19 + 32) += 25LL;
    }
    else
    {
      v19 = sub_227BF10(*a3, "#pragma clang deprecated(", 25);
    }
    sub_2254180(v35, v19);
    v28 = *(_QWORD *)(v19 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v19 + 24) - v28) > 2 )
    {
      *(_BYTE *)(v28 + 2) = 34;
      *(_WORD *)v28 = 8236;
      *(_QWORD *)(v19 + 32) += 3LL;
    }
    else
    {
      v19 = sub_227BF10(v19, ", \"", 3);
    }
    sub_2254180(v39, v19);
    v29 = *(_QWORD *)(v19 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v19 + 24) - v29) > 2 )
    {
      *(_BYTE *)(v29 + 2) = 10;
      *(_WORD *)v29 = 10530;
      *(_QWORD *)(v19 + 32) += 3LL;
    }
    else
    {
      sub_227BF10(v19, "\")\n", 3);
    }
    v19 = *a3;
    v20 = *(__m128i **)(*a3 + 32);
    v21 = *(_QWORD *)(*a3 + 24) - (_QWORD)v20;
  }
  v37[0] = "1";
  v38 = 259;
  v35[0] = "__AMDGCN__";
  v36 = 259;
  v40 = 257;
  if ( v21 > 7 )
  {
    v20->m128i_i64[0] = 0x20656E6966656423LL;
    *(_QWORD *)(v19 + 32) += 8LL;
  }
  else
  {
    v19 = sub_227BF10(v19, "#define ", 8);
  }
  sub_2254180(v35, v19);
  v22 = *(_BYTE **)(v19 + 32);
  if ( (unsigned __int64)v22 >= *(_QWORD *)(v19 + 24) )
  {
    v19 = sub_227BA10(v19, 32);
  }
  else
  {
    *(_QWORD *)(v19 + 32) = v22 + 1;
    *v22 = 32;
  }
  sub_2254180(v37, v19);
  result = *(_BYTE **)(v19 + 32);
  if ( (unsigned __int64)result >= *(_QWORD *)(v19 + 24) )
  {
    result = (_BYTE *)sub_227BA10(v19, 10);
  }
  else
  {
    *(_QWORD *)(v19 + 32) = result + 1;
    *result = 10;
  }
  if ( (unsigned __int8)v40 > 1u )
  {
    v24 = *a3;
    v25 = *(__m128i **)(*a3 + 32);
    if ( *(_QWORD *)(*a3 + 24) - (_QWORD)v25 > 0x18u )
    {
      v34 = _mm_load_si128((const __m128i *)&xmmword_23A9650);
      v25[1].m128i_i8[8] = 40;
      v25[1].m128i_i64[0] = 0x6465746163657270LL;
      *v25 = v34;
      *(_QWORD *)(v24 + 32) += 25LL;
    }
    else
    {
      v24 = sub_227BF10(*a3, "#pragma clang deprecated(", 25);
    }
    sub_2254180(v35, v24);
    v26 = *(_QWORD *)(v24 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v24 + 24) - v26) > 2 )
    {
      *(_BYTE *)(v26 + 2) = 34;
      *(_WORD *)v26 = 8236;
      *(_QWORD *)(v24 + 32) += 3LL;
    }
    else
    {
      v24 = sub_227BF10(v24, ", \"", 3);
    }
    sub_2254180(v39, v24);
    v27 = *(_QWORD *)(v24 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v24 + 24) - v27) > 2 )
    {
      *(_BYTE *)(v27 + 2) = 10;
      *(_WORD *)v27 = 10530;
      *(_QWORD *)(v24 + 32) += 3LL;
      return (_BYTE *)(elf_gnu_hash_chain + 3750);
    }
    else
    {
      return (_BYTE *)sub_227BF10(v24, "\")\n", 3);
    }
  }
  return result;
}
