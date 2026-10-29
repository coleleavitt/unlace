/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_475040
// Address: 0x0000000000475040

//----- (0000000000475040) ----------------------------------------------------
void __fastcall sub_475040(_QWORD *a1)
{
  void *v2; // rdi

  *a1 = &off_4C40A0;
  a1[8] = 0;
  a1[10] = 0;
  sub_474F80(a1, -1);
  v2 = (void *)a1[5];
  if ( v2 )
  {
    a1[6] = 0;
    j__free(v2);
  }
  operator delete(a1, 0x68u);
}
// 4C40A0: using guessed type _UNKNOWN *off_4C40A0;
