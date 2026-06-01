_BYTE *__fastcall sub_1066A00(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rbx
  _QWORD *v5; // rdx
  __int64 v6; // rax
  _BYTE *v7; // rax
  _BYTE *v8; // rax
  __int64 v9; // rbx
  __m128i *v10; // rdx
  unsigned __int64 v11; // rax
  _BYTE *v12; // rax
  _BYTE *result; // rax
  __int64 v14; // rbx
  __m128i *v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rdx
  __m128i v20; // xmm0
  __m128i si128; // xmm0
  _QWORD v22[4]; // [rsp+0h] [rbp-B8h] BYREF
  __int16 v23; // [rsp+20h] [rbp-98h]
  _QWORD v24[4]; // [rsp+30h] [rbp-88h] BYREF
  __int16 v25; // [rsp+50h] [rbp-68h]
  _BYTE v26[32]; // [rsp+60h] [rbp-58h] BYREF
  __int16 v27; // [rsp+80h] [rbp-38h]

  v23 = 259;
  v4 = *a3;
  v22[0] = "MSP430";
  v5 = *(_QWORD **)(v4 + 32);
  v6 = *(_QWORD *)(v4 + 24);
  v24[0] = "1";
  v25 = 259;
  v27 = 257;
  if ( (unsigned __int64)(v6 - (_QWORD)v5) > 7 )
  {
    *v5 = 0x20656E6966656423LL;
    *(_QWORD *)(v4 + 32) += 8LL;
  }
  else
  {
    v4 = sub_22581D0(v4, "#define ", 8);
  }
  sub_2230440(v22, v4);
  v7 = *(_BYTE **)(v4 + 32);
  if ( (unsigned __int64)v7 >= *(_QWORD *)(v4 + 24) )
  {
    v4 = sub_2257CD0(v4, 32);
  }
  else
  {
    *(_QWORD *)(v4 + 32) = v7 + 1;
    *v7 = 32;
  }
  sub_2230440(v24, v4);
  v8 = *(_BYTE **)(v4 + 32);
  if ( (unsigned __int64)v8 >= *(_QWORD *)(v4 + 24) )
  {
    sub_2257CD0(v4, 10);
  }
  else
  {
    *(_QWORD *)(v4 + 32) = v8 + 1;
    *v8 = 10;
  }
  v9 = *a3;
  v10 = *(__m128i **)(*a3 + 32);
  v11 = *(_QWORD *)(*a3 + 24) - (_QWORD)v10;
  if ( (unsigned __int8)v27 > 1u )
  {
    if ( v11 > 0x18 )
    {
      si128 = _mm_load_si128((const __m128i *)&xmmword_2385620);
      v10[1].m128i_i8[8] = 40;
      v10[1].m128i_i64[0] = 0x6465746163657270LL;
      *v10 = si128;
      *(_QWORD *)(v9 + 32) += 25LL;
    }
    else
    {
      v9 = sub_22581D0(*a3, "#pragma clang deprecated(", 25);
    }
    sub_2230440(v22, v9);
    v18 = *(_QWORD *)(v9 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v9 + 24) - v18) > 2 )
    {
      *(_BYTE *)(v18 + 2) = 34;
      *(_WORD *)v18 = 8236;
      *(_QWORD *)(v9 + 32) += 3LL;
    }
    else
    {
      v9 = sub_22581D0(v9, ", \"", 3);
    }
    sub_2230440(v26, v9);
    v19 = *(_QWORD *)(v9 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v9 + 24) - v19) > 2 )
    {
      *(_BYTE *)(v19 + 2) = 10;
      *(_WORD *)v19 = 10530;
      *(_QWORD *)(v9 + 32) += 3LL;
    }
    else
    {
      sub_22581D0(v9, "\")\n", 3);
    }
    v9 = *a3;
    v10 = *(__m128i **)(*a3 + 32);
    v11 = *(_QWORD *)(*a3 + 24) - (_QWORD)v10;
  }
  v24[0] = "1";
  v25 = 259;
  v22[0] = "__MSP430__";
  v23 = 259;
  v27 = 257;
  if ( v11 > 7 )
  {
    v10->m128i_i64[0] = 0x20656E6966656423LL;
    *(_QWORD *)(v9 + 32) += 8LL;
  }
  else
  {
    v9 = sub_22581D0(v9, "#define ", 8);
  }
  sub_2230440(v22, v9);
  v12 = *(_BYTE **)(v9 + 32);
  if ( (unsigned __int64)v12 >= *(_QWORD *)(v9 + 24) )
  {
    v9 = sub_2257CD0(v9, 32);
  }
  else
  {
    *(_QWORD *)(v9 + 32) = v12 + 1;
    *v12 = 32;
  }
  sub_2230440(v24, v9);
  result = *(_BYTE **)(v9 + 32);
  if ( (unsigned __int64)result >= *(_QWORD *)(v9 + 24) )
  {
    result = (_BYTE *)sub_2257CD0(v9, 10);
  }
  else
  {
    *(_QWORD *)(v9 + 32) = result + 1;
    *result = 10;
  }
  if ( (unsigned __int8)v27 > 1u )
  {
    v14 = *a3;
    v15 = *(__m128i **)(*a3 + 32);
    if ( *(_QWORD *)(*a3 + 24) - (_QWORD)v15 > 0x18u )
    {
      v20 = _mm_load_si128((const __m128i *)&xmmword_2385620);
      v15[1].m128i_i8[8] = 40;
      v15[1].m128i_i64[0] = 0x6465746163657270LL;
      *v15 = v20;
      *(_QWORD *)(v14 + 32) += 25LL;
    }
    else
    {
      v14 = sub_22581D0(*a3, "#pragma clang deprecated(", 25);
    }
    sub_2230440(v22, v14);
    v16 = *(_QWORD *)(v14 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v14 + 24) - v16) > 2 )
    {
      *(_BYTE *)(v16 + 2) = 34;
      *(_WORD *)v16 = 8236;
      *(_QWORD *)(v14 + 32) += 3LL;
    }
    else
    {
      v14 = sub_22581D0(v14, ", \"", 3);
    }
    sub_2230440(v26, v14);
    v17 = *(_QWORD *)(v14 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v14 + 24) - v17) > 2 )
    {
      *(_BYTE *)(v17 + 2) = 10;
      *(_WORD *)v17 = 10530;
      *(_QWORD *)(v14 + 32) += 3LL;
      return (_BYTE *)(elf_gnu_hash_chain + 3734);
    }
    else
    {
      return (_BYTE *)sub_22581D0(v14, "\")\n", 3);
    }
  }
  return result;
}

