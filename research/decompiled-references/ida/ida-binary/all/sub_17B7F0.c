__int64 __fastcall sub_17B7F0(__int64 a1, __int64 a2)
{
  __int64 undo_param; // rax
  const char *v3; // rdx
  const char *v4; // rbp
  __int64 v5; // rax

  undo_param = get_undo_param(0);
  v3 = "Disable undo";
  if ( !undo_param )
    v3 = "Enable undo";
  v4 = v3;
  v5 = sub_534430(*(_QWORD *)(a2 + 72));
  if ( v5 )
    sub_537630(v5, 1, v4);
  return 3;
}
