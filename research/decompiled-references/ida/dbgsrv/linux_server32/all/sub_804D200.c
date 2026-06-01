/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_804D200
// Address: 0x0804D200

//----- (0804D200) --------------------------------------------------------
void __usercall __noreturn sub_804D200(int a1@<ebp>)
{
  pthread_mutex_t *v1; // [esp+0h] [ebp-10h]

  sub_80D1600(v1);
  _Unwind_Resume(*(_DWORD *)(a1 - 28));
}
// 804D206: variable 'v1' is possibly undefined
// 804BC60: using guessed type void __cdecl __noreturn _Unwind_Resume(_DWORD);
