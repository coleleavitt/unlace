__int64 __fastcall sub_895BF0(__int64 **a1, unsigned int a2, int a3, __int64 a4, int a5)
{
  _QWORD v6[2]; // [rsp+0h] [rbp-28h] BYREF
  int v7; // [rsp+10h] [rbp-18h]
  unsigned __int64 v8; // [rsp+18h] [rbp-10h]

  v8 = __readfsqword(0x28u);
  v6[1] = a4;
  v7 = a5;
  v6[0] = off_2B13EE8;
  return sub_895AA0(a1, a2, a3, (__int64)v6, 0, 0);
}

