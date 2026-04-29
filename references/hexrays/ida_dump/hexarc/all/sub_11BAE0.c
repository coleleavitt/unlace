__int64 __fastcall sub_11BAE0(__int64 a1, __int64 a2, int a3, __int16 a4, int a5)
{
  _QWORD v6[2]; // [rsp+0h] [rbp-28h] BYREF
  int v7; // [rsp+10h] [rbp-18h]
  int v8; // [rsp+14h] [rbp-14h]
  unsigned __int64 v9; // [rsp+18h] [rbp-10h]

  v9 = __readfsqword(0x28u);
  v6[1] = a2;
  v6[0] = &off_4AA120;
  v7 = a3;
  v8 = a5;
  return sub_11B6F0(a1, (__int64)v6, a4);
}
