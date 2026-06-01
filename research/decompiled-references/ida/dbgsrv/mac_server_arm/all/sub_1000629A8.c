/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000629A8
// Address: 0x00000001000629A8

//----- (00000001000629A8) ----------------------------------------------------
_QWORD *__fastcall sub_1000629A8(_QWORD *a1)
{
  __int64 v2; // x0
  void *v3; // x0

  *a1 = off_10009BCB8;
  a1[8] = 0;
  a1[10] = 0;
  v2 = a1[11];
  if ( v2 )
  {
    if ( a1[12] )
    {
      (*(void (__fastcall **)(_QWORD))(qword_10009DAD8 + 344))(a1[12]);
      v2 = a1[11];
    }
    (*(void (__fastcall **)(__int64))(qword_10009DAD8 + 224))(v2);
    a1[11] = 0;
  }
  sub_10005E374(a1 + 4);
  v3 = (void *)a1[5];
  if ( v3 )
  {
    a1[6] = 0;
    qfree(v3);
    a1[5] = 0;
    a1[7] = 0;
  }
  return a1;
}
// 10009BCB8: using guessed type __int64 (__fastcall *off_10009BCB8[20])();
// 10009DAD8: using guessed type __int64 qword_10009DAD8;
