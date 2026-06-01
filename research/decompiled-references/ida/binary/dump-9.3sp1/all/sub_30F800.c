unsigned __int64 __fastcall sub_30F800(__int64 a1)
{
  _QWORD v2[5]; // [rsp+0h] [rbp-68h] BYREF
  _QWORD v3[2]; // [rsp+28h] [rbp-40h] BYREF
  int v4; // [rsp+38h] [rbp-30h]
  unsigned __int64 v5; // [rsp+48h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  v2[0] = off_4E2E78;
  memset(&v2[1], 0, 32);
  v3[0] = 0xFFFFFFFF00000000LL;
  v3[1] = 0;
  v4 = -8192;
  sub_11FC20(a1, (__int64)v2);
  v2[0] = off_4E2E78;
  sub_11CDA0((__int64)v3);
  return v5 - __readfsqword(0x28u);
}
