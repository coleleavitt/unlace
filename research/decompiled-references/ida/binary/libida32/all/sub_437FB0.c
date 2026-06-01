__int64 __fastcall sub_437FB0(__int64 a1, unsigned int a2)
{
  unsigned int v2; // eax
  const char *v3; // rdx

  v2 = ea2node(a2);
  netnode_supdel(v2, 1, 65);
  v3 = *(const char **)(a1 + 24);
  if ( v3 )
    sub_437DE0(*(_QWORD **)(*(_QWORD *)(a1 + 16) + 1480LL), a2, v3, 1, nullptr);
  return 0;
}

