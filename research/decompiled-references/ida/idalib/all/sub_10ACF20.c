_BYTE *__fastcall sub_10ACF20(__int64 a1, __int64 a2, __int64 *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rbx
  _QWORD *v8; // rdx
  __int64 v9; // rax
  _BYTE *v10; // rax
  _BYTE *result; // rax
  __int64 v12; // rbx
  _QWORD *v13; // rdx
  __int64 v14; // rax
  _BYTE *v15; // rax
  __int64 v16; // rbx
  __m128i *v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rbx
  __m128i *v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rdx
  __m128i si128; // xmm0
  __m128i v25; // xmm0
  _QWORD v26[4]; // [rsp+0h] [rbp-B8h] BYREF
  __int16 v27; // [rsp+20h] [rbp-98h]
  _QWORD v28[4]; // [rsp+30h] [rbp-88h] BYREF
  __int16 v29; // [rsp+50h] [rbp-68h]
  _BYTE v30[32]; // [rsp+60h] [rbp-58h] BYREF
  __int16 v31; // [rsp+80h] [rbp-38h]

  sub_10474F0(a3, "sparc", 5, a2, a5, a6);
  v27 = 259;
  v7 = *a3;
  v26[0] = "__REGISTER_PREFIX__";
  v8 = *(_QWORD **)(v7 + 32);
  v9 = *(_QWORD *)(v7 + 24);
  v29 = 257;
  v31 = 257;
  if ( (unsigned __int64)(v9 - (_QWORD)v8) > 7 )
  {
    *v8 = 0x20656E6966656423LL;
    *(_QWORD *)(v7 + 32) += 8LL;
  }
  else
  {
    v7 = sub_227BF10(v7, "#define ", 8);
  }
  sub_2254180(v26, v7);
  v10 = *(_BYTE **)(v7 + 32);
  if ( (unsigned __int64)v10 >= *(_QWORD *)(v7 + 24) )
  {
    v7 = sub_227BA10(v7, 32);
  }
  else
  {
    *(_QWORD *)(v7 + 32) = v10 + 1;
    *v10 = 32;
  }
  sub_2254180(v28, v7);
  result = *(_BYTE **)(v7 + 32);
  if ( (unsigned __int64)result >= *(_QWORD *)(v7 + 24) )
  {
    result = (_BYTE *)sub_227BA10(v7, 10);
  }
  else
  {
    *(_QWORD *)(v7 + 32) = result + 1;
    *result = 10;
  }
  if ( (unsigned __int8)v31 > 1u )
  {
    v20 = *a3;
    v21 = *(__m128i **)(*a3 + 32);
    if ( *(_QWORD *)(*a3 + 24) - (_QWORD)v21 > 0x18u )
    {
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A9650);
      v21[1].m128i_i8[8] = 40;
      v21[1].m128i_i64[0] = 0x6465746163657270LL;
      *v21 = si128;
      *(_QWORD *)(v20 + 32) += 25LL;
    }
    else
    {
      v20 = sub_227BF10(*a3, "#pragma clang deprecated(", 25);
    }
    sub_2254180(v26, v20);
    v22 = *(_QWORD *)(v20 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v20 + 24) - v22) > 2 )
    {
      *(_BYTE *)(v22 + 2) = 34;
      *(_WORD *)v22 = 8236;
      *(_QWORD *)(v20 + 32) += 3LL;
    }
    else
    {
      v20 = sub_227BF10(v20, ", \"", 3);
    }
    sub_2254180(v30, v20);
    v23 = *(_QWORD *)(v20 + 32);
    result = (_BYTE *)(*(_QWORD *)(v20 + 24) - v23);
    if ( (unsigned __int64)result > 2 )
    {
      *(_BYTE *)(v23 + 2) = 10;
      *(_WORD *)v23 = 10530;
      *(_QWORD *)(v20 + 32) += 3LL;
    }
    else
    {
      result = (_BYTE *)sub_227BF10(v20, "\")\n", 3);
    }
  }
  if ( *(_BYTE *)(a1 + 509) )
  {
    v12 = *a3;
    v26[0] = "1";
    v28[0] = "SOFT_FLOAT";
    v13 = *(_QWORD **)(v12 + 32);
    v14 = *(_QWORD *)(v12 + 24);
    v27 = 259;
    v29 = 259;
    v31 = 257;
    if ( (unsigned __int64)(v14 - (_QWORD)v13) > 7 )
    {
      *v13 = 0x20656E6966656423LL;
      *(_QWORD *)(v12 + 32) += 8LL;
    }
    else
    {
      v12 = sub_227BF10(v12, "#define ", 8);
    }
    sub_2254180(v28, v12);
    v15 = *(_BYTE **)(v12 + 32);
    if ( (unsigned __int64)v15 >= *(_QWORD *)(v12 + 24) )
    {
      v12 = sub_227BA10(v12, 32);
    }
    else
    {
      *(_QWORD *)(v12 + 32) = v15 + 1;
      *v15 = 32;
    }
    sub_2254180(v26, v12);
    result = *(_BYTE **)(v12 + 32);
    if ( (unsigned __int64)result >= *(_QWORD *)(v12 + 24) )
    {
      result = (_BYTE *)sub_227BA10(v12, 10);
    }
    else
    {
      *(_QWORD *)(v12 + 32) = result + 1;
      *result = 10;
    }
    if ( (unsigned __int8)v31 > 1u )
    {
      v16 = *a3;
      v17 = *(__m128i **)(*a3 + 32);
      if ( *(_QWORD *)(*a3 + 24) - (_QWORD)v17 > 0x18u )
      {
        v25 = _mm_load_si128((const __m128i *)&xmmword_23A9650);
        v17[1].m128i_i8[8] = 40;
        v17[1].m128i_i64[0] = 0x6465746163657270LL;
        *v17 = v25;
        *(_QWORD *)(v16 + 32) += 25LL;
      }
      else
      {
        v16 = sub_227BF10(*a3, "#pragma clang deprecated(", 25);
      }
      sub_2254180(v28, v16);
      v18 = *(_QWORD *)(v16 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v16 + 24) - v18) > 2 )
      {
        *(_BYTE *)(v18 + 2) = 34;
        *(_WORD *)v18 = 8236;
        *(_QWORD *)(v16 + 32) += 3LL;
      }
      else
      {
        v16 = sub_227BF10(v16, ", \"", 3);
      }
      sub_2254180(v30, v16);
      v19 = *(_QWORD *)(v16 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v16 + 24) - v19) > 2 )
      {
        *(_BYTE *)(v19 + 2) = 10;
        *(_WORD *)v19 = 10530;
        *(_QWORD *)(v16 + 32) += 3LL;
        return (_BYTE *)(elf_gnu_hash_chain + 3750);
      }
      else
      {
        return (_BYTE *)sub_227BF10(v16, "\")\n", 3);
      }
    }
  }
  return result;
}
