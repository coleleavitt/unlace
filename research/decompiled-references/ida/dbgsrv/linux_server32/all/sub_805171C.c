/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_805171C
// Address: 0x0805171C

//----- (0805171C) --------------------------------------------------------
void __usercall __noreturn sub_805171C(int a1@<ebx>)
{
  int v1; // [esp+0h] [ebp-10h]

  sub_8058ED0(v1);
  _Unwind_Resume(a1);
}
// 8051720: variable 'v1' is possibly undefined
// 804BC60: using guessed type void __cdecl __noreturn _Unwind_Resume(_DWORD);
