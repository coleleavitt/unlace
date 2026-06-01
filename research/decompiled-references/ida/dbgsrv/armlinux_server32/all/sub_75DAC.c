/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_75DAC
// Address: 0x00075DAC

//----- (00075DAC) --------------------------------------------------------
FILE *__fastcall sub_75DAC(int a1)
{
  FILE *result; // r0

  result = sub_75CD8(a1, "ae", 8);
  if ( !result )
  {
    sub_70B98(1);
    return nullptr;
  }
  return result;
}
