/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_804D9CA
// Address: 0x0804D9CA

//----- (0804D9CA) --------------------------------------------------------
void __usercall __noreturn sub_804D9CA(int a1@<ebp>)
{
  pthread_mutex_t *v1; // [esp+0h] [ebp-10h]

  sub_80D1600(v1);
  if ( *(_DWORD *)(a1 - 28) == __readgsdword(0x14u) )
    _Unwind_Resume(*(_DWORD *)(a1 - 44));
  sub_80D7AB0();
}
// 804D9D0: variable 'v1' is possibly undefined
// 804BC60: using guessed type void __cdecl __noreturn _Unwind_Resume(_DWORD);
