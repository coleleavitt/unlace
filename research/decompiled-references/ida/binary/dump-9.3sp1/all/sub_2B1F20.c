__int64 __fastcall sub_2B1F20(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v5; // rbx
  __int64 v6; // rdi
  unsigned __int8 (*v7)(void); // rax
  __int64 v8; // r13
  bool (__fastcall *v9)(__int64); // rax
  _QWORD *v10; // rbx
  __int64 result; // rax
  __int64 v12; // rax
  const char *v13; // rsi
  const char *v14; // rdi
  int v15; // edx

  if ( a3 >= *(_QWORD *)(a1 + 48) )
    goto LABEL_16;
  v5 = a3 << 6;
  v6 = (a3 << 6) + *(_QWORD *)(a1 + 40);
  v7 = **(unsigned __int8 (***)(void))v6;
  if ( (char *)v7 == (char *)sub_2AD1C0 )
  {
    if ( *(_QWORD *)(v6 + 8) == *(_QWORD *)(v6 + 48) )
      goto LABEL_16;
  }
  else if ( !v7() )
  {
    goto LABEL_16;
  }
  v8 = v5 + *(_QWORD *)(a2 + 40);
  v9 = **(bool (__fastcall ***)(__int64))v8;
  if ( v9 == sub_2AD1C0 )
  {
    if ( *(_QWORD *)(v8 + 8) != *(_QWORD *)(v8 + 48) )
      goto LABEL_6;
LABEL_16:
    sub_2ADE60();
  }
  if ( !v9(v5 + *(_QWORD *)(a2 + 40)) )
    goto LABEL_16;
  v8 = v5 + *(_QWORD *)(a2 + 40);
LABEL_6:
  v10 = (_QWORD *)(*(_QWORD *)(a1 + 40) + v5);
  switch_dbctx();
  result = 1;
  if ( v10[1] != *(_QWORD *)(v8 + 8) )
    return result;
  v12 = v10[3];
  if ( *(_QWORD *)(v8 + 24) )
  {
    v13 = *(const char **)(v8 + 16);
    v14 = s1;
    if ( !v12 )
      goto LABEL_11;
  }
  else
  {
    v13 = s1;
    if ( !v12 )
      return (*(unsigned int (__fastcall **)(_QWORD, _QWORD *, _QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 32) + 40LL))(
               *(_QWORD *)(a1 + 32),
               v10 + 5,
               *(unsigned int *)(a1 + 12),
               v8 + 40,
               *(unsigned int *)(a2 + 12)) != 0;
  }
  v14 = (const char *)v10[2];
LABEL_11:
  v15 = strcmp(v14, v13);
  result = 1;
  if ( !v15 )
    return (*(unsigned int (__fastcall **)(_QWORD, _QWORD *, _QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 32) + 40LL))(
             *(_QWORD *)(a1 + 32),
             v10 + 5,
             *(unsigned int *)(a1 + 12),
             v8 + 40,
             *(unsigned int *)(a2 + 12)) != 0;
  return result;
}
