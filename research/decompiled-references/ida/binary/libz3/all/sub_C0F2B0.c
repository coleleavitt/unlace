__int64 __fastcall sub_C0F2B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, int a7, char a8)
{
  unsigned int v8; // ebx
  __int64 i; // rax
  _BYTE v11[16]; // [rsp+0h] [rbp-58h] BYREF
  _BYTE v12[72]; // [rsp+10h] [rbp-48h] BYREF

  v8 = 0;
  std::__ostream_insert<char,std::char_traits<char>>();
  for ( i = *(_QWORD *)(a1 + 936); i; i = *(_QWORD *)(a1 + 936) )
  {
    if ( v8 >= *(_DWORD *)(i - 4) )
      break;
    if ( *(_DWORD *)(a1 + 944) == v8 )
    {
      std::__ostream_insert<char,std::char_traits<char>>();
      i = *(_QWORD *)(a1 + 936);
    }
    sub_1606360(v11, *(_QWORD *)(i + 24LL * v8 + 8), *(_QWORD *)a1, 0, 0, 0);
    sub_160E8B0(a2, v11);
    std::__ostream_insert<char,std::char_traits<char>>();
    ++v8;
    sub_18572D0(v12);
  }
  std::__ostream_insert<char,std::char_traits<char>>();
  std::ostream::_M_insert<bool>();
  return std::__ostream_insert<char,std::char_traits<char>>();
}

