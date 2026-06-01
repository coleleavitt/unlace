/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80CFF40
// Address: 0x080CFF40

//----- (080CFF40) --------------------------------------------------------
void __cdecl __noreturn sub_80CFF40(int a1, int a2, int a3, int a4)
{
  if ( !(unsigned __int8)sub_80C7C00() )
    sub_8058270("Oops! internal error %d occurred.", a1);
  sub_80522DA((int)&qword_811CFF4, a1, a2, a3, a4);
}
// 811CFF4: using guessed type __int64 qword_811CFF4;
