/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004C778
// Address: 0x000000010004C778

//----- (000000010004C778) ----------------------------------------------------
_QWORD *__fastcall sub_10004C778(_QWORD *a1)
{
  void *v2; // x0
  void *v3; // x0

  *a1 = off_10009EEF8;
  v2 = (void *)a1[7];
  if ( v2 )
  {
    a1[8] = 0;
    qfree(v2);
    a1[7] = 0;
    a1[9] = 0;
  }
  v3 = (void *)a1[4];
  if ( v3 )
  {
    a1[5] = 0;
    qfree(v3);
    a1[4] = 0;
    a1[6] = 0;
  }
  return a1;
}
// 10009EEF8: using guessed type __int64 (__fastcall *off_10009EEF8[3])();
