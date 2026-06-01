/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_688C4
// Address: 0x000688C4

//----- (000688C4) --------------------------------------------------------
_DWORD *sub_688C4()
{
  _DWORD *result; // r0

  result = sub_805CC(0x38u);
  result[1] = 0;
  result[2] = 0;
  *result = &off_D0568;
  result[11] = &byte_8DEAC;
  result[4] = 0;
  result[5] = 0;
  result[6] = 0;
  result[8] = 0;
  result[9] = 0;
  result[10] = 0;
  result[12] = 0;
  *((_BYTE *)result + 52) = 0;
  result[3] = -1;
  result[7] = -1;
  return result;
}
// 8DEAC: using guessed type char byte_8DEAC;
// D0568: using guessed type _UNKNOWN *off_D0568;
