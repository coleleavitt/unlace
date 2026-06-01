__int64 __fastcall sub_50FCE0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  __int64 v3; // rsi
  __int64 result; // rax
  __int64 v5; // rdx

  v1 = *(_QWORD *)(*(_QWORD *)a1 + 1760LL);
  v2 = *(_QWORD *)(v1 + 32);
  if ( !v2 )
    return v2 + 1;
  v3 = *(_QWORD *)(v1 + 24);
  result = 0;
  if ( *(_QWORD *)(16 * v2 + v3 - 16) == v2 )
    return v2 + 1;
  while ( 1 )
  {
    v5 = result++;
    if ( *(_QWORD *)(v3 + 16 * v5) != result )
      break;
    if ( result == v2 )
    {
      if ( !under_debugger )
        interr(1070);
      BUG();
    }
  }
  return result;
}
