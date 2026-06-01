__int64 __fastcall sub_5AFE70(__int64 a1, unsigned int a2, int a3)
{
  unsigned int v4; // ebx
  __int64 fchunk; // rax
  unsigned int *next_func; // rax
  __int64 result; // rax
  char *v8; // rax

  v4 = a2;
  switch_dbctx(*(int *)(a1 + 8));
  if ( a3 == 1 )
    goto LABEL_5;
  if ( a3 != 2 )
  {
    fchunk = get_fchunk(a2);
    if ( fchunk && *(char *)(fchunk + 9) >= 0 && *(_DWORD *)fchunk == a2 )
      return a2;
LABEL_5:
    next_func = (unsigned int *)get_next_func(a2);
    if ( next_func )
      return *next_func;
    return -1;
  }
  v8 = (char *)get_fchunk(a2);
  if ( !v8 || v8[9] < 0 )
  {
LABEL_12:
    next_func = (unsigned int *)get_prev_func(v4);
    if ( next_func )
      return *next_func;
    return -1;
  }
  result = *(unsigned int *)v8;
  if ( (unsigned int)result >= a2 )
  {
    v4 = result;
    goto LABEL_12;
  }
  return result;
}

