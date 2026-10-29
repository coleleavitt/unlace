/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_804C776
// Address: 0x0804C776

//----- (0804C776) --------------------------------------------------------
void __usercall __noreturn sub_804C776(int a1@<ebp>)
{
  _DWORD *v1; // [esp+0h] [ebp-10h]

  sub_80C6090(v1);
  if ( *(_DWORD *)(a1 - 28) == __readgsdword(0x14u) )
    _Unwind_Resume(*(_DWORD *)(a1 - 76));
  sub_80D7AB0();
}
// 804C77C: variable 'v1' is possibly undefined
// 804BC60: using guessed type void __cdecl __noreturn _Unwind_Resume(_DWORD);
