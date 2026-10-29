_BYTE *__fastcall sub_106DA40(__int64 a1, __int64 a2, __int64 *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, __int64, __int64, __int64); // rax
  __int64 v10; // rbx
  _QWORD *v11; // rdx
  __int64 v12; // rax
  _BYTE *v13; // rax
  _BYTE *result; // rax
  __int64 v15; // rbx
  __m128i *v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rdx
  __m128i si128; // xmm0
  char *v20; // [rsp+0h] [rbp-A8h] BYREF
  __int16 v21; // [rsp+20h] [rbp-88h]
  _QWORD v22[4]; // [rsp+30h] [rbp-78h] BYREF
  __int16 v23; // [rsp+50h] [rbp-58h]
  _BYTE v24[32]; // [rsp+60h] [rbp-48h] BYREF
  __int16 v25; // [rsp+80h] [rbp-28h]

  sub_106B780(a1, a2, a3, a4, a5, a6);
  v8 = a1 + 216;
  v9 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a1 + 984LL);
  if ( v9 == sub_1066F50 )
    sub_1074800(v8, a2, a3);
  else
    v9(a1, a2, a1 + 216, (__int64)a3);
  v10 = *a3;
  v20 = "4000";
  v22[0] = "_M_MRX000";
  v11 = *(_QWORD **)(v10 + 32);
  v12 = *(_QWORD *)(v10 + 24);
  v21 = 259;
  v23 = 259;
  v25 = 257;
  if ( (unsigned __int64)(v12 - (_QWORD)v11) > 7 )
  {
    *v11 = 0x20656E6966656423LL;
    *(_QWORD *)(v10 + 32) += 8LL;
  }
  else
  {
    v10 = sub_22581D0(v10, "#define ", 8);
  }
  sub_2230440(v22, v10);
  v13 = *(_BYTE **)(v10 + 32);
  if ( (unsigned __int64)v13 >= *(_QWORD *)(v10 + 24) )
  {
    v10 = sub_2257CD0(v10, 32);
  }
  else
  {
    *(_QWORD *)(v10 + 32) = v13 + 1;
    *v13 = 32;
  }
  sub_2230440(&v20, v10);
  result = *(_BYTE **)(v10 + 32);
  if ( (unsigned __int64)result >= *(_QWORD *)(v10 + 24) )
  {
    result = (_BYTE *)sub_2257CD0(v10, 10);
  }
  else
  {
    *(_QWORD *)(v10 + 32) = result + 1;
    *result = 10;
  }
  if ( (unsigned __int8)v25 > 1u )
  {
    v15 = *a3;
    v16 = *(__m128i **)(*a3 + 32);
    if ( *(_QWORD *)(*a3 + 24) - (_QWORD)v16 > 0x18u )
    {
      si128 = _mm_load_si128((const __m128i *)&xmmword_2385620);
      v16[1].m128i_i8[8] = 40;
      v16[1].m128i_i64[0] = 0x6465746163657270LL;
      *v16 = si128;
      *(_QWORD *)(v15 + 32) += 25LL;
    }
    else
    {
      v15 = sub_22581D0(*a3, "#pragma clang deprecated(", 25);
    }
    sub_2230440(v22, v15);
    v17 = *(_QWORD *)(v15 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v15 + 24) - v17) > 2 )
    {
      *(_BYTE *)(v17 + 2) = 34;
      *(_WORD *)v17 = 8236;
      *(_QWORD *)(v15 + 32) += 3LL;
    }
    else
    {
      v15 = sub_22581D0(v15, ", \"", 3);
    }
    sub_2230440(v24, v15);
    v18 = *(_QWORD *)(v15 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v15 + 24) - v18) > 2 )
    {
      *(_BYTE *)(v18 + 2) = 10;
      *(_WORD *)v18 = 10530;
      *(_QWORD *)(v15 + 32) += 3LL;
      return (_BYTE *)(elf_gnu_hash_chain + 3734);
    }
    else
    {
      return (_BYTE *)sub_22581D0(v15, "\")\n", 3);
    }
  }
  return result;
}

