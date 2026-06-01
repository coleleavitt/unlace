unsigned __int64 sub_19F740()
{
  _QWORD v1[3]; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v2; // [rsp+18h] [rbp-10h]

  v2 = __readfsqword(0x28u);
  v1[1] = 0;
  v1[2] = 0;
  v1[0] = off_2356A8;
  sub_175450((__int64)v1, 0, 0);
  v1[0] = &off_235C80;
  qsem_free();
  return v2 - __readfsqword(0x28u);
}

