__int64 __fastcall sub_6F7D60(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        double a4,
        __m128i a5,
        double a6,
        __m128 a7,
        double a8,
        double a9,
        double a10,
        __m128 a11)
{
  __int64 result; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  double v16; // xmm4_8
  double v17; // xmm5_8
  __int64 v18; // [rsp+0h] [rbp-18h] BYREF
  __int64 v19; // [rsp+8h] [rbp-10h]

  v18 = a2;
  v19 = a3;
  if ( !a2 )
    return 1;
  if ( (*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF8LL) == 0 )
  {
    if ( (unsigned int)sub_E6C2C0(a2) != 3 )
      return 1;
LABEL_8:
    v12 = sub_E6C930(&v18);
    return sub_6F74E0(a1, v12, v13, v14, v15, a4, a5, a6, a7, v16, v17, a10, a11);
  }
  result = sub_6F7D60(a1, *(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF8LL, v19);
  if ( (_BYTE)result )
  {
    if ( (unsigned int)sub_E6C2C0(v18) != 3 )
      return 1;
    goto LABEL_8;
  }
  return result;
}

