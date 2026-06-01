/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4095F8
// Address: 0x00000000004095F8

//----- (00000000004095F8) ----------------------------------------------------
void __fastcall __noreturn sub_4095F8(struct _Unwind_Exception *a1)
{
  __int64 v1; // x26
  void *v2; // x1

  v2 = *(void **)(v1 + 8);
  if ( v2 )
  {
    *(_QWORD *)(v1 + 16) = 0;
    j__free(v2);
  }
  _Unwind_Resume(a1);
}
// 4095F8: variable 'v1' is possibly undefined
