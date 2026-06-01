_BOOL8 __fastcall sub_D4D20(__int64 a1)
{
  if ( !dbg )
    return 0;
  if ( dword_25159C )
  {
    byte_2515A0 = 1;
    byte_251290 = 0;
    return 1;
  }
  else
  {
    return dword_2515A4 >= 0 || (int)sub_D46B0(*(_BYTE *)(a1 + 12), 0) > 0;
  }
}

