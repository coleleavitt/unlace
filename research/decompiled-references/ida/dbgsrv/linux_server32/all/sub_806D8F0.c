/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_806D8F0
// Address: 0x0806D8F0

//----- (0806D8F0) --------------------------------------------------------
unsigned int __cdecl sub_806D8F0(char **a1, unsigned int a2)
{
  unsigned int result; // eax
  char *v3; // edx
  char *v4; // eax

  result = (unsigned int)a1[1];
  if ( result < a2 )
  {
    v3 = *a1;
    if ( (unsigned int)a1[2] < a2 )
    {
      v4 = (char *)sub_80CF920((int)a1, v3, a2, 0x38u);
      *a1 = v4;
      v3 = v4;
      result = (unsigned int)a1[1];
    }
    result = (unsigned int)memset(&v3[56 * result], 0, 56 * (a2 - result));
    a1[1] = (char *)a2;
  }
  else if ( result != a2 )
  {
    a1[1] = (char *)a2;
  }
  return result;
}
