/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001DA30
// Address: 0x000000010001DA30

//----- (000000010001DA30) ----------------------------------------------------
__int64 sub_10001DA30(int a1, ...)
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
    9,
    a1,
    (unsigned int)va,
    (unsigned int)&callui,
    v2);
  return __stack_chk_guard;
}
// 1000ACFA8: using guessed type __int64 (__fastcall *callui)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, char);
