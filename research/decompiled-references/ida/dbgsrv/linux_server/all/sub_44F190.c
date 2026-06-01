/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44F190
// Address: 0x000000000044F190

//----- (000000000044F190) ----------------------------------------------------
__int64 __fastcall sub_44F190(__int64 a1)
{
  __int64 v1; // rbp
  __int64 result; // rax
  unsigned int v3; // eax

  v1 = *(_QWORD *)(a1 + 560);
  result = sub_44DDC0(a1, v1, 0, nullptr);
  if ( *(_QWORD *)(a1 + 64) )
  {
    if ( (_DWORD)result )
      goto LABEL_3;
    result = sub_44ED20(a1, v1);
  }
  if ( (_DWORD)result )
  {
LABEL_3:
    v3 = sub_479E90();
    __longjmp_chk(a1 + 360, v3);
  }
  return result;
}
// 405100: using guessed type void __fastcall __noreturn __longjmp_chk(_QWORD, _QWORD);
