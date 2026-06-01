__int64 sub_2EA7B0()
{
  __int64 result; // rax

  if ( !qword_2CAD010 )
  {
    qword_2CAD010 = qthread_self();
    result = qmutex_create();
    qword_2CAD018 = result;
  }
  return result;
}

