__int64 __fastcall sub_AA5CA0(__int64 a1, __int64 a2, unsigned int ***a3)
{
  unsigned int **v3; // rax
  unsigned int *v4; // rbx
  unsigned int *v5; // rbp
  __int64 v6; // rax
  unsigned int *v7; // r13
  unsigned int v8; // ebx
  unsigned int **v10; // [rsp+0h] [rbp-48h]
  unsigned int **v11; // [rsp+8h] [rbp-40h]

  v3 = *a3;
  if ( *a3 )
  {
    v11 = &v3[*((unsigned int *)v3 - 1)];
    if ( v11 != v3 )
    {
      v10 = *a3;
      do
      {
        v4 = *v10;
        std::__ostream_insert<char,std::char_traits<char>>();
        v5 = v4 + 2;
        v6 = *v4;
        v7 = &v4[v6 + 2];
        if ( v6 * 4 )
        {
          v8 = v4[2];
          while ( 1 )
          {
            if ( v8 == -2 )
            {
              ++v5;
              std::__ostream_insert<char,std::char_traits<char>>();
              if ( v5 == v7 )
                break;
            }
            else
            {
              ++v5;
              std::__ostream_insert<char,std::char_traits<char>>();
              std::ostream::_M_insert<unsigned long>();
              if ( v5 == v7 )
                break;
            }
            v8 = *v5;
            std::__ostream_insert<char,std::char_traits<char>>();
          }
        }
        std::__ostream_insert<char,std::char_traits<char>>();
        ++v10;
      }
      while ( v11 != v10 );
    }
  }
  return a2;
}

