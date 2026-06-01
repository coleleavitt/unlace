/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_804E752
// Address: 0x0804E752

//----- (0804E752) --------------------------------------------------------
void __usercall __noreturn sub_804E752(int a1@<ebp>)
{
  pthread_mutex_t *v1; // [esp+0h] [ebp-10h]

  sub_80D1600(v1);
  if ( *(_DWORD *)(a1 - 28) == __readgsdword(0x14u) )
    _Unwind_Resume(*(_DWORD *)(a1 - 76));
  sub_80D7AB0();
}
// 804E758: variable 'v1' is possibly undefined
// 804BC60: using guessed type void __cdecl __noreturn _Unwind_Resume(_DWORD);
