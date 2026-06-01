/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_804DCB6
// Address: 0x0804DCB6

//----- (0804DCB6) --------------------------------------------------------
void __usercall __noreturn sub_804DCB6(int a1@<ebp>)
{
  pthread_mutex_t *v1; // [esp+0h] [ebp-10h]

  sub_80D1600(v1);
  _Unwind_Resume(*(_DWORD *)(a1 - 28));
}
// 804DCBC: variable 'v1' is possibly undefined
// 804BC60: using guessed type void __cdecl __noreturn _Unwind_Resume(_DWORD);
