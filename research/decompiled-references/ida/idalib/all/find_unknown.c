__int64 __fastcall find_unknown(unsigned __int64 a1, __int16 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  char v6; // bl
  unsigned __int64 v7; // rsi
  __int64 v9; // [rsp+8h] [rbp-30h] BYREF
  _QWORD v10[5]; // [rsp+10h] [rbp-28h] BYREF

  v6 = a2;
  v10[1] = __readfsqword(0x28u);
  if ( (a2 & 0x800) != 0 )
    callui(9, 0, (int)&v9, (int)v10, (int)&callui, a6);
  v7 = -(__int64)(a2 & 1);
  if ( (v6 & 1) != 0 )
    return next_that(a1, v7, 0, 0);
  else
    return prev_that(a1, v7, nullptr, nullptr);
}
