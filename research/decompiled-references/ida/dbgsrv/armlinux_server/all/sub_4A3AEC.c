/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A3AEC
// Address: 0x00000000004A3AEC

//----- (00000000004A3AEC) ----------------------------------------------------
void __fastcall __noreturn sub_4A3AEC(struct _Unwind_Exception *a1)
{
  __int64 v1; // x29
  __int64 *v3; // x0

  v3 = (__int64 *)(*(_QWORD *)(v1 + 72) - 24LL);
  if ( v3 != std::string::_Rep::_S_empty_rep_storage )
    sub_4A19F0(v3);
  _Unwind_Resume(a1);
}
// 4A3AF0: variable 'v1' is possibly undefined
// 524590: using guessed type __int64 std::string::_Rep::_S_empty_rep_storage[4];
