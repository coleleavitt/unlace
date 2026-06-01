/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100005090
// Address: 0x0000000100005090

//----- (0000000100005090) ----------------------------------------------------
__int64 sub_100005090(__int64 a1, char *a2, ...)
{
  __int64 v3; // [rsp+20h] [rbp-B0h]
  int v4; // [rsp+28h] [rbp-A8h]
  va_list va; // [rsp+B0h] [rbp-20h] BYREF

  va_start(va, a2);
  va_arg(va, _QWORD);
  va_arg(va, _QWORD);
  v3 = va_arg(va, _QWORD);
  v4 = va_arg(va, _QWORD);
  va_end(va);
  va_start(va, a2);
  sub_100060F70(0, *(_QWORD *)(a1 + 400), a2, (__int64)va, v3, v4);
  return __stack_chk_guard;
}
