__int64 __fastcall sub_5AC4E0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 (__fastcall *v5)(__int64); // rax
  unsigned __int64 *v6; // rax
  __int64 v8; // rdi
  __int64 v9; // rdi

  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v5 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL);
  if ( v5 == sub_3DB7B0 )
    v6 = (unsigned __int64 *)(a2 + 16);
  else
    v6 = (unsigned __int64 *)v5(a2);
  if ( a3 < *v6
    || a3 >= v6[1]
    || a3 != (*(__int64 (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, a3, 0) )
  {
    return a1;
  }
  switch_dbctx(*(int *)(a2 + 8));
  if ( a3 == 3 )
  {
    v9 = **(unsigned int **)(a2 + 48);
    if ( (_DWORD)v9 && !get_encoding_name(v9) )
      sub_5A79D0();
  }
  else
  {
    v8 = *(unsigned int *)(*(_QWORD *)(a2 + 40) + 4 * a3);
    if ( (_DWORD)v8 )
    {
      if ( !get_encoding_name(v8) )
        sub_5A79D0();
    }
  }
  sub_35A790((char **)a1);
  return a1;
}
