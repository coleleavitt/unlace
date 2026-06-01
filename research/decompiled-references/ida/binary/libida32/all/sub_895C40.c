__int64 __fastcall sub_895C40(__int64 **a1, unsigned int a2, __int64 a3, int a4)
{
  _QWORD v6[5]; // [rsp+0h] [rbp-28h] BYREF

  v6[3] = __readfsqword(0x28u);
  v6[0] = off_2B13F10;
  v6[1] = a3;
  sub_895AA0(a1, a2, a4, (__int64)v6, 0, 0);
  return a3;
}

