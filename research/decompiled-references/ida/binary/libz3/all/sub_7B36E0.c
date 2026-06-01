__int64 __fastcall sub_7B36E0(_QWORD *a1, __int64 a2, __int64 *a3, char a4)
{
  __int64 v6; // rax
  unsigned int v7; // r12d
  __int64 v8; // r14
  __int64 (__fastcall *v9)(_QWORD); // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned int v12; // eax
  __int64 v13; // rsi
  unsigned int v15; // r12d

  v6 = *a3;
  if ( *a3 )
  {
    if ( a4 )
    {
      v7 = 0;
      do
      {
        if ( v7 >= *(_DWORD *)(v6 - 4) )
          break;
        v8 = 8LL * v7;
        if ( *(_DWORD *)(v6 + v8) != 1 )
        {
          std::ostream::_M_insert<unsigned long>();
          std::__ostream_insert<char,std::char_traits<char>>();
          v6 = *a3;
        }
        if ( *(_DWORD *)(v6 + v8 + 4) == -2 )
        {
          std::__ostream_insert<char,std::char_traits<char>>();
        }
        else
        {
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::_M_insert<unsigned long>();
        }
        std::__ostream_insert<char,std::char_traits<char>>();
        v9 = *(__int64 (__fastcall **)(_QWORD))(*a1 + 536LL);
        v10 = *(unsigned int *)(*a3 + v8 + 4);
        if ( v9 == sub_7C55E0 )
        {
          v11 = a1[20];
          if ( v11 )
          {
            v12 = *(_DWORD *)(*(_QWORD *)(v11 + 880) + 4LL * ((unsigned int)v10 >> 1));
            v13 = 0;
            if ( v12 >= *(_DWORD *)(v11 + 888) )
              v13 = (((unsigned __int8)v10 ^ (unsigned __int8)v12) & 1) != 0 ? -1 : 1;
          }
          else
          {
            v13 = *(unsigned int *)(*(_QWORD *)(a1[3] + 3288LL) + 4 * v10);
          }
        }
        else
        {
          v13 = ((unsigned int (__fastcall *)(_QWORD *, _QWORD))v9)(a1, (unsigned int)v10);
        }
        ++v7;
        sub_17F35B0(a2, v13);
        std::__ostream_insert<char,std::char_traits<char>>();
        v6 = *a3;
      }
      while ( *a3 );
    }
    else
    {
      v15 = 0;
      do
      {
        if ( v15 >= *(_DWORD *)(v6 - 4) )
          break;
        if ( *(_DWORD *)(v6 + 8LL * v15) != 1 )
        {
          std::ostream::_M_insert<unsigned long>();
          std::__ostream_insert<char,std::char_traits<char>>();
          v6 = *a3;
        }
        if ( *(_DWORD *)(v6 + 8LL * v15 + 4) == -2 )
        {
          std::__ostream_insert<char,std::char_traits<char>>();
        }
        else
        {
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::_M_insert<unsigned long>();
        }
        ++v15;
        std::__ostream_insert<char,std::char_traits<char>>();
        v6 = *a3;
      }
      while ( *a3 );
    }
  }
  std::__ostream_insert<char,std::char_traits<char>>();
  std::ostream::_M_insert<unsigned long>();
  return std::__ostream_insert<char,std::char_traits<char>>();
}

