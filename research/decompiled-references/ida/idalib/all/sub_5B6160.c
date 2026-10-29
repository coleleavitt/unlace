unsigned __int64 __fastcall sub_5B6160(__int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v4; // rbx
  __int64 fchunk; // rax
  _QWORD *v6; // rdx
  __int64 next_func; // rax
  unsigned __int64 result; // rax
  __int64 v9; // rax
  __int64 v10; // rdx

  v4 = a2;
  switch_dbctx(*(int *)(a1 + 8));
  if ( a3 == 1 )
  {
LABEL_5:
    while ( 1 )
    {
      next_func = get_next_func(v4);
      if ( !next_func )
        break;
      if ( *(char *)(next_func + 17) >= 0 && *(_QWORD *)(next_func + 24) != -1 )
        return *(_QWORD *)next_func;
      v4 = *(_QWORD *)next_func;
    }
    return -1;
  }
  if ( a3 != 2 )
  {
    fchunk = get_fchunk(a2);
    v6 = (_QWORD *)fchunk;
    if ( !fchunk )
      goto LABEL_5;
    if ( *(char *)(fchunk + 17) < 0 )
      goto LABEL_5;
    if ( *(_QWORD *)(fchunk + 24) == -1 )
      goto LABEL_5;
    result = a2;
    if ( *v6 != a2 )
      goto LABEL_5;
    return result;
  }
  v9 = get_fchunk(a2);
  v10 = v9;
  if ( !v9 || *(char *)(v9 + 17) < 0 )
  {
LABEL_13:
    while ( 1 )
    {
      next_func = get_prev_func(v4);
      if ( !next_func )
        break;
      if ( *(char *)(next_func + 17) >= 0 && *(_QWORD *)(next_func + 24) != -1 )
        return *(_QWORD *)next_func;
      v4 = *(_QWORD *)next_func;
    }
    return -1;
  }
  result = *(_QWORD *)v9;
  if ( *(_QWORD *)(v10 + 24) == -1 || result >= a2 )
  {
    v4 = result;
    goto LABEL_13;
  }
  return result;
}
