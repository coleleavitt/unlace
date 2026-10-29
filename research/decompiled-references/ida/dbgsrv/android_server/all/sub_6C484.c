/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6C484
// Address: 0x000000000006C484

//----- (000000000006C484) ----------------------------------------------------
void __fastcall sub_6C484(_QWORD *a1)
{
  void *v2; // x0
  void *v3; // x0

  v2 = (void *)a1[17];
  *a1 = off_15D760;
  if ( v2 )
  {
    a1[18] = 0;
    qfree(v2);
    a1[17] = 0;
    a1[19] = 0;
  }
  if ( a1[11] )
  {
    sub_6C530(a1 + 11, 0);
    qfree((void *)a1[11]);
    a1[11] = 0;
    a1[13] = 0;
  }
  v3 = (void *)a1[8];
  if ( v3 )
  {
    a1[9] = 0;
    qfree(v3);
    a1[8] = 0;
    a1[10] = 0;
  }
  sub_6C3F0((__int64)(a1 + 5));
  sub_39570((__int64)(a1 + 2));
}
// 15D760: using guessed type __int64 (__fastcall *off_15D760[2])();
