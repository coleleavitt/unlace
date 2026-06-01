/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B25C0
// Address: 0x00000000004B25C0

//----- (00000000004B25C0) ----------------------------------------------------
void __fastcall __noreturn sub_4B25C0(struct _Unwind_Exception *a1)
{
  void **v1; // x19
  void *v2; // x21
  void *v3; // x1

  v3 = *v1;
  if ( v2 != v3 )
    j__free_0(v3);
  _Unwind_Resume(a1);
}
// 4B25C0: variable 'v1' is possibly undefined
// 4B25CC: variable 'v2' is possibly undefined
