__int64 is_main_thread()
{
  if ( qword_2CAD010 )
    return qthread_same(qword_2CAD010);
  qword_2CAD010 = qthread_self();
  qword_2CAD018 = qmutex_create();
  return qthread_same(qword_2CAD010);
}

