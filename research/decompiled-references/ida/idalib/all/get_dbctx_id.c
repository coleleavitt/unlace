__int64 get_dbctx_id()
{
  __int64 v0; // rbx
  __int64 v1; // rbp

  v0 = qword_2CCB5A8;
  qmutex_lock(qword_2CCB5A8);
  if ( qword_2CCB598 )
    v1 = *(int *)(qword_2CCB598 + 88);
  else
    v1 = -1;
  qmutex_unlock(v0);
  return v1;
}
