__int64 is_main_thread()
{
  if ( qword_2CD6F30 )
    return qthread_same(qword_2CD6F30);
  qword_2CD6F30 = qthread_self();
  qword_2CD6F38 = qmutex_create();
  return qthread_same(qword_2CD6F30);
}
