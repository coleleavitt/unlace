__int64 __fastcall tag_strlen(char *a1)
{
  char *v1; // rdx
  __int64 v2; // rbx
  int utf8_char; // eax
  char v5; // al
  char *v6; // rcx
  char *v7; // [rsp+8h] [rbp-20h] BYREF

  v7 = a1;
  if ( !a1 )
    return -1;
  v1 = a1;
  v2 = 0;
LABEL_3:
  while ( 2 )
  {
    while ( *v1 < 0 )
    {
      utf8_char = get_utf8_char(&v7);
      v1 = v7;
      if ( utf8_char == -1 )
LABEL_9:
        v7 = ++v1;
      ++v2;
    }
    switch ( *v1 )
    {
      case 0:
        return v2;
      case 1:
        v5 = v1[1];
        v6 = v1 + 8;
        if ( v5 != 40 )
          goto LABEL_11;
        break;
      case 2:
        if ( !v1[1] )
          return v2;
        goto LABEL_12;
      case 3:
        if ( !v1[1] )
          return v2;
        v1 += 2;
        ++v2;
        v7 = v1;
        continue;
      case 4:
        v7 = ++v1;
        continue;
      default:
        goto LABEL_9;
    }
    break;
  }
  while ( *v1 )
  {
    if ( v1 + 1 == v6 )
    {
      v7 = v6;
      if ( *v6 )
      {
        v5 = v1[2];
        v1 = v6;
LABEL_11:
        if ( v5 )
        {
LABEL_12:
          v1 += 2;
          v7 = v1;
          goto LABEL_3;
        }
      }
      return v2;
    }
    ++v1;
  }
  return v2;
}

