__int64 __fastcall sub_DDFB80(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 *v4; // rbp
  int v5; // eax
  __int64 v6; // r12
  __int64 v7; // r15
  const char *v9; // r12
  __int64 *v10; // [rsp+0h] [rbp-48h]

  std::__ostream_insert<char,std::char_traits<char>>();
  v3 = *(_QWORD *)(a1 + 24);
  if ( (v3 & 7) != 0 )
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::operator<<();
LABEL_4:
    v4 = *(__int64 **)(a1 + 40);
    if ( !v4 )
      return std::__ostream_insert<char,std::char_traits<char>>();
    goto LABEL_5;
  }
  if ( v3 )
  {
    strlen(*(const char **)(a1 + 24));
    std::__ostream_insert<char,std::char_traits<char>>();
    goto LABEL_4;
  }
  std::__ostream_insert<char,std::char_traits<char>>();
  v4 = *(__int64 **)(a1 + 40);
  if ( !v4 )
    return std::__ostream_insert<char,std::char_traits<char>>();
LABEL_5:
  v10 = &v4[*((unsigned int *)v4 - 1)];
  while ( v10 != v4 )
  {
    v6 = *v4;
    std::__ostream_insert<char,std::char_traits<char>>();
    std::__ostream_insert<char,std::char_traits<char>>();
    v7 = *(_QWORD *)(v6 + 24);
    if ( (v7 & 7) != 0 )
    {
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::operator<<();
    }
    else
    {
      if ( v7 )
        strlen(*(const char **)(v6 + 24));
      std::__ostream_insert<char,std::char_traits<char>>();
    }
    std::__ostream_insert<char,std::char_traits<char>>();
    v5 = *(_DWORD *)(v6 + 32);
    if ( v5 == 1 )
    {
      v9 = *(const char **)(*(_QWORD *)(a3 + 8LL * *(int *)(v6 + 40)) + 24LL);
      if ( ((unsigned __int8)v9 & 7) == 0 )
        goto LABEL_20;
    }
    else
    {
      if ( v5 != 2 )
      {
        if ( !v5 )
          (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v6 + 40) + 48LL))(*(_QWORD *)(v6 + 40), a2);
        goto LABEL_14;
      }
      v9 = *(const char **)(v6 + 48);
      if ( ((unsigned __int8)v9 & 7) == 0 )
      {
LABEL_20:
        if ( v9 )
          strlen(v9);
        std::__ostream_insert<char,std::char_traits<char>>();
        goto LABEL_14;
      }
    }
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::operator<<();
LABEL_14:
    ++v4;
    std::__ostream_insert<char,std::char_traits<char>>();
  }
  return std::__ostream_insert<char,std::char_traits<char>>();
}

