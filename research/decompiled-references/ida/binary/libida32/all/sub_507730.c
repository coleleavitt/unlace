_BOOL8 __fastcall sub_507730(__int64 a1, __int64 a2, __int64 a3)
{
  if ( !a3 )
    return *(_QWORD *)(a1 + 40) != *(_QWORD *)(a2 + 40);
  if ( a3 != 1 )
  {
    if ( !under_debugger )
      interr(1956);
    BUG();
  }
  return *(_DWORD *)(a1 + 48) != *(_DWORD *)(a2 + 48);
}

