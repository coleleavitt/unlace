__int64 sub_236E30(unsigned int a1, ...)
{
  int v1; // ebx
  __int64 result; // rax
  gcc_va_list va; // [rsp+0h] [rbp-D8h] BYREF
  unsigned __int64 v4; // [rsp+18h] [rbp-C0h]
  __int64 v5; // [rsp+28h] [rbp-B0h]
  __int64 v6; // [rsp+30h] [rbp-A8h]
  __int64 v7; // [rsp+38h] [rbp-A0h]
  __int64 v8; // [rsp+40h] [rbp-98h]
  __int64 v9; // [rsp+48h] [rbp-90h]

  va_start(va, a1);
  v5 = va_arg(va, _QWORD);
  v6 = va_arg(va, _QWORD);
  v7 = va_arg(va, _QWORD);
  v8 = va_arg(va, _QWORD);
  v9 = va_arg(va, _QWORD);
  va_end(va);
  va_start(va, a1);
  v4 = __readfsqword(0x28u);
  v1 = dword_8CC428;
  LODWORD(dword_8CC428) = HIDWORD(qword_8CC340);
  dword_8CC448 = v1;
  byte_8CC44C = 1;
  result = ((__int64 (__fastcall *)(__int64, _QWORD, __va_list_tag *, __int64, __int64, __int64))invoke_callbacks)(
             2,
             a1,
             va,
             v7,
             v8,
             v9);
  byte_8CC44C = 0;
  if ( !v1 || dword_8CC448 )
    LODWORD(dword_8CC428) = dword_8CC448;
  return result;
}
