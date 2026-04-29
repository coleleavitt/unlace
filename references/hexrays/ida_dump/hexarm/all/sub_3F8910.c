unsigned __int64 __fastcall sub_3F8910(__int64 a1, unsigned int a2, int a3, int a4, int a5)
{
  _DWORD v6[4]; // [rsp+0h] [rbp-48h] BYREF
  _DWORD v7[6]; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v8; // [rsp+28h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  v6[2] = a3;
  v7[2] = a4;
  v6[0] = 1;
  v6[1] = a5;
  v7[0] = 1;
  v7[1] = a5 / 2;
  sub_3F86E0(a1, a2, (unsigned __int8 *)v6, nullptr, (__int64)v7);
  sub_11C7E0((__int64)v7);
  sub_11C7E0((__int64)v6);
  return v8 - __readfsqword(0x28u);
}
