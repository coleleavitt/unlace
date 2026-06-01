__int64 sub_16180()
{
  __int64 result; // rax

  if ( !qword_1671D0 )
  {
    qword_1671D0 = j__pthread_self();
    result = sub_98180();
    qword_1671D8 = result;
  }
  return result;
}

