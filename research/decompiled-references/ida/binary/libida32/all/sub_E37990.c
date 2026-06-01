__int64 __fastcall sub_E37990(__int64 a1, __int64 a2)
{
  char v3; // cl
  char *v4; // rsi
  size_t v5; // rdx
  _BYTE v7[88]; // [rsp+0h] [rbp-58h] BYREF

  v3 = *(_BYTE *)(a2 + 49) >> 5;
  if ( v3 == 1 )
  {
    v4 = (char *)"C";
    v5 = j__strlen("C");
  }
  else if ( v3 == 2 )
  {
    v4 = "C++";
    v5 = j__strlen("C++");
  }
  else
  {
    v4 = nullptr;
    v5 = 0;
  }
  sub_E35AF0((__int64)v7, (__int64)v4, v5);
  sub_2206E30(a1 + 1048, "language", 8);
  sub_2208D80(a1 + 1048, v7);
  sub_2205EB0(a1 + 1048);
  sub_2207560(v7);
  return sub_E35E50(a1, (__int64)"hasBraces", 9, *(_BYTE *)(a2 + 50) & 1);
}

