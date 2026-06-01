/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_B9A88
// Address: 0x00000000000B9A88

//----- (00000000000B9A88) ----------------------------------------------------
_QWORD *__fastcall sub_B9A88(__int64 a1)
{
  _QWORD *result; // x0

  result = operator new(0x38u);
  *(_DWORD *)result = 1;
  result[1] = a1;
  return result;
}
