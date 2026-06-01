unsigned __int64 __fastcall sub_58D620(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v3; // rax
  unsigned __int64 result; // rax

  if ( a3 == 1 )
  {
    result = -1;
    if ( a2 > 3 )
      return result;
    result = a2 + 1;
  }
  else
  {
    v3 = 4;
    if ( a2 <= 4 )
      v3 = a2;
    result = v3 - 1;
    if ( a3 != 2 )
      result = a2;
  }
  if ( result >= 4 )
    return -1;
  return result;
}

