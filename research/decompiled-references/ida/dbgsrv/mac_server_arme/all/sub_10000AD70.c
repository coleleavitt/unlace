/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000AD70
// Address: 0x000000010000AD70

//----- (000000010000AD70) ----------------------------------------------------
_QWORD *__fastcall sub_10000AD70(_QWORD *result)
{
  void *v1; // x8
  _QWORD *v2; // x19

  *result = off_10009CBD0;
  v1 = (void *)result[6];
  if ( v1 )
  {
    v2 = result;
    result[7] = 0;
    qfree(v1);
    v2[6] = 0;
    v2[8] = 0;
    return v2;
  }
  return result;
}
// 10009CBD0: using guessed type __int64 (__fastcall *off_10009CBD0[8])();
