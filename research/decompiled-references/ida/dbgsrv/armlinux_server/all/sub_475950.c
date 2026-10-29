/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_475950
// Address: 0x0000000000475950

//----- (0000000000475950) ----------------------------------------------------
void __fastcall __noreturn sub_475950(struct _Unwind_Exception *a1)
{
  __int64 v1; // x19
  void *v2; // x1

  v2 = *(void **)(v1 + 144);
  if ( v2 )
  {
    *(_QWORD *)(v1 + 152) = 0;
    j__free(v2);
  }
  _Unwind_Resume(a1);
}
// 475950: variable 'v1' is possibly undefined
