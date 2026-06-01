void __fastcall sub_E3BA00(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v6; // rsi
  size_t v7; // rax
  __m128i v8; // [rsp+0h] [rbp-68h] BYREF
  __int64 v9; // [rsp+10h] [rbp-58h] BYREF
  _BYTE v10[72]; // [rsp+20h] [rbp-48h] BYREF

  if ( ((*(_BYTE *)a2 | (unsigned __int8)(*a2 >> 1)) & 1) == 0 )
  {
    v6 = sub_6E4DB0(a2, (__int64)(a2 - 12), *a2, a4, a5, a6);
    if ( v6 )
    {
      sub_E3A830(&v8, (unsigned __int64)v6);
      sub_E35650((__int64)v10, &v8);
      v7 = j__strlen("previousDecl");
      sub_2206E30(a1 + 1048, "previousDecl", v7);
      sub_2208D80(a1 + 1048, v10);
      sub_2205EB0(a1 + 1048);
      sub_2207560(v10);
      if ( (__int64 *)v8.m128i_i64[0] != &v9 )
        operator delete((void *)v8.m128i_i64[0]);
    }
  }
}

