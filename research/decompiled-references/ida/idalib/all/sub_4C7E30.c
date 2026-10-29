__int64 __fastcall sub_4C7E30(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rbp

  result = netnode_altval(*(_QWORD *)(a1 + 2424), a2, 321);
  if ( result )
  {
    v3 = result;
    netnode_supdel(*(_QWORD *)(a1 + 2424), a2, 321);
    return netnode_supdel(*(_QWORD *)(a1 + 2416), v3, 65);
  }
  return result;
}
