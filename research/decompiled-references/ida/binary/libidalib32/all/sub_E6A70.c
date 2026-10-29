unsigned __int64 sub_E6A70()
{
  char *v0; // rdi

  if ( dbg && (unsigned __int8)netnode_inited() )
    dbg_save_exceptions();
  v0 = (char *)s1;
  if ( xmmword_251308 )
    v0 = qword_251300;
  return sub_E6750(v0, "Platform", 0);
}

