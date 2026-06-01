/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cliopts_t_find_long
// Address: 0x0009F360

//----- (0009F360) --------------------------------------------------------
int __cdecl cliopts_t_find_long(int *a1, char *s2)
{
  int v2; // esi
  unsigned int v3; // edi
  const char *v4; // eax
  unsigned int v6; // [esp+8h] [ebp-14h]

  v6 = a1[1];
  if ( !v6 )
    return 0;
  v2 = *a1;
  v3 = 0;
  while ( 1 )
  {
    v4 = *(const char **)(v2 + 4);
    if ( v4 )
    {
      if ( !strcmp(v4, s2) )
        break;
    }
    ++v3;
    v2 += 20;
    if ( v3 >= v6 )
      return 0;
  }
  return v2;
}
