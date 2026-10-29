/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_364A0
// Address: 0x00000000000364A0

//----- (00000000000364A0) ----------------------------------------------------
unsigned __int64 sub_364A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, ...)
{
  gcc_va_list va; // [rsp+B0h] [rbp-28h] BYREF
  unsigned __int64 v6; // [rsp+D0h] [rbp-8h]

  va_start(va, a4);
  v6 = __readfsqword(0x28u);
  __vsnprintf_chk(a1, a3, 0, a2, a4, va);
  return __readfsqword(0x28u);
}
// 33A70: using guessed type __int64 __fastcall __vsnprintf_chk(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
