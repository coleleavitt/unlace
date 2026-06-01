__int64 __fastcall sub_10124F0(__int64 a1, unsigned int a2)
{
  __int64 result; // rax

  result = 1;
  if ( a2 <= 0x15 )
  {
    result = 0;
    if ( ((1LL << a2) & 0x23E991) == 0 )
      return (unsigned int)(((1LL << a2) & 0xE) != 0) + 1;
  }
  return result;
}

