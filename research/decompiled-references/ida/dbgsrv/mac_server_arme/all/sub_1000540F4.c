/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000540F4
// Address: 0x00000001000540F4

//----- (00000001000540F4) ----------------------------------------------------
_QWORD *__fastcall sub_1000540F4(_QWORD *result)
{
  void *v1; // x8
  _QWORD *v2; // x19

  *result = off_10009EE20;
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
// 10009EE20: using guessed type __int64 (__fastcall *off_10009EE20[4])();
