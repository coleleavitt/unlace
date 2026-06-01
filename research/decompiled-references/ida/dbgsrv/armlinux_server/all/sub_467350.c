/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_467350
// Address: 0x0000000000467350

//----- (0000000000467350) ----------------------------------------------------
void __fastcall __noreturn sub_467350(struct _Unwind_Exception *a1)
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
// 467350: variable 'v1' is possibly undefined
