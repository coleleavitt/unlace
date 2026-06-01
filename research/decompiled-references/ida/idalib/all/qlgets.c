__int64 __fastcall qlgets(_BYTE *a1, __int64 a2, __int64 a3)
{
  _BYTE *v4; // r13
  _BYTE *v5; // rbx
  int v6; // eax

  if ( a2 < 0 )
  {
    if ( !under_debugger )
      interr(1225);
    BUG();
  }
  if ( !a3 || !a1 )
    return 0;
  if ( *(int *)a3 <= 1 )
    return qfgets(a1, a2, *(_QWORD *)(a3 + 8));
  if ( !a2 )
    return 0;
  v4 = &a1[a2 - 1];
  if ( a1 >= v4 )
  {
    v4 = a1;
  }
  else
  {
    v5 = a1;
    while ( 1 )
    {
      v6 = qlgetc(a3);
      if ( v6 == -1 )
        break;
      if ( v6 == 10 )
      {
        if ( a1 < v5 && *(v5 - 1) == 13 )
          v4 = v5--;
        else
          v4 = v5 + 1;
        *v5 = 10;
        goto LABEL_13;
      }
      *v5++ = v6;
      if ( v4 == v5 )
        goto LABEL_13;
    }
    if ( a1 == v5 )
      return 0;
    v4 = v5;
  }
LABEL_13:
  *v4 = 0;
  return (__int64)a1;
}
