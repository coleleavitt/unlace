char *__fastcall sub_6F6B20(char *a1)
{
  char v1; // bp
  char *v2; // rbx
  char *v3; // rbp
  char *v4; // r12
  unsigned int v5; // edi
  unsigned int v6; // edi
  unsigned int v8; // edi
  char v9; // bp

  v1 = *a1;
  v2 = a1;
  if ( !*a1 )
    return v2;
  do
  {
    if ( v1 == 58 )
    {
      if ( v2[1] == 58 )
      {
        v1 = v2[2];
        v4 = v2 + 2;
        goto LABEL_21;
      }
      if ( isalnum(58) )
        goto LABEL_13;
      return v2;
    }
    while ( 2 )
    {
      if ( v1 == 36 )
      {
LABEL_4:
        v3 = v2 + 1;
        v4 = v2 + 33;
        while ( 1 )
        {
          v5 = *v3++;
          if ( v5 > 0x7F )
            break;
          if ( !isxdigit(v5) )
            goto LABEL_13;
          if ( v3 == v4 )
          {
            v8 = *v4;
            v9 = *v4;
            if ( v8 > 0x7F || !isalnum(v8) && v9 != 95 && v9 != 36 )
            {
              v1 = v2[33];
              goto LABEL_21;
            }
            goto LABEL_13;
          }
        }
        v6 = *v2;
        v1 = *v2;
        if ( v6 > 0x7F )
          continue;
      }
      else
      {
        while ( 1 )
        {
          if ( (unsigned int)v1 > 0x7F || !isalnum(v1) && v1 != 95 )
            return v2;
LABEL_13:
          v6 = *v2;
          v1 = *v2;
          if ( v6 <= 0x7F )
            break;
          if ( v1 == 36 )
            goto LABEL_4;
        }
      }
      break;
    }
    if ( isalnum(v6) || v1 == 95 || v1 == 36 )
    {
      ++v2;
      goto LABEL_13;
    }
    v4 = v2;
LABEL_21:
    v2 = v4;
  }
  while ( v1 );
  return v4;
}
