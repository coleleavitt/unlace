__int64 __fastcall sub_5A0EA0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rbx

  v3 = *(_QWORD *)(a1 + 48);
  if ( a3 >= v3
    || *(_QWORD *)(a2 + 48) != v3
    || (v4 = 24 * a3, !*(_QWORD *)(*(_QWORD *)(a1 + 40) + 24 * a3))
    || !*(_QWORD *)(*(_QWORD *)(a2 + 40) + 24 * a3) )
  {
    if ( !under_debugger )
      interr(1939);
    BUG();
  }
  switch_dbctx(*(int *)(a1 + 8));
  return sub_5A0E00(*(_QWORD *)(a1 + 40) + v4, v4 + *(_QWORD *)(a2 + 40));
}

