__int64 __fastcall find_data(unsigned __int64 a1, __int16 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  _QWORD *v6; // r13
  unsigned __int64 v7; // rdx
  __int64 v9; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v10[7]; // [rsp+10h] [rbp-38h] BYREF

  v10[1] = __readfsqword(0x28u);
  v6 = *(_QWORD **)(qword_2CCB598 + 1672);
  if ( (a2 & 0x800) != 0 )
    callui(9, 0, (int)&v9, (int)v10, (int)&callui, a6);
  v7 = -(__int64)(a2 & 1);
  if ( (a2 & 1) != 0 )
    return sub_3C1900(v6, a1, v7, (__int64 (__fastcall **)(_QWORD, __int128 *, __int64))sub_6759E0, nullptr);
  else
    return sub_3C19F0(
             (__int64 (__fastcall **)(_QWORD, __int128 *, __int64))v6,
             a1,
             v7,
             (__int64 (__fastcall **)(_QWORD, __int128 *, __int64))sub_6759E0,
             nullptr);
}
