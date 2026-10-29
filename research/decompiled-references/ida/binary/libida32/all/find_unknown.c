__int64 __fastcall find_unknown(unsigned int a1, __int16 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  char v6; // bl
  __int64 v7; // rsi
  int v9; // [rsp+0h] [rbp-28h] BYREF
  int v10; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v11; // [rsp+8h] [rbp-20h]

  v6 = a2;
  v11 = __readfsqword(0x28u);
  if ( (a2 & 0x800) != 0 )
    callui(9, 0, (int)&v9, (int)&v10, (int)&callui, a6);
  v7 = -(a2 & 1);
  if ( (v6 & 1) != 0 )
    return next_that(a1, v7, 0, 0);
  else
    return prev_that(a1, v7, 0, 0);
}

