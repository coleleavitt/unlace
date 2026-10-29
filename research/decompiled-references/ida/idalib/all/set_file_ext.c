__int64 __fastcall set_file_ext(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  unsigned __int64 v5; // r13
  const char *v6; // rbp
  char *v7; // rax
  const char *v8; // rdx
  _BYTE *v9; // rdx
  char *v10; // rbx
  char v11; // al

  if ( a2 < 0 )
  {
    if ( !under_debugger )
      interr(1225);
    goto LABEL_28;
  }
  if ( !a1 )
    return a1;
  v5 = a1 + a2;
  if ( a1 != a3 )
    qstrncpy(a1, a3, a2);
  v6 = (const char *)qbasename(a1);
  v7 = (char *)&v6[strlen(v6)];
  v8 = v7;
  if ( v6 < v7 )
  {
    while ( *v8 != 46 )
    {
      if ( --v8 == v6 )
        goto LABEL_18;
    }
  }
  if ( v6 != v8 )
  {
    v9 = v8 + 1;
LABEL_11:
    v10 = &a4[*a4 == 46];
    if ( (unsigned __int64)v9 < v5 )
      goto LABEL_12;
    if ( !under_debugger )
      interr(520);
LABEL_28:
    BUG();
  }
LABEL_18:
  if ( (unsigned __int64)v7 >= v5 )
  {
    if ( !under_debugger )
      interr(518);
    goto LABEL_28;
  }
  v9 = v7 + 1;
  *v7 = 46;
  if ( (unsigned __int64)(v7 + 1) >= v5 )
  {
    *(_BYTE *)(v5 - 1) = 0;
    v9 = (_BYTE *)(v5 - 1);
    goto LABEL_11;
  }
  v10 = &a4[*a4 == 46];
LABEL_12:
  if ( (_BYTE *)(v5 - 1) != v9 )
  {
    do
    {
      v11 = *v10++;
      *v9 = v11;
      if ( !v11 )
        return a1;
    }
    while ( ++v9 != (_BYTE *)(v5 - 1) );
  }
  *(_BYTE *)(v5 - 1) = 0;
  return a1;
}
