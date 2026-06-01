__int64 __fastcall sub_77FED0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rax
  __int64 v5; // rbx
  _BYTE v6[16]; // [rsp+0h] [rbp-48h] BYREF
  _BYTE v7[56]; // [rsp+10h] [rbp-38h] BYREF

  v3 = *(_QWORD *)(a1 + 24);
  if ( v3 && a3 < *(_DWORD *)(v3 - 4) )
  {
    sub_1606360(v6, *(_QWORD *)(v3 + 8LL * a3), *(_QWORD *)(a1 + 8), 0, 0, 0);
    v5 = sub_160E8B0(a2, v6);
    sub_18572D0(v7);
    return v5;
  }
  else
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    return std::ostream::_M_insert<unsigned long>();
  }
}

