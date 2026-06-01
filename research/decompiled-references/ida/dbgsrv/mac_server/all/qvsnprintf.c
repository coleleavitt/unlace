/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qvsnprintf
// Address: 0x00000001000812E0

//----- (00000001000812E0) ----------------------------------------------------
int __fastcall qvsnprintf(char *__str, signed __int64 __size, char *__s, va_list a4)
{
  __int64 v4; // rax
  int result; // eax
  signed __int64 v8; // rax
  void *v9; // rsp
  void *v10; // rsp
  char *v11; // rax
  __int64 v12; // rdx
  char v13[48]; // [rsp+0h] [rbp-30h] BYREF

  *(_QWORD *)v13 = v4;
  if ( !__s )
  {
    if ( under_debugger != 1 )
      interr(0x21Bu);
    goto LABEL_19;
  }
  if ( __str )
  {
    if ( __size >= 0 )
    {
      if ( (unsigned __int64)__size <= 1 )
      {
        result = 0;
        if ( __size )
          *__str = 0;
        return result;
      }
      *__str = 0;
      goto LABEL_10;
    }
    if ( under_debugger != 1 )
    {
      interr(0x4C9u);
      return (unsigned int)sub_100081410((char *)0x4C9, (char *)__size, v12);
    }
LABEL_19:
    BUG();
  }
  if ( __size )
    return 0;
LABEL_10:
  v8 = strlen(__s) + 100;
  v9 = alloca(v8);
  v10 = alloca(v8);
  v11 = sub_100081410(__s, v13, v8);
  result = vsnprintf(__str, __size, v11, a4);
  if ( result >= 0 && __size - 1 >= (unsigned __int64)(unsigned int)result )
    return result;
  if ( __str == nullptr || __size == 0 )
    return 0;
  __str[(int)__size - 1] = 0;
  result = __size - 1;
  if ( (int)__size - 1 < 0 )
    return strlen(__str);
  return result;
}
// 1000812ED: variable 'v4' is possibly undefined
// 10008140C: variable 'v12' is possibly undefined
// 1000AE23D: using guessed type char under_debugger;
