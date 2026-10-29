__int64 sub_7C7C70(__int64 a1, ...)
{
  FILE *v1; // rbx
  unsigned int v2; // ebp
  gcc_va_list va; // [rsp+0h] [rbp-E8h] BYREF
  unsigned __int64 v5; // [rsp+18h] [rbp-D0h]
  __int64 v6; // [rsp+28h] [rbp-C0h]
  __int64 v7; // [rsp+30h] [rbp-B8h]
  __int64 v8; // [rsp+38h] [rbp-B0h]
  __int64 v9; // [rsp+40h] [rbp-A8h]
  __int64 v10; // [rsp+48h] [rbp-A0h]

  va_start(va, a1);
  v6 = va_arg(va, _QWORD);
  v7 = va_arg(va, _QWORD);
  v8 = va_arg(va, _QWORD);
  v9 = va_arg(va, _QWORD);
  v10 = va_arg(va, _QWORD);
  va_end(va);
  va_start(va, a1);
  v5 = __readfsqword(0x28u);
  v1 = stream;
  if ( !stream )
    v1 = stdout;
  v2 = qvfprintf(v1, a1, va, v8, v9, v10);
  fflush(v1);
  return v2;
}
