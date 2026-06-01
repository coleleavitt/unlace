__int64 __fastcall sub_AA5F80(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  int v4; // ebx
  __int64 v5; // r14
  __int64 *v6; // r15
  __int64 *v7; // rbx
  __int64 v8; // rbp
  __int64 v9; // r14
  __int64 v10; // r13
  _QWORD *v11; // r15
  _QWORD *i; // rbx
  _QWORD *v13; // r14
  __int64 v14; // rbp
  __int64 v15; // r13
  __int64 *v16; // [rsp+8h] [rbp-48h]
  __int64 *v17; // [rsp+10h] [rbp-40h]

  result = *(_QWORD *)(a1 + 8664);
  if ( result )
  {
    v2 = *(unsigned int *)(result - 4);
    if ( (_DWORD)v2 )
    {
      v3 = result + 8 * v2;
      v4 = 0;
      do
      {
        while ( *(_QWORD *)(*(_QWORD *)result + 8LL) != *(_QWORD *)result )
        {
          result += 8;
          if ( result == v3 )
            goto LABEL_7;
        }
        result += 8;
        ++v4;
      }
      while ( result != v3 );
LABEL_7:
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      result = std::__ostream_insert<char,std::char_traits<char>>();
      v5 = *(_QWORD *)(a1 + 8664);
      if ( v5 )
      {
        result = *(unsigned int *)(v5 - 4);
        if ( v5 + 8 * result != v5 )
        {
          v6 = *(__int64 **)(a1 + 8664);
          v7 = (__int64 *)(v5 + 8 * result);
          while ( 1 )
          {
            while ( 1 )
            {
              v8 = *v6;
              if ( v8 == *(_QWORD *)(v8 + 8) )
              {
                std::__ostream_insert<char,std::char_traits<char>>();
                v9 = *(_QWORD *)(a1 + 104);
                v10 = std::ostream::_M_insert<unsigned long>();
                std::__ostream_insert<char,std::char_traits<char>>();
                sub_1648CA0(v10, v9, *(_QWORD *)v8, 3);
                result = std::__ostream_insert<char,std::char_traits<char>>();
                if ( *(_DWORD *)(v8 + 32) != 1 )
                  break;
              }
              if ( v7 == ++v6 )
                return result;
            }
            v16 = v6;
            result = v8;
            v11 = (_QWORD *)v8;
            v17 = v7;
            for ( i = nullptr; ; i = v13 )
            {
              v13 = (_QWORD *)result;
              if ( i == v11 )
                goto LABEL_21;
              if ( v11 != (_QWORD *)result )
                goto LABEL_16;
LABEL_17:
              if ( i )
                break;
              result = v13[2];
            }
            v13 = (_QWORD *)v13[2];
            if ( i != v11 )
              break;
LABEL_21:
            if ( v11 != v13 )
              goto LABEL_16;
            v7 = v17;
            v6 = v16 + 1;
            if ( v17 == v16 + 1 )
              return result;
          }
          while ( v11 == v13 )
          {
            v13 = (_QWORD *)v13[2];
            if ( i == v11 )
              goto LABEL_21;
          }
LABEL_16:
          std::__ostream_insert<char,std::char_traits<char>>();
          v14 = *(_QWORD *)(a1 + 104);
          v15 = std::ostream::_M_insert<unsigned long>();
          std::__ostream_insert<char,std::char_traits<char>>();
          sub_1648CA0(v15, v14, *v13, 3);
          result = std::__ostream_insert<char,std::char_traits<char>>();
          goto LABEL_17;
        }
      }
    }
  }
  return result;
}

