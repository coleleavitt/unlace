/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_423900
// Address: 0x0000000000423900

//----- (0000000000423900) ----------------------------------------------------
void __fastcall sub_423900(_QWORD *a1)
{
  void *v2; // rdi

  *a1 = &off_4C2300;
  v2 = (void *)a1[5];
  if ( v2 )
  {
    a1[6] = 0;
    j__free(v2);
  }
  operator delete(a1, 0x50u);
}
// 4C2300: using guessed type __int64 (__fastcall *off_4C2300)();
