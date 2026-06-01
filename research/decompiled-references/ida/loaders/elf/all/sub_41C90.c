__int64 __fastcall sub_41C90(__int64 a1, unsigned __int16 a2, __int16 a3)
{
  __int64 result; // rax
  __int64 v4; // rcx

  result = 2;
  if ( a2 == 0xFFF1 )
    return result;
  result = 1;
  if ( a2 == 0xFFF2 )
    return result;
  if ( !a2 )
  {
    if ( a3 != 6 )
      return 0;
    return 3;
  }
  result = 4;
  if ( a2 > 0xFEFFu )
  {
    v4 = 0;
    while ( *(_WORD *)(a1 + 2 * v4 + 328) != a2 )
    {
      if ( ++v4 == 4 )
        return 4;
    }
    result = (unsigned int)v4;
    if ( a3 == 6 && !(_DWORD)v4 )
      return 3;
  }
  return result;
}

