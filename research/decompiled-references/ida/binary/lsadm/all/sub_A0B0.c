__int64 sub_A0B0()
{
  __int64 result; // rax

  if ( !qword_7BCC0 )
  {
    qword_7BCC0 = j__pthread_self();
    result = sub_2B340();
    qword_7BCC8 = result;
  }
  return result;
}

