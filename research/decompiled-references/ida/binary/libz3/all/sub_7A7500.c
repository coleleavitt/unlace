__int64 __fastcall sub_7A7500(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  __int64 v4; // r14
  _BYTE v6[16]; // [rsp+10h] [rbp-68h] BYREF
  _BYTE v7[88]; // [rsp+20h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(a1 + 88);
  if ( v2 )
  {
    v3 = 0;
    do
    {
      if ( v3 >= *(_DWORD *)(v2 - 4) )
        break;
      v4 = std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1606360(v6, **(_QWORD **)(*(_QWORD *)(a1 + 88) + 8LL * v3), *(_QWORD *)(a1 + 72), 0, 0, 0);
      sub_160E8B0(v4, v6);
      std::__ostream_insert<char,std::char_traits<char>>();
      ++v3;
      sub_18572D0(v7);
      v2 = *(_QWORD *)(a1 + 88);
    }
    while ( v2 );
  }
  return a2;
}

