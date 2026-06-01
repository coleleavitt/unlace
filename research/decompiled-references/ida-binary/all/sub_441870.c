__int64 __fastcall worklists_commit_action_t__::vfunc_0(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rax
  __int64 v4; // rax
  __int64 v5; // rdx
  const char *v6; // rsi

  v3 = sub_426230(a1, (const char *)a2);
  v4 = sub_4170A0((__int64)v3);
  v5 = *(_QWORD *)(a2 + 32);
  if ( !*(_QWORD *)(v4 + 8) )
  {
    v6 = &s1;
    if ( !v5 )
      return sub_44EFF0(a2, 0, 1);
    goto LABEL_6;
  }
  v6 = *(const char **)v4;
  if ( v5 )
  {
LABEL_6:
    if ( strcmp(*(const char **)(a2 + 24), v6) )
      return 0;
    return sub_44EFF0(a2, 0, 1);
  }
  if ( strcmp(&s1, v6) )
    return 0;
  return sub_44EFF0(a2, 0, 1);
}
