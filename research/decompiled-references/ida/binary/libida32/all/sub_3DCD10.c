__int64 __fastcall sub_3DCD10(__int64 a1, __int64 a2, unsigned int a3)
{
  int not_tail; // eax

  switch_dbctx(*(int *)(a1 + 8));
  not_tail = prev_not_tail(a3);
  if ( not_tail == -1 )
  {
    if ( !under_debugger )
      interr(2063);
    BUG();
  }
  return add_cref(not_tail, a3);
}

