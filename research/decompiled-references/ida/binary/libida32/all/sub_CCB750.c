__int64 (__fastcall *__fastcall sub_CCB750(
        __m128 *a1,
        unsigned __int64 *a2,
        unsigned __int64 a3,
        __int64 a4,
        __int8 a5,
        __int8 a6,
        __int8 a7,
        __int8 a8))(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v8; // rax
  unsigned int v9; // eax
  __int32 v10; // esi
  __m128 v12; // xmm0
  __int64 (__fastcall *v13[2])(__int64, __int64, __int64); // [rsp+0h] [rbp-10h] BYREF

  v8 = *a2;
  a1->m128_u64[1] = 0;
  a1->m128_u64[0] = v8;
  v9 = *(_DWORD *)(a3 + 640) + *(_DWORD *)(a3 + 644);
  if ( v9 < 8 )
    v9 = 8;
  v10 = 0;
  a1[1].m128_i32[0] = v9;
  a1[1].m128_i32[1] = v9;
  if ( BYTE4(a4) )
  {
    v10 = a4;
    v9 += a4;
  }
  a1[1].m128_i32[3] = v9;
  a1[3].m128_i16[6] = 0;
  v13[0] = sub_CC8720;
  a1[1].m128_i32[2] = v10;
  a1[2].m128_u64[0] = a3;
  v12 = _mm_loadh_ps((const double *)v13);
  a1[2].m128_u64[1] = 0;
  a1[3].m128_i8[4] = 0;
  a1[3].m128_i8[8] = a5;
  a1[3].m128_i8[9] = a7;
  a1[3].m128_i8[10] = a6;
  a1[3].m128_i8[11] = a8;
  a1[3].m128_i8[14] = 0;
  a1[4] = v12;
  a1[5].m128_u64[0] = (unsigned __int64)sub_CC7AC0;
  return sub_CC7AC0;
}

