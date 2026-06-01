__int64 __fastcall sub_16B5B90(__int64 a1, int a2, int a3)
{
  __int64 v5; // [rsp+14h] [rbp-34h]

  LODWORD(v5) = sub_16B5B40(a1, a2);
  HIDWORD(v5) = sub_16B5B40(a1, a2 + a3 - 1) + 1;
  return v5;
}
