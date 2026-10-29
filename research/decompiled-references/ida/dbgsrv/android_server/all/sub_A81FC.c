/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A81FC
// Address: 0x00000000000A81FC

//----- (00000000000A81FC) ----------------------------------------------------
void __fastcall sub_A81FC(_QWORD *a1)
{
  void *v2; // x0
  void *v3; // x0

  v2 = (void *)a1[8];
  *a1 = off_15F2D8;
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
  }
  operator delete(a1);
}
// 15F2D8: using guessed type __int64 (__fastcall *off_15F2D8[7])();
