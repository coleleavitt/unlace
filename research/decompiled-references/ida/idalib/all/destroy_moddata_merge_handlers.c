void *__fastcall destroy_moddata_merge_handlers(int a1)
{
  __int64 v1; // rbx
  void *result; // rax
  _DWORD *v4; // rdi

  v1 = xmmword_2CCB7A8 - 1;
  if ( (__int64)xmmword_2CCB7A8 - 1 >= 0 )
  {
    do
    {
      result = qword_2CCB7A0;
      v4 = *((_DWORD **)qword_2CCB7A0 + v1);
      if ( v4[36] == a1 )
      {
        if ( v4 )
          result = (void *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v4 + 8LL))(v4);
      }
    }
    while ( v1-- != 0 );
  }
  return result;
}
