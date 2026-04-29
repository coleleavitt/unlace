unsigned __int64 __fastcall sub_123D40(char *a1, int a2, int a3, __int64 a4, __int64 a5, int a6)
{
  _QWORD v9[3]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v10; // [rsp+18h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  v9[0] = 0xFFFFFFFF00000000LL;
  v9[1] = 0;
  sub_11E5D0((__int64)v9, a2, a5, a6, a4, 0);
  sub_123B10(a1, a2, a3, a4, (unsigned __int8 *)v9);
  sub_11A960((__int64)v9);
  return v10 - __readfsqword(0x28u);
}
