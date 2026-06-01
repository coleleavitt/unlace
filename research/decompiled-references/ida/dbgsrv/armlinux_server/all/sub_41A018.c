/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41A018
// Address: 0x000000000041A018

//----- (000000000041A018) ----------------------------------------------------
void __fastcall sub_41A018(_QWORD *a1)
{
  void *v2; // x0

  v2 = (void *)a1[5];
  *a1 = off_519C08;
  if ( v2 )
  {
    a1[6] = 0;
    j__free(v2);
  }
  j_j__free_0(a1);
}
// 519C08: using guessed type __int64 (__fastcall *off_519C08[3])();
