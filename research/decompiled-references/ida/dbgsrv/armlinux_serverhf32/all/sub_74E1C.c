/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_74E1C
// Address: 0x00074E1C

//----- (00074E1C) --------------------------------------------------------
int *__fastcall sub_74E1C(int *result)
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
