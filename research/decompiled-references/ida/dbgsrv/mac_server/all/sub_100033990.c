/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100033990
// Address: 0x0000000100033990

//----- (0000000100033990) ----------------------------------------------------
__int64 sub_100033990(char *a1, ...)
{
  __int64 v2; // [rsp+10h] [rbp-C0h]
  __int64 v3; // [rsp+18h] [rbp-B8h]
  __int64 v4; // [rsp+20h] [rbp-B0h]
  int v5; // [rsp+28h] [rbp-A8h]
  va_list va; // [rsp+B0h] [rbp-20h] BYREF

  va_start(va, a1);
  va_arg(va, _QWORD);
  v2 = va_arg(va, _QWORD);
  v3 = va_arg(va, _QWORD);
  v4 = va_arg(va, _QWORD);
  v5 = va_arg(va, _QWORD);
  va_end(va);
  va_start(va, a1);
  verror(a1, (__int64)va, v2, v3, v4, v5);
  return sub_100033A20((__int64 *)a1, (__int64)va);
}
