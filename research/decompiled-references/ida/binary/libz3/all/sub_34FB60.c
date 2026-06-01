__int64 __fastcall sub_34FB60(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r14
  __int64 v6; // r14
  void *v7; // [rsp+0h] [rbp-88h] BYREF
  _QWORD v8[2]; // [rsp+10h] [rbp-78h] BYREF
  _QWORD v9[2]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v10[88]; // [rsp+30h] [rbp-58h] BYREF

  if ( (unsigned int)sub_180B130(a1) > 0xC )
  {
    if ( (unsigned __int8)sub_186A530() )
    {
      sub_186A4C0();
      v4 = sub_180B150(a1, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1606360(v9, a2, *(_QWORD *)(a1 + 8), 0, 0, 0);
      sub_160E8B0(v4, v9);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1850940(&v7, qword_1C7F2C0, a3);
      std::__ostream_insert<char,std::char_traits<char>>();
      if ( v7 != v8 )
        operator delete(v7, v8[0] + 1LL);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_18572D0(v10);
      sub_186A500(v10, "\n");
    }
    else
    {
      v6 = sub_180B150(a1, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1606360(v9, a2, *(_QWORD *)(a1 + 8), 0, 0, 0);
      sub_160E8B0(v6, v9);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1850940(&v7, qword_1C7F2C0, a3);
      std::__ostream_insert<char,std::char_traits<char>>();
      if ( v7 != v8 )
        operator delete(v7, v8[0] + 1LL);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_18572D0(v10);
    }
  }
  sub_34F3C0((char **)(a1 + 216), a2, a3);
  v9[0] = a2;
  if ( a2 )
  {
    ++*(_DWORD *)(a2 + 8);
    sub_349180((_QWORD *)(a1 + 192), v9);
    ++*(_DWORD *)(a2 + 8);
    v9[0] = a2;
  }
  else
  {
    sub_349180((_QWORD *)(a1 + 192), v9);
    v9[0] = 0;
  }
  return sub_349180((_QWORD *)(a1 + 272), v9);
}

