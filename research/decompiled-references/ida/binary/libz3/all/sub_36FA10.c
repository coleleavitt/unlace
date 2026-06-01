__int64 __fastcall sub_36FA10(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdi
  __int64 (*v5)(void); // rax
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi
  unsigned int v10; // ebx
  __int64 v12; // rdi
  _BYTE v13[32]; // [rsp+8h] [rbp-20h] BYREF

  if ( (unsigned int)sub_180B130(a1) )
  {
    if ( (unsigned __int8)sub_186A530() )
    {
      sub_186A4C0();
      v12 = sub_180B150(a1, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_186A500(v12, "(opt.lns :climb)\n");
    }
    else
    {
      sub_180B150(a1, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
    }
  }
  v4 = *(_QWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 68) = 0;
  v5 = *(__int64 (**)(void))(*(_QWORD *)v4 + 104LL);
  if ( (char *)v5 == (char *)sub_2B1DE0 )
    v6 = v4 + 80;
  else
    v6 = v5();
  sub_1858590(v13, v6);
  sub_36D260(a1, (__int64)v13);
  sub_36D1C0(a1);
  sub_36D390(a1, a2);
  sub_36EA10(a1);
  sub_36EA10(a1);
  if ( (unsigned int)sub_180B130(a1) )
  {
    if ( (unsigned __int8)sub_186A530() )
    {
      sub_186A4C0();
      sub_180B150(a1, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      v7 = std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_186A500(v7, ")\n");
    }
    else
    {
      sub_180B150(a1, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
    }
  }
  sub_36F110(a1);
  v8 = *(_QWORD *)(a1 + 8);
  (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v8 + 88LL))(v8, v13);
  if ( (unsigned int)sub_180B130(v8) )
  {
    if ( (unsigned __int8)sub_186A530() )
    {
      sub_186A4C0();
      sub_180B150(v8, v13);
      std::__ostream_insert<char,std::char_traits<char>>();
      v9 = std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_186A500(v9, ")\n");
    }
    else
    {
      sub_180B150(v8, v13);
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
    }
  }
  v10 = *(_DWORD *)(a1 + 68);
  sub_18572D0(v13);
  return v10;
}

