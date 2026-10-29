__int64 __fastcall sub_5AFF10(__int64 a1, int *a2, unsigned __int64 a3)
{
  __int64 (__fastcall *v4)(__int64); // rax
  unsigned __int64 *v5; // rax
  __int64 (__fastcall *v6)(__int64, unsigned int, int); // rax
  char *fchunk; // rax
  __int64 v8; // rax
  _DWORD *next_func; // rax

  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v4 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL);
  if ( v4 == sub_3D58E0 )
    v5 = (unsigned __int64 *)(a2 + 4);
  else
    v5 = (unsigned __int64 *)v4((__int64)a2);
  if ( a3 < *v5 || a3 >= v5[1] )
    return a1;
  v6 = *(__int64 (__fastcall **)(__int64, unsigned int, int))(*(_QWORD *)a2 + 40LL);
  if ( v6 == sub_5AFE70 )
  {
    switch_dbctx(a2[2]);
    fchunk = (char *)get_fchunk((unsigned int)a3);
    if ( !fchunk || fchunk[9] < 0 || (v8 = *(unsigned int *)fchunk, (_DWORD)a3 != (_DWORD)v8) )
    {
      next_func = (_DWORD *)get_next_func((unsigned int)a3);
      if ( !next_func || a3 != *next_func )
        return a1;
      goto LABEL_15;
    }
  }
  else
  {
    v8 = v6((__int64)a2, a3, 0);
  }
  if ( a3 != v8 )
    return a1;
LABEL_15:
  switch_dbctx(a2[2]);
  get_ea_name(a1, (unsigned int)a3, 0, 0);
  return a1;
}

