void __fastcall sub_4CB0C0(__int64 a1, __int64 a2)
{
  __int64 v2; // r12

  if ( a2 != -1 )
  {
    v2 = netnode_altval(*(_QWORD *)(a1 + 2424), a2, 321);
    if ( v2 )
    {
      netnode_supdel(*(_QWORD *)(a1 + 2424), a2, 321);
      netnode_supdel(*(_QWORD *)(a1 + 2416), v2, 65);
    }
  }
}
