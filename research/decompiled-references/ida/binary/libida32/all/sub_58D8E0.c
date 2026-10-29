__int64 __fastcall sub_58D8E0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rdx

  v3 = *(_QWORD *)(a1 + 48);
  if ( a3 >= v3
    || *(_QWORD *)(a2 + 48) != v3
    || (v4 = 32 * a3, v5 = v4 + *(_QWORD *)(a1 + 40), *(_QWORD *)(v5 + 8) <= 1u) && !*(_DWORD *)(v5 + 24)
    || (v6 = *(_QWORD *)(a2 + 40) + v4, *(_QWORD *)(v6 + 8) <= 1u) && !*(_DWORD *)(v6 + 24) )
  {
    if ( !under_debugger )
      interr(1939);
    BUG();
  }
  return switch_dbctx(*(int *)(a1 + 8));
}

