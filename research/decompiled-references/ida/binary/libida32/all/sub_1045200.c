__int64 __fastcall sub_1045200(__m128 *a1, unsigned __int8 *a2)
{
  unsigned __int64 v2; // r13
  __int16 v3; // r12
  __int64 (__fastcall *v4)(__int64); // rax
  __int64 result; // rax
  unsigned __int64 v6[6]; // [rsp+8h] [rbp-30h] BYREF

  v2 = a1[7].m128_u64[1];
  v3 = a1[1].m128_i16[4];
  sub_100A960((__int64)a1, (__int64)a2);
  a1[1].m128_i16[4] = v3;
  v6[0] = v2;
  v4 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 96LL);
  a1[7] = _mm_loadh_ps((const double *)v6);
  if ( v4 == sub_1007AC0 )
    result = a2[278];
  else
    result = v4((__int64)a2);
  if ( (_BYTE)result )
  {
    result = a1[6].m128_i64[1];
    a1[17].m128_i8[6] = 1;
    a1[7].m128_u64[1] = result;
  }
  return result;
}

