__int64 __fastcall sub_6767A0(_QWORD *a1, unsigned __int64 a2, __int16 a3, __int64 a4, __int64 a5, int a6)
{
  char v6; // bl
  unsigned __int64 v7; // rdx
  __int64 v9; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v10[7]; // [rsp+10h] [rbp-38h] BYREF

  v6 = a3;
  v10[1] = __readfsqword(0x28u);
  if ( (a3 & 0x800) != 0 )
    callui(9, 0, (int)&v9, (int)v10, (int)&callui, a6);
  v7 = -(__int64)(a3 & 1);
  if ( (v6 & 1) != 0 )
    return sub_3C1900(a1, a2, v7, (__int64 (__fastcall **)(_QWORD, __int128 *, __int64))sub_39FD10, nullptr);
  else
    return sub_3C19F0(
             (__int64 (__fastcall **)(_QWORD, __int128 *, __int64))a1,
             a2,
             v7,
             (__int64 (__fastcall **)(_QWORD, __int128 *, __int64))sub_39FD10,
             nullptr);
}
