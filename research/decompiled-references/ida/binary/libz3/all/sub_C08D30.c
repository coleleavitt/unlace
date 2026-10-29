void __fastcall sub_C08D30(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rax
  __int64 v5; // rsi
  _BYTE v6[16]; // [rsp+0h] [rbp-48h] BYREF
  _BYTE v7[56]; // [rsp+10h] [rbp-38h] BYREF

  v4 = *(_QWORD *)(a1 + 16);
  if ( v4 && a3 < *(_DWORD *)(v4 - 4) && (v5 = *(_QWORD *)(v4 + 8LL * a3)) != 0 )
  {
    sub_1606360(v6, v5, *(_QWORD *)(a1 + 8), 0, 0, 0);
    sub_160E8B0(a2, v6);
    sub_18572D0(v7);
  }
  else
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::_M_insert<unsigned long>();
  }
}

