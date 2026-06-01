/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000625F4
// Address: 0x00000001000625F4

//----- (00000001000625F4) ----------------------------------------------------
_QWORD *__fastcall sub_1000625F4(_QWORD *result)
{
  _QWORD *v1; // x19
  __int64 v2; // x20

  v1 = result;
  v2 = *result;
  if ( *result )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v2 + 72LL))(*result);
    result = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  }
  *v1 = 0;
  return result;
}
