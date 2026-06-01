/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: make_linput
// Address: 0x00000000000BE710

//----- (00000000000BE710) ----------------------------------------------------
_QWORD *__fastcall make_linput(__int64 a1)
{
  _QWORD *result; // rax

  if ( !a1 )
    return nullptr;
  result = operator new(0x38u);
  *(_DWORD *)result = 1;
  result[1] = a1;
  return result;
}
