/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100000AE0
// Address: 0x0000000100000AE0

//----- (0000000100000AE0) ----------------------------------------------------
__int64 sub_100000AE0(int a1, ...)
{
  int v2; // [rsp+20h] [rbp-B0h]
  int v3; // [rsp+28h] [rbp-A8h]
  va_list va; // [rsp+B0h] [rbp-20h] BYREF

  va_start(va, a1);
  va_arg(va, _QWORD);
  va_arg(va, _QWORD);
  va_arg(va, _QWORD);
  v2 = va_arg(va, _QWORD);
  v3 = va_arg(va, _QWORD);
  va_end(va);
  va_start(va, a1);
  return ((__int64 (__fastcall *)(int, int, unsigned int, unsigned int, int, int))callui)(
           23,
           a1,
           (unsigned int)va,
           (unsigned int)&callui,
           v2,
           v3);
}
// 1000ACFA8: using guessed type __int64 (__fastcall *callui)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, char);
