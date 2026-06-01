void *get_plugins()
{
  __int64 v0; // rax
  void *v1; // rbx

  if ( (unsigned __int8)sub_3FB5F0() )
  {
    v0 = *(_QWORD *)(qword_2CCB598 + 1744);
    if ( v0 )
    {
      v1 = *(void **)(v0 + 8);
      if ( v1 )
        return v1;
    }
  }
  if ( qword_2CCBF88 )
  {
    qmutex_lock(qword_2CCBF88);
    if ( qword_2CCBF78 )
      v1 = *(void **)qword_2CCBF78;
    else
      v1 = qword_2CCBF80;
    if ( !qword_2CCBF88 )
      return v1;
    qmutex_unlock(qword_2CCBF88);
    return v1;
  }
  else
  {
    if ( !qword_2CCBF78 )
      return qword_2CCBF80;
    return *(void **)qword_2CCBF78;
  }
}
