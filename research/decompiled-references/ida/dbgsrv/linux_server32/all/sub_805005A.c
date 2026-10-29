/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_805005A
// Address: 0x0805005A

//----- (0805005A) --------------------------------------------------------
void __usercall __noreturn sub_805005A(int a1@<ebp>, void *a2@<esi>)
{
  operator delete(a2, 0xFCu);
  _Unwind_Resume(*(_DWORD *)(a1 - 28));
}
// 804BC60: using guessed type void __cdecl __noreturn _Unwind_Resume(_DWORD);
