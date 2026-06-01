_WORD *__fastcall qstrrchr(_WORD *a1, __int16 a2)
{
  _WORD *result; // rax

  for ( result = a1; *result; ++result )
    ;
  if ( a2 )
  {
    while ( result != a1 )
    {
      if ( *--result == a2 )
        return result;
    }
    return nullptr;
  }
  return result;
}
