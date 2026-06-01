/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A49A0
// Address: 0x00000000000A49A0

//----- (00000000000A49A0) ----------------------------------------------------
_QWORD *__fastcall sub_A49A0(_QWORD *result)
{
  __int64 v1; // x20
  _QWORD *v2; // x19

  v1 = *result;
  v2 = result;
  if ( *result )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v1 + 72LL))(*result);
    result = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
  }
  *v2 = 0;
  return result;
}
