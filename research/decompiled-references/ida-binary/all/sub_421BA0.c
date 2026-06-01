__int64 __fastcall sub_421BA0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rbp
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rcx
  const char *v9; // rsi
  const char *v10; // rdi

  if ( *(_QWORD *)(a2 + 56) != 1 )
    return 7;
  v3 = *(_QWORD *)(a2 + 40);
  v4 = **(int **)(a2 + 48);
  if ( v4 == *(_QWORD *)(v3 + 360) )
    return 7;
  v5 = sub_426230(a1, (const char *)a2);
  v6 = sub_4170C0(v5);
  v7 = *(_QWORD *)(v3 + 336) + 104 * v4;
  v8 = *(_QWORD *)(v6 + 8);
  if ( *(_QWORD *)(v7 + 32) )
  {
    v9 = *(const char **)(v7 + 24);
    v10 = &s1;
    if ( !v8 )
      goto LABEL_7;
    goto LABEL_6;
  }
  result = 3;
  v9 = &s1;
  if ( v8 )
  {
LABEL_6:
    v10 = *(const char **)v6;
LABEL_7:
    if ( !strcmp(v10, v9) )
      return 3;
    return 7;
  }
  return result;
}
