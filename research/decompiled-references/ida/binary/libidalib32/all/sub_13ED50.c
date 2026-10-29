__int64 __fastcall sub_13ED50(__int64 a1, _DWORD *a2, __int64 a3)
{
  int v3; // eax
  unsigned int v6; // r13d
  int v7; // eax

  v3 = *(_DWORD *)(a3 + 84);
  if ( v3 == 1 )
  {
    if ( (unsigned __int8)netnode_inited() )
    {
      netnode_check();
      v6 = netnode_exist();
      if ( (_BYTE)v6 )
      {
        v7 = netnode_altval();
        if ( v7 )
        {
          if ( v7 == 0x80000000 )
            v7 = 0;
          *a2 = v7;
          return v6;
        }
      }
    }
    return sub_173DC0(a1 + 136, a2, a3);
  }
  if ( v3 != 2 || !(unsigned __int8)getinf_flag() )
    return sub_173DC0(a1 + 136, a2, a3);
  return 0;
}

