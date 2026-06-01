/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qstrtok
// Address: 0x0008018C

//----- (0008018C) --------------------------------------------------------
const char *__fastcall qstrtok(char *s, char *accept, const char **a3)
{
  const char *v5; // r7
  const char *v6; // r5
  const char *result; // r0
  char *v8; // r0
  const char *v9; // r0

  v5 = s;
  if ( !s )
    v5 = *a3;
  v6 = &v5[strspn(v5, accept)];
  result = nullptr;
  if ( *v6 )
  {
    v8 = strpbrk(v6, accept);
    if ( v8 )
    {
      *v8 = 0;
      v9 = v8 + 1;
    }
    else
    {
      v9 = &v6[strlen(v6)];
    }
    *a3 = v9;
    return v6;
  }
  return result;
}
