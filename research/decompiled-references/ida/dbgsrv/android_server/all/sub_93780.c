/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_93780
// Address: 0x0000000000093780

//----- (0000000000093780) ----------------------------------------------------
void __fastcall sub_93780(_QWORD *a1)
{
  void *v2; // x0

  v2 = (void *)a1[2];
  *a1 = off_15DEE8;
  if ( v2 )
  {
    a1[3] = 0;
    qfree(v2);
  }
  operator delete(a1);
}
// 15DEE8: using guessed type __int64 (__fastcall *off_15DEE8[4])();
