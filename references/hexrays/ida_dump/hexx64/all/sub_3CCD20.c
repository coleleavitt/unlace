__int64 __fastcall sub_3CCD20(__int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v3; // rbp
  __int64 *fchunk; // rax
  char *v6; // rbx
  __int64 *next_func; // rax
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 *prev_func; // rax

  v3 = a2;
  switch_dbctx(*(int *)(a1 + 8));
  if ( a3 == 1 )
  {
LABEL_9:
    while ( 1 )
    {
      next_func = (__int64 *)get_next_func(v3);
      v6 = (char *)next_func;
      if ( !next_func )
        break;
      if ( sub_2B6080(*next_func, 0) != -1 )
        return *(_QWORD *)v6;
      v3 = *(_QWORD *)v6;
    }
    return -1;
  }
  else if ( a3 == 2 )
  {
    fchunk = (__int64 *)get_fchunk(a2);
    v6 = (char *)fchunk;
    if ( !fchunk )
      goto LABEL_19;
    if ( *fchunk >= a2 || sub_2B6080(*fchunk, 0) == -1 )
    {
      if ( v6[17] >= 0 )
        goto LABEL_18;
LABEL_19:
      while ( 1 )
      {
        prev_func = (__int64 *)get_prev_func(v3);
        v6 = (char *)prev_func;
        if ( !prev_func )
          break;
        if ( sub_2B6080(*prev_func, 0) != -1 )
          return *(_QWORD *)v6;
LABEL_18:
        v3 = *(_QWORD *)v6;
      }
      return -1;
    }
    else
    {
      return *(_QWORD *)v6;
    }
  }
  else
  {
    if ( !get_func(a2) )
      goto LABEL_9;
    v9 = sub_2B6080(a2, 0);
    result = a2;
    if ( v9 == -1 )
      goto LABEL_9;
  }
  return result;
}
