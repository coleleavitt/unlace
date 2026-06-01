unsigned __int64 __fastcall sub_5CC740(__int64 a1, unsigned __int64 *a2, __int64 a3, __int64 a4, char a5)
{
  _QWORD v6[3]; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v7; // [rsp+18h] [rbp-10h]

  v7 = __readfsqword(0x28u);
  v6[0] = a3;
  v6[1] = a4;
  sub_5CC490(a1, a2, (void (__fastcall *)(unsigned __int64, unsigned __int64, __int64))sub_5C41F0, (__int64)v6, a5);
  return v7 - __readfsqword(0x28u);
}
