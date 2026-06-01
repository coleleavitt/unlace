unsigned __int8 *__fastcall qstrlwr(unsigned __int8 *a1)
{
  int v2; // edi
  unsigned __int8 *v3; // rbx

  if ( a1 )
  {
    v2 = *a1;
    if ( (_BYTE)v2 )
    {
      v3 = a1;
      do
      {
        *v3++ = tolower(v2);
        v2 = *v3;
      }
      while ( (_BYTE)v2 );
    }
  }
  return a1;
}

