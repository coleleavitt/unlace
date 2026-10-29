unsigned __int64 __fastcall sub_5CABB0(__int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _QWORD *v6; // rdx
  __int64 prev_func; // rax
  unsigned __int64 result; // rax
  __int64 fchunk; // rax

  v4 = a2;
  switch_dbctx(*(int *)(a1 + 8));
  if ( a3 == 1 )
    goto LABEL_5;
  if ( a3 == 2 )
  {
    fchunk = get_fchunk(a2);
    if ( fchunk && *(char *)(fchunk + 17) >= 0 )
    {
      result = *(_QWORD *)fchunk;
      if ( result < a2 )
        return result;
      v4 = result;
    }
    prev_func = get_prev_func(v4);
    if ( prev_func )
      return *(_QWORD *)prev_func;
    return -1;
  }
  v5 = get_fchunk(a2);
  v6 = (_QWORD *)v5;
  if ( !v5 || *(char *)(v5 + 17) < 0 || (result = a2, *v6 != a2) )
  {
LABEL_5:
    prev_func = get_next_func(a2);
    if ( prev_func )
      return *(_QWORD *)prev_func;
    return -1;
  }
  return result;
}
