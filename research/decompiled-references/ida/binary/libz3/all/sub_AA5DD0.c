__int64 __fastcall sub_AA5DD0(__int64 a1, __int64 a2)
{
  __int64 *v3; // r13
  unsigned int v4; // r12d
  __int64 v5; // rbp
  __int64 v6; // rcx
  __int64 v7; // rsi
  unsigned int *v8; // r15
  unsigned int *v9; // rbp
  char *v10; // rax
  unsigned int v11; // r14d
  char *s; // [rsp+8h] [rbp-50h]
  __int64 *v14; // [rsp+18h] [rbp-40h]

  v3 = *(__int64 **)(a1 + 8856);
  if ( v3 )
  {
    v14 = &v3[*((unsigned int *)v3 - 1)];
    if ( v14 != v3 )
    {
      v4 = 0;
      do
      {
        v5 = *v3;
        if ( *v3 )
        {
          v6 = *(unsigned int *)(v5 - 8);
          v7 = *(unsigned int *)(v5 - 4);
          v8 = (unsigned int *)(v5 + v6);
          v9 = (unsigned int *)(v7 + v5);
          if ( (_DWORD)v7 != (_DWORD)v6 )
          {
            v10 = "";
            if ( (v4 & 1) == 0 )
              v10 = "-";
            s = v10;
            if ( v4 != -1 )
            {
              do
              {
                while ( 1 )
                {
                  v11 = *v8;
                  if ( v4 < *v8 )
                    break;
                  if ( v9 == ++v8 )
                    goto LABEL_15;
                }
                std::__ostream_insert<char,std::char_traits<char>>();
                strlen(s);
                std::__ostream_insert<char,std::char_traits<char>>();
                std::ostream::_M_insert<unsigned long>();
                std::__ostream_insert<char,std::char_traits<char>>();
                std::__ostream_insert<char,std::char_traits<char>>();
                if ( v11 != -2 )
                  std::ostream::_M_insert<unsigned long>();
                ++v8;
                std::__ostream_insert<char,std::char_traits<char>>();
              }
              while ( v9 != v8 );
            }
          }
        }
LABEL_15:
        ++v4;
        ++v3;
      }
      while ( v14 != v3 );
    }
  }
  return a2;
}

