/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42DA94
// Address: 0x000000000042DA94

//----- (000000000042DA94) ----------------------------------------------------
void __fastcall __noreturn sub_42DA94(struct _Unwind_Exception *a1)
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
// 42DA94: variable 'v1' is possibly undefined
