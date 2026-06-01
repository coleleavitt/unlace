unsigned __int64 __fastcall sub_7BE690(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD v7[3]; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v8; // [rsp+18h] [rbp-10h]

  v8 = __readfsqword(0x28u);
  v7[1] = a6;
  v7[0] = &off_2B3A788;
  sub_7BE550(a1, a2, a3, a4, a5, (__int64)v7);
  return v8 - __readfsqword(0x28u);
}
