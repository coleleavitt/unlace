__int64 __fastcall sub_F9B380(unsigned int a1)
{
  __int64 result; // rax

  result = 0x100000440LL;
  if ( a1 != 4100 )
  {
    if ( a1 > 0x1004 )
    {
      result = 0x100000124LL;
      if ( a1 == 4910 )
        return result;
      result = 0x100000103LL;
      if ( a1 == 4996 )
        return result;
      return 0;
    }
    result = 0x100000226LL;
    if ( a1 != 4005 )
    {
      result = 0x100000386LL;
      if ( a1 != 4018 )
        return 0;
    }
  }
  return result;
}

