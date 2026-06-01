__int64 __fastcall sub_89E480(__int64 a1, int a2, unsigned int *a3, char a4)
{
  __int64 *v4; // r12
  __int64 v5; // rdx
  int v6; // r13d
  int *v8; // rax
  unsigned int i; // r14d
  int v10; // ecx
  __int64 v12; // rdx
  __int64 v13; // rax
  int v14; // ecx
  __int64 v15; // rbp
  __int64 v16; // [rsp+18h] [rbp-70h]
  void *v17; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v18[9]; // [rsp+40h] [rbp-48h] BYREF

  v4 = (__int64 *)(*(_QWORD *)(a1 + 1480) + 16LL * *a3);
  v5 = *v4;
  if ( *v4 )
  {
    v6 = *(_DWORD *)(v5 - 4);
    v8 = (int *)(v5 + 32);
    for ( i = 0; v6 != i; ++i )
    {
      v10 = *v8;
      v8 += 10;
      if ( v10 != -1 )
      {
        do
        {
          sub_184D080(a1 + 8, a2);
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::_M_insert<unsigned long>();
          std::__ostream_insert<char,std::char_traits<char>>();
          if ( a4 )
          {
            v15 = *(_QWORD *)(a1 + 1592) + 232LL * *(unsigned int *)(*v4 + 40LL * i + 32);
            v16 = a1 + 736;
            sub_1814440(&v17, a1 + 736, v15 + 8);
            std::__ostream_insert<char,std::char_traits<char>>();
            if ( v17 != v18 )
              operator delete(v17, v18[0] + 1LL);
            std::__ostream_insert<char,std::char_traits<char>>();
            if ( (*(_BYTE *)(v15 + 3) & 0x40) != 0 )
            {
              sub_1814440(&v17, v16, v15 + 72);
              std::__ostream_insert<char,std::char_traits<char>>();
              if ( v17 != v18 )
                operator delete(v17, v18[0] + 1LL);
            }
            else
            {
              std::__ostream_insert<char,std::char_traits<char>>();
            }
            std::__ostream_insert<char,std::char_traits<char>>();
            if ( *(char *)(v15 + 3) < 0 )
            {
              sub_1814440(&v17, v16, v15 + 136);
              std::__ostream_insert<char,std::char_traits<char>>();
              if ( v17 != v18 )
                operator delete(v17, v18[0] + 1LL);
            }
            else
            {
              std::__ostream_insert<char,std::char_traits<char>>();
            }
            std::__ostream_insert<char,std::char_traits<char>>();
          }
          v12 = *v4;
          ++i;
          if ( *v4 )
          {
            v13 = v12 + 40LL * i;
            while ( i < *(_DWORD *)(v12 - 4) )
            {
              v14 = *(_DWORD *)(v13 + 32);
              v13 += 40;
              if ( v14 != -1 )
                break;
              ++i;
            }
          }
        }
        while ( i != v6 );
        return std::__ostream_insert<char,std::char_traits<char>>();
      }
    }
  }
  return std::__ostream_insert<char,std::char_traits<char>>();
}

