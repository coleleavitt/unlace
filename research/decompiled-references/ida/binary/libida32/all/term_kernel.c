void __fastcall term_kernel(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  int v5; // r9d

  if ( !byte_2CA15C9 )
  {
    while ( (unsigned __int8)netnode_inited() )
      term_database(a1, a2);
    term_plugins(128);
    sub_389800();
    sub_4170A0();
    sub_512B70();
    sub_4119C0();
    sub_543940();
    sub_893460(qword_2CA1698);
    sub_81D830(0, 0);
    sub_3E8650();
    sub_386300(0, 0, v2, v3, v4, v5);
  }
}

