__int64 __fastcall sub_A1E000(_BYTE *s1, size_t n, char a3)
{
  _BOOL4 v3; // r12d
  int v5; // esi
  char *v6; // rsi
  char v7; // dl
  char v9; // al
  char v10; // al

  v3 = 1;
  if ( !n )
    return v3;
  v5 = (char)*s1;
  if ( *s1 == 32 )
  {
    if ( !a3 )
      goto LABEL_4;
  }
  else
  {
    if ( (unsigned __int8)(v5 - 9) > 4u )
    {
      v10 = s1[n - 1];
      if ( v10 != 32 )
        v3 = (unsigned __int8)(v10 - 9) <= 4u;
    }
    if ( !a3 )
      goto LABEL_21;
  }
  if ( n == j__strlen("null") && !memcmp(s1, "null", n)
    || n == j__strlen("Null") && !memcmp(s1, "Null", n)
    || n == j__strlen("NULL") && !memcmp(s1, "NULL", n)
    || n == j__strlen("~") && !memcmp(s1, "~", n) )
  {
    v3 = 1;
  }
  if ( n == j__strlen("true") && !memcmp(s1, "true", n)
    || n == j__strlen("True") && !memcmp(s1, "True", n)
    || n == j__strlen("TRUE") && !memcmp(s1, "TRUE", n)
    || n == j__strlen("false") && !memcmp(s1, "false", n)
    || n == j__strlen("False") && !memcmp(s1, "False", n)
    || n == j__strlen("FALSE") && !memcmp(s1, "FALSE", n) )
  {
    v3 = 1;
  }
  v9 = sub_A1DAF0(s1, n);
  v5 = (char)*s1;
  if ( v9 )
    v3 = 1;
LABEL_21:
  if ( strchr("-?:\\,[]{}#&*!|>'\"%@`", v5) )
    v3 = 1;
LABEL_4:
  v6 = &s1[n];
  if ( &s1[n] != s1 )
  {
    while ( 1 )
    {
      v7 = *s1;
      if ( (unsigned __int8)((*s1 & 0xDF) - 65) <= 0x19u || (unsigned __int8)(v7 - 48) <= 9u )
        goto LABEL_9;
      if ( v7 > 46 )
        break;
      if ( v7 >= 44 )
        goto LABEL_9;
      if ( v7 == 10 )
        return 2;
      if ( v7 <= 10 )
      {
        if ( v7 == 9 )
          goto LABEL_9;
        goto LABEL_7;
      }
      if ( v7 == 13 )
        return 2;
      if ( v7 != 32 )
        goto LABEL_7;
LABEL_9:
      if ( v6 == ++s1 )
        return v3;
    }
    if ( v7 >= 94 )
    {
      if ( v7 <= 95 )
        goto LABEL_9;
      if ( v7 == 127 )
        return 2;
    }
LABEL_7:
    if ( v7 <= 31 )
      return 2;
    v3 = 1;
    goto LABEL_9;
  }
  return v3;
}

