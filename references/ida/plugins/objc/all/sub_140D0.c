unsigned __int64 __fastcall sub_140D0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbp
  __int64 v3; // r12
  __int64 v4; // rbp
  __int64 v5; // r12
  unsigned __int64 v7; // [rsp+18h] [rbp-40h]

  v2 = *a2;
  v7 = __readfsqword(0x28u);
  if ( 24 * a2[1] )
  {
    do
    {
      v2 += 24;
      ea2node();
      ea2node();
      netnode_altshift();
      v3 = *a2;
    }
    while ( v2 != *a2 + 24 * a2[1] );
    if ( v3 != v2 )
    {
      do
      {
        v3 += 24;
        ea2node();
        ea2node();
        netnode_altshift();
        v4 = *a2;
      }
      while ( v3 != *a2 + 24 * a2[1] );
      if ( v4 != v3 )
      {
        do
        {
          v4 += 24;
          ea2node();
          ea2node();
          netnode_altshift();
          v5 = *a2;
        }
        while ( v4 != *a2 + 24 * a2[1] );
        if ( v5 != v4 )
        {
          do
          {
            v5 += 24;
            ea2node();
            ea2node();
            netnode_altshift();
          }
          while ( v5 != *a2 + 24 * a2[1] );
        }
      }
    }
  }
  if ( *(_BYTE *)(a1 + 2216) )
  {
    sub_EC40();
    if ( netnode_supfirst() != -1 )
    {
      do
      {
        node2ea();
        get_ea_name();
        sub_EC40();
      }
      while ( netnode_supnext() != -1 );
    }
    sub_EC40();
    if ( netnode_supfirst() != -1 )
    {
      do
      {
        node2ea();
        get_ea_name();
        sub_EC40();
      }
      while ( netnode_supnext() != -1 );
    }
    sub_EC40();
    if ( netnode_supfirst() != -1 )
    {
      do
      {
        node2ea();
        get_ea_name();
        sub_EC40();
      }
      while ( netnode_supnext() != -1 );
    }
    sub_EC40();
    if ( netnode_supfirst() != -1 )
    {
      do
      {
        node2ea();
        get_ea_name();
        sub_EC40();
      }
      while ( netnode_supnext() != -1 );
    }
  }
  return v7 - __readfsqword(0x28u);
}
