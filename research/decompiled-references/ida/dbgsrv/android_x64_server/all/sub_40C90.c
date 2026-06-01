/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40C90
// Address: 0x0000000000040C90

//----- (0000000000040C90) ----------------------------------------------------
unsigned __int64 sub_40C90(unsigned __int8 *a1, unsigned __int64 a2, int a3, ...)
{
  int v4; // [rsp+20h] [rbp-B8h]
  int v5; // [rsp+28h] [rbp-B0h]
  gcc_va_list va; // [rsp+B0h] [rbp-28h] BYREF
  unsigned __int64 v7; // [rsp+D0h] [rbp-8h]

  va_start(va, a3);
  va_arg(va, _QWORD);
  v4 = va_arg(va, _QWORD);
  v5 = va_arg(va, _QWORD);
  va_end(va);
  va_start(va, a3);
  v7 = __readfsqword(0x28u);
  vshow_hex(a1, a2, a3, (int)va, v4, v5);
  return __readfsqword(0x28u);
}
