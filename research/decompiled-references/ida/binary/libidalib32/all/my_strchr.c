_BYTE *__fastcall my_strchr(_BYTE *a1, char a2)
{
  while ( *a1 && a2 != *a1 )
    ++a1;
  if ( a2 == *a1 )
    return a1;
  else
    return nullptr;
}

