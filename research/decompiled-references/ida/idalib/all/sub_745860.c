void *__fastcall sub_745860(size_t *a1, void *a2, unsigned __int64 a3, __int64 a4)
{
  void *result; // rax
  size_t v8; // rbx
  const void *v9; // rsi
  unsigned __int64 v10; // rax

  result = (void *)unpack_dd(a4);
  v8 = (unsigned int)result;
  if ( a3 < (unsigned int)result )
  {
    if ( !under_debugger )
      interr(1683);
    goto LABEL_12;
  }
  if ( (_DWORD)result )
  {
    v9 = *(const void **)a4;
    v10 = *(_QWORD *)a4 + (unsigned int)result;
    if ( *(_QWORD *)(a4 + 8) >= v10 && v10 >= (unsigned __int64)v9 )
    {
      *(_QWORD *)a4 = v10;
      if ( v9 )
      {
        result = memcpy(a2, v9, v8);
        goto LABEL_7;
      }
    }
    if ( !under_debugger )
      interr(1684);
LABEL_12:
    BUG();
  }
LABEL_7:
  *a1 = v8;
  return result;
}
