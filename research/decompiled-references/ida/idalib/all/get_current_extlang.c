__int64 get_current_extlang()
{
  __int64 v0; // rbx
  __int64 v1; // rbp

  v0 = 0;
  v1 = qword_2CD4560;
  qmutex_lock(qword_2CD4560);
  if ( qword_2CD4558 < (unsigned __int64)xmmword_2CD4548 )
  {
    v0 = *(_QWORD *)(qword_2CD4540 + 8 * qword_2CD4558);
    if ( v0 )
      ++*(_DWORD *)(v0 + 12);
  }
  qmutex_unlock(v1);
  return v0;
}
