const char *__fastcall sub_97600(char *s, char *accept, const char **a3)
{
  const char *v4; // rbx
  const char *v5; // rbx
  char *v6; // rax

  v4 = s;
  if ( !s )
    v4 = *a3;
  v5 = &v4[strspn(v4, accept)];
  if ( !*v5 )
    return nullptr;
  v6 = strpbrk(v5, accept);
  if ( v6 )
  {
    *v6 = 0;
    *a3 = v6 + 1;
  }
  else
  {
    *a3 = &v5[strlen(v5)];
  }
  return v5;
}

