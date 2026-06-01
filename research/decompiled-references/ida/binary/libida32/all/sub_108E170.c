_BYTE *__fastcall sub_108E170(__int64 a1, __int64 a2, __int64 *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rbx
  _QWORD *v8; // rdx
  __int64 v9; // rax
  _BYTE *v10; // rax
  _BYTE *v11; // rax
  __int64 v12; // rbx
  __m128i *v13; // rdx
  unsigned __int64 v14; // rax
  _BYTE *v15; // rax
  _BYTE *result; // rax
  __int64 v17; // rbx
  __m128i *v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rdx
  __m128i v23; // xmm0
  __m128i si128; // xmm0
  _QWORD v25[4]; // [rsp+0h] [rbp-B8h] BYREF
  __int16 v26; // [rsp+20h] [rbp-98h]
  _QWORD v27[4]; // [rsp+30h] [rbp-88h] BYREF
  __int16 v28; // [rsp+50h] [rbp-68h]
  _BYTE v29[32]; // [rsp+60h] [rbp-58h] BYREF
  __int16 v30; // [rsp+80h] [rbp-38h]

  sub_10237B0(a3, "tce", 3, a2, a5, a6);
  v26 = 259;
  v7 = *a3;
  v25[0] = "__TCE__";
  v8 = *(_QWORD **)(v7 + 32);
  v9 = *(_QWORD *)(v7 + 24);
  v27[0] = "1";
  v28 = 259;
  v30 = 257;
  if ( (unsigned __int64)(v9 - (_QWORD)v8) > 7 )
  {
    *v8 = 0x20656E6966656423LL;
    *(_QWORD *)(v7 + 32) += 8LL;
  }
  else
  {
    v7 = sub_22581D0(v7, "#define ", 8);
  }
  sub_2230440(v25, v7);
  v10 = *(_BYTE **)(v7 + 32);
  if ( (unsigned __int64)v10 >= *(_QWORD *)(v7 + 24) )
  {
    v7 = sub_2257CD0(v7, 32);
  }
  else
  {
    *(_QWORD *)(v7 + 32) = v10 + 1;
    *v10 = 32;
  }
  sub_2230440(v27, v7);
  v11 = *(_BYTE **)(v7 + 32);
  if ( (unsigned __int64)v11 >= *(_QWORD *)(v7 + 24) )
  {
    sub_2257CD0(v7, 10);
  }
  else
  {
    *(_QWORD *)(v7 + 32) = v11 + 1;
    *v11 = 10;
  }
  v12 = *a3;
  v13 = *(__m128i **)(*a3 + 32);
  v14 = *(_QWORD *)(*a3 + 24) - (_QWORD)v13;
  if ( (unsigned __int8)v30 > 1u )
  {
    if ( v14 > 0x18 )
    {
      si128 = _mm_load_si128((const __m128i *)&xmmword_2385620);
      v13[1].m128i_i8[8] = 40;
      v13[1].m128i_i64[0] = 0x6465746163657270LL;
      *v13 = si128;
      *(_QWORD *)(v12 + 32) += 25LL;
    }
    else
    {
      v12 = sub_22581D0(*a3, "#pragma clang deprecated(", 25);
    }
    sub_2230440(v25, v12);
    v21 = *(_QWORD *)(v12 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v12 + 24) - v21) > 2 )
    {
      *(_BYTE *)(v21 + 2) = 34;
      *(_WORD *)v21 = 8236;
      *(_QWORD *)(v12 + 32) += 3LL;
    }
    else
    {
      v12 = sub_22581D0(v12, ", \"", 3);
    }
    sub_2230440(v29, v12);
    v22 = *(_QWORD *)(v12 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v12 + 24) - v22) > 2 )
    {
      *(_BYTE *)(v22 + 2) = 10;
      *(_WORD *)v22 = 10530;
      *(_QWORD *)(v12 + 32) += 3LL;
    }
    else
    {
      sub_22581D0(v12, "\")\n", 3);
    }
    v12 = *a3;
    v13 = *(__m128i **)(*a3 + 32);
    v14 = *(_QWORD *)(*a3 + 24) - (_QWORD)v13;
  }
  v27[0] = "1";
  v28 = 259;
  v25[0] = "__TCE_V1__";
  v26 = 259;
  v30 = 257;
  if ( v14 > 7 )
  {
    v13->m128i_i64[0] = 0x20656E6966656423LL;
    *(_QWORD *)(v12 + 32) += 8LL;
  }
  else
  {
    v12 = sub_22581D0(v12, "#define ", 8);
  }
  sub_2230440(v25, v12);
  v15 = *(_BYTE **)(v12 + 32);
  if ( (unsigned __int64)v15 >= *(_QWORD *)(v12 + 24) )
  {
    v12 = sub_2257CD0(v12, 32);
  }
  else
  {
    *(_QWORD *)(v12 + 32) = v15 + 1;
    *v15 = 32;
  }
  sub_2230440(v27, v12);
  result = *(_BYTE **)(v12 + 32);
  if ( (unsigned __int64)result >= *(_QWORD *)(v12 + 24) )
  {
    result = (_BYTE *)sub_2257CD0(v12, 10);
  }
  else
  {
    *(_QWORD *)(v12 + 32) = result + 1;
    *result = 10;
  }
  if ( (unsigned __int8)v30 > 1u )
  {
    v17 = *a3;
    v18 = *(__m128i **)(*a3 + 32);
    if ( *(_QWORD *)(*a3 + 24) - (_QWORD)v18 > 0x18u )
    {
      v23 = _mm_load_si128((const __m128i *)&xmmword_2385620);
      v18[1].m128i_i8[8] = 40;
      v18[1].m128i_i64[0] = 0x6465746163657270LL;
      *v18 = v23;
      *(_QWORD *)(v17 + 32) += 25LL;
    }
    else
    {
      v17 = sub_22581D0(*a3, "#pragma clang deprecated(", 25);
    }
    sub_2230440(v25, v17);
    v19 = *(_QWORD *)(v17 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v17 + 24) - v19) > 2 )
    {
      *(_BYTE *)(v19 + 2) = 34;
      *(_WORD *)v19 = 8236;
      *(_QWORD *)(v17 + 32) += 3LL;
    }
    else
    {
      v17 = sub_22581D0(v17, ", \"", 3);
    }
    sub_2230440(v29, v17);
    v20 = *(_QWORD *)(v17 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v17 + 24) - v20) > 2 )
    {
      *(_BYTE *)(v20 + 2) = 10;
      *(_WORD *)v20 = 10530;
      *(_QWORD *)(v17 + 32) += 3LL;
      return (_BYTE *)(elf_gnu_hash_chain + 3734);
    }
    else
    {
      return (_BYTE *)sub_22581D0(v17, "\")\n", 3);
    }
  }
  return result;
}

