unsigned __int64 __fastcall sub_726500(_WORD *a1, __int64 a2)
{
  size_t v3; // [rsp+0h] [rbp-18h] BYREF
  unsigned __int64 v4; // [rsp+8h] [rbp-10h]

  v4 = __readfsqword(0x28u);
  sub_725320(&v3, a1 + 1, 0x404u, a2);
  *a1 = v3;
  return v4 - __readfsqword(0x28u);
}

