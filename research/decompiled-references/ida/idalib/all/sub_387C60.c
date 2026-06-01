void __noreturn sub_387C60(__int64 a1, ...)
{
  __int64 v1; // rdi
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  gcc_va_list va; // [rsp+0h] [rbp-D8h] BYREF
  unsigned __int64 v7; // [rsp+18h] [rbp-C0h]
  __int64 v8; // [rsp+28h] [rbp-B0h]
  __int64 v9; // [rsp+30h] [rbp-A8h]
  __int64 v10; // [rsp+38h] [rbp-A0h]

  va_start(va, a1);
  v8 = va_arg(va, _QWORD);
  v9 = va_arg(va, _QWORD);
  v10 = va_arg(va, _QWORD);
  va_end(va);
  va_start(va, a1);
  v7 = __readfsqword(0x28u);
  v1 = itext(a1, v8, v9, v10);
  ((void (__fastcall __noreturn *)(__int64, __va_list_tag *, __int64, __int64, __int64, __int64))verror)(
    v1,
    va,
    v2,
    v3,
    v4,
    v5);
}
