__int64 __fastcall sub_7AFFA0(__int64 a1, _BYTE *a2, const char *a3, double a4)
{
  __int64 v5; // r12
  __int64 result; // rax
  __int64 v7; // r14
  __int64 v8; // r14

  v5 = a1 + 80;
  if ( (unsigned int)sub_180B130(a1) > 0x14 )
  {
    if ( (unsigned __int8)sub_186A530(a4) )
    {
      sub_186A4C0(a4);
      v7 = sub_180B150(a1, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      if ( a3 )
      {
        strlen(a3);
        std::__ostream_insert<char,std::char_traits<char>>();
      }
      else
      {
        std::ios::clear();
      }
      std::__ostream_insert<char,std::char_traits<char>>();
      v5 = a1 + 80;
      (*(void (__fastcall **)(_BYTE *, __int64, __int64, __int64))(*(_QWORD *)a2 + 136LL))(a2, v7, a1 + 80, 1);
      sub_186A500(a2, v7);
    }
    else
    {
      v8 = sub_180B150(a1, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      if ( a3 )
      {
        strlen(a3);
        std::__ostream_insert<char,std::char_traits<char>>();
      }
      else
      {
        std::ios::clear();
      }
      std::__ostream_insert<char,std::char_traits<char>>();
      v5 = a1 + 80;
      (*(void (__fastcall **)(_BYTE *, __int64, __int64, __int64))(*(_QWORD *)a2 + 136LL))(a2, v8, a1 + 80, 1);
    }
  }
  sub_7E4500(a2, v5);
  result = (*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a2 + 16LL))(a2, v5);
  a2[12] = 1;
  *(_BYTE *)(a1 + 954) = 1;
  return result;
}

