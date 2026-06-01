__int64 __fastcall sub_3E28B0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 not_tail; // rax

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
