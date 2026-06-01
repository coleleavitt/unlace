/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_390A0
// Address: 0x00000000000390A0

//----- (00000000000390A0) ----------------------------------------------------
__int64 sub_390A0(int a1, ...)
{
  int v2; // [rsp+20h] [rbp-B8h]
  int v3; // [rsp+28h] [rbp-B0h]
  gcc_va_list va; // [rsp+B0h] [rbp-28h] BYREF
  unsigned __int64 v5; // [rsp+D0h] [rbp-8h]

  va_start(va, a1);
  va_arg(va, _QWORD);
  va_arg(va, _QWORD);
  va_arg(va, _QWORD);
  v2 = va_arg(va, _QWORD);
  v3 = va_arg(va, _QWORD);
  va_end(va);
  va_start(va, a1);
  v5 = __readfsqword(0x28u);
  return ((__int64 (__fastcall *)(int, int, unsigned int, unsigned int, int, int))callui)(
           23,
           a1,
           (unsigned int)va,
           (unsigned int)&callui,
           v2,
           v3);
}
// 155620: using guessed type __int64 (__fastcall *callui)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, char);
