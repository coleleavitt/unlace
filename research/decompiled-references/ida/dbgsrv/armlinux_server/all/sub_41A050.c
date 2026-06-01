/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41A050
// Address: 0x000000000041A050

//----- (000000000041A050) ----------------------------------------------------
void __fastcall sub_41A050(_QWORD *a1)
{
  void *v1; // x2

  v1 = (void *)a1[5];
  *a1 = off_519BE0;
  if ( v1 )
  {
    a1[6] = 0;
    j__free(v1);
  }
}
// 519BE0: using guessed type __int64 (__fastcall *off_519BE0[3])();
