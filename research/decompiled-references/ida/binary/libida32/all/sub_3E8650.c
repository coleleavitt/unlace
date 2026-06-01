unsigned __int64 sub_3E8650()
{
  __int64 v0; // rbx
  unsigned __int64 result; // rax

  v0 = xmmword_2CA16B8 - 1;
  if ( (__int64)xmmword_2CA16B8 - 1 >= 0 )
  {
    do
      result = sub_3E84D0(*(int **)(qword_2CA16B0 + 8 * v0));
    while ( v0-- != 0 );
  }
  return result;
}

