__int64 __fastcall sub_5BBF90(__int64 a1, int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax

  v2 = switch_dbctx(*(int *)(a1 + 4LL * a2 + 16));
  v3 = sub_5CAA10(*(_QWORD *)(v2 + 1672));
  if ( !v3 || *(_QWORD *)(v3 + 24) == -1 )
  {
    if ( !under_debugger )
      interr(1969);
    BUG();
  }
  return sub_5B7950(*(_QWORD **)(v2 + 1672), v3);
}
