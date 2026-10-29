/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42704
// Address: 0x0000000000042704

//----- (0000000000042704) ----------------------------------------------------
void __fastcall sub_42704(_QWORD *a1)
{
  void *v2; // x0
  void *v3; // x0
  void *v4; // x0

  v2 = (void *)a1[138];
  *a1 = off_156660;
  if ( v2 )
  {
    a1[139] = 0;
    qfree(v2);
    a1[138] = 0;
    a1[140] = 0;
  }
  v3 = (void *)a1[135];
  if ( v3 )
  {
    a1[136] = 0;
    qfree(v3);
    a1[135] = 0;
    a1[137] = 0;
  }
  v4 = (void *)a1[132];
  if ( v4 )
  {
    a1[133] = 0;
    qfree(v4);
    a1[132] = 0;
    a1[134] = 0;
  }
  sub_39570((__int64)(a1 + 129));
}
// 156660: using guessed type __int64 (__fastcall *off_156660[3])();
