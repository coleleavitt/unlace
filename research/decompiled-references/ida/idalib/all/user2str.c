char *__fastcall user2str(__int64 a1, char *a2, __int64 a3)
{
  char *result; // rax
  __int64 v5; // rbx
  __int64 v6; // rbp
  char v7; // al
  char *v8; // [rsp+8h] [rbp-30h] BYREF

  v8 = a2;
  if ( a3 < 0 )
  {
    if ( !under_debugger )
      interr(1225);
    BUG();
  }
  result = v8;
  if ( v8 )
  {
    v5 = a1;
    v6 = 0;
    if ( a3 )
    {
      while ( 1 )
      {
        ++v5;
        v8 = result + 1;
        v7 = *result;
        *(_BYTE *)(v5 - 1) = v7;
        if ( !v7 )
          break;
        if ( v7 == 92 )
        {
          ++v6;
          *(_BYTE *)(v5 - 1) = back_char(&v8, a2);
          if ( a3 == v6 )
            goto LABEL_10;
        }
        else if ( a3 == ++v6 )
        {
          goto LABEL_10;
        }
        result = v8;
      }
      if ( a3 == v6 )
      {
LABEL_10:
        *(_BYTE *)(v5 - 1) = 0;
        return (char *)a1;
      }
      return (char *)a1;
    }
    else
    {
      return (char *)a1;
    }
  }
  return result;
}
