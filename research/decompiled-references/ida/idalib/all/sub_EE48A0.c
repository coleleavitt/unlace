__int64 __fastcall sub_EE48A0(__int64 *a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v12; // [rsp+0h] [rbp-58h] BYREF
  __m128i v13; // [rsp+8h] [rbp-50h] BYREF
  __m128i v14[3]; // [rsp+20h] [rbp-38h] BYREF

  v6 = sub_EE4320((__int64)a1, (__int64)a2, a3, a4, a5, a6);
  v7 = *a2;
  v13.m128i_i8[8] = 0;
  v13.m128i_i64[0] = v6;
  v12 = v7;
  sub_EDB730(v14, (__int64)(a1 + 37), &v12, &v13);
  return sub_EE17B0(a1, a2, v6, v8, v9, v10);
}
