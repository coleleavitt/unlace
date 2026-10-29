/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cliopts_t_find_long
// Address: 0x00072F86

//----- (00072F86) --------------------------------------------------------
int __fastcall cliopts_t_find_long(int *a1, char *s2)
{
  unsigned int v4; // r5
  int result; // r0
  int v6; // r6
  unsigned int v7; // r7
  const char *v8; // r0

  v4 = a1[1];
  result = 0;
  if ( v4 )
  {
    v6 = *a1;
    v7 = 0;
    while ( 1 )
    {
      v8 = *(const char **)(v6 + 4);
      if ( v8 )
      {
        if ( !strcmp(v8, s2) )
          break;
      }
      v6 += 20;
      ++v7;
      result = 0;
      if ( v7 >= v4 )
        return result;
    }
    return v6;
  }
  return result;
}
