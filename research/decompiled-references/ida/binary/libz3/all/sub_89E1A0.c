__int64 __fastcall sub_89E1A0(_QWORD *a1, int a2)
{
  unsigned int v2; // ebp
  __int64 v3; // rdx
  __int64 result; // rax
  __int64 v5; // rbp
  unsigned int v6; // r12d
  __int64 v7; // rbp
  _QWORD *v8; // [rsp+8h] [rbp-60h]
  void *v9; // [rsp+10h] [rbp-58h] BYREF
  _QWORD v10[9]; // [rsp+20h] [rbp-48h] BYREF

  v2 = 0;
  v3 = a1[185];
  if ( v3 )
  {
    while ( v2 < *(_DWORD *)(v3 - 4) )
    {
      result = *(unsigned int *)(v3 + 16LL * v2 + 8);
      if ( (_DWORD)result )
      {
        LODWORD(v9) = v2;
        result = sub_8997A0(a1 + 184, a2, (unsigned int *)&v9);
        v3 = a1[185];
        ++v2;
        if ( !v3 )
          break;
      }
      else
      {
        ++v2;
      }
    }
  }
  v5 = a1[199];
  if ( v5 )
  {
    v6 = 0;
    do
    {
      if ( v6 >= *(_DWORD *)(v5 - 4) )
        break;
      v7 = 232LL * v6 + v5;
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      v8 = a1 + 92;
      sub_1814440(&v9, a1 + 92, v7 + 8);
      std::__ostream_insert<char,std::char_traits<char>>();
      if ( v9 != v10 )
        operator delete(v9, v10[0] + 1LL);
      std::__ostream_insert<char,std::char_traits<char>>();
      if ( (*(_BYTE *)(v7 + 3) & 0x40) != 0 )
      {
        sub_1814440(&v9, v8, v7 + 72);
        std::__ostream_insert<char,std::char_traits<char>>();
        if ( v9 != v10 )
          operator delete(v9, v10[0] + 1LL);
      }
      else
      {
        std::__ostream_insert<char,std::char_traits<char>>();
      }
      std::__ostream_insert<char,std::char_traits<char>>();
      if ( *(char *)(v7 + 3) < 0 )
      {
        sub_1814440(&v9, v8, v7 + 136);
        std::__ostream_insert<char,std::char_traits<char>>();
        if ( v9 != v10 )
          operator delete(v9, v10[0] + 1LL);
      }
      else
      {
        std::__ostream_insert<char,std::char_traits<char>>();
      }
      std::__ostream_insert<char,std::char_traits<char>>();
      if ( (*(_BYTE *)(v7 + 3) & 0x20) != 0 )
      {
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
      }
      ++v6;
      result = std::__ostream_insert<char,std::char_traits<char>>();
      v5 = a1[199];
    }
    while ( v5 );
  }
  return result;
}

