__int64 __fastcall sub_91EA00(_QWORD *a1, __int64 *a2)
{
  _DWORD **v2; // rax
  __int64 v3; // rbp
  _DWORD *v4; // r13
  __int64 v5; // r10
  _DWORD *v6; // r12
  __int64 v7; // r15
  __int64 v8; // rax
  char *v9; // rdx
  __int64 v10; // rax
  char *v11; // rdx
  __int64 v12; // rax
  char *v13; // rdx
  __int64 result; // rax
  __int64 *v15; // rbp
  __int64 *i; // r12
  __int64 v17; // rdx
  _DWORD **v18; // [rsp+0h] [rbp-48h]
  _DWORD **v19; // [rsp+8h] [rbp-40h]

  std::__ostream_insert<char,std::char_traits<char>>();
  (*(void (__fastcall **)(_QWORD *, __int64 *))(*a1 + 280LL))(a1, a2);
  v2 = (_DWORD **)a1[24];
  v18 = v2;
  if ( v2 )
  {
    v19 = &v2[*((unsigned int *)v2 - 1)];
    if ( v2 != v19 )
    {
      v3 = 0;
      do
      {
        v4 = *v18;
        if ( *v18 )
        {
          v5 = 4LL * (unsigned int)*(v4 - 1);
          v6 = &v4[v5];
          if ( &v4[v5] != v4 )
          {
            v7 = 0;
            do
            {
              if ( (unsigned int)(*v4 + 1) > 1 )
              {
                std::__ostream_insert<char,std::char_traits<char>>();
                v8 = *a2;
                *(__int64 *)((char *)a2 + *(_QWORD *)(*a2 - 24) + 16) = 5;
                v9 = (char *)a2 + *(_QWORD *)(v8 - 24);
                LODWORD(v8) = *((_DWORD *)v9 + 6);
                LOBYTE(v8) = v8 & 0x4F;
                *((_DWORD *)v9 + 6) = v8 | 0x20;
                std::ostream::_M_insert<unsigned long>();
                std::__ostream_insert<char,std::char_traits<char>>();
                v10 = *a2;
                *(__int64 *)((char *)a2 + *(_QWORD *)(*a2 - 24) + 16) = 10;
                v11 = (char *)a2 + *(_QWORD *)(v10 - 24);
                LODWORD(v10) = *((_DWORD *)v11 + 6);
                LOBYTE(v10) = v10 & 0x4F;
                *((_DWORD *)v11 + 6) = v10 | 0x20;
                std::ostream::operator<<();
                std::__ostream_insert<char,std::char_traits<char>>();
                v12 = *a2;
                *(__int64 *)((char *)a2 + *(_QWORD *)(*a2 - 24) + 16) = 5;
                v13 = (char *)a2 + *(_QWORD *)(v12 - 24);
                LODWORD(v12) = *((_DWORD *)v13 + 6);
                LOBYTE(v12) = v12 & 0x4F;
                *((_DWORD *)v13 + 6) = v12 | 0x20;
                std::ostream::operator<<();
                std::__ostream_insert<char,std::char_traits<char>>();
                std::ostream::_M_insert<unsigned long>();
                std::__ostream_insert<char,std::char_traits<char>>();
              }
              v4 += 4;
              v7 += 8;
            }
            while ( v4 != v6 );
          }
        }
        ++v18;
        v3 += 8;
      }
      while ( v18 != v19 );
    }
  }
  result = std::__ostream_insert<char,std::char_traits<char>>();
  v15 = (__int64 *)a1[21];
  if ( v15 )
  {
    result = *((unsigned int *)v15 - 1);
    for ( i = &v15[result];
          v15 != i;
          result = (*(__int64 (__fastcall **)(_QWORD *, __int64 *, __int64))(*a1 + 392LL))(a1, a2, v17) )
    {
      v17 = *v15++;
    }
  }
  return result;
}

