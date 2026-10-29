/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4808B0
// Address: 0x00000000004808B0

//----- (00000000004808B0) ----------------------------------------------------
int __fastcall sub_4808B0(int a1, __off64_t a2)
{
  int result; // eax

  result = ftruncate64(a1, a2);
  if ( result )
  {
    sub_479EB0(1u);
    return -1;
  }
  return result;
}
