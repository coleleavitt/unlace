/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_B3440
// Address: 0x000B3440

//----- (000B3440) --------------------------------------------------------
char *__cdecl sub_B3440(char *s, unsigned int a2)
{
  char *i; // eax
  char v3; // cl
  char *j; // eax
  char v5; // cl
  char *k; // edx
  size_t v7; // eax
  unsigned int v8; // edi
  size_t v9; // edi
  size_t v10; // eax

  for ( i = &s[strlen(s)]; i > s; --i )
  {
    v3 = *(i - 1);
    if ( v3 != 32 && v3 != 9 )
      break;
  }
  *i = 0;
  for ( j = s + 1; ; ++j )
  {
    v5 = *(j - 1);
    if ( v5 != 9 && v5 != 32 )
      break;
  }
  for ( k = s; v5; ++j )
  {
    *k++ = v5;
    v5 = *j;
  }
  *k = 0;
  v7 = strlen(s);
  v8 = a2 - v7;
  if ( (int)(a2 - v7) > 0 )
  {
    if ( v8 != 1 )
    {
      v9 = v8 >> 1;
      memmove(&s[v9], s, v7 + 1);
      memset(s, 32, v9);
    }
    v10 = strlen(s);
    if ( v10 < a2 )
      memset(&s[v10], 32, a2 - v10);
    s[a2] = 0;
  }
  return s;
}
