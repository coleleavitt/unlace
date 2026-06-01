__int64 __fastcall sub_63C8E0(__int64 *a1, std::ostream *a2)
{
  __int64 *v2; // r14
  __int64 result; // rax
  __int64 *v4; // r13
  __int64 v5; // r15
  const char *v6; // r15
  __int64 v7; // r14
  _QWORD *v8; // r13
  __int64 *v9; // r12
  __int64 v10; // r15
  __int64 *i; // [rsp+8h] [rbp-50h]

  std::__ostream_insert<char,std::char_traits<char>>();
  std::ostream::_M_insert<unsigned long>();
  std::__ostream_insert<char,std::char_traits<char>>();
  std::__ostream_insert<char,std::char_traits<char>>();
  std::ostream::_M_insert<unsigned long>();
  std::__ostream_insert<char,std::char_traits<char>>();
  v2 = (__int64 *)a1[19];
  result = *((unsigned int *)a1 + 40);
  v4 = &v2[result];
  if ( v2 != v4 )
  {
    while ( (unsigned __int64)*v2 <= 1 )
    {
      if ( v4 == ++v2 )
        goto LABEL_18;
    }
    if ( v4 != v2 )
    {
      v5 = *v2;
      do
      {
        std::__ostream_insert<char,std::char_traits<char>>();
        v6 = *(const char **)(v5 + 16);
        if ( ((unsigned __int8)v6 & 7) != 0 )
        {
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::operator<<();
        }
        else
        {
          if ( v6 )
            strlen(v6);
          std::__ostream_insert<char,std::char_traits<char>>();
        }
        if ( *(_QWORD *)((char *)a2 + *(_QWORD *)(*(_QWORD *)a2 - 24LL) + 16) )
          std::__ostream_insert<char,std::char_traits<char>>();
        else
          std::ostream::put(a2, 10);
        result = (__int64)(v2 + 1);
        if ( v4 == v2 + 1 )
          break;
        while ( 1 )
        {
          v5 = *(_QWORD *)result;
          v2 = (__int64 *)result;
          if ( *(_QWORD *)result > 1u )
            break;
          result += 8;
          if ( v4 == (__int64 *)result )
            goto LABEL_18;
        }
      }
      while ( v4 != (__int64 *)result );
    }
  }
LABEL_18:
  v7 = a1[4];
  v8 = (_QWORD *)(v7 + 16LL * *((unsigned int *)a1 + 10));
  if ( (_QWORD *)v7 != v8 )
  {
    while ( *(_QWORD *)v7 <= 1u )
    {
      v7 += 16;
      if ( v8 == (_QWORD *)v7 )
        return result;
    }
    if ( v8 != (_QWORD *)v7 )
    {
      do
      {
        v9 = **(__int64 ***)(v7 + 8);
        if ( v9 )
        {
          for ( i = &v9[*((unsigned int *)v9 - 1)]; i != v9; ++v9 )
          {
            v10 = *v9;
            if ( sub_629B80(*v9, *a1) )
              sub_62AAE0(v10, *a1, a2, 0);
          }
        }
        result = v7 + 16;
        if ( v8 == (_QWORD *)(v7 + 16) )
          break;
        while ( 1 )
        {
          v7 = result;
          if ( *(_QWORD *)result > 1u )
            break;
          result += 16;
          if ( v8 == (_QWORD *)result )
            return result;
        }
      }
      while ( (_QWORD *)result != v8 );
    }
  }
  return result;
}

