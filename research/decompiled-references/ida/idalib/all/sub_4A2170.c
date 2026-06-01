unsigned __int64 __fastcall sub_4A2170(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // r13
  __int64 v6; // rbx
  __int64 v7; // rax
  unsigned int v8; // ecx

  v3 = *(_QWORD *)(a1 + 48);
  if ( a3 >= v3
    || *(_QWORD *)(a2 + 48) != v3
    || (v4 = 424 * a3, *(_DWORD *)(*(_QWORD *)(a1 + 40) + 424 * a3 + 176))
    || !*(_DWORD *)(*(_QWORD *)(a2 + 40) + v4 + 176) )
  {
    if ( !under_debugger )
      interr(1937);
    BUG();
  }
  switch_dbctx(*(int *)(a1 + 8));
  v5 = v4 + *(_QWORD *)(a1 + 40);
  v6 = *(_QWORD *)(a2 + 40) + v4;
  v7 = switch_dbctx(*(int *)(*(_QWORD *)(a1 + 32) + 4LL * *(int *)(a1 + 12) + 16));
  v8 = *(_DWORD *)(v5 + 176);
  if ( !v8 )
  {
    sub_4A16E0(
      v5,
      *(_QWORD *)(a1 + 32),
      *(_QWORD *)(*(_QWORD *)(v7 + 1672) + 8LL),
      0,
      v6,
      *(_DWORD *)(a1 + 12),
      *(_DWORD *)(a2 + 12),
      0);
    v8 = *(_DWORD *)(v5 + 176);
  }
  return sub_4A1660(*(_QWORD *)(a1 + 32), *(_DWORD *)(a1 + 12), *(_DWORD *)(a2 + 12), v8, *(_DWORD *)(v6 + 176), 1);
}
