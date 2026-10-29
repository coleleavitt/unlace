unsigned __int64 __fastcall sub_83C550(__int64 *a1)
{
  unsigned __int64 v2; // [rsp+18h] [rbp-C0h]

  v2 = __readfsqword(0x28u);
  sub_83C4C0(a1);
  return v2 - __readfsqword(0x28u);
}
