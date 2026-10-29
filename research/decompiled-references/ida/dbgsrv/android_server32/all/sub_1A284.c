/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1A284
// Address: 0x0001A284

//----- (0001A284) --------------------------------------------------------
int __fastcall sub_1A284(int a1, int a2, int *a3)
{
  int result; // r0
  int v4; // r1

  result = 13;
  if ( !a2 )
  {
    v4 = ps_pglobal_lookup(0, nullptr, off_DD000, a3);
    result = 13;
    if ( !v4 )
      return 0;
  }
  return result;
}
// DD000: using guessed type char *off_DD000;
