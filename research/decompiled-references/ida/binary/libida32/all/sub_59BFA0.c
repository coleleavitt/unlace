__int64 __fastcall sub_59BFA0(__int64 a1, unsigned int a2, int a3)
{
  unsigned int v4; // ebx
  __int64 fchunk; // rax
  char *next_func; // rax
  __int64 v8; // rax

  v4 = a2;
  switch_dbctx(*(int *)(a1 + 8));
  if ( a3 == 1 )
  {
LABEL_5:
    while ( 1 )
    {
      next_func = (char *)get_next_func(v4);
      if ( !next_func )
        break;
      if ( next_func[9] >= 0 && *((_DWORD *)next_func + 4) != -1 )
        return *(unsigned int *)next_func;
      v4 = *(_DWORD *)next_func;
    }
  }
  else
  {
    if ( a3 != 2 )
    {
      fchunk = get_fchunk(a2);
      if ( !fchunk || *(char *)(fchunk + 9) < 0 || *(_DWORD *)(fchunk + 16) == -1 || *(_DWORD *)fchunk != a2 )
        goto LABEL_5;
      return v4;
    }
    v8 = get_fchunk(a2);
    if ( v8 )
    {
      if ( *(char *)(v8 + 9) >= 0 )
      {
        v4 = *(_DWORD *)v8;
        if ( *(_DWORD *)(v8 + 16) != -1 && v4 < a2 )
          return v4;
      }
    }
    while ( 1 )
    {
      next_func = (char *)get_prev_func(v4);
      if ( !next_func )
        break;
      if ( next_func[9] >= 0 && *((_DWORD *)next_func + 4) != -1 )
        return *(unsigned int *)next_func;
      v4 = *(_DWORD *)next_func;
    }
  }
  return -1;
}

