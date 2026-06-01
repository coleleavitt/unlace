unsigned __int64 __fastcall sub_5B18C0(__int64 a1, char *a2, int a3, int a4, char a5)
{
  _DWORD v6[2]; // [rsp+0h] [rbp-18h] BYREF
  unsigned __int64 v7; // [rsp+8h] [rbp-10h]

  v7 = __readfsqword(0x28u);
  v6[0] = a3;
  v6[1] = a4;
  sub_5B1640(a1, a2, (void (__fastcall *)(_QWORD, _QWORD, __int64))sub_5A9CA0, (__int64)v6, a5);
  return v7 - __readfsqword(0x28u);
}

