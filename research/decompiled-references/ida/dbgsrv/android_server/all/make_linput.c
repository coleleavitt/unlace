/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: make_linput
// Address: 0x00000000000B9B10

//----- (00000000000B9B10) ----------------------------------------------------
_QWORD *__fastcall make_linput(_QWORD *result)
{
  _QWORD *v1; // x19

  if ( result )
  {
    v1 = result;
    result = operator new(0x38u);
    *(_DWORD *)result = 1;
    result[1] = v1;
  }
  return result;
}
