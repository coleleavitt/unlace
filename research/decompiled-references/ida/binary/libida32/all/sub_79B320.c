unsigned __int64 __fastcall sub_79B320(const char *a1, unsigned int a2, unsigned int a3, int a4, int a5, __int64 a6)
{
  _QWORD v7[3]; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v8; // [rsp+18h] [rbp-10h]

  v8 = __readfsqword(0x28u);
  v7[1] = a6;
  v7[0] = &off_2B107E8;
  sub_79B1E0(a1, a2, a3, a4, a5, (__int64)v7);
  return v8 - __readfsqword(0x28u);
}

