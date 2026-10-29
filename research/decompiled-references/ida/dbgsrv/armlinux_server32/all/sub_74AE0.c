/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_74AE0
// Address: 0x00074AE0

//----- (00074AE0) --------------------------------------------------------
_DWORD *__fastcall sub_74AE0(int a1)
{
  _DWORD *result; // r0

  result = sub_808A4(0x30u);
  result[2] = a1;
  *result = 1;
  return result;
}
