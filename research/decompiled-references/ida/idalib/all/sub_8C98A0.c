unsigned __int64 __fastcall sub_8C98A0(_QWORD *a1, const char *a2)
{
  if ( !a1 )
  {
    if ( !under_debugger )
      interr(2599);
    BUG();
  }
  return sub_8C96C0(a1, a2);
}
