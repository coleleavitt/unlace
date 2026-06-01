__int64 sub_1F9CB0()
{
  unsigned __int64 v0; // rbx
  __int64 v1; // rdi
  __int64 result; // rax

  if ( (_QWORD)xmmword_8CB528 )
  {
    v0 = 0;
    do
    {
      v1 = *(_QWORD *)(qword_8CB520 + 8 * v0++);
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 664LL))(v1);
    }
    while ( v0 < (unsigned __int64)xmmword_8CB528 );
  }
  return result;
}
