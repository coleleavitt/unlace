unsigned __int64 __fastcall sub_55340(__int64 a1)
{
  unsigned __int64 v2; // [rsp+18h] [rbp-C0h]

  v2 = __readfsqword(0x28u);
  callui(24);
  *(_BYTE *)(a1 + 856) = 1;
  return v2 - __readfsqword(0x28u);
}
