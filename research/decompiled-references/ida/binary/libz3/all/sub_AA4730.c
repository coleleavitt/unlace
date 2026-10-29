__int64 __fastcall sub_AA4730(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // r12
  _BYTE v7[16]; // [rsp+0h] [rbp-48h] BYREF
  _BYTE v8[56]; // [rsp+10h] [rbp-38h] BYREF

  if ( dword_1C7ECD0 == a2 || dword_1C7ECCC == a2 || a2 == -2 )
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    return a1;
  }
  else
  {
    v5 = (_QWORD *)(a4 + 8LL * (a2 >> 1));
    if ( (a2 & 1) != 0 )
    {
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1606360(v7, *v5, a3, 3, 0, 0);
      sub_160E8B0(a1, v7);
      std::__ostream_insert<char,std::char_traits<char>>();
    }
    else
    {
      sub_1606360(v7, *v5, a3, 3, 0, 0);
      sub_160E8B0(a1, v7);
    }
    sub_18572D0(v8);
    return a1;
  }
}

