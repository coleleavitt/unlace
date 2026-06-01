/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45B470
// Address: 0x000000000045B470

//----- (000000000045B470) ----------------------------------------------------
void __fastcall sub_45B470(_QWORD *a1)
{
  void *v1; // rax

  *a1 = off_4C33F8;
  v1 = (void *)a1[1];
  if ( v1 )
  {
    a1[2] = 0;
    j__free(v1);
  }
}
// 4C33F8: using guessed type __int64 (__fastcall *off_4C33F8[2])();
