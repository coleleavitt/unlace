/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45A660
// Address: 0x000000000045A660

//----- (000000000045A660) ----------------------------------------------------
void __fastcall sub_45A660(_QWORD *a1)
{
  void *v2; // rdi

  *a1 = &off_4C3338;
  v2 = (void *)a1[14];
  if ( v2 )
  {
    a1[15] = 0;
    j__free(v2);
  }
  sub_46E240(a1);
  operator delete(a1, 0x90u);
}
// 4C3338: using guessed type __int64 (__fastcall *off_4C3338)();
