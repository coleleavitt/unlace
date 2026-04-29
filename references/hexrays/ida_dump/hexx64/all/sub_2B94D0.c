_BOOL8 __fastcall sub_2B94D0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v5; // rbx
  __int64 v6; // rdi
  unsigned __int8 (*v7)(void); // rax
  __int64 v8; // r14
  bool (__fastcall *v9)(__int64); // rax
  _QWORD *v10; // rbx
  __int64 v12; // rax
  const char *v13; // rsi
  const char *v14; // rdi
  __int64 v15; // rax
  const char *v16; // rsi
  const char *v17; // rdi

  if ( a3 >= *(_QWORD *)(a1 + 48) )
    goto LABEL_22;
  v5 = 192 * a3;
  v6 = 192 * a3 + *(_QWORD *)(a1 + 40);
  v7 = **(unsigned __int8 (***)(void))v6;
  if ( (char *)v7 == (char *)sub_2AD0E0 )
  {
    if ( (unsigned int)(*(_DWORD *)(v6 + 40) - 3) > 1 )
      goto LABEL_22;
  }
  else if ( !v7() )
  {
    goto LABEL_22;
  }
  v8 = v5 + *(_QWORD *)(a2 + 40);
  v9 = **(bool (__fastcall ***)(__int64))v8;
  if ( v9 == sub_2AD0E0 )
  {
    if ( (unsigned int)(*(_DWORD *)(v8 + 40) - 3) <= 1 )
      goto LABEL_6;
LABEL_22:
    sub_2ADE60();
  }
  if ( !v9(v5 + *(_QWORD *)(a2 + 40)) )
    goto LABEL_22;
  v8 = v5 + *(_QWORD *)(a2 + 40);
LABEL_6:
  v10 = (_QWORD *)(*(_QWORD *)(a1 + 40) + v5);
  switch_dbctx(*(int *)(a1 + 8));
  if ( (unsigned int)sub_2B9450((__int64)(v10 + 1), v8 + 8) )
    return 1;
  v12 = v10[10];
  if ( *(_QWORD *)(v8 + 80) )
  {
    v13 = *(const char **)(v8 + 72);
    v14 = s1;
    if ( !v12 )
      goto LABEL_11;
  }
  else
  {
    v13 = s1;
    if ( !v12 )
      goto LABEL_12;
  }
  v14 = (const char *)v10[9];
LABEL_11:
  if ( strcmp(v14, v13) )
    return 1;
LABEL_12:
  v15 = v10[14];
  if ( *(_QWORD *)(v8 + 112) )
  {
    v16 = *(const char **)(v8 + 104);
    v17 = s1;
    if ( !v15 )
      goto LABEL_14;
  }
  else
  {
    v16 = s1;
    if ( !v15 )
      goto LABEL_15;
  }
  v17 = (const char *)v10[13];
LABEL_14:
  if ( strcmp(v17, v16) )
    return 1;
LABEL_15:
  if ( (unsigned int)sub_3307E0(v10 + 6, v8 + 48) )
    return 1;
  return (*(unsigned int (__fastcall **)(_QWORD, _QWORD *, _QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 32) + 40LL))(
           *(_QWORD *)(a1 + 32),
           v10 + 12,
           *(unsigned int *)(a1 + 12),
           v8 + 96,
           *(unsigned int *)(a2 + 12)) != 0;
}
