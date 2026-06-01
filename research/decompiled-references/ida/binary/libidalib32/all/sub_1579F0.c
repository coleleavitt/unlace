unsigned __int64 __fastcall sub_1579F0(__int64 a1, int a2)
{
  __int64 v3; // [rsp+10h] [rbp-68h] BYREF
  int v4; // [rsp+18h] [rbp-60h] BYREF
  void *v5; // [rsp+20h] [rbp-58h]
  int *v6; // [rsp+28h] [rbp-50h]
  int *v7; // [rsp+30h] [rbp-48h]
  __int64 v8; // [rsp+38h] [rbp-40h]
  unsigned __int64 v9; // [rsp+48h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  if ( a2 == 8 )
  {
    v5 = nullptr;
    v6 = &v4;
    v7 = &v4;
    v8 = 0;
    v4 = 0;
    j__switch_dbctx();
    sub_1576B0(&v3);
    j__switch_dbctx();
    sub_1576B0(&v3);
    j__switch_dbctx();
    netnode_check();
    if ( v6 != &v4 )
    {
      do
      {
        netnode_hashval_long();
        if ( (unsigned __int8)netnode_exist() || (unsigned __int8)netnode_check() && (unsigned __int8)netnode_hashset() )
        {
          if ( (unsigned __int8)netnode_setblob() )
            netnode_supset();
        }
      }
      while ( (int *)std::_Rb_tree_increment() != &v4 );
    }
    sub_154EE0(v5);
  }
  return v9 - __readfsqword(0x28u);
}

