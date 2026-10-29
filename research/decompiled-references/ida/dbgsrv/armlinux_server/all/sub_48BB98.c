/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48BB98
// Address: 0x000000000048BB98

//----- (000000000048BB98) ----------------------------------------------------
void __fastcall sub_48BB98(_QWORD *a1)
{
  void *v2; // x0

  v2 = (void *)a1[3];
  *a1 = off_51C9B0;
  if ( v2 )
  {
    a1[4] = 0;
    j__free(v2);
  }
  j_j__free_0(a1);
}
// 51C9B0: using guessed type __int64 (__fastcall *off_51C9B0[3])();
