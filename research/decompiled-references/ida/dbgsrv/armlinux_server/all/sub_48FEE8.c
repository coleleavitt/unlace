/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48FEE8
// Address: 0x000000000048FEE8

//----- (000000000048FEE8) ----------------------------------------------------
__off64_t __fastcall sub_48FEE8(int a1)
{
  __off64_t result; // x0

  result = lseek64(a1, 0, 1);
  if ( result == -1 )
  {
    sub_4869C8(1);
    return -1;
  }
  return result;
}
