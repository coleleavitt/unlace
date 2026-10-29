unsigned __int64 __fastcall sub_E5FF0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD v7[5]; // [rsp+0h] [rbp-48h] BYREF
  char v8; // [rsp+28h] [rbp-20h]
  __int64 v9; // [rsp+30h] [rbp-18h]
  unsigned __int64 v10; // [rsp+38h] [rbp-10h]

  v10 = __readfsqword(0x28u);
  memset(&v7[1], 0, 32);
  v8 = 0;
  v7[0] = off_4DC6A0;
  v9 = 0;
  ((void (__fastcall *)(__int64, _QWORD *, __int64, __int64, __int64, __int64))sub_11D770)(a1, v7, a3, a4, a5, a6);
  return v10 - __readfsqword(0x28u);
}
