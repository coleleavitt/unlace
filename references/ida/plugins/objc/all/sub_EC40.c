unsigned __int64 __fastcall sub_EC40()
{
  unsigned __int64 v1; // [rsp+18h] [rbp-C0h]

  v1 = __readfsqword(0x28u);
  sub_EB60();
  return v1 - __readfsqword(0x28u);
}
