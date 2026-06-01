/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qstrtok
// Address: 0x000B33D0

//----- (000B33D0) --------------------------------------------------------
const char *__cdecl qstrtok(char *s, char *accept, const char **a3)
{
  const char *v3; // esi
  size_t v4; // eax
  const char *v5; // esi
  char *v6; // eax
  const char *v7; // eax

  v3 = s;
  if ( !s )
    v3 = *a3;
  v4 = strspn(v3, accept);
  if ( !v3[v4] )
    return nullptr;
  v5 = &v3[v4];
  v6 = strpbrk(v5, accept);
  if ( v6 )
  {
    *v6 = 0;
    v7 = v6 + 1;
  }
  else
  {
    v7 = &v5[strlen(v5)];
  }
  *a3 = v7;
  return v5;
}
