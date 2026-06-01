/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7B6E0
// Address: 0x0007B6E0

//----- (0007B6E0) --------------------------------------------------------
_DWORD *__fastcall sub_7B6E0(int a1)
{
  _DWORD *result; // r0

  result = operator new(0x30u);
  *result = 1;
  result[2] = a1;
  return result;
}
