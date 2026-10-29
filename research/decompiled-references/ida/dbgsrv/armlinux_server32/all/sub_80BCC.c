/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80BCC
// Address: 0x00080BCC

//----- (00080BCC) --------------------------------------------------------
void __fastcall __noreturn sub_80BCC(int a1, int a2, int a3, int a4)
{
  int v4; // r0

  v4 = sub_80CFC();
  Unwind_Resume(v4, a2, a3, a4);
}
// 147F4: using guessed type void __fastcall __noreturn Unwind_Resume(_DWORD, _DWORD, _DWORD, _DWORD);
