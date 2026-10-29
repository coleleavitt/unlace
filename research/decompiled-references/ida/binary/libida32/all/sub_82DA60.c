__int64 sub_82DA60()
{
  __int64 v0; // rbp
  void *v2; // rbx

  v0 = qword_2CAD040;
  qmutex_lock(qword_2CAD040);
  while ( (_QWORD)xmmword_2CAD028 )
  {
    v2 = *(void **)(qword_2CAD020 + 8 * xmmword_2CAD028 - 8);
    if ( !v2 )
    {
      while ( 1 )
        ;
    }
    sub_82D8E0(*(_QWORD *)(qword_2CAD020 + 8 * xmmword_2CAD028 - 8));
    operator delete(v2, 0x1668u);
  }
  return qmutex_unlock(v0);
}

