/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48FF28
// Address: 0x000000000048FF28

//----- (000000000048FF28) ----------------------------------------------------
__off64_t __fastcall sub_48FF28(int a1, __off64_t a2, int a3)
{
  __off64_t result; // x0

  result = lseek64(a1, a2, a3);
  if ( result == -1 )
  {
    sub_4869C8(1);
    return -1;
  }
  return result;
}
