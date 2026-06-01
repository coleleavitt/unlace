/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4770D8
// Address: 0x00000000004770D8

//----- (00000000004770D8) ----------------------------------------------------
_QWORD *__fastcall sub_4770D8(_QWORD *result)
{
  _QWORD *v1; // x20
  __int64 v2; // x19

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
