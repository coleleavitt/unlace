/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A3418
// Address: 0x00000000004A3418

//----- (00000000004A3418) ----------------------------------------------------
void __fastcall __noreturn sub_4A3418(struct _Unwind_Exception *a1)
{
  __int64 *v1; // x19
  __int64 v2; // x21
  __int64 v3; // x1

  v3 = *v1;
  if ( v3 - 24 != *(_QWORD *)(v2 + 3912) )
    sub_4A19F0((void *)(v3 - 24));
  _Unwind_Resume(a1);
}
// 4A3418: variable 'v1' is possibly undefined
// 4A3420: variable 'v2' is possibly undefined
