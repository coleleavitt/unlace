/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42B72C
// Address: 0x000000000042B72C

//----- (000000000042B72C) ----------------------------------------------------
void __fastcall __noreturn sub_42B72C(struct _Unwind_Exception *a1)
{
  __int64 v1; // x19
  void *v2; // x1

  v2 = *(void **)v1;
  if ( *(_QWORD *)v1 )
  {
    *(_QWORD *)(v1 + 8) = 0;
    j__free(v2);
  }
  _Unwind_Resume(a1);
}
// 42B72C: variable 'v1' is possibly undefined
