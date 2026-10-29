_BYTE *__fastcall sub_228B1B0(_BYTE *a1, unsigned __int64 a2, unsigned int a3)
{
  _BYTE *result; // rax
  char v4; // cl
  _BYTE *v5; // rcx
  char v6; // di

  result = a1;
  if ( a2 > 2 && *a1 == 46 )
  {
    do
    {
      v4 = result[1];
      if ( v4 != 47 && (v4 != 92 || a3 <= 1) )
        break;
      v5 = result + 2;
      result += a2;
      while ( 1 )
      {
        v6 = *v5;
        a2 = result - v5;
        if ( *v5 != 47 && (a3 <= 1 || v6 != 92) )
          break;
        if ( result == ++v5 )
          return result;
      }
      result = v5;
      if ( a2 <= 2 )
        break;
    }
    while ( v6 == 46 );
  }
  return result;
}
