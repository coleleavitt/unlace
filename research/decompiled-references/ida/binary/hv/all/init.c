void init()
{
  signed __int64 v0; // rbp
  __int64 i; // rbx

  init_proc();
  v0 = &off_15F0B8 - funcs_128C89;
  if ( v0 )
  {
    for ( i = 0; i != v0; ++i )
      funcs_128C89[i]();
  }
}

