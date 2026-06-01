/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004A088
// Address: 0x000000010004A088

//----- (000000010004A088) ----------------------------------------------------
_QWORD *__fastcall sub_10004A088(_QWORD *result)
{
  void *v1; // x8
  _QWORD *v2; // x19

  *result = off_10009AE90;
  v1 = (void *)result[1];
  if ( v1 )
  {
    v2 = result;
    result[2] = 0;
    qfree(v1);
    v2[1] = 0;
    v2[3] = 0;
    return v2;
  }
  return result;
}
// 10009AE90: using guessed type __int64 (__fastcall *off_10009AE90[3])();
