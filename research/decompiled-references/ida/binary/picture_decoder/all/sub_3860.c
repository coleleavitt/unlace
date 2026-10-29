__int64 sub_3860()
{
  __int64 result; // rax

  if ( !qword_7040 )
  {
    qword_7040 = j__pthread_self();
    result = sub_4460();
    qword_7048 = result;
  }
  return result;
}

