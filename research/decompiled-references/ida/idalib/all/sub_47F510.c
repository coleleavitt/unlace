__int64 __fastcall sub_47F510(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax

  v2 = switch_dbctx(*(int *)(a1 + 8));
  v3 = sub_3C7600(*(_QWORD *)(v2 + 1672), a2);
  if ( v3 )
    return *(_QWORD *)v3;
  else
    return -1;
}
