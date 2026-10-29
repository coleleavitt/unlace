/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_98A30
// Address: 0x00098A30

//----- (00098A30) --------------------------------------------------------
_DWORD *sub_98A30()
{
  _DWORD *result; // eax

  result = operator new(0x38u);
  result[1] = 0;
  result[2] = 0;
  result[3] = -1;
  *result = &off_138B80;
  result[4] = 0;
  result[5] = 0;
  result[6] = 0;
  result[7] = -1;
  result[8] = 0;
  result[9] = 0;
  result[10] = 0;
  result[11] = &byte_DCEE2;
  result[12] = 0;
  *((_BYTE *)result + 52) = 0;
  return result;
}
// DCEE2: using guessed type char byte_DCEE2;
// 138B80: using guessed type int (__cdecl *off_138B80)(int);
