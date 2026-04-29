unsigned __int64 __fastcall sub_224FA0(__int64 a1)
{
  _QWORD v2[5]; // [rsp+0h] [rbp-48h] BYREF
  char v3; // [rsp+28h] [rbp-20h]
  unsigned __int64 v4; // [rsp+38h] [rbp-10h]

  v4 = __readfsqword(0x28u);
  memset(&v2[1], 0, 32);
  v3 = 0;
  v2[0] = &off_4CC908;
  sub_11C170(a1, (__int64)v2);
  return v4 - __readfsqword(0x28u);
}
