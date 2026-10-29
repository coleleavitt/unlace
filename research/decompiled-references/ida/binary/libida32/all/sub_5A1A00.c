__int64 __fastcall sub_5A1A00(__int64 a1, int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax

  v2 = switch_dbctx(*(int *)(a1 + 4LL * a2 + 16));
  v3 = sub_5AFCE0(*(_QWORD *)(v2 + 1480));
  if ( !v3 || *(_DWORD *)(v3 + 16) == -1 )
  {
    if ( !under_debugger )
      interr(1969);
    BUG();
  }
  return sub_59D760(*(_QWORD **)(v2 + 1480), v3);
}

