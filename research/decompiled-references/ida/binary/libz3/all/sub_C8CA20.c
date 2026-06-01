__int64 __fastcall sub_C8CA20(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r13
  _QWORD *v3; // rbx
  __int64 v4; // r14
  __int64 v5; // rax
  __int64 v6; // r14
  _QWORD *v7; // rax
  __int64 result; // rax
  unsigned int i; // r13d
  __int64 v10; // r14
  __int64 v11; // r15
  __int64 v12; // [rsp+8h] [rbp-90h]
  void *v13; // [rsp+10h] [rbp-88h] BYREF
  __int64 v14; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v15[16]; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v16[88]; // [rsp+40h] [rbp-58h] BYREF

  v2 = *(_QWORD **)(a1 + 32);
  v3 = &v2[2 * *(unsigned int *)(a1 + 40)];
  v12 = *(_QWORD *)(a1 + 56);
  if ( v3 != v2 )
  {
    while ( *v2 <= 1u )
    {
      v2 += 2;
      if ( v3 == v2 )
        goto LABEL_19;
    }
    if ( v3 != v2 )
    {
      do
      {
        std::__ostream_insert<char,std::char_traits<char>>();
        v4 = *(_QWORD *)(*v2 + 16LL);
        if ( (v4 & 7) != 0 )
        {
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::operator<<();
        }
        else
        {
          if ( v4 )
            strlen(*(const char **)(*v2 + 16LL));
          std::__ostream_insert<char,std::char_traits<char>>();
        }
        std::__ostream_insert<char,std::char_traits<char>>();
        v5 = v2[1];
        v6 = *(_QWORD *)(v5 + 16);
        if ( (v6 & 7) != 0 )
        {
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::operator<<();
        }
        else
        {
          if ( v6 )
            strlen(*(const char **)(v5 + 16));
          std::__ostream_insert<char,std::char_traits<char>>();
        }
        std::__ostream_insert<char,std::char_traits<char>>();
        v7 = v2 + 2;
        if ( v3 == v2 + 2 )
          break;
        while ( 1 )
        {
          v2 = v7;
          if ( *v7 > 1u )
            break;
          v7 += 2;
          if ( v3 == v7 )
            goto LABEL_19;
        }
      }
      while ( v3 != v7 );
    }
  }
LABEL_19:
  result = *(_QWORD *)(a1 + 64);
  for ( i = 0; result; result = *(_QWORD *)(a1 + 64) )
  {
    if ( i >= *(_DWORD *)(result - 4) )
      break;
    v10 = *(_QWORD *)(result + 8LL * i);
    std::__ostream_insert<char,std::char_traits<char>>();
    v11 = *(_QWORD *)(v10 + 16);
    if ( (v11 & 7) != 0 )
    {
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::operator<<();
    }
    else
    {
      if ( v11 )
        strlen(*(const char **)(v10 + 16));
      std::__ostream_insert<char,std::char_traits<char>>();
    }
    std::__ostream_insert<char,std::char_traits<char>>();
    sub_1606360(v15, *(_QWORD *)(v10 + 40), v12, 0, 0, 0);
    sub_160E8B0(a2, v15);
    std::__ostream_insert<char,std::char_traits<char>>();
    sub_1850940(&v13, qword_1C7F2C0, *(_QWORD *)(a1 + 72) + 32LL * i);
    std::__ostream_insert<char,std::char_traits<char>>();
    if ( v13 != &v14 )
      operator delete(v13, v14 + 1);
    std::__ostream_insert<char,std::char_traits<char>>();
    ++i;
    sub_18572D0(v16);
  }
  return result;
}

