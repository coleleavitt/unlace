bool sub_28AA30(char a1, int a2, ...)
{
  bool result; // al
  gcc_va_list va; // [rsp+0h] [rbp-D8h] BYREF
  unsigned __int64 v4; // [rsp+18h] [rbp-C0h]

  v4 = __readfsqword(0x28u);
  result = 1;
  if ( a1 )
  {
    va_start(va, a2);
    return (unsigned int)callui(28, 0, 0, 0, 0, a2, va) == 1;
  }
  return result;
}
