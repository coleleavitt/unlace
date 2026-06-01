/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48CCA8
// Address: 0x000000000048CCA8

//----- (000000000048CCA8) ----------------------------------------------------
void __fastcall __noreturn sub_48CCA8(struct _Unwind_Exception *a1)
{
  _QWORD *v1; // x19
  void *v3; // x0

  if ( v1[6] )
  {
    v3 = (void *)v1[6];
    v1[7] = 0;
    j__free(v3);
  }
  j_j__free_0(v1);
  _Unwind_Resume(a1);
}
// 48CCA8: variable 'v1' is possibly undefined
