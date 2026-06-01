__int64 __fastcall switch_dbctx(unsigned __int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rbx
  __int64 v3; // rdx

  v1 = qword_2CCB5A8;
  qmutex_lock(qword_2CCB5A8);
  if ( a1 >= (unsigned __int64)xmmword_2CCB5B8 )
  {
    if ( !under_debugger )
      interr(1854);
    BUG();
  }
  byte_2CCB5A4 = 1;
  v2 = *(_QWORD *)(qword_2CCB5B0 + 8 * a1);
  if ( v2 && qword_2CCB598 != v2 )
  {
    v3 = *(_QWORD *)(v2 + 624);
    qword_2CCB598 = *(_QWORD *)(qword_2CCB5B0 + 8 * a1);
    dbg = v3;
  }
  qmutex_unlock(v1);
  return v2;
}
