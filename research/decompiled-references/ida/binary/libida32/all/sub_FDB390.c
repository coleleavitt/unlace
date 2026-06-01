unsigned __int64 __fastcall sub_FDB390(int a1)
{
  unsigned __int64 result; // rax

  result = 1;
  if ( ((a1 - 102) & 0xFFFFFFFD) != 0 )
  {
    result = 0;
    if ( (unsigned int)(a1 - 39) <= 0x1E )
      return (0x40800001uLL >> ((unsigned __int8)a1 - 39)) & 1;
  }
  return result;
}

