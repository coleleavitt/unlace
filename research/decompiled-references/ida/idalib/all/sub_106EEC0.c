_BYTE *__fastcall sub_106EEC0(__int64 a1, __int64 a2, __int64 *a3)
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
  __m128i si128; // xmm0
  _QWORD v14[4]; // [rsp+0h] [rbp-A8h] BYREF
  __int16 v15; // [rsp+20h] [rbp-88h]
  char *v16; // [rsp+30h] [rbp-78h] BYREF
  __int16 v17; // [rsp+50h] [rbp-58h]
  _BYTE v18[32]; // [rsp+60h] [rbp-48h] BYREF
  __int16 v19; // [rsp+80h] [rbp-28h]

  v4 = *a3;
  v16 = "1";
  v14[0] = "__arc__";
  v5 = *(_QWORD **)(v4 + 32);
  v6 = *(_QWORD *)(v4 + 24);
  v17 = 259;
  v15 = 259;
  v19 = 257;
  if ( (unsigned __int64)(v6 - (_QWORD)v5) > 7 )
  {
    *v5 = 0x20656E6966656423LL;
    *(_QWORD *)(v4 + 32) += 8LL;
  }
  else
  {
    v4 = sub_227BF10(v4, "#define ", 8);
  }
  sub_2254180(v14, v4);
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
  sub_2254180(&v16, v4);
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
  if ( (unsigned __int8)v19 > 1u )
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
    sub_2254180(v14, v9);
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
    sub_2254180(v18, v9);
    v12 = *(_QWORD *)(v9 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v9 + 24) - v12) > 2 )
    {
      *(_BYTE *)(v12 + 2) = 10;
      *(_WORD *)v12 = 10530;
      *(_QWORD *)(v9 + 32) += 3LL;
      return (_BYTE *)(elf_gnu_hash_chain + 3750);
    }
    else
    {
      return (_BYTE *)sub_227BF10(v9, "\")\n", 3);
    }
  }
  return result;
}
