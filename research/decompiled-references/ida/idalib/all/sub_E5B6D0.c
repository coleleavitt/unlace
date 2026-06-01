__int64 __fastcall sub_E5B6D0(__int64 a1, __int64 a2)
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
  sub_E59830((__int64)v7, (__int64)v4, v5);
  sub_222AB70(a1 + 1048, "language", 8);
  sub_222CAC0(a1 + 1048, v7);
  sub_2229BF0(a1 + 1048);
  sub_222B2A0(v7);
  return sub_E59B90(a1, (__int64)"hasBraces", 9, *(_BYTE *)(a2 + 50) & 1);
}
