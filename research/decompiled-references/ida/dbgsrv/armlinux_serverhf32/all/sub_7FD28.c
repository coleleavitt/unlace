/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7FD28
// Address: 0x0007FD28

//----- (0007FD28) --------------------------------------------------------
void __fastcall __noreturn sub_7FD28(int a1, int a2, int a3, int a4)
{
  int v4; // r0

  v4 = sub_7FE58();
  Unwind_Resume(v4, a2, a3, a4);
}
// 14658: using guessed type void __fastcall __noreturn Unwind_Resume(_DWORD, _DWORD, _DWORD, _DWORD);
