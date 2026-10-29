unsigned __int64 sub_196D00()
{
  unsigned __int64 v0; // rbx
  __int64 v1; // rdi
  unsigned __int64 result; // rax

  if ( (_QWORD)xmmword_256B08 )
  {
    v0 = 0;
    do
    {
      v1 = *(_QWORD *)(qword_256B00 + 8 * v0++);
      result = sub_196B90(v1, 0, 7u, 0);
    }
    while ( v0 < (unsigned __int64)xmmword_256B08 );
  }
  return result;
}

