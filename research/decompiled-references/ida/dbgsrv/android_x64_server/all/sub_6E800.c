/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6E800
// Address: 0x000000000006E800

//----- (000000000006E800) ----------------------------------------------------
void __noreturn sub_6E800(int a1, ...)
{
  gcc_va_list va; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v2; // [rsp+28h] [rbp-B0h]
  __int64 v3; // [rsp+30h] [rbp-A8h]
  __int64 v4; // [rsp+38h] [rbp-A0h]
  __int64 v5; // [rsp+40h] [rbp-98h]
  __int64 v6; // [rsp+48h] [rbp-90h]

  va_start(va, a1);
  v2 = va_arg(va, _QWORD);
  v3 = va_arg(va, _QWORD);
  v4 = va_arg(va, _QWORD);
  v5 = va_arg(va, _QWORD);
  v6 = va_arg(va, _QWORD);
  va_end(va);
  va_start(va, a1);
  sub_701E0(a1, (int)va, v3, v4, v5, v6);
}
