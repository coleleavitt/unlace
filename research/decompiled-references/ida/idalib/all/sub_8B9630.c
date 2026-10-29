unsigned __int64 __fastcall sub_8B9630(__int64 **a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _QWORD v6[5]; // [rsp+0h] [rbp-28h] BYREF

  v6[3] = __readfsqword(0x28u);
  v6[1] = a4;
  v6[2] = a5;
  v6[0] = off_2B3DE88;
  return sub_8B94D0(a1, a2, a3, (__int64)v6, 0, 0);
}
