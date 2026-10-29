void __fastcall sub_E5C700(__int64 a1, __int64 a2)
{
  __m128i v2; // [rsp+0h] [rbp-68h] BYREF
  __int64 v3; // [rsp+10h] [rbp-58h] BYREF
  _BYTE v4[72]; // [rsp+20h] [rbp-48h] BYREF

  sub_BF83A0(&v2, a2);
  sub_E59390((__int64)v4, &v2);
  sub_222AB70(a1 + 1048, "value", 5);
  sub_222CAC0(a1 + 1048, v4);
  sub_2229BF0(a1 + 1048);
  sub_222B2A0(v4);
  if ( (__int64 *)v2.m128i_i64[0] != &v3 )
    operator delete((void *)v2.m128i_i64[0]);
}
