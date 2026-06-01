/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41A078
// Address: 0x000000000041A078

//----- (000000000041A078) ----------------------------------------------------
void __fastcall sub_41A078(_QWORD *a1)
{
  void *v2; // x0

  v2 = (void *)a1[5];
  *a1 = off_519BE0;
  if ( v2 )
  {
    a1[6] = 0;
    j__free(v2);
  }
  j_j__free_0(a1);
}
// 519BE0: using guessed type __int64 (__fastcall *off_519BE0[3])();
