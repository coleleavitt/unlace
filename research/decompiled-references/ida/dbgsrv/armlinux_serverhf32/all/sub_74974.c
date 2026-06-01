/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_74974
// Address: 0x00074974

//----- (00074974) --------------------------------------------------------
_DWORD *__fastcall sub_74974(int a1)
{
  _DWORD *result; // r0

  result = sub_805CC(0x30u);
  result[2] = a1;
  *result = 1;
  return result;
}
