__int64 __fastcall sub_565560(__int64 a1, __int64 a2, double a3)
{
  __int64 v4; // r12

  if ( (unsigned int)sub_180B130(a1) )
  {
    if ( (unsigned __int8)sub_186A530(a3) )
    {
      sub_186A4C0(a3);
      v4 = sub_180B150(a1, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_186A500(v4, "\n");
    }
    else
    {
      sub_180B150(a1, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      std::__ostream_insert<char,std::char_traits<char>>();
    }
  }
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 48) + 40LL))(*(_QWORD *)(a1 + 48), a2);
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 40) + 40LL))(*(_QWORD *)(a1 + 40), a2);
  return sub_565150((_QWORD *)a1);
}

