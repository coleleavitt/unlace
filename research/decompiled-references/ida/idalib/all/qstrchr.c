__int16 *__fastcall qstrchr(__int16 *a1, __int16 a2)
{
  __int16 v2; // ax

  v2 = *a1;
  if ( a2 == *a1 )
    return a1;
  while ( v2 )
  {
    v2 = a1[1];
    ++a1;
    if ( v2 == a2 )
      return a1;
  }
  return nullptr;
}
