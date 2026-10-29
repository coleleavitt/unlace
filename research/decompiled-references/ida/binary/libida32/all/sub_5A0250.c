__int64 __fastcall sub_5A0250(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rbx

  if ( a2 >= *(_QWORD *)(a1 + 48) || !*(_QWORD *)(*(_QWORD *)(a1 + 40) + 24 * a2) )
  {
    if ( !under_debugger )
      interr(1938);
    BUG();
  }
  switch_dbctx(*(int *)(a1 + 8));
  v2 = *(_QWORD *)(a1 + 40) + 24 * a2;
  if ( !(unsigned __int8)sub_5A00E0(*(_QWORD **)(qword_2CA1698 + 1480), *(_QWORD *)v2, *(_DWORD *)(v2 + 8)) )
    sub_59C140();
  *(_QWORD *)v2 = 0;
  *(_QWORD *)(v2 + 8) = 0xFFFFFFFFLL;
  *(_BYTE *)(v2 + 16) = 0;
  return 0xFFFFFFFFLL;
}

