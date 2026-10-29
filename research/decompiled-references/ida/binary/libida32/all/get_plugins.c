void *get_plugins()
{
  __int64 v0; // rax
  void *v1; // rbx

  if ( (unsigned __int8)sub_3E8690() )
  {
    v0 = *(_QWORD *)(qword_2CA1698 + 1552);
    if ( v0 )
    {
      v1 = *(void **)(v0 + 8);
      if ( v1 )
        return v1;
    }
  }
  if ( qword_2CA2088 )
  {
    qmutex_lock(qword_2CA2088);
    if ( qword_2CA2078 )
      v1 = *(void **)qword_2CA2078;
    else
      v1 = qword_2CA2080;
    if ( !qword_2CA2088 )
      return v1;
    qmutex_unlock(qword_2CA2088);
    return v1;
  }
  else
  {
    if ( !qword_2CA2078 )
      return qword_2CA2080;
    return *(void **)qword_2CA2078;
  }
}

