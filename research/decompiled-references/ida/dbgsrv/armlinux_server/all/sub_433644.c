/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_433644
// Address: 0x0000000000433644

//----- (0000000000433644) ----------------------------------------------------
void __fastcall __noreturn sub_433644(struct _Unwind_Exception *a1)
{
  void **v1; // x19
  void *v3; // x0

  if ( *v1 )
  {
    v3 = *v1;
    v1[1] = nullptr;
    j__free(v3);
  }
  j_j__free_0(v1);
  _Unwind_Resume(a1);
}
// 433644: variable 'v1' is possibly undefined
