/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48C020
// Address: 0x000000000048C020

//----- (000000000048C020) ----------------------------------------------------
_QWORD *__fastcall sub_48C020(__int64 a1)
{
  _QWORD *result; // x0

  result = sub_49E050(0x38u);
  result[1] = a1;
  *(_DWORD *)result = 1;
  return result;
}
