__int64 __fastcall sub_1B2897(int a1)
{
  _BYTE v4[152]; // [rsp+10h] [rbp-E0h] BYREF
  __int64 v5; // [rsp+A8h] [rbp-48h]

  *__errno_location() = 0;
  if ( sub_1B26A0(16, a1, 0, 0) && *__errno_location() )
    return 0;
  while ( (int)sub_1B286D(a1, nullptr, 0x40000000) < 0 )
  {
    if ( *__errno_location() != 4 )
    {
      sub_1B26A0(17, a1, 0, 0);
      return 0;
    }
  }
  if ( sub_1B26A0(12, a1, 0, (unsigned __int64)v4) != -1 && v5 )
    return 1;
  sub_1B26A0(17, a1, 0, 0);
  return 0;
}

