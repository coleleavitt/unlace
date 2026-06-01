__int64 __fastcall sub_B9AEF0(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  __int64 v3; // rax
  char v4; // dl
  __int64 result; // rax
  __int64 *v6; // r12
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 v10; // r13
  __int64 v11; // r14
  __int64 *v12; // [rsp+8h] [rbp-40h]

  v2 = 0;
  std::__ostream_insert<char,std::char_traits<char>>();
  std::__ostream_insert<char,std::char_traits<char>>();
  v3 = *(_QWORD *)(a1 + 88);
  v4 = 1;
  if ( v3 && *(_DWORD *)(v3 - 4) )
  {
    do
    {
      if ( *(_BYTE *)(v3 + v2) != 0xFF )
      {
        if ( !v4 )
          goto LABEL_8;
        while ( 1 )
        {
          std::ostream::_M_insert<unsigned long>();
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::operator<<();
          v3 = *(_QWORD *)(a1 + 88);
          if ( !v3 )
            goto LABEL_10;
          if ( ++v2 >= *(_DWORD *)(v3 - 4) )
            goto LABEL_10;
          v4 = 0;
          if ( *(_BYTE *)(v3 + v2) == 0xFF )
            break;
LABEL_8:
          std::__ostream_insert<char,std::char_traits<char>>();
        }
      }
      ++v2;
    }
    while ( v2 < *(_DWORD *)(v3 - 4) );
  }
LABEL_10:
  result = std::__ostream_insert<char,std::char_traits<char>>();
  v6 = *(__int64 **)(a1 + 488);
  if ( v6 )
  {
    result = (__int64)&v6[*((unsigned int *)v6 - 1)];
    v12 = (__int64 *)result;
    if ( (__int64 *)result != v6 )
    {
      while ( 2 )
      {
        while ( 1 )
        {
          v7 = *v6;
          if ( *v6 )
            break;
LABEL_28:
          result = (__int64)v12;
          if ( ++v6 == v12 )
            return result;
        }
        std::__ostream_insert<char,std::char_traits<char>>();
        v8 = *(_QWORD *)(v7 + 8);
        v9 = *(_QWORD *)(v8 + 16);
        if ( (v9 & 7) != 0 )
        {
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::operator<<();
        }
        else
        {
          if ( v9 )
            strlen(*(const char **)(v8 + 16));
          std::__ostream_insert<char,std::char_traits<char>>();
        }
        std::__ostream_insert<char,std::char_traits<char>>();
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        v10 = *(_QWORD *)(v7 + 32);
        while ( 1 )
        {
          sub_B9A350(a2, v10);
          v10 = *(_QWORD *)(v10 + 8);
          if ( !v10 )
            break;
          if ( (unsigned int)(*(_DWORD *)v10 - 26) <= 1 )
          {
            std::__ostream_insert<char,std::char_traits<char>>();
            do
            {
              std::__ostream_insert<char,std::char_traits<char>>();
              sub_B9A350(a2, v10);
              v11 = *(_QWORD *)(v10 + 8);
              if ( v11 )
              {
                while ( (unsigned int)(*(_DWORD *)v11 - 26) > 1 )
                {
                  std::__ostream_insert<char,std::char_traits<char>>();
                  sub_B9A350(a2, v11);
                  v11 = *(_QWORD *)(v11 + 8);
                  if ( !v11 )
                    goto LABEL_30;
                }
                std::__ostream_insert<char,std::char_traits<char>>();
                sub_B9AAC0(a2, v11, 2);
              }
              else
              {
LABEL_30:
                std::__ostream_insert<char,std::char_traits<char>>();
              }
              v10 = *(_QWORD *)(v10 + 16);
            }
            while ( v10 );
            goto LABEL_28;
          }
          std::__ostream_insert<char,std::char_traits<char>>();
        }
        ++v6;
        std::__ostream_insert<char,std::char_traits<char>>();
        result = (__int64)v12;
        if ( v6 != v12 )
          continue;
        break;
      }
    }
  }
  return result;
}

