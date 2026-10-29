/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000162E0
// Address: 0x00000001000162E0

//----- (00000001000162E0) ----------------------------------------------------
__int64 sub_1000162E0(int a1, ...)
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
  ((void (__fastcall *)(int, int, int, unsigned int, unsigned int, int))callui)(
    24,
    5,
    a1,
    (unsigned int)va,
    (unsigned int)&callui,
    v2);
  return __stack_chk_guard;
}
// 1000ACFA8: using guessed type __int64 (__fastcall *callui)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, char);
