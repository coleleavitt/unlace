void term_kernel()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  int v3; // r9d

  if ( !byte_2CCB4C9 )
  {
    while ( (unsigned __int8)netnode_inited() )
      term_database();
    term_plugins(128);
    sub_38E4E0();
    sub_42AB30();
    sub_52ADF0();
    sub_4253B0();
    sub_55CAE0();
    sub_8B6E00(qword_2CCB598);
    sub_840BF0(0, 0);
    sub_3FB5B0();
    sub_38A700(0, 0, v0, v1, v2, v3);
  }
}
