/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45C2E8
// Address: 0x000000000045C2E8

//----- (000000000045C2E8) ----------------------------------------------------
void __fastcall __noreturn sub_45C2E8(struct _Unwind_Exception *a1)
{
  __int64 v1; // x19
  void *v2; // x1

  v2 = *(void **)(v1 + 16);
  if ( v2 )
  {
    *(_QWORD *)(v1 + 24) = 0;
    j__free(v2);
  }
  _Unwind_Resume(a1);
}
// 45C2E8: variable 'v1' is possibly undefined
