unsigned __int64 __fastcall sub_8B96E0(__int64 **a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD v5[3]; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v6; // [rsp+18h] [rbp-10h]

  v6 = __readfsqword(0x28u);
  v5[1] = a3;
  v5[0] = off_2B3DED8;
  sub_8B94D0(a1, a2, a4, (__int64)v5, 1, 0);
  return v6 - __readfsqword(0x28u);
}
