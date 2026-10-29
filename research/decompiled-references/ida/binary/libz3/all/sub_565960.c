__int64 __fastcall sub_565960(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rbp
  __int64 v4; // r12
  __int64 v5; // rax
  __int64 v7; // rbp

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
  v3 = sub_186B270(0x38u);
  v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 40) + 72LL))(*(_QWORD *)(a1 + 40));
  v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 72LL))(*(_QWORD *)(a1 + 48));
  sub_5657A0(v3, *(_QWORD *)(a1 + 8), a1 + 16, v5, v4);
  return v3;
}

