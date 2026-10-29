/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001D6D0
// Address: 0x000000010001D6D0

//----- (000000010001D6D0) ----------------------------------------------------
__int64 sub_10001D6D0(int a1, int a2, ...)
{
  va_list va; // [rsp+C0h] [rbp-30h] BYREF

  va_start(va, a2);
  return callui(28, 0, 0, 0, a1, a2, (char)va);
}
// 1000ACFA8: using guessed type __int64 (__fastcall *callui)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, char);
