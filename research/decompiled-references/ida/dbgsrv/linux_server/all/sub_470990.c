/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_470990
// Address: 0x0000000000470990

//----- (0000000000470990) ----------------------------------------------------
void __fastcall sub_470990(_QWORD *a1)
{
  void *v2; // rdi
  void *v3; // rdi

  *a1 = &off_4C3E18;
  v2 = (void *)a1[8];
  if ( v2 )
  {
    a1[9] = 0;
    j__free(v2);
  }
  v3 = (void *)a1[4];
  if ( v3 )
  {
    a1[5] = 0;
    j__free(v3);
  }
  operator delete(a1, 0x68u);
}
// 4C3E18: using guessed type _UNKNOWN *off_4C3E18;
