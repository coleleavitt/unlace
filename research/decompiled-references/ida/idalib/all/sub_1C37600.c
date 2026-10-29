__m128 *__fastcall sub_1C37600(__int64 a1, __int32 a2, __m128 *a3, __int64 a4)
{
  _QWORD *v6; // rsi
  __m128 *result; // rax
  __int16 v8; // dx
  __int64 v9; // [rsp+0h] [rbp-28h] BYREF
  __m128 *v10; // [rsp+8h] [rbp-20h]

  v6 = *(_QWORD **)(a1 + 248);
  v9 = a4;
  result = (__m128 *)sub_EEE9A0(32, v6, 8u);
  v8 = result->m128_i16[0] & 0xFE00;
  LOBYTE(v8) = -3;
  result->m128_i16[0] = v8;
  if ( unk_2CD7484 )
  {
    v10 = result;
    sub_EE9B50(253);
    result = v10;
  }
  v10 = a3;
  result->m128_i32[2] = a2;
  result[1] = _mm_loadh_ps((const double *)&v9);
  return result;
}
