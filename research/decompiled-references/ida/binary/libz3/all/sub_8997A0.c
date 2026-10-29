__int64 __fastcall sub_8997A0(_QWORD *a1, int a2, unsigned int *a3)
{
  __int64 *v4; // r12
  __int64 v5; // rdi
  int v6; // r13d
  int *v7; // rdx
  int i; // eax
  int v9; // ecx
  unsigned int v10; // ebx
  __int64 v12; // rdi
  unsigned int v13; // eax
  __int64 v14; // rdx
  int v15; // ecx

  v4 = (__int64 *)(a1[1] + 16LL * *a3);
  v5 = *v4;
  if ( *v4 )
  {
    v6 = *(_DWORD *)(v5 - 4);
    v7 = (int *)(v5 + 32);
    for ( i = 0; i != v6; ++i )
    {
      v9 = *v7;
      v10 = i + 1;
      v7 += 10;
      if ( v9 != -1 )
      {
        while ( 1 )
        {
          sub_184D080(*a1, a2);
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::_M_insert<unsigned long>();
          std::__ostream_insert<char,std::char_traits<char>>();
          v12 = *v4;
          v13 = v10;
          if ( *v4 )
          {
            v14 = v12 + 40LL * v10;
            while ( v10 < *(_DWORD *)(v12 - 4) )
            {
              v15 = *(_DWORD *)(v14 + 32);
              ++v10;
              v14 += 40;
              if ( v15 != -1 )
                break;
              v13 = v10;
            }
          }
          if ( v13 == v6 )
            break;
          v10 = v13 + 1;
        }
        return std::__ostream_insert<char,std::char_traits<char>>();
      }
    }
  }
  return std::__ostream_insert<char,std::char_traits<char>>();
}

