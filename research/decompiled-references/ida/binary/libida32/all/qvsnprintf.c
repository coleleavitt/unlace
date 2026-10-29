size_t __fastcall qvsnprintf(char *s, __int64 a2, const char *a3)
{
  size_t v4; // rax
  void *v5; // rsp
  size_t result; // rax
  size_t v7; // rax
  void *v8; // rsp
  _BYTE v9[8]; // [rsp+0h] [rbp-30h] BYREF
  unsigned __int64 v10; // [rsp+8h] [rbp-28h]

  v10 = __readfsqword(0x28u);
  if ( !a3 )
  {
    if ( !under_debugger )
      interr(539);
LABEL_20:
    BUG();
  }
  if ( !s )
  {
    if ( !a2 )
    {
      v7 = strlen(a3);
      v8 = alloca(v7 + 108);
      sub_82A690(a3, v9, v7 + 100);
      result = __vsnprintf_chk();
      if ( (result & 0x80000000) == 0LL )
        return result;
    }
    return 0;
  }
  if ( a2 < 0 )
  {
    if ( !under_debugger )
      interr(1225);
    goto LABEL_20;
  }
  if ( a2 <= 1 )
  {
    if ( a2 )
    {
      *s = 0;
      return 0;
    }
    return 0;
  }
  *s = 0;
  v4 = strlen(a3);
  v5 = alloca(v4 + 108);
  sub_82A690(a3, v9, v4 + 100);
  result = __vsnprintf_chk();
  if ( (result & 0x80000000) != 0LL )
  {
    result = (unsigned int)(a2 - 1);
    s[(int)result] = 0;
    if ( (result & 0x80000000) != 0LL )
      return strlen(s);
  }
  else if ( a2 - 1 < (unsigned __int64)(int)result )
  {
    s[(unsigned int)(a2 - 1)] = 0;
    return (unsigned int)(a2 - 1);
  }
  return result;
}

