const char *__fastcall sub_82A690(const char *a1, _BYTE *a2, __int64 a3)
{
  _BYTE *v3; // r13
  const char *v4; // r12
  unsigned __int64 v6; // rbp
  char *v7; // rax
  char *v8; // r15
  char v9; // cl
  char *v10; // rbx
  char *v12; // rax
  char v13; // r14

  if ( a3 < 0 )
  {
    if ( !under_debugger )
      interr(1225);
LABEL_36:
    BUG();
  }
  v3 = a2;
  v4 = a1;
  if ( strchr(a1, 37) )
  {
    v6 = (unsigned __int64)&a2[a3];
    v7 = a2;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v8 = (char *)(v4 + 1);
          v9 = *v4;
          if ( (unsigned __int64)v7 >= v6 )
          {
LABEL_30:
            if ( !under_debugger )
              interr(518);
            goto LABEL_36;
          }
          v10 = v7 + 1;
          *v7 = v9;
          if ( (unsigned __int64)(v7 + 1) >= v6 )
          {
            *(_BYTE *)(v6 - 1) = 0;
            v10 = (char *)(v6 - 1);
          }
          if ( !v9 )
            return v3;
          if ( v9 == 37 )
            break;
          v7 = v10;
          ++v4;
        }
        if ( v4[1] != 37 )
          break;
        v4 += 2;
        if ( (unsigned __int64)v10 >= v6 )
          goto LABEL_30;
        v7 = v10 + 1;
        *v10 = 37;
        if ( (unsigned __int64)(v10 + 1) >= v6 )
          goto LABEL_12;
      }
      while ( 1 )
      {
        v13 = *v8;
        if ( !strchr("+-0123456789*#.", *v8) )
          break;
        ++v8;
        if ( (unsigned __int64)v10 >= v6 )
          goto LABEL_30;
        v12 = v10 + 1;
        *v10 = v13;
        if ( (unsigned __int64)(v10 + 1) >= v6 )
        {
          *(_BYTE *)(v6 - 1) = 0;
          v12 = (char *)(v6 - 1);
        }
        v10 = v12;
      }
      if ( v13 == 97 )
      {
        if ( (unsigned __int64)v10 >= v6 )
        {
          if ( !under_debugger )
            interr(520);
          goto LABEL_36;
        }
        v7 = v10 + 1;
        *v10 = 88;
        if ( (unsigned __int64)(v10 + 1) >= v6 )
        {
          *(_BYTE *)(v6 - 1) = 0;
          v7 = (char *)(v6 - 1);
        }
        v4 = v8 + 1;
      }
      else
      {
        v4 = v8 + 1;
        if ( (unsigned __int64)v10 >= v6 )
          goto LABEL_30;
        v7 = v10 + 1;
        *v10 = v13;
        if ( (unsigned __int64)(v10 + 1) >= v6 )
        {
LABEL_12:
          *(_BYTE *)(v6 - 1) = 0;
          v7 = (char *)(v6 - 1);
        }
      }
    }
  }
  return a1;
}

