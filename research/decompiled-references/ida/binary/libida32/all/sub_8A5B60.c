unsigned __int64 __fastcall sub_8A5B60(_QWORD *a1, const char *a2)
{
  if ( !a1 )
  {
    if ( !under_debugger )
      interr(2599);
    BUG();
  }
  return sub_8A5980(a1, a2);
}

