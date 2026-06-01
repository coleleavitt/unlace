__int64 __fastcall sub_402EE0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rax

  v3 = *(_QWORD *)(a1 + 48);
  if ( a3 >= v3
    || *(_QWORD *)(a2 + 48) != v3
    || *(_QWORD *)(*(_QWORD *)(a1 + 40) + 88 * a3) == -1
    || *(_QWORD *)(*(_QWORD *)(a2 + 40) + 88 * a3) == -1 )
  {
    if ( !under_debugger )
      interr(1939);
    BUG();
  }
  return switch_dbctx(*(int *)(a1 + 8));
}
