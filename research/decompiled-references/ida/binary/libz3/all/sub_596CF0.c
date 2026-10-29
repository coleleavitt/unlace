__int64 *__fastcall sub_596CF0(unsigned __int64 a1)
{
  __int64 *result; // rax
  __m128i *v2; // [rsp+8h] [rbp-30h]
  __int64 v3[4]; // [rsp+18h] [rbp-20h] BYREF

  sub_180C5A0(v3, "sieve_relation");
  result = sub_4C3D70(a1, v3);
  if ( !result )
  {
    v2 = (__m128i *)sub_186B270(0x68u);
    sub_596B20(v2, a1);
    sub_4C8680(a1, (__int64)v2);
    return (__int64 *)v2;
  }
  return result;
}

