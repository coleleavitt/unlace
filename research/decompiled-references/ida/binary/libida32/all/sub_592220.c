unsigned __int64 __fastcall sub_592220(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rax

  if ( a2 >= *(_QWORD *)(a1 + 48)
    || (v2 = 32 * a2 + *(_QWORD *)(a1 + 40), *(_QWORD *)(v2 + 8) <= 1u) && !*(_DWORD *)(v2 + 24) )
  {
    if ( !under_debugger )
      interr(1938);
    BUG();
  }
  switch_dbctx(*(int *)(a1 + 8));
  return sub_592090(*(_QWORD *)(a1 + 40) + 32 * a2);
}

