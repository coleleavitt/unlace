/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_969A8
// Address: 0x00000000000969A8

//----- (00000000000969A8) ----------------------------------------------------
void __fastcall sub_969A8(_QWORD *a1)
{
  void *v2; // x0
  void *v3; // x0

  v2 = (void *)a1[7];
  *a1 = off_15DFC8;
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
  }
  operator delete(a1);
}
// 15DFC8: using guessed type __int64 (__fastcall *off_15DFC8[4])();
