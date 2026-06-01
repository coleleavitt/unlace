__int64 __fastcall sub_4FC040(__int64 a1, __int64 a2, std::ostream *a3)
{
  __int64 v4; // r12
  void *v5; // rbp
  __int64 (__fastcall *v6)(__int64, __int64); // rdx
  char v7; // al
  __int64 v8; // rax
  __int64 i; // rbp
  std::ostream *v10; // rdi
  __int64 v11; // r15
  __int64 v12; // r12
  const char *v13; // rax
  __int64 result; // rax
  void (__fastcall ***v15)(_QWORD); // rbx
  bool v16; // zf
  void (__fastcall ***v17)(_QWORD); // rbx
  __int64 v18; // [rsp+8h] [rbp-80h]
  int v19; // [rsp+2Ch] [rbp-5Ch]
  void *v20; // [rsp+38h] [rbp-50h] BYREF
  void *ptr; // [rsp+40h] [rbp-48h] BYREF
  __int64 v22[8]; // [rsp+48h] [rbp-40h] BYREF

  v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL) + 8LL);
  v19 = *(_DWORD *)(a2 + 32);
  std::__ostream_insert<char,std::char_traits<char>>();
  v4 = *(_QWORD *)(a2 + 16);
  if ( (v4 & 7) != 0 )
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::operator<<();
  }
  else
  {
    if ( v4 )
      strlen(*(const char **)(a2 + 16));
    std::__ostream_insert<char,std::char_traits<char>>();
  }
  std::__ostream_insert<char,std::char_traits<char>>();
  (*(void (__fastcall **)(void **))(**(_QWORD **)(a1 + 32) + 200LL))(&v20);
  (*(void (__fastcall **)(void **))(**(_QWORD **)(a1 + 32) + 208LL))(&ptr);
  v22[0] = 0;
  while ( 1 )
  {
    v5 = ptr;
    v6 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v20 + 40LL);
    if ( v6 == sub_4C9890 )
    {
      if ( !(*(unsigned __int8 (**)(void))(*(_QWORD *)v20 + 16LL))() )
        goto LABEL_10;
      v7 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v5 + 16LL))(v5);
    }
    else
    {
      v7 = v6((__int64)v20, (__int64)ptr);
    }
    if ( v7 )
      break;
LABEL_10:
    v8 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v20 + 24LL))(v20);
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 24LL))(v8, v22);
    std::__ostream_insert<char,std::char_traits<char>>();
    if ( v19 )
    {
      for ( i = 0; i != v19; ++i )
      {
        while ( 1 )
        {
          if ( i )
          {
            if ( *(_QWORD *)((char *)a3 + *(_QWORD *)(*(_QWORD *)a3 - 24LL) + 16) )
              std::__ostream_insert<char,std::char_traits<char>>();
            else
              std::ostream::put(a3, 44);
          }
          v11 = *(_QWORD *)(a2 + 8 * i + 48);
          v12 = *(_QWORD *)(v22[0] + 8 * i);
          v13 = (const char *)sub_64DD10(v18, a2, (unsigned int)i);
          if ( ((unsigned __int8)v13 & 7) != 0 )
          {
            std::__ostream_insert<char,std::char_traits<char>>();
            std::ostream::operator<<();
          }
          else
          {
            if ( v13 )
              strlen(v13);
            std::__ostream_insert<char,std::char_traits<char>>();
          }
          if ( *(_QWORD *)((char *)a3 + *(_QWORD *)(*(_QWORD *)a3 - 24LL) + 16) )
            std::__ostream_insert<char,std::char_traits<char>>();
          else
            std::ostream::put(a3, 61);
          sub_64B9F0(v18, v11, v12, a3);
          if ( *(_QWORD *)((char *)a3 + *(_QWORD *)(*(_QWORD *)a3 - 24LL) + 16) )
            std::__ostream_insert<char,std::char_traits<char>>();
          else
            std::ostream::put(a3, 40);
          v10 = (std::ostream *)std::ostream::_M_insert<unsigned long>();
          if ( !*(_QWORD *)((char *)v10 + *(_QWORD *)(*(_QWORD *)v10 - 24LL) + 16) )
            break;
          std::__ostream_insert<char,std::char_traits<char>>();
          if ( v19 == ++i )
            goto LABEL_28;
        }
        std::ostream::put(v10, 41);
      }
    }
LABEL_28:
    std::__ostream_insert<char,std::char_traits<char>>();
    (*(void (__fastcall **)(void *, char *))(*(_QWORD *)v20 + 32LL))(v20, ")\n");
  }
  result = v22[0];
  if ( v22[0] )
    result = sub_186B220((void *)(v22[0] - 8));
  v15 = (void (__fastcall ***)(_QWORD))ptr;
  if ( ptr )
  {
    v16 = (*((_DWORD *)ptr + 2))-- == 1;
    if ( v16 )
    {
      (**v15)(v15);
      result = sub_186B220(v15);
    }
  }
  v17 = (void (__fastcall ***)(_QWORD))v20;
  if ( v20 )
  {
    v16 = (*((_DWORD *)v20 + 2))-- == 1;
    if ( v16 )
    {
      (**v17)(v17);
      return sub_186B220(v17);
    }
  }
  return result;
}

