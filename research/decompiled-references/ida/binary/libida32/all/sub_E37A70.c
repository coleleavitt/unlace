void __fastcall sub_E37A70(__int64 a1, __int64 a2)
{
  __m128i v2; // [rsp+0h] [rbp-68h] BYREF
  __int64 v3; // [rsp+10h] [rbp-58h] BYREF
  _BYTE v4[72]; // [rsp+20h] [rbp-48h] BYREF

  sub_E34A40(&v2, (*(_BYTE *)(a2 + 29) >> 5) & 3);
  sub_E35650((__int64)v4, &v2);
  sub_2206E30(a1 + 1048, "access", 6);
  sub_2208D80(a1 + 1048, v4);
  sub_2205EB0(a1 + 1048);
  sub_2207560(v4);
  if ( (__int64 *)v2.m128i_i64[0] != &v3 )
    operator delete((void *)v2.m128i_i64[0]);
}

