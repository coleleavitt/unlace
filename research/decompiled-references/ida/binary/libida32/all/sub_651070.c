__int64 __fastcall sub_651070(__int64 a1)
{
  __int64 result; // rax

  if ( (~(_WORD)a1 & 0x600) == 0 )
  {
    if ( (int)a1 < 0 )
      return 1;
    return is_off(a1, 15);
  }
  result = 0;
  if ( (a1 & 0x400) != 0 )
    return is_off(a1, 15);
  return result;
}

