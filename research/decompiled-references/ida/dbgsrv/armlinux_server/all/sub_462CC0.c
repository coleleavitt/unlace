/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_462CC0
// Address: 0x0000000000462CC0

//----- (0000000000462CC0) ----------------------------------------------------
void __fastcall sub_462CC0(_QWORD *a1)
{
  void *v2; // x0
  void *v3; // x0

  v2 = (void *)a1[5];
  *a1 = off_51AD18;
  if ( v2 )
  {
    a1[6] = 0;
    j__free(v2);
  }
  v3 = (void *)a1[2];
  if ( v3 )
  {
    a1[3] = 0;
    j__free(v3);
  }
  j_j__free_0(a1);
}
// 51AD18: using guessed type __int64 (__fastcall *off_51AD18[4])();
