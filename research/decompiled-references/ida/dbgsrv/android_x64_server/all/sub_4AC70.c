/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4AC70
// Address: 0x000000000004AC70

//----- (000000000004AC70) ----------------------------------------------------
unsigned __int64 sub_4AC70(__int64 a1, int a2, ...)
{
  int v3; // [rsp+20h] [rbp-B8h]
  int v4; // [rsp+28h] [rbp-B0h]
  gcc_va_list va; // [rsp+B0h] [rbp-28h] BYREF
  unsigned __int64 v6; // [rsp+D0h] [rbp-8h]

  va_start(va, a2);
  va_arg(va, _QWORD);
  va_arg(va, _QWORD);
  v3 = va_arg(va, _QWORD);
  v4 = va_arg(va, _QWORD);
  va_end(va);
  v6 = __readfsqword(0x28u);
  if ( (debug & 0x10000) != 0 )
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
  return __readfsqword(0x28u);
}
// 155620: using guessed type __int64 (__fastcall *callui)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, char);
// 158B2C: using guessed type int debug;
