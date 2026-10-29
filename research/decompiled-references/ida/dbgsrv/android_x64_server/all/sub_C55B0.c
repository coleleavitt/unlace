/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C55B0
// Address: 0x00000000000C55B0

//----- (00000000000C55B0) ----------------------------------------------------
char *__fastcall sub_C55B0(char *s, size_t a2)
{
  char *i; // rax
  char v3; // cl
  char *j; // rax
  char v5; // cl
  char *k; // rdx
  size_t v7; // rax
  size_t v8; // rbx
  size_t v9; // rbx
  size_t v10; // rax

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
  if ( (__int64)(a2 - v7) > 0 )
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
