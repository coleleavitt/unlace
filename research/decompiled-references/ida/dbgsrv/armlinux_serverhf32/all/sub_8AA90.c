/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8AA90
// Address: 0x0008AA90

//----- (0008AA90) --------------------------------------------------------
int **sub_8AA90()
{
  int **result; // r0
  int v1; // r3

  result = *(int ***)sub_80630();
  if ( result )
  {
    v1 = *((unsigned __int8 *)result + 39);
    result = (int **)*result;
    if ( v1 == 1 )
      return (int **)*(result - 30);
  }
  return result;
}
