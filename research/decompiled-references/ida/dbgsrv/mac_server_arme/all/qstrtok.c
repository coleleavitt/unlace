/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qstrtok
// Address: 0x00000001000753E4

//----- (00000001000753E4) ----------------------------------------------------
char *__fastcall qstrtok(char *__s, char *__charset, const char **a3)
{
  const char *v5; // x20
  char *v6; // x20
  char *v7; // x0
  const char *v8; // x0

  v5 = __s;
  if ( !__s )
    v5 = *a3;
  v6 = (char *)&v5[strspn(v5, __charset)];
  if ( !*v6 )
    return nullptr;
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
