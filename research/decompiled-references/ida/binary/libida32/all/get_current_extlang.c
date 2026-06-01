__int64 get_current_extlang()
{
  __int64 v0; // rbx
  __int64 v1; // rbp

  v0 = 0;
  v1 = qword_2CAA640;
  qmutex_lock(qword_2CAA640);
  if ( qword_2CAA638 < (unsigned __int64)xmmword_2CAA628 )
  {
    v0 = *(_QWORD *)(qword_2CAA620 + 8 * qword_2CAA638);
    if ( v0 )
      ++*(_DWORD *)(v0 + 12);
  }
  qmutex_unlock(v1);
  return v0;
}

