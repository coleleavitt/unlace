__int64 __fastcall sub_566D40(__int64 a1, __int64 *a2, double a3)
{
  __int64 v3; // r13
  __int64 v4; // r12
  __int64 v5; // rbp
  __int64 v7; // r12

  if ( (unsigned int)sub_180B130(a1) )
  {
    if ( (unsigned __int8)sub_186A530(a3) )
    {
      sub_186A4C0(a3);
      v7 = sub_180B150(a1, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_186A500(v7, "\n");
    }
    else
    {
      sub_180B150(a1, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      std::__ostream_insert<char,std::char_traits<char>>();
    }
  }
  v3 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 8) + 16LL))(*(_QWORD *)(a1 + 8), a2[5]);
  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 16) + 16LL))(*(_QWORD *)(a1 + 16), a2[6]);
  v5 = sub_186B270(0x38u);
  sub_5657A0(v5, a2[1], v4 + 16, v4, v3);
  return v5;
}

