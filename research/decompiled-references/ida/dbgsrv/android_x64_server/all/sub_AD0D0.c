/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AD0D0
// Address: 0x00000000000AD0D0

//----- (00000000000AD0D0) ----------------------------------------------------
void __fastcall sub_AD0D0(_QWORD *a1)
{
  void *v2; // rdi
  void *v3; // rdi

  *a1 = &off_14F6D8;
  v2 = (void *)a1[8];
  if ( v2 )
  {
    a1[9] = 0;
    qfree(v2);
    a1[8] = 0;
    a1[10] = 0;
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
// 14F6D8: using guessed type __int64 (__fastcall *off_14F6D8)();
