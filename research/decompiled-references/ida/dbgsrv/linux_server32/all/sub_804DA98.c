/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_804DA98
// Address: 0x0804DA98

//----- (0804DA98) --------------------------------------------------------
void __usercall __noreturn sub_804DA98(int a1@<ebx>, int a2@<ebp>)
{
  _DWORD *v2; // [esp+0h] [ebp-10h]

  sub_807B140(v2);
  if ( *(_DWORD *)(a2 - 28) == __readgsdword(0x14u) )
    _Unwind_Resume(a1);
  sub_80D7AB0();
}
// 804DA9C: variable 'v2' is possibly undefined
// 804BC60: using guessed type void __cdecl __noreturn _Unwind_Resume(_DWORD);
