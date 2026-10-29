/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_479740
// Address: 0x0000000000479740

//----- (0000000000479740) ----------------------------------------------------
void __fastcall sub_479740(_QWORD *a1)
{
  void *v2; // x0
  void *v3; // x0

  v2 = (void *)a1[8];
  *a1 = off_51BA78;
  if ( v2 )
  {
    a1[9] = 0;
    j__free(v2);
  }
  v3 = (void *)a1[4];
  if ( v3 )
  {
    a1[5] = 0;
    j__free(v3);
  }
  j_j__free_0(a1);
}
// 51BA78: using guessed type __int64 (__fastcall *off_51BA78[7])();
