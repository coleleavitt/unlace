__int64 __fastcall sub_515960(__int64 a1, __int64 a2)
{
  __int64 (*v2)(void); // rax
  char v3; // al
  unsigned int v4; // r13d
  __int64 i; // r14
  unsigned int v6; // eax
  unsigned int v7; // edx
  __int64 (__fastcall *v8)(__int64, __int64, __int64); // r10
  __int64 v9; // r14
  __int64 v10; // r15
  unsigned int v12; // eax
  unsigned int v13; // edx

  v2 = *(__int64 (**)(void))(*(_QWORD *)a1 + 24LL);
  if ( (char *)v2 == (char *)sub_5155C0 )
    v3 = *(_BYTE *)(a1 + 152);
  else
    v3 = v2();
  if ( !v3 )
  {
    v4 = 0;
    for ( i = **(_QWORD **)(a1 + 144); i; i = **(_QWORD **)(a1 + 144) )
    {
      if ( v4 >= *(_DWORD *)(i - 4) )
        break;
      v6 = v4;
      do
      {
        v7 = v6;
        v6 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 216) + 16LL) + 4LL * v6);
      }
      while ( v7 != v6 );
      if ( v6 == v4 )
      {
        v8 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 160LL);
        v9 = 112LL * v4 + i;
        if ( v8 == sub_50C030 )
        {
          v10 = std::ostream::_M_insert<unsigned long>();
          std::__ostream_insert<char,std::char_traits<char>>();
          sub_B2FD00(v9, v10);
          std::__ostream_insert<char,std::char_traits<char>>();
        }
        else
        {
          ((void (__fastcall *)(__int64, _QWORD, __int64, __int64))v8)(a1, v4, v9, a2);
        }
      }
      else
      {
        std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        v12 = v4;
        do
        {
          v13 = v12;
          v12 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 216) + 16LL) + 4LL * v12);
        }
        while ( v13 != v12 );
        std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
      }
      ++v4;
    }
  }
  return std::__ostream_insert<char,std::char_traits<char>>();
}

