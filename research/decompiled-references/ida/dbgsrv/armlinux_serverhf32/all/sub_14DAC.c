/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14DAC
// Address: 0x00014DAC

//----- (00014DAC) --------------------------------------------------------
_DWORD *sub_14DAC()
{
  _DWORD *result; // r0

  dword_D5C14 = 0;
  dword_D5C18 = 0;
  dword_D5C1C = 0;
  dword_D5C20 = 0;
  dword_D5C24 = 0;
  dword_D5C28 = 0;
  dword_D5C34 = 20224;
  result = malloc(0x4F00u);
  dword_D5C30 = (int)result;
  if ( result )
  {
    dword_D5C2C = (int)result;
    *result = 20224;
    result[1] = 0;
  }
  else
  {
    dword_D5C34 = 0;
    dword_D5C2C = 0;
  }
  return result;
}
// D5C14: using guessed type int dword_D5C14;
// D5C18: using guessed type int;
// D5C1C: using guessed type int dword_D5C1C;
// D5C20: using guessed type int dword_D5C20;
// D5C24: using guessed type int dword_D5C24;
// D5C28: using guessed type int dword_D5C28;
// D5C2C: using guessed type int dword_D5C2C;
// D5C30: using guessed type int dword_D5C30;
// D5C34: using guessed type int dword_D5C34;
