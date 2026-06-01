__int64 __fastcall sub_402F40(__int64 a1, unsigned __int64 a2)
{
  if ( a2 >= *(_QWORD *)(a1 + 48) || *(_QWORD *)(*(_QWORD *)(a1 + 40) + 88 * a2) == -1 )
  {
    if ( !under_debugger )
      interr(1938);
    BUG();
  }
  return switch_dbctx(*(int *)(a1 + 8));
}
