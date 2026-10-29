/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_30D74
// Address: 0x00030D74

//----- (00030D74) --------------------------------------------------------
char **__fastcall sub_30D74(char **result, unsigned int a2)
{
  char **v2; // r4
  unsigned int v3; // r6
  char *v5; // r3
  char *v6; // r0

  v2 = result;
  v3 = (unsigned int)result[1];
  if ( v3 < a2 )
  {
    v5 = *result;
    if ( a2 > (unsigned int)result[2] )
    {
      v6 = (char *)sub_78018((int)result, *result, a2, 0x38u);
      v3 = (unsigned int)v2[1];
      v5 = v6;
      *v2 = v6;
    }
    result = (char **)memset(&v5[56 * v3], 0, 56 * (a2 - v3));
    v2[1] = (char *)a2;
  }
  else if ( v3 != a2 && v3 > a2 )
  {
    result[1] = (char *)a2;
  }
  return result;
}
