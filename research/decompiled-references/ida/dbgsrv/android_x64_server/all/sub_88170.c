/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_88170
// Address: 0x0000000000088170

//----- (0000000000088170) ----------------------------------------------------
__int64 __fastcall sub_88170(__int64 a1, double a2, __m128 a3)
{
  __int64 v3; // r14
  __int64 result; // rax
  int qerrno; // eax

  v3 = *(_QWORD *)(a1 + 432);
  result = sub_862A0(a1, v3, 0, nullptr, a2, a3);
  if ( !(_DWORD)result && *(_QWORD *)(a1 + 64) )
    result = sub_871E0(a1, v3, a2, a3);
  if ( (_DWORD)result )
  {
    qerrno = get_qerrno();
    longjmp((struct __jmp_buf_tag *)(a1 + 344), qerrno);
  }
  return result;
}
