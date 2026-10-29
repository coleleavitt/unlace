char **__fastcall sub_18170(int a1)
{
  char **result; // rax

  result = off_15FD60;
  while ( *((_DWORD *)result + 7) != a1 )
  {
    result += 9;
    if ( result == (char **)&qword_1611B0[7] )
    {
      if ( !byte_1671A1 )
        sub_96F80(2245);
      BUG();
    }
  }
  if ( *((_BYTE *)result + 64) )
  {
    if ( !byte_165A12 )
      return nullptr;
  }
  return result;
}

