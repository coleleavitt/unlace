__int64 __fastcall sub_1704C30(_WORD *s1, size_t n, __int64 a3, char a4)
{
  __int64 result; // rax
  int v7; // edx
  int v8; // edx
  int v9; // edx
  size_t v10; // rdx
  int v11; // edx
  int v12; // edx
  size_t v13; // rdx

  if ( n != 3 )
  {
    if ( j__strlen("NULL") != n )
    {
      if ( j__strlen("Nil") != n )
        goto LABEL_5;
      if ( n )
        goto LABEL_20;
      return a4 == 0 ? 65 : 32;
    }
    if ( !n )
      return a4 == 0 ? 65 : 32;
LABEL_18:
    if ( memcmp(s1, "NULL", n) )
    {
      if ( n != j__strlen("Nil") )
        goto LABEL_5;
      goto LABEL_20;
    }
    return a4 == 0 ? 65 : 32;
  }
  if ( *s1 == 26990 && *((_BYTE *)s1 + 2) == 108 )
    return a4 == 0 ? 65 : 32;
  if ( j__strlen("NULL") == 3 )
    goto LABEL_18;
  if ( j__strlen("Nil") != 3 )
  {
LABEL_5:
    if ( j__strlen("YES") != n )
      goto LABEL_6;
    result = 65;
    if ( !n )
      return result;
    goto LABEL_30;
  }
LABEL_20:
  if ( !memcmp(s1, "Nil", n) )
    return a4 == 0 ? 65 : 32;
  if ( n != j__strlen("YES") )
  {
LABEL_6:
    if ( n == j__strlen("NO") )
    {
      result = 65;
      if ( !n )
        return result;
      goto LABEL_8;
    }
    goto LABEL_32;
  }
LABEL_30:
  v12 = memcmp(s1, "YES", n);
  result = 65;
  if ( !v12 )
    return result;
  if ( n == j__strlen("NO") )
  {
LABEL_8:
    v7 = memcmp(s1, "NO", n);
    result = 65;
    if ( !v7 )
      return result;
    if ( n == j__strlen("true") )
      goto LABEL_10;
    goto LABEL_35;
  }
LABEL_32:
  if ( n == j__strlen("true") )
  {
    result = 65;
    if ( !n )
      return result;
LABEL_10:
    v8 = memcmp(s1, "true", n);
    result = 65;
    if ( !v8 )
      return result;
    if ( n == j__strlen("false") )
    {
LABEL_12:
      v9 = memcmp(s1, "false", n);
      result = 65;
      if ( v9 )
      {
        v10 = j__strlen("bool");
        result = 70;
        if ( n == v10 )
        {
LABEL_14:
          v11 = memcmp(s1, "bool", n);
          result = 70;
          if ( v11 )
            return result;
          return (unsigned int)((*(_BYTE *)(a3 + 2) & 4) != 0) + 50;
        }
      }
      return result;
    }
    goto LABEL_36;
  }
LABEL_35:
  if ( n == j__strlen("false") )
  {
    result = 65;
    if ( !n )
      return result;
    goto LABEL_12;
  }
LABEL_36:
  v13 = j__strlen("bool");
  result = 70;
  if ( n == v13 )
  {
    if ( !n )
      return (unsigned int)((*(_BYTE *)(a3 + 2) & 4) != 0) + 50;
    goto LABEL_14;
  }
  return result;
}
