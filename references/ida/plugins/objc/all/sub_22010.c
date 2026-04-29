unsigned __int64 __fastcall sub_22010(__int64 a1)
{
  _UNKNOWN **v2; // r13
  char **v3; // r13
  char **v4; // r13
  char **v5; // r13
  __int64 v6; // [rsp+20h] [rbp-58h] BYREF
  __int128 v7; // [rsp+28h] [rbp-50h]
  unsigned __int64 v8; // [rsp+38h] [rbp-40h]

  v8 = __readfsqword(0x28u);
  if ( netnode_supfirst() == -1 )
  {
    v2 = &off_3C7D0;
    do
    {
      v7 = 0;
      v6 = 0;
      sub_D6A0(&v6);
      if ( get_name_ea() != -1 )
      {
        if ( *(_BYTE *)(a1 + 2216) )
          sub_EC40();
        netnode_supset();
      }
      if ( v6 )
      {
        *(_QWORD *)&v7 = 0;
        qfree();
      }
      ++v2;
    }
    while ( v2 != (_UNKNOWN **)&unk_3C7E0 );
  }
  if ( netnode_supfirst() == -1 )
  {
    v5 = off_3C7C0;
    do
    {
      v7 = 0;
      v6 = 0;
      sub_D6A0(&v6);
      if ( get_name_ea() != -1 )
      {
        if ( *(_BYTE *)(a1 + 2216) )
          sub_EC40();
        netnode_supset();
      }
      if ( v6 )
      {
        *(_QWORD *)&v7 = 0;
        qfree();
      }
      ++v5;
    }
    while ( v5 != (char **)&off_3C7D0 );
  }
  if ( netnode_supfirst() == -1 )
  {
    v4 = off_3C780;
    do
    {
      v7 = 0;
      v6 = 0;
      sub_D6A0(&v6);
      if ( get_name_ea() != -1 )
      {
        if ( *(_BYTE *)(a1 + 2216) )
          sub_EC40();
        netnode_supset();
      }
      if ( v6 )
      {
        *(_QWORD *)&v7 = 0;
        qfree();
      }
      ++v4;
    }
    while ( algn_3C7B8 != (_BYTE *)v4 );
  }
  if ( netnode_supfirst() == -1 )
  {
    v3 = off_3C760;
    do
    {
      v7 = 0;
      v6 = 0;
      sub_D6A0(&v6);
      if ( get_name_ea() != -1 )
      {
        if ( *(_BYTE *)(a1 + 2216) )
          sub_EC40();
        netnode_supset();
      }
      if ( v6 )
      {
        *(_QWORD *)&v7 = 0;
        qfree();
      }
      ++v3;
    }
    while ( algn_3C778 != (_BYTE *)v3 );
  }
  return v8 - __readfsqword(0x28u);
}
