void __fastcall sub_E5B7B0(__int64 a1, __int64 a2)
{
  __m128i v2; // [rsp+0h] [rbp-68h] BYREF
  __int64 v3; // [rsp+10h] [rbp-58h] BYREF
  _BYTE v4[72]; // [rsp+20h] [rbp-48h] BYREF

  sub_E58780(&v2, (*(_BYTE *)(a2 + 29) >> 5) & 3);
  sub_E59390((__int64)v4, &v2);
  sub_222AB70(a1 + 1048, "access", 6);
  sub_222CAC0(a1 + 1048, v4);
  sub_2229BF0(a1 + 1048);
  sub_222B2A0(v4);
  if ( (__int64 *)v2.m128i_i64[0] != &v3 )
    operator delete((void *)v2.m128i_i64[0]);
}
