/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_391F0
// Address: 0x00000000000391F0

//----- (00000000000391F0) ----------------------------------------------------
unsigned __int64 sub_391F0(__int64 a1, char *a2, ...)
{
  __int64 v3; // [rsp+20h] [rbp-B8h]
  int v4; // [rsp+28h] [rbp-B0h]
  gcc_va_list va; // [rsp+B0h] [rbp-28h] BYREF
  unsigned __int64 v6; // [rsp+D0h] [rbp-8h]

  va_start(va, a2);
  va_arg(va, _QWORD);
  va_arg(va, _QWORD);
  v3 = va_arg(va, _QWORD);
  v4 = va_arg(va, _QWORD);
  va_end(va);
  va_start(va, a2);
  v6 = __readfsqword(0x28u);
  sub_9FC50(0, *(_QWORD *)(a1 + 400), a2, va, v3, v4);
  return __readfsqword(0x28u);
}
