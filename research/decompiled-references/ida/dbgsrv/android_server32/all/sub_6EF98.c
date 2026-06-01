/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6EF98
// Address: 0x0006EF98

//----- (0006EF98) --------------------------------------------------------
_BYTE *sub_6EF98()
{
  _BYTE *result; // r0

  result = operator new(0x38u);
  result[52] = 0;
  *(_DWORD *)result = &off_DA9CC;
  *((_DWORD *)result + 1) = 0;
  *((_DWORD *)result + 2) = 0;
  *((_DWORD *)result + 3) = -1;
  *((_DWORD *)result + 4) = 0;
  *((_DWORD *)result + 5) = 0;
  *((_DWORD *)result + 6) = 0;
  *((_DWORD *)result + 7) = -1;
  *((_DWORD *)result + 8) = 0;
  *((_DWORD *)result + 9) = 0;
  *((_DWORD *)result + 10) = 0;
  *((_DWORD *)result + 11) = &byte_A0742;
  *((_DWORD *)result + 12) = 0;
  return result;
}
// A0742: using guessed type char byte_A0742;
// DA9CC: using guessed type _UNKNOWN *off_DA9CC;
