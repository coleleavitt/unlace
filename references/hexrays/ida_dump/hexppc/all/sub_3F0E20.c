unsigned __int64 __fastcall sub_3F0E20(__int64 a1, int a2, int a3)
{
  __int64 v4; // [rsp+0h] [rbp-48h] BYREF
  int v5; // [rsp+8h] [rbp-40h]
  __int64 v6; // [rsp+10h] [rbp-38h] BYREF
  int v7; // [rsp+18h] [rbp-30h]
  unsigned __int64 v8; // [rsp+28h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  v5 = a2;
  v7 = a3;
  v4 = 0x400000001LL;
  v6 = 0x800000001LL;
  sub_1D2850(a1, 67, (unsigned __int8 *)&v4, nullptr, (unsigned __int8 *)&v6);
  sub_119360((__int64)&v6);
  sub_119360((__int64)&v4);
  return v8 - __readfsqword(0x28u);
}
