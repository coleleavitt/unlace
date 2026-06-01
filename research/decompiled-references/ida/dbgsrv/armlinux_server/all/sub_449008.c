/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_449008
// Address: 0x0000000000449008

//----- (0000000000449008) ----------------------------------------------------
void __fastcall __noreturn sub_449008(_QWORD *a1)
{
  _QWORD *v1; // x20
  void *v3; // x0

  if ( v1[4] )
  {
    v3 = (void *)v1[4];
    v1[5] = 0;
    j__free(v3);
  }
  sub_49EF68(a1);
  j__free_0(v1);
  sub_49DD38();
}
// 449008: variable 'v1' is possibly undefined
