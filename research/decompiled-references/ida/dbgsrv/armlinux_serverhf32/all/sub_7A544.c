/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7A544
// Address: 0x0007A544

//----- (0007A544) --------------------------------------------------------
int __fastcall sub_7A544(__pid_t a1)
{
  int result; // r0

  result = kill(a1, 9);
  if ( !result )
    return sub_7A498(a1, nullptr, -1);
  return result;
}
