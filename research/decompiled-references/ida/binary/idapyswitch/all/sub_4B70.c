__int64 sub_4B70()
{
  __int64 result; // rax

  if ( !qword_1D3E0 )
  {
    qword_1D3E0 = j__pthread_self();
    result = sub_11DE0();
    qword_1D3E8 = result;
  }
  return result;
}

