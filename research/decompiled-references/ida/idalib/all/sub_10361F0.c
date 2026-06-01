__int64 __fastcall sub_10361F0(__int64 a1, unsigned int a2)
{
  __int64 result; // rax

  result = 1;
  if ( a2 <= 0x15 )
  {
    result = 0;
    if ( ((1LL << a2) & 0x23C951) == 0 )
    {
      result = 1;
      if ( ((1LL << a2) & 0x2000) != 0 )
        return *(_BYTE *)(a1 + 641) ^ 1u;
    }
  }
  return result;
}
