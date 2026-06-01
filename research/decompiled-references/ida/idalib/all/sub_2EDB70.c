__int64 sub_2EDB70()
{
  __int64 result; // rax

  if ( !qword_2CD6F30 )
  {
    qword_2CD6F30 = qthread_self();
    result = qmutex_create();
    qword_2CD6F38 = result;
  }
  return result;
}
