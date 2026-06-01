/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_804DBC0
// Address: 0x0804DBC0

//----- (0804DBC0) --------------------------------------------------------
void __usercall __noreturn sub_804DBC0(int a1@<ebp>)
{
  __guard *v1; // [esp+0h] [ebp-10h]

  __cxa_guard_abort(v1);
  _Unwind_Resume(*(_DWORD *)(a1 - 28));
}
// 804DBC6: variable 'v1' is possibly undefined
// 804BC60: using guessed type void __cdecl __noreturn _Unwind_Resume(_DWORD);
