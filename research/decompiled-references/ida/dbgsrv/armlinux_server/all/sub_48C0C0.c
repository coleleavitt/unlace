/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48C0C0
// Address: 0x000000000048C0C0

//----- (000000000048C0C0) ----------------------------------------------------
_QWORD *__fastcall sub_48C0C0(__int64 a1)
{
  _QWORD *result; // x0

  if ( !a1 )
    return nullptr;
  result = sub_49E050(0x38u);
  result[1] = a1;
  *(_DWORD *)result = 1;
  return result;
}
