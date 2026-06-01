/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_804E6FA
// Address: 0x0804E6FA

//----- (0804E6FA) --------------------------------------------------------
void __usercall __noreturn sub_804E6FA(int a1@<ebp>)
{
  int v1; // [esp+0h] [ebp-10h]

  sub_8089430(v1);
  if ( *(_DWORD *)(a1 - 28) == __readgsdword(0x14u) )
    _Unwind_Resume(*(_DWORD *)(a1 - 60));
  sub_80D7AB0();
}
// 804E700: variable 'v1' is possibly undefined
// 804BC60: using guessed type void __cdecl __noreturn _Unwind_Resume(_DWORD);
