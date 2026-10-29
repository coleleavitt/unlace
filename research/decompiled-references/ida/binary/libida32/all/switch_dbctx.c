__int64 __fastcall switch_dbctx(unsigned __int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rbx
  __int64 v3; // rdx

  v1 = qword_2CA16A8;
  qmutex_lock(qword_2CA16A8);
  if ( a1 >= (unsigned __int64)xmmword_2CA16B8 )
  {
    if ( !under_debugger )
      interr(1854);
    BUG();
  }
  byte_2CA16A4 = 1;
  v2 = *(_QWORD *)(qword_2CA16B0 + 8 * a1);
  if ( v2 && qword_2CA1698 != v2 )
  {
    v3 = *(_QWORD *)(v2 + 536);
    qword_2CA1698 = *(_QWORD *)(qword_2CA16B0 + 8 * a1);
    dbg = v3;
  }
  qmutex_unlock(v1);
  return v2;
}

