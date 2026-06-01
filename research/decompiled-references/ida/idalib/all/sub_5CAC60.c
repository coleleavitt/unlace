__int64 __fastcall sub_5CAC60(__int64 a1, int *a2, unsigned __int64 a3)
{
  __int64 (__fastcall *v4)(__int64); // rax
  unsigned __int64 *v5; // rax
  unsigned __int64 (__fastcall *v6)(__int64, unsigned __int64, int); // rax
  __int64 fchunk; // rax
  _QWORD *next_func; // rax

  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v4 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL);
  if ( v4 == sub_3DB7B0 )
    v5 = (unsigned __int64 *)(a2 + 4);
  else
    v5 = (unsigned __int64 *)v4((__int64)a2);
  if ( a3 < *v5 || a3 >= v5[1] )
    return a1;
  v6 = *(unsigned __int64 (__fastcall **)(__int64, unsigned __int64, int))(*(_QWORD *)a2 + 40LL);
  if ( v6 != sub_5CABB0 )
  {
    if ( a3 == v6((__int64)a2, a3, 0) )
      goto LABEL_14;
    return a1;
  }
  switch_dbctx(a2[2]);
  fchunk = get_fchunk(a3);
  if ( !fchunk || *(char *)(fchunk + 17) < 0 || a3 != *(_QWORD *)fchunk )
  {
    next_func = (_QWORD *)get_next_func(a3);
    if ( !next_func || a3 != *next_func )
      return a1;
  }
LABEL_14:
  switch_dbctx(a2[2]);
  get_ea_name(a1, a3, 0, 0);
  return a1;
}
