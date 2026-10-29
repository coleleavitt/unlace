__int64 __fastcall sub_10291A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __m128 v6; // xmm0
  __int64 addr; // rax
  __int64 v8; // r12
  __int64 v9; // rbp
  __m128i v11; // [rsp+0h] [rbp-78h] BYREF
  _QWORD v12[4]; // [rsp+10h] [rbp-68h] BYREF
  __m128i v13; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v14[56]; // [rsp+40h] [rbp-38h] BYREF

  v12[2] = a1;
  v11.m128i_i64[0] = (__int64)v12;
  v12[3] = a2;
  v12[0] = a3;
  v6 = _mm_loadh_ps((const double *)v11.m128i_i64);
  sub_2219770(v14, a2, a3, a4, a5, a6, v6.m128_u64[0], v6.m128_u64[1], a3, a4, a1, a2);
  addr = __tls_get_addr(&stru_2C77838);
  v13 = _mm_load_si128(&v11);
  v8 = *(_QWORD *)(addr + 264);
  v9 = addr;
  sub_22199D0(v14, sub_10290D0, &v13, &loc_800000);
  *(_QWORD *)(v9 + 264) = v8;
  return sub_2219790(v14);
}
