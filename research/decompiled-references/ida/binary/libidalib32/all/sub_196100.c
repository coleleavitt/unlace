unsigned __int64 sub_196100()
{
  unsigned __int64 v0; // rbx
  __int64 v1; // rdi
  unsigned __int64 result; // rax

  if ( (_QWORD)xmmword_255948 )
  {
    v0 = 0;
    do
    {
      v1 = *(_QWORD *)(qword_255940 + 8 * v0++);
      result = sub_195F90(v1, 0, 7u, 0);
    }
    while ( v0 < (unsigned __int64)xmmword_255948 );
  }
  return result;
}

