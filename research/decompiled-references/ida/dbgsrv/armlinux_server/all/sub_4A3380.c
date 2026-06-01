/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A3380
// Address: 0x00000000004A3380

//----- (00000000004A3380) ----------------------------------------------------
void __fastcall __noreturn sub_4A3380(struct _Unwind_Exception *a1)
{
  __int64 *v1; // x19
  __int64 v2; // x22
  __int64 v3; // x1

  v3 = *v1;
  if ( v3 - 24 != *(_QWORD *)(v2 + 3912) )
    sub_4A19F0((void *)(v3 - 24));
  _Unwind_Resume(a1);
}
// 4A3380: variable 'v1' is possibly undefined
// 4A3388: variable 'v2' is possibly undefined
