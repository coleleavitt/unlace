/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_805226C
// Address: 0x0805226C

//----- (0805226C) --------------------------------------------------------
void __usercall __noreturn sub_805226C(int a1@<ebp>)
{
  int v1; // [esp+0h] [ebp-10h]

  sub_80CD8D0(v1);
  _Unwind_Resume(*(_DWORD *)(a1 - 28));
}
// 8052272: variable 'v1' is possibly undefined
// 804BC60: using guessed type void __cdecl __noreturn _Unwind_Resume(_DWORD);
