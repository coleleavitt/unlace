__int64 get_dbctx_id()
{
  __int64 v0; // rbx
  __int64 v1; // rbp

  v0 = qword_2CA16A8;
  qmutex_lock(qword_2CA16A8);
  if ( qword_2CA1698 )
    v1 = *(int *)(qword_2CA1698 + 88);
  else
    v1 = -1;
  qmutex_unlock(v0);
  return v1;
}

