__int64 __fastcall sub_91EC60(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // r9
  __int64 v3; // rax
  _DWORD **v4; // rdx
  __int64 v5; // r15
  _DWORD *v6; // rbp
  _DWORD *v7; // r14
  __int64 v8; // r12
  __int64 v9; // rax
  char *v10; // rdx
  __int64 v11; // rax
  char *v12; // rdx
  __int64 v13; // rax
  char *v14; // rdx
  __int64 result; // rax
  __int64 *v16; // rbp
  __int64 *i; // r12
  __int64 v18; // rdx
  _DWORD **v19; // [rsp+10h] [rbp-48h]
  _DWORD **v20; // [rsp+18h] [rbp-40h]

  std::__ostream_insert<char,std::char_traits<char>>();
  (*(void (__fastcall **)(_QWORD *, __int64 *))(*a1 + 280LL))(a1, a2);
  v2 = a1[25];
  if ( v2 )
  {
    v3 = *(unsigned int *)(v2 - 4);
    if ( v2 != v2 + 8 * v3 )
    {
      v20 = (_DWORD **)(v2 + 8 * v3);
      v4 = (_DWORD **)a1[25];
      v5 = 0;
      do
      {
        v6 = *v4;
        if ( *v4 )
        {
          v7 = &v6[6 * *(v6 - 1)];
          if ( v7 != v6 )
          {
            v19 = v4;
            v8 = 0;
            do
            {
              while ( (unsigned int)(*v6 + 1) <= 1 )
              {
                v6 += 6;
                v8 += 8;
                if ( v6 == v7 )
                  goto LABEL_12;
              }
              std::__ostream_insert<char,std::char_traits<char>>();
              v9 = *a2;
              *(__int64 *)((char *)a2 + *(_QWORD *)(*a2 - 24) + 16) = 5;
              v10 = (char *)a2 + *(_QWORD *)(v9 - 24);
              LODWORD(v9) = *((_DWORD *)v10 + 6);
              LOBYTE(v9) = v9 & 0x4F;
              *((_DWORD *)v10 + 6) = v9 | 0x20;
              std::ostream::_M_insert<unsigned long>();
              std::__ostream_insert<char,std::char_traits<char>>();
              v11 = *a2;
              *(__int64 *)((char *)a2 + *(_QWORD *)(*a2 - 24) + 16) = 10;
              v12 = (char *)a2 + *(_QWORD *)(v11 - 24);
              LODWORD(v11) = *((_DWORD *)v12 + 6);
              LOBYTE(v11) = v11 & 0x4F;
              *((_DWORD *)v12 + 6) = v11 | 0x20;
              if ( v6[2] )
              {
                std::__ostream_insert<char,std::char_traits<char>>();
                std::ostream::operator<<();
                std::__ostream_insert<char,std::char_traits<char>>();
                std::ostream::operator<<();
                std::__ostream_insert<char,std::char_traits<char>>();
              }
              else
              {
                std::ostream::operator<<();
              }
              v6 += 6;
              std::__ostream_insert<char,std::char_traits<char>>();
              v13 = *a2;
              *(__int64 *)((char *)a2 + *(_QWORD *)(*a2 - 24) + 16) = 5;
              v14 = (char *)a2 + *(_QWORD *)(v13 - 24);
              LODWORD(v13) = *((_DWORD *)v14 + 6);
              LOBYTE(v13) = v13 & 0x4F;
              *((_DWORD *)v14 + 6) = v13 | 0x20;
              std::ostream::operator<<();
              std::__ostream_insert<char,std::char_traits<char>>();
              v8 += 8;
              std::ostream::_M_insert<unsigned long>();
              std::__ostream_insert<char,std::char_traits<char>>();
            }
            while ( v6 != v7 );
LABEL_12:
            v4 = v19;
          }
        }
        ++v4;
        v5 += 8;
      }
      while ( v4 != v20 );
    }
  }
  result = std::__ostream_insert<char,std::char_traits<char>>();
  v16 = (__int64 *)a1[22];
  if ( v16 )
  {
    result = *((unsigned int *)v16 - 1);
    for ( i = &v16[result];
          v16 != i;
          result = (*(__int64 (__fastcall **)(_QWORD *, __int64 *, __int64))(*a1 + 392LL))(a1, a2, v18) )
    {
      v18 = *v16++;
    }
  }
  return result;
}

