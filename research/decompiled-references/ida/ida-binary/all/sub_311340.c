unsigned __int64 __fastcall sub_311340(__int64 a1, __int64 a2)
{
  __int64 v3; // [rsp+0h] [rbp-18h] BYREF
  unsigned __int64 v4; // [rsp+8h] [rbp-10h]

  v4 = __readfsqword(0x28u);
  sub_17D780(&v3, a2);
  sub_17D800(&v3);
  return v4 - __readfsqword(0x28u);
}
