/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7A6AC
// Address: 0x0007A6AC

//----- (0007A6AC) --------------------------------------------------------
int __fastcall sub_7A6AC(__pid_t a1)
{
  int result; // r0

  result = kill(a1, 9);
  if ( !result )
    return sub_7A600(a1, nullptr, -1);
  return result;
}
