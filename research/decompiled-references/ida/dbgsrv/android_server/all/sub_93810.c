/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_93810
// Address: 0x0000000000093810

//----- (0000000000093810) ----------------------------------------------------
void __fastcall sub_93810(_QWORD *a1)
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
  }
  operator delete(a1);
}
// 15DF18: using guessed type __int64 (__fastcall *off_15DF18[4])();
