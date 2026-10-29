unsigned __int64 __fastcall sub_895CA0(__int64 **a1, unsigned int a2, __int64 a3, int a4)
{
  _QWORD v5[3]; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v6; // [rsp+18h] [rbp-10h]

  v6 = __readfsqword(0x28u);
  v5[1] = a3;
  v5[0] = off_2B13F38;
  sub_895AA0(a1, a2, a4, (__int64)v5, 1, 0);
  return v6 - __readfsqword(0x28u);
}

