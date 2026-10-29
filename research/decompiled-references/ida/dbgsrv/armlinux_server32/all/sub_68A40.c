/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_68A40
// Address: 0x00068A40

//----- (00068A40) --------------------------------------------------------
_DWORD *sub_68A40()
{
  _DWORD *result; // r0

  result = sub_808A4(0x38u);
  result[1] = 0;
  result[2] = 0;
  *result = &off_D1568;
  result[11] = &byte_8DFE8;
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
// 8DFE8: using guessed type char byte_8DFE8;
// D1568: using guessed type _UNKNOWN *off_D1568;
