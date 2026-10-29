__int64 __fastcall sub_AA6200(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // rbp
  __int64 v5; // r13
  __int64 v6; // rax
  char *v7; // rdx
  __int64 v8; // rax
  char *v9; // rdx

  std::__ostream_insert<char,std::char_traits<char>>();
  result = *(_QWORD *)(a1 + 8560);
  if ( result )
  {
    v3 = *(unsigned int *)(result - 4);
    if ( (_DWORD)v3 )
    {
      v4 = 0;
      v5 = 8 * v3;
      do
      {
        while ( 1 )
        {
          result = *(_QWORD *)(a1 + 8880);
          if ( *(double *)(result + v4) / *(double *)(a1 + 8960) > 10.0 )
            break;
          v4 += 8;
          if ( v5 == v4 )
            return result;
        }
        std::__ostream_insert<char,std::char_traits<char>>();
        v6 = *a2;
        *(__int64 *)((char *)a2 + *(_QWORD *)(*a2 - 24) + 16) = 5;
        v7 = (char *)a2 + *(_QWORD *)(v6 - 24);
        LODWORD(v6) = *((_DWORD *)v7 + 6);
        LOBYTE(v6) = v6 & 0x4F;
        *((_DWORD *)v7 + 6) = v6 | 0x20;
        std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        v8 = *a2;
        *(__int64 *)((char *)a2 + *(_QWORD *)(*a2 - 24) + 16) = 12;
        v9 = (char *)a2 + *(_QWORD *)(v8 - 24);
        LODWORD(v8) = *((_DWORD *)v9 + 6);
        LOBYTE(v8) = v8 & 0x4F | 0x80;
        *((_DWORD *)v9 + 6) = v8;
        v4 += 8;
        std::ostream::_M_insert<double>();
        std::__ostream_insert<char,std::char_traits<char>>();
        *(__int64 *)((char *)a2 + *(_QWORD *)(*a2 - 24) + 16) = 12;
        std::ostream::_M_insert<double>();
        result = std::__ostream_insert<char,std::char_traits<char>>();
      }
      while ( v5 != v4 );
    }
  }
  return result;
}

