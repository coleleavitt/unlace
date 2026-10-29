/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A347C
// Address: 0x00000000004A347C

//----- (00000000004A347C) ----------------------------------------------------
void __fastcall __noreturn sub_4A347C(struct _Unwind_Exception *a1)
{
  __int64 *v1; // x19
  __int64 v2; // x1

  v2 = *v1;
  if ( (__int64 *)(v2 - 24) != std::string::_Rep::_S_empty_rep_storage )
    sub_4A19F0((void *)(v2 - 24));
  _Unwind_Resume(a1);
}
// 4A3480: variable 'v1' is possibly undefined
// 524590: using guessed type __int64 std::string::_Rep::_S_empty_rep_storage[4];
