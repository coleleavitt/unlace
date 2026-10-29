/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_BE690
// Address: 0x00000000000BE690

//----- (00000000000BE690) ----------------------------------------------------
_QWORD *__fastcall sub_BE690(__int64 a1)
{
  _QWORD *result; // rax

  result = operator new(0x38u);
  *(_DWORD *)result = 1;
  result[1] = a1;
  return result;
}
