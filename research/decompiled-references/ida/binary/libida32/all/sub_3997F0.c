_BYTE *__fastcall sub_3997F0(_BYTE *a1, int *a2, int a3)
{
  int v3; // ecx
  int v5; // esi
  _BYTE *result; // rax
  int v7; // edi
  int v8; // r8d

  v3 = (char)*a1;
  if ( *a1 )
  {
    v5 = 0;
    if ( a3 > 10 )
    {
      result = a1;
      while ( 1 )
      {
        if ( (char)v3 > 96 )
        {
          LOBYTE(v3) = v3 - 32;
          v7 = (char)v3;
        }
        else
        {
          v7 = (char)v3;
          v8 = (char)v3;
          if ( (unsigned int)(char)v3 > 0x7F )
            goto LABEL_8;
          if ( (unsigned int)((char)v3 - 48) <= 9 )
            goto LABEL_13;
        }
        if ( v7 >= a3 + 55 || (char)v3 <= 64 )
          goto LABEL_8;
        v8 = (char)(v3 - 7);
LABEL_13:
        LOBYTE(v3) = *++result;
        v5 = v8 + a3 * v5 - 48;
        if ( !(_BYTE)v3 )
          goto LABEL_8;
      }
    }
    do
    {
      if ( (char)v3 <= 47 )
        break;
      if ( v3 >= a3 + 48 )
        break;
      ++a1;
      v5 = v3 + a3 * v5 - 48;
      v3 = (char)*a1;
    }
    while ( *a1 );
    result = a1;
  }
  else
  {
    result = a1;
    v5 = 0;
  }
LABEL_8:
  *a2 = v5;
  return result;
}

