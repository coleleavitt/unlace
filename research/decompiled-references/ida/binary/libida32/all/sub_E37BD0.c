__int64 __fastcall sub_E37BD0(__int64 a1, __int64 a2)
{
  const char *v2; // rax
  __int64 v3; // rdx
  _BYTE v5[72]; // [rsp+0h] [rbp-48h] BYREF

  v2 = sub_E34B10(a2);
  sub_E35AF0((__int64)v5, (__int64)v2, v3);
  sub_2206E30(a1 + 1048, "name", 4);
  sub_2208D80(a1 + 1048, v5);
  sub_2205EB0(a1 + 1048);
  return sub_2207560(v5);
}

