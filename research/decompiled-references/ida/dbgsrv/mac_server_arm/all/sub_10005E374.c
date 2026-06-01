/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005E374
// Address: 0x000000010005E374

//----- (000000010005E374) ----------------------------------------------------
_QWORD *__fastcall sub_10005E374(_QWORD *result)
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
