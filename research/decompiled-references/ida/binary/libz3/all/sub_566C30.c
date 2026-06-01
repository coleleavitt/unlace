__int64 __fastcall sub_566C30(__int64 a1, __int64 *a2, __int64 a3, double a4)
{
  __int64 v5; // r12
  __int64 v6; // r13
  __int64 v7; // rbp
  __int64 v9; // r12

  if ( (unsigned int)sub_180B130(a1) )
  {
    if ( (unsigned __int8)sub_186A530(a4) )
    {
      sub_186A4C0(a4);
      v9 = sub_180B150(a1, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_186A500(v9, "\n");
    }
    else
    {
      sub_180B150(a1, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      std::__ostream_insert<char,std::char_traits<char>>();
    }
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 8) + 16LL))(
         *(_QWORD *)(a1 + 8),
         a2[6],
         *(_QWORD *)(a3 + 48));
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 16) + 16LL))(
         *(_QWORD *)(a1 + 16),
         a2[5],
         *(_QWORD *)(a3 + 40));
  v7 = sub_186B270(0x38u);
  sub_5657A0(v7, a2[1], v5 + 16, v5, v6);
  return v7;
}

