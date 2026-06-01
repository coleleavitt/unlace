/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14F54
// Address: 0x00014F54

//----- (00014F54) --------------------------------------------------------
_DWORD *sub_14F54()
{
  _DWORD *result; // r0

  dword_D6C34 = 0;
  dword_D6C38 = 0;
  dword_D6C3C = 0;
  dword_D6C40 = 0;
  dword_D6C44 = 0;
  dword_D6C48 = 0;
  dword_D6C54 = 20224;
  result = malloc(0x4F00u);
  dword_D6C50 = (int)result;
  if ( result )
  {
    dword_D6C4C = (int)result;
    *result = 20224;
    result[1] = 0;
  }
  else
  {
    dword_D6C54 = 0;
    dword_D6C4C = 0;
  }
  return result;
}
// D6C34: using guessed type int dword_D6C34;
// D6C38: using guessed type int;
// D6C3C: using guessed type int dword_D6C3C;
// D6C40: using guessed type int dword_D6C40;
// D6C44: using guessed type int dword_D6C44;
// D6C48: using guessed type int dword_D6C48;
// D6C4C: using guessed type int dword_D6C4C;
// D6C50: using guessed type int dword_D6C50;
// D6C54: using guessed type int dword_D6C54;
