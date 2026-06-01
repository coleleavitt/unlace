/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7DC80
// Address: 0x0007DC80

//----- (0007DC80) --------------------------------------------------------
unsigned int *__fastcall sub_7DC80(int *a1, unsigned int a2)
{
  unsigned int *result; // r0

  result = (unsigned int *)a1[3];
  if ( !result || a2 < *result || a2 >= result[1] )
  {
    result = (unsigned int *)sub_7DBF4(a1, a2);
    if ( result == (unsigned int *)(*a1 + 8 * a1[1]) || a2 < *result || a2 >= result[1] )
      return nullptr;
    else
      a1[3] = (int)result;
  }
  return result;
}
