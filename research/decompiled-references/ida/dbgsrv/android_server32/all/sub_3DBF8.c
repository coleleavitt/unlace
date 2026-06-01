/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3DBF8
// Address: 0x0003DBF8

//----- (0003DBF8) --------------------------------------------------------
char **__fastcall sub_3DBF8(char **a1)
{
  unsigned __int8 *v2; // r0
  char *v3; // r5
  unsigned int v4; // r6
  int i; // r7

  v2 = (unsigned __int8 *)*a1;
  if ( v2 )
  {
    v3 = a1[1];
    if ( v3 )
    {
      v4 = 1;
      for ( i = 0; ; i += 24 )
      {
        free_idcv(&v2[i]);
        if ( v4 >= (unsigned int)v3 )
          break;
        ++v4;
        v2 = (unsigned __int8 *)*a1;
      }
      v2 = (unsigned __int8 *)*a1;
    }
    a1[1] = nullptr;
    qfree(v2);
    a1[2] = nullptr;
    *a1 = nullptr;
  }
  return a1;
}
