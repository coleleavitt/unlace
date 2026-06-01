__int64 __fastcall sub_4D5C80(_QWORD *a1, __int64 a2, int a3, int a4, int a5, int a6, void *a7)
{
  __int64 v7; // rbx
  __int64 v8; // r12
  __int64 v9; // r13
  __int64 v10; // rbx
  __int64 v11; // rax
  void *v12; // r12
  __int64 (__fastcall *v13)(__int64, __int64); // rdx
  char v14; // al
  void (__fastcall ***v15)(_QWORD); // rbx
  bool v16; // zf
  void (__fastcall ***v17)(_QWORD); // rbx
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  void *v20; // [rsp+8h] [rbp-30h] BYREF

  std::__ostream_insert<char,std::char_traits<char>>();
  v7 = a1[2];
  if ( v7 )
  {
    v8 = 8LL * *(unsigned int *)(v7 - 4);
    v9 = v7 + v8;
    std::__ostream_insert<char,std::char_traits<char>>();
    if ( v7 != v7 + v8 )
    {
      v10 = v7 + 8;
      std::ostream::_M_insert<unsigned long>();
      if ( v8 != 8 )
      {
        do
        {
          v10 += 8;
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::_M_insert<unsigned long>();
        }
        while ( v9 != v10 );
      }
    }
  }
  else
  {
    std::__ostream_insert<char,std::char_traits<char>>();
  }
  std::__ostream_insert<char,std::char_traits<char>>();
  std::__ostream_insert<char,std::char_traits<char>>();
  (*(void (__fastcall **)(void **, _QWORD *))(*a1 + 200LL))(&ptr, a1);
  (*(void (__fastcall **)(void **, _QWORD *))(*a1 + 208LL))(&v20, a1);
  while ( 1 )
  {
    v12 = v20;
    v13 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)ptr + 40LL);
    if ( v13 == sub_4C9890 )
    {
      if ( !(*(unsigned __int8 (**)(void))(*(_QWORD *)ptr + 16LL))() )
        goto LABEL_6;
      v14 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v12 + 16LL))(v12);
    }
    else
    {
      v14 = v13((__int64)ptr, (__int64)v20);
    }
    if ( v14 )
      break;
LABEL_6:
    v11 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)ptr + 24LL))(ptr);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 48LL))(v11, a2);
    (*(void (__fastcall **)(void *))(*(_QWORD *)ptr + 32LL))(ptr);
  }
  v15 = (void (__fastcall ***)(_QWORD))v20;
  if ( v20 )
  {
    v16 = (*((_DWORD *)v20 + 2))-- == 1;
    if ( v16 )
    {
      (**v15)(v15);
      sub_186B220(v15);
    }
  }
  v17 = (void (__fastcall ***)(_QWORD))ptr;
  if ( ptr )
  {
    v16 = (*((_DWORD *)ptr + 2))-- == 1;
    if ( v16 )
    {
      (**v17)(v17);
      sub_186B220(v17);
    }
  }
  return std::__ostream_insert<char,std::char_traits<char>>();
}

