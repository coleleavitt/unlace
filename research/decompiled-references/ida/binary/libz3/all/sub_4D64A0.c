__int64 __fastcall sub_4D64A0(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r14
  __int64 i; // rbx
  _BYTE v7[16]; // [rsp+10h] [rbp-68h] BYREF
  _BYTE v8[88]; // [rsp+20h] [rbp-58h] BYREF

  if ( *a1 )
  {
    v4 = *(unsigned int *)(*a1 - 4LL);
    std::__ostream_insert<char,std::char_traits<char>>();
    if ( (_DWORD)v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        if ( i )
          std::__ostream_insert<char,std::char_traits<char>>();
        sub_1606360(v7, *(_QWORD *)(*a1 + 8 * i), a2, 0, 0, 0);
        sub_160E8B0(a3, v7);
        sub_18572D0(v8);
      }
    }
  }
  else
  {
    std::__ostream_insert<char,std::char_traits<char>>();
  }
  return std::__ostream_insert<char,std::char_traits<char>>();
}

