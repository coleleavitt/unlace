/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_804E817
// Address: 0x0804E817

//----- (0804E817) --------------------------------------------------------
void __usercall __noreturn sub_804E817(int a1@<ebp>, int a2@<esi>)
{
  void *v2; // eax
  int v3; // [esp+0h] [ebp-10h]

  sub_808AE30(v3);
  v2 = *(void **)(a1 - 120);
  if ( v2 )
  {
    *(_DWORD *)(a1 - 116) = 0;
    sub_80CF780(v2);
  }
  if ( *(_DWORD *)(a1 - 28) == __readgsdword(0x14u) )
    _Unwind_Resume(a2);
  sub_80D7AB0();
}
// 804E81B: variable 'v3' is possibly undefined
// 804BC60: using guessed type void __cdecl __noreturn _Unwind_Resume(_DWORD);
