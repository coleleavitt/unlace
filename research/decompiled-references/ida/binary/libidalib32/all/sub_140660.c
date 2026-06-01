__int64 __fastcall sub_140660(__int64 a1, __int64 a2, unsigned int a3)
{
  if ( *(_DWORD *)(a2 + 84) != 1 || !(unsigned __int8)netnode_inited() )
    return sub_174F20(a1, a2, a3);
  netnode_check();
  return netnode_supset();
}

