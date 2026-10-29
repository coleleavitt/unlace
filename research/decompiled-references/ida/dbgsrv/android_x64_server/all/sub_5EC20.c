/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5EC20
// Address: 0x000000000005EC20

//----- (000000000005EC20) ----------------------------------------------------
__int64 sub_5EC20(int a1, int a2, ...)
{
  gcc_va_list va; // [rsp+C0h] [rbp-28h] BYREF
  unsigned __int64 v4; // [rsp+D8h] [rbp-10h]

  va_start(va, a2);
  v4 = __readfsqword(0x28u);
  return callui(28, 0, 0, 0, a1, a2, (char)va);
}
// 155620: using guessed type __int64 (__fastcall *callui)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, char);
