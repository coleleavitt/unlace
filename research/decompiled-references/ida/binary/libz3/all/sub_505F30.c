__int64 __fastcall sub_505F30(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  __int64 i; // rdx
  unsigned int v4; // eax
  unsigned int v5; // ecx
  unsigned int v7; // eax
  unsigned int v8; // edx

  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1) )
  {
    v2 = 0;
    for ( i = **(_QWORD **)(a1 + 48); i; i = **(_QWORD **)(a1 + 48) )
    {
      if ( v2 >= *(_DWORD *)(i - 4) )
        break;
      v4 = v2;
      do
      {
        v5 = v4;
        v4 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 120) + 16LL) + 4LL * v4);
      }
      while ( v5 != v4 );
      if ( v4 == v2 )
      {
        (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)a1 + 160LL))(a1, v2, 16LL * v2 + i, a2);
      }
      else
      {
        std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        v7 = v2;
        do
        {
          v8 = v7;
          v7 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 120) + 16LL) + 4LL * v7);
        }
        while ( v8 != v7 );
        std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
      }
      ++v2;
    }
  }
  return std::__ostream_insert<char,std::char_traits<char>>();
}

