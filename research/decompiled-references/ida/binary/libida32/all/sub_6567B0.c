unsigned __int64 __fastcall sub_6567B0(_QWORD *a1, int a2)
{
  int v3; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v4; // [rsp+8h] [rbp-10h]

  v4 = __readfsqword(0x28u);
  v3 = sub_3B90A0(a1, a2);
  sub_79BB90(&v3, *a1, 0x4000, 83);
  return v4 - __readfsqword(0x28u);
}

