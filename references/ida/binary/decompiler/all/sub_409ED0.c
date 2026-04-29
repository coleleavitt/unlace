char **__fastcall sub_409ED0(char *s1)
{
  char v1; // r13
  char *v2; // rbp
  char **v3; // rbx

  if ( !s1 )
    return 0;
  v1 = 0;
  v2 = s1;
  if ( *s1 == 95 )
  {
    do
      ++v2;
    while ( *v2 == 95 );
    v1 = 1;
  }
  v3 = &off_4E96C0;
  while ( strcmp(v2, *v3) )
  {
    v3 += 3;
    if ( v3 == &off_4EACE0 )
      return 0;
  }
  if ( (*((_BYTE *)v3 + 17) & 0x10) != 0 && !v1 )
    return 0;
  return v3;
}
