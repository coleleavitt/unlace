__int64 __fastcall vault_is_valid_email(char *s)
{
  unsigned int v1; // r14d
  const char *v2; // r13
  char *v3; // r12
  char *i; // rbx
  int v5; // esi
  char v7; // al
  char *v8; // rbx
  char *v9; // rax

  v2 = s;
  v3 = strchr(s, 64);
  LOBYTE(v1) = s == v3 || v3 == nullptr;
  if ( (_BYTE)v1 )
    return 0;
  if ( v3 - s <= 64 && *s != 46 )
  {
    for ( i = s; ; ++i )
    {
      v5 = *i;
      if ( (unsigned __int8)((*i & 0xDF) - 65) > 0x19u
        && (unsigned __int8)(v5 - 48) > 9u
        && !strchr("!#$%&'*+-/=?^_`{|}~.", v5) )
      {
        break;
      }
      if ( v3 == i + 1 )
      {
        v7 = v3[1];
        if ( v7 == 0 || (unsigned __int8)(v7 - 45) <= 1u )
          return v1;
        v8 = i + 2;
        while ( (unsigned __int8)((v7 & 0xDF) - 65) <= 0x19u
             || (unsigned __int8)(v7 - 48) <= 9u
             || (unsigned __int8)(v7 - 45) <= 1u )
        {
          v7 = *++v8;
          if ( !v7 )
          {
            v1 = 0;
            if ( v8 - s <= 255 )
            {
              while ( 1 )
              {
                v9 = strchr(v2, 46);
                if ( !v9 )
                  break;
                if ( v9[1] == 46 )
                  return 0;
                v2 = v9 + 1;
              }
              return 1;
            }
            return v1;
          }
        }
        return 0;
      }
    }
  }
  return v1;
}
