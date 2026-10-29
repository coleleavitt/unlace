__int64 __fastcall sub_E3B310(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // r13
  size_t v4; // rax
  __int64 v5; // rax
  size_t v6; // rax
  size_t v7; // rax
  __int64 result; // rax
  const char *v9; // rsi
  size_t v10; // rax
  size_t v11; // rax
  __m128i v12; // [rsp+0h] [rbp-78h] BYREF
  _BYTE v13[16]; // [rsp+10h] [rbp-68h] BYREF
  __int16 v14; // [rsp+20h] [rbp-58h] BYREF
  bool v15; // [rsp+28h] [rbp-50h]

  v2 = a1 + 1048;
  v3 = a2[3];
  if ( v3 && *(_QWORD *)(v3 + 40) )
  {
    sub_B62CC0((__int64)&v12, (__int64 *)(v3 + 40));
  }
  else
  {
    v12.m128i_i64[0] = (__int64)v13;
    v11 = j__strlen(&byte_22CD811);
    sub_E348C0(&v12, &byte_22CD811, (__int64)(&byte_22CD811 + v11));
  }
  sub_E35650((__int64)&v14, &v12);
  v4 = j__strlen("name");
  sub_2206E30(v2, "name", v4);
  sub_2208D80(v2, &v14);
  sub_2205EB0(v2);
  sub_2207560(&v14);
  if ( (_BYTE *)v12.m128i_i64[0] != v13 )
    operator delete((void *)v12.m128i_i64[0]);
  v5 = *a2;
  v14 = 1;
  v15 = (v5 & 0x80000) != 0;
  v6 = j__strlen("isArrow");
  sub_2206E30(v2, "isArrow", v6);
  sub_2208D80(v2, &v14);
  sub_2205EB0(v2);
  sub_2207560(&v14);
  sub_E3A830(&v12, v3);
  sub_E35650((__int64)&v14, &v12);
  v7 = j__strlen("referencedMemberDecl");
  sub_2206E30(v2, "referencedMemberDecl", v7);
  sub_2208D80(v2, &v14);
  sub_2205EB0(v2);
  sub_2207560(&v14);
  if ( (_BYTE *)v12.m128i_i64[0] != v13 )
    operator delete((void *)v12.m128i_i64[0]);
  result = *((_BYTE *)a2 + 3) & 3;
  if ( (_BYTE)result == 2 )
  {
    v9 = "constant";
  }
  else if ( (*((_BYTE *)a2 + 3) & 3) == 3 )
  {
    v9 = "discarded";
  }
  else
  {
    v9 = "unevaluated";
    if ( (_BYTE)result != 1 )
      return result;
  }
  sub_E35B80((__int64)&v14, v9);
  v10 = j__strlen("nonOdrUseReason");
  v12.m128i_i64[0] = (__int64)&v14;
  v12.m128i_i64[1] = a1 + 1048;
  sub_E34890(v2, (__int64)"nonOdrUseReason", v10, (__int64)sub_E34840, &v12);
  return sub_2207560(&v14);
}

