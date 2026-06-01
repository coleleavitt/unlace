unsigned __int64 __fastcall sub_B4C0(unsigned __int16 a1)
{
  unsigned __int64 result; // rax

  if ( a1 <= 0x80u )
  {
    if ( a1 > 0x61u )
      return (0x40100001uLL >> ((unsigned __int8)a1 - 98)) & 1;
    else
      return 0;
  }
  else
  {
    result = 0;
    if ( (unsigned __int16)(a1 - 163) < 0x3Cu )
      return (0x800000080000087uLL >> ((unsigned __int8)a1 + 93)) & 1;
  }
  return result;
}

