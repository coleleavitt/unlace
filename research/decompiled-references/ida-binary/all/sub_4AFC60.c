_WORD *__fastcall sub_4AFC60(_WORD *a1, _WORD *a2)
{
  _WORD *i; // rdx
  _WORD *result; // rax

  if ( a1 == a2 )
    return a1;
  do
  {
    result = a1++;
    if ( a2 == a1 )
      return a2;
  }
  while ( *(a1 - 1) != result[1] );
  if ( a2 != result )
  {
    for ( i = result + 2; a2 != i; ++i )
    {
      if ( *result != *i )
      {
        result[1] = *i;
        ++result;
      }
    }
    ++result;
  }
  return result;
}
