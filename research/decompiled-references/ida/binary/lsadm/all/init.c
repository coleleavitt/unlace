void init()
{
  signed __int64 v0; // rbp
  __int64 i; // rbx

  init_proc();
  v0 = &off_78C38 - funcs_3A809;
  if ( v0 )
  {
    for ( i = 0; i != v0; ++i )
      funcs_3A809[i]();
  }
}

