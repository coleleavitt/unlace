__int64 __fastcall sub_41FD80(__int64 a1, int a2, __int64 a3)
{
  int v4; // [rsp+0h] [rbp-38h] BYREF
  __int64 v5; // [rsp+8h] [rbp-30h]
  int v6; // [rsp+10h] [rbp-28h]
  int v7; // [rsp+14h] [rbp-24h]
  _QWORD v8[3]; // [rsp+18h] [rbp-20h] BYREF

  v4 = 2;
  v5 = 0;
  memset(v8, 0, sizeof(v8));
  LODWORD(v8[2]) = a2;
  v6 = 0;
  v7 = 1;
  LODWORD(v8[0]) = 4;
  v8[1] = a1;
  return sub_41FD20((__int64)&v4, a3);
}

