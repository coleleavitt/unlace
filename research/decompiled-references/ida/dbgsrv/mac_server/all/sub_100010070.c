/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100010070
// Address: 0x0000000100010070

//----- (0000000100010070) ----------------------------------------------------
__int64 sub_100010070(int a1, ...)
{
  int v2; // [rsp+28h] [rbp-A8h]
  va_list va; // [rsp+B0h] [rbp-20h] BYREF

  va_start(va, a1);
  va_arg(va, _QWORD);
  va_arg(va, _QWORD);
  va_arg(va, _QWORD);
  va_arg(va, _QWORD);
  v2 = va_arg(va, _QWORD);
  va_end(va);
  va_start(va, a1);
  return ((__int64 (__fastcall *)(int, int, int, unsigned int, unsigned int, int))callui)(
           24,
           2,
           a1,
           (unsigned int)va,
           (unsigned int)&callui,
           v2);
}
// 1000ACFA8: using guessed type __int64 (__fastcall *callui)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, char);
