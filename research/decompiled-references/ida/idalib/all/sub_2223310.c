unsigned __int64 __fastcall sub_2223310(unsigned __int64 **a1)
{
  unsigned __int64 result; // rax
  unsigned __int64 *i; // rdx

  result = **a1;
  if ( !result || (result & 1) != 0 )
  {
    result &= ~1uLL;
    for ( i = *(unsigned __int64 **)(result + 8); i != (unsigned __int64 *)-1LL; i = *(unsigned __int64 **)(result + 8) )
    {
      if ( i && ((unsigned __int8)i & 1) == 0 )
        break;
      result += 8LL;
    }
    *a1 = i;
  }
  else
  {
    *a1 = (unsigned __int64 *)result;
  }
  return result;
}
