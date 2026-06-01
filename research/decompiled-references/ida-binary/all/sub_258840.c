unsigned __int64 sub_258840()
{
  const char *v0; // rdi

  if ( dbg && (unsigned __int8)netnode_inited() )
    dbg_save_exceptions(&qword_8CC2F0);
  v0 = &s1;
  if ( xmmword_8CC318 )
    v0 = qword_8CC310;
  return sub_258520(v0, "Platform", 0);
}
