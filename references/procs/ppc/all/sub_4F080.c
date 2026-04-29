void __fastcall sub_4F080(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // r12
  unsigned __int64 i; // rbx
  __int64 v4; // rax
  __int64 v5; // rax

  v2 = a2[1];
  for ( i = *a2; i < v2; i = node2ea(v5) )
  {
    if ( (unsigned __int8)(netnode_charval(*(_QWORD *)(a1 + 104), i, 256) - 1) <= 1u )
      netnode_supdel(*(_QWORD *)(a1 + 104), i, 256);
    v4 = ea2node(i);
    v5 = netnode_supnext(*(_QWORD *)(a1 + 104), v4, 0);
  }
}
