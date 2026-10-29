__int64 __fastcall sub_44BD40(__int64 a1, void *a2)
{
  __int64 v2; // rax
  const char *v3; // rdx

  v2 = ea2node(a2);
  netnode_supdel(v2, 1, 65);
  v3 = *(const char **)(a1 + 24);
  if ( v3 )
    sub_44BB70(*(_QWORD **)(*(_QWORD *)(a1 + 16) + 1672LL), a2, v3, 1, nullptr);
  return 0;
}
