__int64 get_srclang_parser_internal()
{
  _QWORD *v0; // rbx
  __int64 v1; // rbp
  unsigned __int64 v2; // rax
  __int64 v3; // rbx

  v0 = *(_QWORD **)(qword_2CCB598 + 1888);
  v1 = v0[1];
  qmutex_lock(v1);
  v2 = v0[2];
  if ( v2 >= v0[4] )
  {
    if ( !under_debugger )
      interr(2087);
LABEL_8:
    BUG();
  }
  v3 = *(_QWORD *)(v0[3] + 8 * v2);
  if ( !v3 )
  {
    if ( !under_debugger )
      interr(2088);
    goto LABEL_8;
  }
  ++*(_DWORD *)(v3 + 12);
  qmutex_unlock(v1);
  return v3;
}
