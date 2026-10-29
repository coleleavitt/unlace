/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46C050
// Address: 0x000000000046C050

//----- (000000000046C050) ----------------------------------------------------
void __fastcall __noreturn sub_46C050(struct _Unwind_Exception *a1)
{
  __int64 v1; // x19
  void *v2; // x1
  void *v4; // x0

  v2 = *(void **)(v1 + 24);
  if ( v2 )
  {
    *(_QWORD *)(v1 + 32) = 0;
    j__free(v2);
  }
  v4 = *(void **)v1;
  if ( *(_QWORD *)v1 )
  {
    *(_QWORD *)(v1 + 8) = 0;
    j__free(v4);
  }
  _Unwind_Resume(a1);
}
// 46C050: variable 'v1' is possibly undefined
