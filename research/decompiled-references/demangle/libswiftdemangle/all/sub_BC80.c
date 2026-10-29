unsigned __int64 __fastcall sub_BC80(unsigned __int16 a1)
{
  unsigned __int64 result; // rax

  if ( a1 > 0xAAu )
  {
    if ( a1 > 0xF6u )
    {
      if ( (unsigned __int16)(a1 - 297) <= 0x21u )
        return (0x200000801uLL >> ((unsigned __int8)a1 - 41)) & 1;
    }
    else if ( a1 > 0xC0u )
    {
      return (0x24C0006001C801uLL >> ((unsigned __int8)a1 + 63)) & 1;
    }
    return 0;
  }
  if ( a1 > 0x6Eu )
    return (0xF01C01F80100301uLL >> ((unsigned __int8)a1 - 111)) & 1;
  if ( a1 <= 0x1Eu )
    return (0x54400003uLL >> a1) & 1;
  result = 0;
  if ( (unsigned __int16)(a1 - 47) < 0x37u )
    return (0x65000004300803uLL >> ((unsigned __int8)a1 - 47)) & 1;
  return result;
}
