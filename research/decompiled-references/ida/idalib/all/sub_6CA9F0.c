__int64 __fastcall sub_6CA9F0(__int64 a1, __int64 a2, _BYTE *a3, unsigned __int8 a4)
{
  unsigned __int64 v6; // rax
  __int64 v7; // r9

  if ( !a3 )
    return 1;
  v6 = sub_3BDD60(*(_QWORD **)(*(_QWORD *)a1 + 1672LL), a2);
  if ( *a3 )
    return netnode_supset(v6, a4, a3, 0, 83, v7);
  netnode_supdel(v6, a4, 83);
  return 1;
}
