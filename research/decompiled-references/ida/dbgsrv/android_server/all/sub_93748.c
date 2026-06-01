/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_93748
// Address: 0x0000000000093748

//----- (0000000000093748) ----------------------------------------------------
void __fastcall sub_93748(_QWORD *a1)
{
  void *v2; // x0

  v2 = (void *)a1[2];
  *a1 = off_15DEE8;
  if ( v2 )
  {
    a1[3] = 0;
    qfree(v2);
    a1[2] = 0;
    a1[4] = 0;
  }
}
// 15DEE8: using guessed type __int64 (__fastcall *off_15DEE8[4])();
