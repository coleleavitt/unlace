void __fastcall sub_E3B260(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  size_t v3; // rax
  __m128i v4; // [rsp+0h] [rbp-68h] BYREF
  __int64 v5; // [rsp+10h] [rbp-58h] BYREF
  _BYTE v6[72]; // [rsp+20h] [rbp-48h] BYREF

  if ( *(char *)(a2 + 29) < 0 )
  {
    v2 = sub_B4E9E0(a2);
    if ( a2 != v2 )
    {
      sub_E3A830(&v4, v2);
      sub_E35650((__int64)v6, &v4);
      v3 = j__strlen("firstRedecl");
      sub_2206E30(a1 + 1048, "firstRedecl", v3);
      sub_2208D80(a1 + 1048, v6);
      sub_2205EB0(a1 + 1048);
      sub_2207560(v6);
      if ( (__int64 *)v4.m128i_i64[0] != &v5 )
        operator delete((void *)v4.m128i_i64[0]);
    }
  }
}

