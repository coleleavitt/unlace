__int64 __fastcall sub_E375B0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  bool v3; // zf
  const char *v4; // rsi
  _BYTE v6[72]; // [rsp+0h] [rbp-48h] BYREF

  v2 = a1 + 1048;
  sub_E374F0(a1, a2);
  v3 = *(_BYTE *)(a2 + 92) == 0;
  v4 = "cbuffer";
  if ( v3 )
    v4 = "tbuffer";
  sub_E35AF0((__int64)v6, (__int64)v4, 7);
  sub_2206E30(v2, "bufferKind", 10);
  sub_2208D80(v2, v6);
  sub_2205EB0(v2);
  return sub_2207560(v6);
}

