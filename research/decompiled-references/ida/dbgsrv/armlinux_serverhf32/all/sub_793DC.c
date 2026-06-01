/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_793DC
// Address: 0x000793DC

//----- (000793DC) --------------------------------------------------------
const char *__fastcall sub_793DC(char *s, char *accept, const char **a3)
{
  const char *v5; // r4
  size_t v6; // r0
  int v7; // r3
  const char *v8; // r4
  char *v9; // r0

  v5 = s;
  if ( !s )
    v5 = *a3;
  v6 = strspn(v5, accept);
  v7 = (unsigned __int8)v5[v6];
  v8 = &v5[v6];
  if ( !v7 )
    return nullptr;
  v9 = strpbrk(v8, accept);
  if ( v9 )
  {
    *v9 = 0;
    *a3 = v9 + 1;
    return v8;
  }
  *a3 = &v8[strlen(v8)];
  return v8;
}
