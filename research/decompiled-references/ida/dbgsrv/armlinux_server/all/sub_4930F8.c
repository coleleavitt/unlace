/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4930F8
// Address: 0x00000000004930F8

//----- (00000000004930F8) ----------------------------------------------------
const char *__fastcall sub_4930F8(char *s, char *accept, const char **a3)
{
  const char *v3; // x19
  const char *v6; // x20
  char *v7; // x0

  v3 = s;
  if ( !s )
    v3 = *a3;
  v6 = &v3[strspn(v3, accept)];
  if ( !*v6 )
    return nullptr;
  v7 = strpbrk(v6, accept);
  if ( v7 )
  {
    *v7 = 0;
    *a3 = v7 + 1;
    return v6;
  }
  *a3 = &v6[strlen(v6)];
  return v6;
}
