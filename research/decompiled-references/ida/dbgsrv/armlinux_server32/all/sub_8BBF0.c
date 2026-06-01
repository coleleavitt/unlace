/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8BBF0
// Address: 0x0008BBF0

//----- (0008BBF0) --------------------------------------------------------
int **sub_8BBF0()
{
  int **result; // r0
  int v1; // r3

  result = *(int ***)sub_840B0();
  if ( result )
  {
    v1 = *((unsigned __int8 *)result + 39);
    result = (int **)*result;
    if ( v1 == 1 )
      return (int **)*(result - 30);
  }
  return result;
}
