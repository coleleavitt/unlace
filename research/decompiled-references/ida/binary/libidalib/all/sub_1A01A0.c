unsigned __int64 __fastcall sub_1A01A0(__int64 a1)
{
  _QWORD v2[5]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v3; // [rsp+28h] [rbp-10h]

  v3 = __readfsqword(0x28u);
  v2[3] = a1;
  v2[1] = 0;
  v2[2] = 0;
  v2[0] = off_236630;
  sub_175F50((__int64)v2, 0, 0);
  v2[0] = &off_236C80;
  qsem_free();
  return v3 - __readfsqword(0x28u);
}

