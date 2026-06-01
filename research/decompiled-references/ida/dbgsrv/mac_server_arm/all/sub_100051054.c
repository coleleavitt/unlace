/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100051054
// Address: 0x0000000100051054

//----- (0000000100051054) ----------------------------------------------------
_QWORD *__fastcall sub_100051054(_QWORD *result)
{
  void *v1; // x8
  _QWORD *v2; // x19

  *result = off_10009ADE0;
  v1 = (void *)result[2];
  if ( v1 )
  {
    v2 = result;
    result[3] = 0;
    qfree(v1);
    v2[2] = 0;
    v2[4] = 0;
    return v2;
  }
  return result;
}
// 10009ADE0: using guessed type __int64 (__fastcall *off_10009ADE0[4])();
