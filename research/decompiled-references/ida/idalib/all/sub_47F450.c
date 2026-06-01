__int64 __fastcall sub_47F450(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax

  v2 = switch_dbctx(*(int *)(a1 + 8));
  v3 = sub_505EB0(*(_QWORD *)(v2 + 1672) + 2872LL, a2);
  if ( v3 )
    return *(_QWORD *)v3;
  else
    return -1;
}
