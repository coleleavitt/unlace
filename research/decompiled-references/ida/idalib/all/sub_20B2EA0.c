__m128i *__fastcall sub_20B2EA0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __m128i *result; // rax
  __int64 v5; // [rsp+0h] [rbp-48h] BYREF
  __m128i v6; // [rsp+8h] [rbp-40h] BYREF
  __m128i v7[2]; // [rsp+20h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(a1 + 8);
  v6.m128i_i64[0] = a3;
  v5 = a2;
  v6.m128i_i64[1] = v3;
  result = sub_20B2D90(v7, a1 + 16, &v5, &v6);
  ++*(_QWORD *)(a1 + 8);
  return result;
}
