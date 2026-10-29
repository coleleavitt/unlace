/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45B970
// Address: 0x000000000045B970

//----- (000000000045B970) ----------------------------------------------------
void __fastcall sub_45B970(_QWORD *a1)
{
  void *v2; // rdi
  void *v3; // rdi

  *a1 = off_4C34A8;
  v2 = (void *)a1[7];
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
  operator delete(a1, 0x50u);
}
// 4C34A8: using guessed type __int64 (__fastcall *off_4C34A8[3])();
