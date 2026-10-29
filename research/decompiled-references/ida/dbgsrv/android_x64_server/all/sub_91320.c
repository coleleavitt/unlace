/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_91320
// Address: 0x0000000000091320

//----- (0000000000091320) ----------------------------------------------------
void __fastcall sub_91320(_QWORD *a1)
{
  void *v2; // rdi
  void *v3; // rdi

  *a1 = off_14E770;
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
}
// 14E770: using guessed type __int64 (__fastcall *off_14E770[3])();
