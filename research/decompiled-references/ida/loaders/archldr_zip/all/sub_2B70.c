unsigned __int64 __fastcall sub_2B70(__int64 a1)
{
  unsigned __int64 v2; // [rsp+18h] [rbp-C0h]

  v2 = __readfsqword(0x28u);
  callui(24, 9, a1);
  return v2 - __readfsqword(0x28u);
}

