/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7054C
// Address: 0x0007054C

//----- (0007054C) --------------------------------------------------------
int sub_7054C()
{
  if ( !qsem_post(dword_DE4F8) )
    abort();
  return qsem_free(dword_DE4F8);
}
// DE4F8: using guessed type int dword_DE4F8;
