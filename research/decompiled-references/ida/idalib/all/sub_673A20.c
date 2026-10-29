unsigned __int64 __fastcall sub_673A20(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v3; // [rsp+0h] [rbp-18h] BYREF
  unsigned __int64 v4; // [rsp+8h] [rbp-10h]

  v4 = __readfsqword(0x28u);
  v3 = sub_3BDD60(a1, a2);
  sub_7BEF80(&v3, *a1, 24576, 83);
  return v4 - __readfsqword(0x28u);
}
