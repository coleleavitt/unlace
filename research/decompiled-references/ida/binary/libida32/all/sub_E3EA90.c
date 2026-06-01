void __fastcall sub_E3EA90(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rax
  size_t v5; // rax
  __m128i v6; // [rsp+0h] [rbp-68h] BYREF
  __int64 v7; // [rsp+10h] [rbp-58h] BYREF
  _QWORD v8[9]; // [rsp+20h] [rbp-48h] BYREF

  v2 = *a2;
  if ( (((unsigned __int8)*a2 | (unsigned __int8)(*a2 >> 1)) & 1) == 0 )
  {
    v3 = v2 & 0xFFFFFFFFFFFFFFFELL;
    v4 = v2 & 0xFFFFFFFFFFFFFFFCLL;
    if ( !v4 )
    {
      v8[0] = v3;
      v4 = sub_B57E30(v8);
    }
    if ( v4 )
    {
      sub_E3A830(&v6, v4);
      sub_E35650((__int64)v8, &v6);
      v5 = j__strlen("previousDecl");
      sub_2206E30(a1 + 1048, "previousDecl", v5);
      sub_2208D80(a1 + 1048, v8);
      sub_2205EB0(a1 + 1048);
      sub_2207560(v8);
      if ( (__int64 *)v6.m128i_i64[0] != &v7 )
        operator delete((void *)v6.m128i_i64[0]);
    }
  }
}

