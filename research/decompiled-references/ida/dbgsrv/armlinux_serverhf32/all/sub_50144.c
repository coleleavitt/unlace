/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_50144
// Address: 0x00050144

//----- (00050144) --------------------------------------------------------
int __fastcall sub_50144(int a1)
{
  int result; // r0
  int v3; // r0

  result = sub_50118(a1, *(unsigned __int8 ***)(a1 + 592), nullptr);
  if ( result )
  {
    v3 = sub_70A10();
    _longjmp_chk(a1 + 200, v3);
  }
  return result;
}
// 13D78: using guessed type void __fastcall __noreturn _longjmp_chk(_DWORD, _DWORD);
