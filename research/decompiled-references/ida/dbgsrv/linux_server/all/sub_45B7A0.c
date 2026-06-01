/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45B7A0
// Address: 0x000000000045B7A0

//----- (000000000045B7A0) ----------------------------------------------------
void __fastcall sub_45B7A0(_QWORD *a1)
{
  void *v2; // rdi

  *a1 = off_4C33F8;
  v2 = (void *)a1[1];
  if ( v2 )
  {
    a1[2] = 0;
    j__free(v2);
  }
  operator delete(a1, 0x260u);
}
// 4C33F8: using guessed type __int64 (__fastcall *off_4C33F8[2])();
