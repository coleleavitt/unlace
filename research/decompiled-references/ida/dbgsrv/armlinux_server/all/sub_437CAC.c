/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_437CAC
// Address: 0x0000000000437CAC

//----- (0000000000437CAC) ----------------------------------------------------
void __fastcall __noreturn sub_437CAC(struct _Unwind_Exception *a1)
{
  __int64 v1; // x19
  __int64 v2; // x20
  __int64 v3; // x22
  __int64 v4; // x23
  __int64 v5; // x24
  void *v6; // x1

  v6 = *(void **)(v5 + v2);
  if ( v6 )
  {
    *(_QWORD *)(v1 + 8) = 0;
    j__free(v6);
  }
  sub_4379A0(v4);
  sub_4379A0(v3);
  _Unwind_Resume(a1);
}
// 437CAC: variable 'v5' is possibly undefined
// 437CAC: variable 'v2' is possibly undefined
// 437CB8: variable 'v1' is possibly undefined
// 437CCC: variable 'v4' is possibly undefined
// 437CD4: variable 'v3' is possibly undefined
