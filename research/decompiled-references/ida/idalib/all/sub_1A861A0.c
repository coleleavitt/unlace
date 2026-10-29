__m128 *__fastcall sub_1A861A0(__int64 *a1, __int32 a2, __m128 *a3, __int64 a4)
{
  _QWORD *v5; // r12
  __m128 *result; // rax
  __int16 v7; // dx
  __int64 v8; // [rsp+0h] [rbp-38h] BYREF
  __m128 *v9; // [rsp+8h] [rbp-30h]

  v8 = a4;
  v5 = (_QWORD *)sub_168B6C0((__int64)a1);
  sub_15F2480(*a1);
  result = (__m128 *)sub_EEE9A0(32, v5, 8u);
  v7 = result->m128_i16[0] & 0xFE00;
  LOBYTE(v7) = -98;
  result->m128_i16[0] = v7;
  if ( unk_2CD7484 )
  {
    v9 = result;
    sub_EE9B50(158);
    result = v9;
  }
  v9 = a3;
  result->m128_i32[2] = a2;
  result[1] = _mm_loadh_ps((const double *)&v8);
  return result;
}
