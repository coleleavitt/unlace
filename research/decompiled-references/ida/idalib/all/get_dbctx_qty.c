__int64 get_dbctx_qty()
{
  __int64 v0; // rbx
  __int64 v1; // rbp

  v0 = qword_2CCB5A8;
  qmutex_lock(qword_2CCB5A8);
  v1 = xmmword_2CCB5B8;
  qmutex_unlock(v0);
  return v1;
}
