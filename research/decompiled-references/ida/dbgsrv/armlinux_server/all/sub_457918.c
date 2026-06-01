/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_457918
// Address: 0x0000000000457918

//----- (0000000000457918) ----------------------------------------------------
__int64 __fastcall sub_457918(__int64 a1)
{
  __int64 result; // x0
  unsigned int v3; // w0

  result = sub_4578C8(a1, *(unsigned __int8 ***)(a1 + 672), nullptr);
  if ( (_DWORD)result )
  {
    v3 = sub_4869A0();
    __longjmp_chk(a1 + 360, v3);
  }
  return result;
}
// 406560: using guessed type void __fastcall __noreturn __longjmp_chk(_QWORD, _QWORD);
