unsigned __int64 sub_E78B0()
{
  char *v0; // rdi

  if ( dbg && (unsigned __int8)netnode_inited() )
    dbg_save_exceptions();
  v0 = (char *)s1;
  if ( xmmword_252478 )
    v0 = qword_252470;
  return sub_E7590(v0, "Platform", 0);
}

