/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45B760
// Address: 0x000000000045B760

//----- (000000000045B760) ----------------------------------------------------
void __fastcall sub_45B760(_QWORD *a1)
{
  void *v2; // rdi

  *a1 = &off_4C3450;
  v2 = (void *)a1[2];
  if ( v2 )
  {
    a1[3] = 0;
    j__free(v2);
  }
  operator delete(a1, 0x28u);
}
// 4C3450: using guessed type _UNKNOWN *off_4C3450;
