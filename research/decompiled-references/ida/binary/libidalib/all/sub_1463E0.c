int __fastcall sub_1463E0(char *s1, char *s)
{
  const char *v2; // rbx
  size_t v3; // r12
  char v4; // dl
  int result; // eax
  char *v6; // rax

  if ( !s )
    return 0;
  v2 = s;
  v3 = strlen(s1);
  while ( 1 )
  {
    if ( !strncasecmp(s1, v2, v3) )
    {
      v4 = v2[v3];
      result = v4 == 0;
      LOBYTE(result) = (v4 == 47) | result;
      if ( (_BYTE)result )
        break;
    }
    v6 = strchr(v2, 47);
    if ( !v6 )
      return 0;
    v2 = v6 + 1;
  }
  return result;
}

