/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_428800
// Address: 0x0000000000428800

//----- (0000000000428800) ----------------------------------------------------
char **__fastcall sub_428800(char **result, unsigned __int64 a2)
{
  char **v2; // x19
  unsigned __int64 v3; // x4
  char *v5; // x5
  char *v6; // x0

  v2 = result;
  v3 = (unsigned __int64)result[1];
  if ( v3 < a2 )
  {
    v5 = *result;
    if ( a2 > (unsigned __int64)result[2] )
    {
      v6 = (char *)sub_491288((__int64)result, *result, a2, 0x38u);
      v3 = (unsigned __int64)v2[1];
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
