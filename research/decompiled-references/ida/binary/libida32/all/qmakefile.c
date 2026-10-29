const char *__fastcall qmakefile(const char *a1, __int64 a2, const char *a3, _BYTE *a4)
{
  unsigned __int64 v5; // r12
  char *v6; // rax
  char v7; // cl
  char *v8; // rbx
  char *v9; // rcx
  char v10; // dl

  if ( a2 < 0 )
  {
    if ( !under_debugger )
      interr(1225);
LABEL_31:
    BUG();
  }
  if ( !a1 || !a3 )
    return a1;
  v5 = (unsigned __int64)&a1[a2];
  if ( a1 == a3 )
  {
    v6 = (char *)&a1[strlen(a1)];
  }
  else
  {
    if ( (unsigned __int64)a1 >= v5 )
    {
LABEL_25:
      if ( !under_debugger )
        interr(520);
      goto LABEL_31;
    }
    v6 = (char *)a1;
    if ( a1 == (const char *)(v5 - 1) )
    {
LABEL_22:
      *(_BYTE *)(v5 - 1) = 0;
      v6 = (char *)(v5 - 1);
    }
    else
    {
      while ( 1 )
      {
        v7 = *a3++;
        *v6 = v7;
        if ( !v7 )
          break;
        if ( ++v6 == (char *)(v5 - 1) )
          goto LABEL_22;
      }
    }
  }
  if ( !a4 )
    return a1;
  v8 = &a4[*a4 == 46];
  if ( *(v6 - 1) == 46 )
  {
    if ( (unsigned __int64)v6 < v5 )
      goto LABEL_15;
    goto LABEL_25;
  }
  if ( (unsigned __int64)v6 >= v5 )
  {
    if ( !under_debugger )
      interr(518);
    goto LABEL_31;
  }
  *v6 = 46;
  if ( (unsigned __int64)(v6 + 1) < v5 )
  {
    ++v6;
LABEL_15:
    v9 = (char *)(v5 - 1);
    if ( v6 == (char *)(v5 - 1) )
      goto LABEL_21;
    while ( 1 )
    {
      v10 = *v8++;
      *v6 = v10;
      if ( !v10 )
        return a1;
      if ( ++v6 == v9 )
        goto LABEL_21;
    }
  }
  *(_BYTE *)(v5 - 1) = 0;
  v9 = (char *)(v5 - 1);
LABEL_21:
  *v9 = 0;
  return a1;
}

