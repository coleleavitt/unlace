_BYTE *__fastcall qlgetz(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4)
{
  __int64 v6; // r14
  __int64 v7; // rbp
  _BYTE *v8; // r15
  int v9; // eax

  if ( a4 > 0 )
  {
    v6 = 0;
    if ( a2 != -1 )
    {
      v6 = qlseek(a1, 0, 1);
      qlseek(a1, a2, 0);
    }
    v7 = (__int64)&a3[a4 - 1];
    v8 = a3;
    while ( v8 != (_BYTE *)v7 )
    {
      v9 = qlgetc(a1);
      if ( v9 == -1 )
        break;
      *v8++ = v9;
      if ( !v9 )
      {
        if ( a2 == -1 )
          return a3;
        goto LABEL_11;
      }
    }
    *v8 = 0;
    if ( a2 == -1 )
      return a3;
LABEL_11:
    qlseek(a1, v6, 0);
  }
  return a3;
}

