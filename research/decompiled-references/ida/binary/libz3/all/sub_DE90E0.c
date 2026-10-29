__int64 __fastcall sub_DE90E0(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // r13
  __int64 v6; // r13
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rbx

  v3 = *(_QWORD *)(a1 + 40);
  if ( v3 && *(_DWORD *)(v3 - 4) )
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    sub_39A600(a2, *(const char **)(*(_QWORD *)(a1 + 32) + 24LL));
    v4 = *(_QWORD *)(a1 + 40);
    if ( v4 )
    {
      v5 = *(unsigned int *)(v4 - 4);
      if ( (_DWORD)v5 )
      {
        v6 = 8 * v5;
        v7 = 0;
        do
        {
          std::__ostream_insert<char,std::char_traits<char>>();
          v8 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + v7);
          v7 += 8;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 48LL))(v8, a2);
        }
        while ( v7 != v6 );
      }
    }
LABEL_11:
    std::__ostream_insert<char,std::char_traits<char>>();
    return a2;
  }
  v9 = *(_QWORD *)(a1 + 32);
  v10 = *(_QWORD *)(v9 + 24);
  if ( (v10 & 7) == 0 )
  {
    if ( v10 )
      strlen(*(const char **)(v9 + 24));
    goto LABEL_11;
  }
  std::__ostream_insert<char,std::char_traits<char>>();
  std::ostream::operator<<();
  return a2;
}

