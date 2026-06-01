/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80D0690
// Address: 0x080D0690

//----- (080D0690) --------------------------------------------------------
const char *__cdecl sub_80D0690(char *s, char *accept, const char **a3)
{
  const char *v3; // esi
  const char *v4; // esi
  char *v5; // eax

  v3 = s;
  if ( !s )
    v3 = *a3;
  v4 = &v3[strspn(v3, accept)];
  if ( !*v4 )
    return nullptr;
  v5 = strpbrk(v4, accept);
  if ( v5 )
  {
    *v5 = 0;
    *a3 = v5 + 1;
  }
  else
  {
    *a3 = &v4[strlen(v4)];
  }
  return v4;
}
