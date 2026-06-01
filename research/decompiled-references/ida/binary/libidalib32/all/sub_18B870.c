char *__fastcall sub_18B870(char *s)
{
  char *v2; // rax
  char *v3; // rbx
  size_t v5; // rax

  while ( 1 )
  {
    v2 = strchr(s, 58);
    v3 = v2;
    if ( !v2 )
      break;
    if ( s >= v2 || *(v2 - 1) != 92 )
    {
      *v2 = 0;
      return v2 + 1;
    }
    s = v2;
    v5 = strlen(v2);
    memmove(v3 - 1, v3, v5 + 1);
  }
  return nullptr;
}

