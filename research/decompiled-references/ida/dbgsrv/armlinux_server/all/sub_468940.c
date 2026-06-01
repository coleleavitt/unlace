/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_468940
// Address: 0x0000000000468940

//----- (0000000000468940) ----------------------------------------------------
void __fastcall __noreturn sub_468940(struct _Unwind_Exception *a1)
{
  void **v1; // x23
  void *v2; // x24

  sub_48C0F8(v1);
  if ( v2 )
    j__free(v2);
  _Unwind_Resume(a1);
}
// 468948: variable 'v1' is possibly undefined
// 46894C: variable 'v2' is possibly undefined
