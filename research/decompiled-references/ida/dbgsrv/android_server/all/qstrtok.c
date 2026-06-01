/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qstrtok
// Address: 0x00000000000C07BC

//----- (00000000000C07BC) ----------------------------------------------------
const char *__fastcall qstrtok(char *s, char *accept, const char **a3)
{
  const char *v5; // x20
  const char *v6; // x20
  char *v7; // x0
  const char *v8; // x0

  v5 = s;
  if ( !s )
    v5 = *a3;
  v6 = &v5[strspn(v5, accept)];
  if ( !*v6 )
    return nullptr;
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
