/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006D460
// Address: 0x000000010006D460

//----- (000000010006D460) ----------------------------------------------------
void __fastcall sub_10006D460(_QWORD *a1)
{
  void *v2; // rdi
  void *v3; // rdi

  *a1 = &off_1000AA700;
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
// 1000AA700: using guessed type __int64 (__fastcall *off_1000AA700)();
