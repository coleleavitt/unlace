__int64 __fastcall sub_146A0(__int64 a1)
{
  __int64 i; // rax
  __int64 j; // rax
  __int128 *v3; // rsi
  __int128 vars0; // [rsp+8h] [rbp+0h] BYREF
  unsigned __int64 vars10; // [rsp+18h] [rbp+10h]
  __int128 *vars20; // [rsp+28h] [rbp+20h]

  vars20 = &vars0;
  vars10 = __readfsqword(0x28u);
  vars0 = 0;
  for ( i = netnode_qhashfirst(); i >= 0; i = netnode_qhashnext() )
  {
    netnode_hashval_long();
    if ( !(unsigned __int8)is_loaded() )
    {
      netnode_hashdel();
      if ( *(_BYTE *)(a1 + 2216) )
        sub_EC40();
    }
  }
  vars0 = 0;
  for ( j = netnode_qhashfirst(); j >= 0; j = netnode_qhashnext() )
  {
    netnode_hashval_long();
    if ( !(unsigned __int8)is_loaded() )
    {
      netnode_hashdel();
      if ( *(_BYTE *)(a1 + 2216) )
        sub_EC40();
    }
  }
  if ( netnode_supfirst() != -1 )
  {
    do
    {
      node2ea();
      if ( !(unsigned __int8)is_loaded() && !(unsigned __int8)is_spec_ea() )
      {
        netnode_supdel();
        if ( *(_BYTE *)(a1 + 2216) )
          sub_EC40();
      }
    }
    while ( netnode_supnext() != -1 );
  }
  if ( netnode_supfirst() != -1 )
  {
    do
    {
      node2ea();
      if ( !(unsigned __int8)is_loaded() && !(unsigned __int8)is_spec_ea() )
      {
        netnode_supdel();
        if ( *(_BYTE *)(a1 + 2216) )
          sub_EC40();
      }
    }
    while ( netnode_supnext() != -1 );
  }
  if ( netnode_supfirst() != -1 )
  {
    do
    {
      node2ea();
      if ( !(unsigned __int8)is_loaded() && !(unsigned __int8)is_spec_ea() )
      {
        netnode_supdel();
        if ( *(_BYTE *)(a1 + 2216) )
          sub_EC40();
      }
    }
    while ( netnode_supnext() != -1 );
  }
  v3 = (_OWORD *)(&qword_68 + 1);
  if ( netnode_supfirst() != -1 )
  {
    do
    {
      node2ea();
      if ( !(unsigned __int8)is_loaded() && !(unsigned __int8)is_spec_ea() )
      {
        netnode_supdel();
        if ( *(_BYTE *)(a1 + 2216) )
          sub_EC40();
      }
      v3 = &vars0;
    }
    while ( netnode_supnext() != -1 );
  }
  return sub_145E0(a1, v3);
}
