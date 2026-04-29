unsigned __int64 sub_17060(__int64 a1, __int64 a2, ...)
{
  __int64 v3; // rdi
  gcc_va_list va; // [rsp+0h] [rbp-D8h] BYREF
  unsigned __int64 v6; // [rsp+18h] [rbp-C0h]
  __int64 v7; // [rsp+30h] [rbp-A8h]
  __int64 v8; // [rsp+38h] [rbp-A0h]
  __int64 v9; // [rsp+40h] [rbp-98h]
  __int64 v10; // [rsp+48h] [rbp-90h]

  va_start(va, a2);
  v7 = va_arg(va, _QWORD);
  v8 = va_arg(va, _QWORD);
  v9 = va_arg(va, _QWORD);
  v10 = va_arg(va, _QWORD);
  va_end(va);
  va_start(va, a2);
  v6 = __readfsqword(0x28u);
  ((void (__fastcall *)(__int64, __va_list_tag *, __int64, __int64, __int64, __int64))qveprintf)(
    a2,
    va,
    v7,
    v8,
    v9,
    v10);
  sub_B9C0((__int64)"\n");
  v3 = *(_QWORD *)(a1 + 8200);
  if ( v3 )
  {
    qfclose(v3);
    qunlink(a1 + 4096);
  }
  return v6 - __readfsqword(0x28u);
}
