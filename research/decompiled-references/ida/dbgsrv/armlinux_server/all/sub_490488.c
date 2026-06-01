/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_490488
// Address: 0x0000000000490488

//----- (0000000000490488) ----------------------------------------------------
FILE *sub_490488()
{
  FILE *result; // x0

  result = tmpfile64();
  if ( !result )
  {
    sub_4869C8(1);
    return nullptr;
  }
  return result;
}
