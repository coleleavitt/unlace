/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_937BC
// Address: 0x00000000000937BC

//----- (00000000000937BC) ----------------------------------------------------
void __fastcall sub_937BC(_QWORD *a1)
{
  void *v2; // x0
  void *v3; // x0

  v2 = (void *)a1[5];
  *a1 = off_15DF18;
  if ( v2 )
  {
    a1[6] = 0;
    qfree(v2);
    a1[5] = 0;
    a1[7] = 0;
  }
  v3 = (void *)a1[2];
  if ( v3 )
  {
    a1[3] = 0;
    qfree(v3);
    a1[2] = 0;
    a1[4] = 0;
  }
}
// 15DF18: using guessed type __int64 (__fastcall *off_15DF18[4])();
