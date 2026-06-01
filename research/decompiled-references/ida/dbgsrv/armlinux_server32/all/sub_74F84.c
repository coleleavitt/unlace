/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_74F84
// Address: 0x00074F84

//----- (00074F84) --------------------------------------------------------
int *__fastcall sub_74F84(int *result)
{
  if ( result )
  {
    if ( *result > 1 )
      return nullptr;
    else
      return (int *)result[2];
  }
  return result;
}
