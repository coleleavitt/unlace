/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8051CE6
// Address: 0x08051CE6

//----- (08051CE6) --------------------------------------------------------
void __usercall __noreturn sub_8051CE6(int a1@<ebp>)
{
  pthread_mutex_t *v1; // [esp+0h] [ebp-10h]

  sub_80D1600(v1);
  _Unwind_Resume(*(_DWORD *)(a1 - 28));
}
// 8051CEC: variable 'v1' is possibly undefined
// 804BC60: using guessed type void __cdecl __noreturn _Unwind_Resume(_DWORD);
