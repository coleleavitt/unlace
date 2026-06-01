__int64 __fastcall sub_46BF40(__int64 *a1, unsigned int *a2)
{
  __int64 v2; // rbx
  __int64 v4; // rax
  __int64 v5; // rbx

  v2 = sub_3C25A0(a1[1], *a2);
  sub_3C28E0(
    *a1,
    *(_DWORD *)v2,
    *(_DWORD *)(v2 + 4),
    *(_BYTE **)(v2 + 8),
    *(_BYTE **)(v2 + 16),
    *(_BYTE **)(v2 + 24),
    *(_DWORD *)(v2 + 36));
  if ( !*(_BYTE *)(v2 + 32) )
    return 0;
  v4 = sub_3C25A0(*a1, *a2);
  v5 = v4;
  if ( !v4 )
  {
    if ( !under_debugger )
      interr(2078);
    BUG();
  }
  *(_BYTE *)(v4 + 32) = 1;
  switch_dbctx(*(int *)(*(_QWORD *)*a1 + 88LL));
  sub_3C2740(*a1, v5);
  return 0;
}

