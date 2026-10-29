/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005D350
// Address: 0x000000010005D350

//----- (000000010005D350) ----------------------------------------------------
_QWORD *__fastcall sub_10005D350(_QWORD *a1)
{
  __int64 v2; // x0
  void *v3; // x0
  void *v4; // x0
  void *v5; // x0

  *a1 = off_10009B9A0;
  sub_10005E374(a1 + 10);
  v2 = a1[11];
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v3 = (void *)a1[7];
  if ( v3 )
  {
    a1[8] = 0;
    qfree(v3);
    a1[7] = 0;
    a1[9] = 0;
  }
  v4 = (void *)a1[4];
  if ( v4 )
  {
    a1[5] = 0;
    qfree(v4);
    a1[4] = 0;
    a1[6] = 0;
  }
  v5 = (void *)a1[1];
  if ( v5 )
  {
    a1[2] = 0;
    qfree(v5);
    a1[1] = 0;
    a1[3] = 0;
  }
  return a1;
}
// 10009B9A0: using guessed type void (__fastcall __noreturn *off_10009B9A0[2])();
