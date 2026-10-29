/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4321AC
// Address: 0x00000000004321AC

//----- (00000000004321AC) ----------------------------------------------------
void __fastcall __noreturn sub_4321AC(struct _Unwind_Exception *a1)
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
// 4321AC: variable 'v1' is possibly undefined
