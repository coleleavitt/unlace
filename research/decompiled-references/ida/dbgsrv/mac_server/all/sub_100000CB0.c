/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100000CB0
// Address: 0x0000000100000CB0

//----- (0000000100000CB0) ----------------------------------------------------
void __noreturn sub_100000CB0(int a1, ...)
{
  __int64 v1; // [rsp+10h] [rbp-C0h]
  __int64 v2; // [rsp+18h] [rbp-B8h]
  __int64 v3; // [rsp+20h] [rbp-B0h]
  int v4; // [rsp+28h] [rbp-A8h]
  va_list va; // [rsp+B0h] [rbp-20h] BYREF

  va_start(va, a1);
  va_arg(va, _QWORD);
  v1 = va_arg(va, _QWORD);
  v2 = va_arg(va, _QWORD);
  v3 = va_arg(va, _QWORD);
  v4 = va_arg(va, _QWORD);
  va_end(va);
  va_start(va, a1);
  sub_100001590(a1, (int)va, v1, v2, v3, v4);
}
