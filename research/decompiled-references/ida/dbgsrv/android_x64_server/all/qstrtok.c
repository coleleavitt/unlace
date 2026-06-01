/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qstrtok
// Address: 0x00000000000C5550

//----- (00000000000C5550) ----------------------------------------------------
const char *__fastcall qstrtok(char *s, char *accept, const char **a3)
{
  const char *v4; // rbx
  size_t v5; // rax
  const char *v6; // rbx
  char *v7; // rax
  const char *v8; // rax

  v4 = s;
  if ( !s )
    v4 = *a3;
  v5 = strspn(v4, accept);
  if ( !v4[v5] )
    return nullptr;
  v6 = &v4[v5];
  v7 = strpbrk(v6, accept);
  if ( v7 )
  {
    *v7 = 0;
    v8 = v7 + 1;
  }
  else
  {
    v8 = &v6[strlen(v6)];
  }
  *a3 = v8;
  return v6;
}
