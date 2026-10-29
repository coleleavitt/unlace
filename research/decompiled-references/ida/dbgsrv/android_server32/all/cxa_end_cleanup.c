/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cxa_end_cleanup
// Address: 0x0008FF50

//----- (0008FF50) --------------------------------------------------------
void __fastcall __noreturn _cxa_end_cleanup(int a1, int a2, int a3, int a4)
{
  int *v4; // r0

  v4 = (int *)sub_900A0();
  Unwind_Resume(v4, a2, a3, a4);
}
