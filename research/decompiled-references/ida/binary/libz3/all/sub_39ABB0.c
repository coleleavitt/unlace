__int64 __fastcall sub_39ABB0(__int64 a1)
{
  __int64 result; // rax
  unsigned int v2; // ebp
  __int64 v3; // r13
  _BYTE v4[16]; // [rsp+10h] [rbp-68h] BYREF
  _BYTE v5[88]; // [rsp+20h] [rbp-58h] BYREF

  result = *(_QWORD *)(a1 + 160);
  if ( result )
  {
    v2 = 0;
    do
    {
      if ( v2 >= *(_DWORD *)(result - 4) )
        break;
      if ( *(_QWORD *)(result + 8LL * v2) )
      {
        v3 = std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_1606360(v4, *(_QWORD *)(*(_QWORD *)(a1 + 160) + 8LL * v2), *(_QWORD *)(a1 + 8), 0, 0, 0);
        sub_160E8B0(v3, v4);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_18572D0(v5);
        result = *(_QWORD *)(a1 + 160);
      }
      ++v2;
    }
    while ( result );
  }
  return result;
}

