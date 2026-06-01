/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qstrtok
// Address: 0x000000010007DB60

//----- (000000010007DB60) ----------------------------------------------------
char *__fastcall qstrtok(char *__s, char *__charset, const char **a3)
{
  const char *v4; // rbx
  size_t v5; // rax
  char *v6; // rbx
  char *v7; // rax
  const char *v8; // rax

  v4 = __s;
  if ( !__s )
    v4 = *a3;
  v5 = strspn(v4, __charset);
  if ( !v4[v5] )
    return nullptr;
  v6 = (char *)&v4[v5];
  v7 = strpbrk(v6, __charset);
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
