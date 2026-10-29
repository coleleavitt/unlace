/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_431EA4
// Address: 0x0000000000431EA4

//----- (0000000000431EA4) ----------------------------------------------------
void __fastcall __noreturn sub_431EA4(struct _Unwind_Exception *a1)
{
  __int64 v1; // x20
  void *v2; // x1

  v2 = *(void **)(v1 + 8);
  if ( v2 )
  {
    *(_QWORD *)(v1 + 16) = 0;
    j__free(v2);
  }
  _Unwind_Resume(a1);
}
// 431EA4: variable 'v1' is possibly undefined
