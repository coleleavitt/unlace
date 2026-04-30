_BOOL8 sub_28AB20(char a1, __int64 a2, ...)
{
  _BOOL8 result; // rax
  int v3; // eax
  gcc_va_list va; // [rsp+0h] [rbp-D8h] BYREF
  unsigned __int64 v5; // [rsp+18h] [rbp-C0h]
  __int64 v6; // [rsp+30h] [rbp-A8h]

  va_start(va, a2);
  v6 = va_arg(va, _QWORD);
  va_end(va);
  v5 = __readfsqword(0x28u);
  result = 1;
  if ( a1 )
  {
    va_start(va, a2);
    v3 = itext((unsigned int)a2, a2, v6);
    return (unsigned int)callui(28, 0, 0, 0, 0, v3, va) == 1;
  }
  return result;
}
