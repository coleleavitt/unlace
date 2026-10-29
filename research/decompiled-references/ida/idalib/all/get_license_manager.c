__int64 get_license_manager()
{
  __int64 result; // rax
  int ida_subdirs; // eax
  char *v2; // rdi
  const char **v3; // rbp
  const char **v4; // rbx
  const char *v5; // rsi
  __int64 v6; // rbp
  __int64 v7; // rbx
  char *v8; // rdx
  void *v9; // rax
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v11; // [rsp+8h] [rbp-40h]
  unsigned __int64 v12; // [rsp+18h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  if ( !qword_2CCB588 )
    sub_3956C0();
  result = qword_2CCB558;
  if ( !qword_2CCB558 )
  {
    qword_2CCB558 = new_license_manager();
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64 (__fastcall **)(), _QWORD))(*(_QWORD *)qword_2CCB558 + 24LL))(
            qword_2CCB558,
            &off_2C81938,
            0) )
    {
      if ( !under_debugger )
        interr(3130);
      BUG();
    }
    (*(void (__fastcall **)(__int64, __int128 *, _QWORD))(*(_QWORD *)qword_2CCB558 + 48LL))(
      qword_2CCB558,
      &xmmword_2CCB560,
      0);
    ptr = nullptr;
    v11 = 0;
    ida_subdirs = get_ida_subdirs(&ptr, 0, 4);
    v2 = (char *)ptr;
    if ( ida_subdirs > 0 )
    {
      v3 = (const char **)((char *)ptr + 24 * v11);
      if ( v3 != ptr )
      {
        v4 = (const char **)ptr;
        do
        {
          v5 = haystack;
          if ( v4[1] )
            v5 = *v4;
          (*(void (__fastcall **)(__int64, const char *))(*(_QWORD *)qword_2CCB558 + 16LL))(qword_2CCB558, v5);
          v4 += 3;
        }
        while ( v3 != v4 );
        v2 = (char *)ptr;
      }
    }
    if ( v2 )
    {
      v6 = v11;
      if ( (_QWORD)v11 )
      {
        v7 = 0;
        do
        {
          v8 = &v2[24 * v7];
          v9 = *(void **)v8;
          if ( *(_QWORD *)v8 )
          {
            *((_QWORD *)v8 + 1) = 0;
            qfree(v9);
            v2 = (char *)ptr;
          }
          ++v7;
        }
        while ( v6 != v7 );
      }
      *(_QWORD *)&v11 = 0;
      qfree(v2);
    }
    return qword_2CCB558;
  }
  return result;
}
