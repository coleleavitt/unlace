__int64 __fastcall sub_1570690(const __m128i *a1, __int64 *a2, int *a3, __m128i a4, __m128 a5)
{
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // r9d
  __int64 result; // rax
  __int64 v10; // rdx
  unsigned __int8 v11; // [rsp+Fh] [rbp-69h]
  _BYTE v12[104]; // [rsp+10h] [rbp-68h] BYREF

  *(double *)a4.m128i_i64 = sub_15F1510(a1[6].m128i_i64[0]);
  *a3 = 0;
  result = sub_156FF30(a1, a2, a3, a4, a5, v6, v7, v8);
  if ( (_BYTE)result )
  {
    if ( !*(_QWORD *)(*(_QWORD *)(a1[6].m128i_i64[0] + 248) + 18360LL) )
    {
      v10 = *(_QWORD *)(a1->m128i_i64[1] + 56);
      if ( (*(_BYTE *)(v10 + 1) & 8) == 0 && !*(_BYTE *)(v10 + 744) )
      {
        v11 = result;
        sub_FC70B0((__int64)v12, a1[6].m128i_i64[1], a1[1].m128i_i32[0], 1973);
        sub_AEA040((__int64)v12);
        return v11;
      }
    }
  }
  return result;
}
