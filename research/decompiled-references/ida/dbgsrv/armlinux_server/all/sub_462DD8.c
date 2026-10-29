/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_462DD8
// Address: 0x0000000000462DD8

//----- (0000000000462DD8) ----------------------------------------------------
void __fastcall sub_462DD8(_QWORD *a1)
{
  void *v2; // x0
  void *v3; // x0

  v2 = (void *)a1[7];
  *a1 = off_51AF50;
  if ( v2 )
  {
    a1[8] = 0;
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
// 51AF50: using guessed type __int64 (__fastcall *off_51AF50[4])();
