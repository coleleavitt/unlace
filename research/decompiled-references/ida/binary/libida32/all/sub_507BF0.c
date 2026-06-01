__int64 __fastcall sub_507BF0(__int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rbp

  if ( a2 >= *(_QWORD *)(a1 + 48) || !*(_QWORD *)(*(_QWORD *)(a1 + 40) + 8 * a2) )
  {
    if ( !under_debugger )
      interr(1938);
    BUG();
  }
  result = switch_dbctx(*(int *)(a1 + 8));
  v3 = *(_QWORD *)(a1 + 40) + 8 * a2;
  if ( *(_DWORD *)(*(_QWORD *)v3 + 56LL) != -1 )
    result = sub_79BCF0((unsigned int)*(_QWORD *)v3 + 56);
  *(_QWORD *)v3 = 0;
  return result;
}

