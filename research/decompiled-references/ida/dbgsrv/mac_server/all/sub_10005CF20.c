/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005CF20
// Address: 0x000000010005CF20

//----- (000000010005CF20) ----------------------------------------------------
__int64 sub_10005CF20(__int64 a1, int a2, ...)
{
  int v3; // [rsp+20h] [rbp-B0h]
  int v4; // [rsp+28h] [rbp-A8h]
  va_list va; // [rsp+B0h] [rbp-20h] BYREF

  va_start(va, a2);
  va_arg(va, _QWORD);
  va_arg(va, _QWORD);
  v3 = va_arg(va, _QWORD);
  v4 = va_arg(va, _QWORD);
  va_end(va);
  if ( (debug[2] & 0x40) != 0 )
  {
    va_start(va, a2);
    ((void (__fastcall *)(int, int, unsigned int, unsigned int, int, int))callui)(
      23,
      a2,
      (unsigned int)va,
      (unsigned int)&callui,
      v3,
      v4);
  }
  return __stack_chk_guard;
}
// 1000ACFA8: using guessed type __int64 (__fastcall *callui)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, char);
