/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_406D5C
// Address: 0x0000000000406D5C

//----- (0000000000406D5C) ----------------------------------------------------
void __fastcall __noreturn sub_406D5C(struct _Unwind_Exception *a1)
{
  __int64 v1; // x19
  __int64 v2; // x19
  void *v4; // x0

  v2 = v1 + 976;
  v4 = *(void **)(v2 + 8);
  if ( v4 )
  {
    *(_QWORD *)(v2 + 16) = 0;
    j__free(v4);
  }
  _Unwind_Resume(a1);
}
// 406D5C: variable 'v1' is possibly undefined
