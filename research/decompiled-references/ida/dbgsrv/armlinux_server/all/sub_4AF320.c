/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4AF320
// Address: 0x00000000004AF320

//----- (00000000004AF320) ----------------------------------------------------
void __fastcall __noreturn sub_4AF320(struct _Unwind_Exception *a1)
{
  __int64 v1; // x19
  __int64 v2; // x20
  __int64 v3; // x29

  *(_QWORD *)(v3 + 24) = v2;
  nullsub_4(v1);
  _Unwind_Resume(a1);
}
// 4AF320: variable 'v2' is possibly undefined
// 4AF320: variable 'v3' is possibly undefined
// 4AF32C: variable 'v1' is possibly undefined
// 49F2D8: using guessed type __int64 __fastcall nullsub_4(_QWORD);
