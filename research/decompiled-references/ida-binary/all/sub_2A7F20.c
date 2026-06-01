const char *__fastcall sub_2A7F20(const char **a1, _DWORD *a2)
{
  const char *v2; // rbx
  char *v3; // rax

  v2 = *a1;
  if ( !**a1 )
    return nullptr;
  v3 = strchr(*a1, 10);
  if ( !v3 )
    v3 = (char *)&v2[strlen(v2)];
  if ( a2 )
    *a2 = (_DWORD)v3 - (_DWORD)v2;
  *a1 = &v3[*v3 == 10];
  return v2;
}
