/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_462880
// Address: 0x0000000000462880

//----- (0000000000462880) ----------------------------------------------------
void __fastcall sub_462880(_QWORD *a1)
{
  void *v2; // x0

  v2 = (void *)a1[2];
  *a1 = off_51ACE8;
  if ( v2 )
  {
    a1[3] = 0;
    j__free(v2);
  }
  j_j__free_0(a1);
}
// 51ACE8: using guessed type __int64 (__fastcall *off_51ACE8[4])();
