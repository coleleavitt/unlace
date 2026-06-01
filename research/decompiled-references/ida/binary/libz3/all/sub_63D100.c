__int64 __fastcall sub_63D100(__int64 *a1)
{
  __int64 v1; // r12
  __int64 result; // rax
  __int64 ***v3; // rbp
  __int64 *v4; // r15
  __int64 *v5; // r14
  __int64 v6; // rdx
  __int64 v7; // r13
  __int64 *v8; // rax
  __int64 ***i; // [rsp+8h] [rbp-40h]

  v1 = *a1;
  std::__ostream_insert<char,std::char_traits<char>>();
  sub_63B120(v1);
  result = std::__ostream_insert<char,std::char_traits<char>>();
  v3 = (__int64 ***)a1[1];
  if ( v3 )
  {
    result = (__int64)&v3[*((unsigned int *)v3 - 1)];
    for ( i = (__int64 ***)result; i != v3; result = std::__ostream_insert<char,std::char_traits<char>>() )
    {
      v4 = **v3;
      v5 = &v4[*((unsigned int *)*v3 + 2)];
      if ( v4 != v5 )
      {
        while ( (unsigned __int64)*v4 <= 1 )
        {
          if ( v5 == ++v4 )
            goto LABEL_18;
        }
        if ( v5 != v4 )
        {
          v6 = *v4;
          do
          {
            v7 = *(_QWORD *)(v6 + 16);
            if ( (v7 & 7) != 0 )
            {
              std::__ostream_insert<char,std::char_traits<char>>();
              std::ostream::operator<<();
            }
            else
            {
              if ( v7 )
                strlen(*(const char **)(v6 + 16));
              std::__ostream_insert<char,std::char_traits<char>>();
            }
            std::__ostream_insert<char,std::char_traits<char>>();
            v8 = v4 + 1;
            if ( v5 == v4 + 1 )
              break;
            while ( 1 )
            {
              v6 = *v8;
              v4 = v8;
              if ( (unsigned __int64)*v8 > 1 )
                break;
              if ( v5 == ++v8 )
                goto LABEL_18;
            }
          }
          while ( v5 != v8 );
        }
      }
LABEL_18:
      ++v3;
    }
  }
  return result;
}

