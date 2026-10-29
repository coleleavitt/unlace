void __fastcall sub_E5EFA0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  size_t v3; // rax
  __m128i v4; // [rsp+0h] [rbp-68h] BYREF
  __int64 v5; // [rsp+10h] [rbp-58h] BYREF
  _BYTE v6[72]; // [rsp+20h] [rbp-48h] BYREF

  if ( *(char *)(a2 + 29) < 0 )
  {
    v2 = sub_B72720(a2);
    if ( a2 != v2 )
    {
      sub_E5E570(&v4, v2);
      sub_E59390((__int64)v6, &v4);
      v3 = j__strlen("firstRedecl");
      sub_222AB70(a1 + 1048, "firstRedecl", v3);
      sub_222CAC0(a1 + 1048, v6);
      sub_2229BF0(a1 + 1048);
      sub_222B2A0(v6);
      if ( (__int64 *)v4.m128i_i64[0] != &v5 )
        operator delete((void *)v4.m128i_i64[0]);
    }
  }
}
