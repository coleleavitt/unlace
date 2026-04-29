unsigned __int64 __fastcall sub_30FBC0(__int64 a1)
{
  _QWORD v2[5]; // [rsp+0h] [rbp-68h] BYREF
  _QWORD v3[2]; // [rsp+28h] [rbp-40h] BYREF
  int v4; // [rsp+38h] [rbp-30h]
  unsigned __int64 v5; // [rsp+48h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  v2[0] = off_4DD538;
  memset(&v2[1], 0, 32);
  v3[0] = 0xFFFFFFFF00000000LL;
  v3[1] = 0;
  v4 = -8192;
  sub_11F660(a1, (__int64)v2);
  v2[0] = off_4DD538;
  sub_11C7E0((__int64)v3);
  return v5 - __readfsqword(0x28u);
}
