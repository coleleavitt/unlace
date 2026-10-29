unsigned __int64 sub_1A02C0()
{
  _QWORD v1[3]; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v2; // [rsp+18h] [rbp-10h]

  v2 = __readfsqword(0x28u);
  v1[1] = 0;
  v1[2] = 0;
  v1[0] = off_236680;
  sub_175F50((__int64)v1, 0, 0);
  v1[0] = &off_236C80;
  qsem_free();
  return v2 - __readfsqword(0x28u);
}

