/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_502C8
// Address: 0x000502C8

//----- (000502C8) --------------------------------------------------------
int __fastcall sub_502C8(int a1)
{
  int result; // r0
  int v3; // r0

  result = sub_5029C(a1, *(unsigned __int8 ***)(a1 + 592), nullptr);
  if ( result )
  {
    v3 = sub_70B7C();
    _longjmp_chk(a1 + 200, v3);
  }
  return result;
}
// 13EC0: using guessed type void __fastcall __noreturn _longjmp_chk(_DWORD, _DWORD);
