__int64 __fastcall sub_145BE40(__m128 *a1, __int64 a2, __int64 a3)
{
  __int64 (*v3)(void); // rdx
  __int32 v4; // eax
  __int64 result; // rax
  __int64 (*v6)(); // rdx
  double v7[4]; // [rsp+8h] [rbp-20h] BYREF

  *(_QWORD *)&v7[0] = a3;
  a1[4] = _mm_loadh_ps(v7);
  sub_FBDE00(a1[43].m128_i64[0], a2, a3);
  sub_13C04F0(a1[6].m128_i64[1], a2);
  sub_FE3660(&a1[34].m128_u16[4], a1[3].m128_u64[1]);
  v3 = *(__int64 (**)(void))(*(_QWORD *)a1[4].m128_u64[0] + 200LL);
  v4 = 0;
  if ( v3 != sub_102B880 )
    v4 = v3();
  a1[33].m128_i32[2] = v4;
  result = (*(_BYTE *)(a1[3].m128_u64[1] + 207) >> 3) & 3;
  if ( (_DWORD)result == 3 )
  {
    v6 = *(__int64 (**)())(*(_QWORD *)a2 + 200LL);
    result = 0;
    if ( v6 != sub_102B880 )
      result = ((__int64 (__fastcall *)(__int64))v6)(a2);
  }
  a1[33].m128_i32[1] = 0;
  a1[33].m128_i32[0] = result;
  a1[33].m128_i32[2] = result;
  return result;
}
