/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8053210
// Address: 0x08053210

//----- (08053210) --------------------------------------------------------
int *sub_8053210()
{
  int *result; // eax

  if ( !byte_811E580 )
  {
    result = sub_8053180();
    byte_811E580 = 1;
  }
  return result;
}
// 811E580: using guessed type char byte_811E580;
