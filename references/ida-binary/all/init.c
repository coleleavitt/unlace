void init()
{
  signed __int64 v0; // rbp
  __int64 i; // rbx

  init_proc();
  v0 = &off_85BC78 - funcs_5B0139;
  if ( v0 )
  {
    for ( i = 0; i != v0; ++i )
      funcs_5B0139[i]();
  }
}
