_BYTE *__fastcall sub_10848B0(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rbx
  _QWORD *v5; // rdx
  __int64 v6; // rax
  _BYTE *v7; // rax
  _BYTE *result; // rax
  __int64 v9; // rbx
  __m128i *v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rbx
  _QWORD *v14; // rdx
  __int64 v15; // rax
  _BYTE *v16; // rax
  __int64 v17; // rbx
  __m128i *v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rdx
  __m128i si128; // xmm0
  __m128i v22; // xmm0
  _QWORD v23[4]; // [rsp+0h] [rbp-C8h] BYREF
  __int16 v24; // [rsp+20h] [rbp-A8h]
  _QWORD v25[4]; // [rsp+30h] [rbp-98h] BYREF
  __int16 v26; // [rsp+50h] [rbp-78h]
  _BYTE v27[32]; // [rsp+60h] [rbp-68h] BYREF
  __int16 v28; // [rsp+80h] [rbp-48h]

  v24 = 259;
  v4 = *a3;
  v23[0] = "__lanai__";
  v5 = *(_QWORD **)(v4 + 32);
  v6 = *(_QWORD *)(v4 + 24);
  v25[0] = "1";
  v26 = 259;
  v28 = 257;
  if ( (unsigned __int64)(v6 - (_QWORD)v5) > 7 )
  {
    *v5 = 0x20656E6966656423LL;
    *(_QWORD *)(v4 + 32) += 8LL;
  }
  else
  {
    v4 = sub_227BF10(v4, "#define ", 8);
  }
  sub_2254180(v23, v4);
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
  sub_2254180(v25, v4);
  result = *(_BYTE **)(v4 + 32);
  if ( (unsigned __int64)result >= *(_QWORD *)(v4 + 24) )
  {
    result = (_BYTE *)sub_227BA10(v4, 10);
  }
  else
  {
    *(_QWORD *)(v4 + 32) = result + 1;
    *result = 10;
  }
  if ( (unsigned __int8)v28 > 1u )
  {
    v9 = *a3;
    v10 = *(__m128i **)(*a3 + 32);
    if ( *(_QWORD *)(*a3 + 24) - (_QWORD)v10 > 0x18u )
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
    sub_2254180(v23, v9);
    v11 = *(_QWORD *)(v9 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v9 + 24) - v11) > 2 )
    {
      *(_BYTE *)(v11 + 2) = 34;
      *(_WORD *)v11 = 8236;
      *(_QWORD *)(v9 + 32) += 3LL;
    }
    else
    {
      v9 = sub_227BF10(v9, ", \"", 3);
    }
    sub_2254180(v27, v9);
    v12 = *(_QWORD *)(v9 + 32);
    result = (_BYTE *)(*(_QWORD *)(v9 + 24) - v12);
    if ( (unsigned __int64)result <= 2 )
    {
      result = (_BYTE *)sub_227BF10(v9, "\")\n", 3);
      if ( *(_DWORD *)(a1 + 512) != 1 )
        return result;
      goto LABEL_17;
    }
    *(_BYTE *)(v12 + 2) = 10;
    *(_WORD *)v12 = 10530;
    *(_QWORD *)(v9 + 32) += 3LL;
  }
  if ( *(_DWORD *)(a1 + 512) != 1 )
    return result;
LABEL_17:
  v13 = *a3;
  v25[0] = "__LANAI_V11__";
  v14 = *(_QWORD **)(v13 + 32);
  v15 = *(_QWORD *)(v13 + 24);
  v23[0] = "1";
  v24 = 259;
  v26 = 259;
  v28 = 257;
  if ( (unsigned __int64)(v15 - (_QWORD)v14) > 7 )
  {
    *v14 = 0x20656E6966656423LL;
    *(_QWORD *)(v13 + 32) += 8LL;
  }
  else
  {
    v13 = sub_227BF10(v13, "#define ", 8);
  }
  sub_2254180(v25, v13);
  v16 = *(_BYTE **)(v13 + 32);
  if ( (unsigned __int64)v16 >= *(_QWORD *)(v13 + 24) )
  {
    v13 = sub_227BA10(v13, 32);
  }
  else
  {
    *(_QWORD *)(v13 + 32) = v16 + 1;
    *v16 = 32;
  }
  sub_2254180(v23, v13);
  result = *(_BYTE **)(v13 + 32);
  if ( (unsigned __int64)result >= *(_QWORD *)(v13 + 24) )
  {
    result = (_BYTE *)sub_227BA10(v13, 10);
  }
  else
  {
    *(_QWORD *)(v13 + 32) = result + 1;
    *result = 10;
  }
  if ( (unsigned __int8)v28 > 1u )
  {
    v17 = *a3;
    v18 = *(__m128i **)(*a3 + 32);
    if ( *(_QWORD *)(*a3 + 24) - (_QWORD)v18 > 0x18u )
    {
      v22 = _mm_load_si128((const __m128i *)&xmmword_23A9650);
      v18[1].m128i_i8[8] = 40;
      v18[1].m128i_i64[0] = 0x6465746163657270LL;
      *v18 = v22;
      *(_QWORD *)(v17 + 32) += 25LL;
    }
    else
    {
      v17 = sub_227BF10(*a3, "#pragma clang deprecated(", 25);
    }
    sub_2254180(v25, v17);
    v19 = *(_QWORD *)(v17 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v17 + 24) - v19) > 2 )
    {
      *(_BYTE *)(v19 + 2) = 34;
      *(_WORD *)v19 = 8236;
      *(_QWORD *)(v17 + 32) += 3LL;
    }
    else
    {
      v17 = sub_227BF10(v17, ", \"", 3);
    }
    sub_2254180(v27, v17);
    v20 = *(_QWORD *)(v17 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v17 + 24) - v20) > 2 )
    {
      *(_BYTE *)(v20 + 2) = 10;
      *(_WORD *)v20 = 10530;
      *(_QWORD *)(v17 + 32) += 3LL;
      return (_BYTE *)(elf_gnu_hash_chain + 3750);
    }
    else
    {
      return (_BYTE *)sub_227BF10(v17, "\")\n", 3);
    }
  }
  return result;
}
