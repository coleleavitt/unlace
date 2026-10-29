void __fastcall sub_4B43A0(__int64 a1, __int64 a2)
{
  unsigned int v2; // r12d

  if ( (_DWORD)a2 != -1 )
  {
    v2 = netnode_altval(*(unsigned int *)(a1 + 2332), a2, 321);
    if ( v2 )
    {
      netnode_supdel(*(unsigned int *)(a1 + 2332), (unsigned int)a2, 321);
      netnode_supdel(*(unsigned int *)(a1 + 2328), v2, 65);
    }
  }
}

