__int64 __fastcall sub_C0F7F0(__int64 a1, char *a2, double a3)
{
  __int64 v4; // rdi
  __int64 result; // rax
  __int64 v6; // rdi
  const char *v7; // rbx
  const char *v8; // rbx

  if ( !(*(unsigned __int8 (__fastcall **)(char *))(*(_QWORD *)a2 + 24LL))(a2) )
    return 1;
  v4 = (__int64)a2;
  (*(void (__fastcall **)(char *))(*(_QWORD *)a2 + 40LL))(a2);
  if ( (unsigned int)sub_180B130(a2) > 9 )
  {
    if ( (unsigned __int8)sub_186A530(a3) )
    {
      sub_186A4C0(a3);
      sub_180B150(a2, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      v7 = *((const char **)a2 + 3);
      if ( v7 )
      {
        strlen(v7);
        std::__ostream_insert<char,std::char_traits<char>>();
      }
      else
      {
        std::ios::clear();
      }
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_C0F760(a1);
      a2 = ")\n";
      v4 = std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_186A500(v4, ")\n");
      if ( (unsigned int)sub_180B130(v4) > 0x270F )
        goto LABEL_7;
    }
    else
    {
      sub_180B150(a2, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      v8 = *((const char **)a2 + 3);
      if ( v8 )
      {
        strlen(v8);
        std::__ostream_insert<char,std::char_traits<char>>();
      }
      else
      {
        std::ios::clear();
      }
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_C0F760(a1);
      a2 = ")\n";
      v4 = std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      if ( (unsigned int)sub_180B130(v4) > 0x270F )
        goto LABEL_7;
    }
LABEL_4:
    result = 0;
    if ( *(_BYTE *)(a1 + 2200) )
      return result;
    return sub_18290A0(*(_QWORD *)a1);
  }
  if ( (unsigned int)sub_180B130(a2) <= 0x270F )
    goto LABEL_4;
LABEL_7:
  if ( (unsigned __int8)sub_186A530(a3) )
  {
    sub_186A4C0(a3);
    sub_180B150(v4, a2);
    std::__ostream_insert<char,std::char_traits<char>>();
    sub_C0F760(a1);
    v6 = std::ostream::_M_insert<unsigned long>();
    std::__ostream_insert<char,std::char_traits<char>>();
    sub_186A500(v6, "\n");
    result = 0;
    if ( !*(_BYTE *)(a1 + 2200) )
      return sub_18290A0(*(_QWORD *)a1);
  }
  else
  {
    sub_180B150(v4, a2);
    std::__ostream_insert<char,std::char_traits<char>>();
    sub_C0F760(a1);
    std::ostream::_M_insert<unsigned long>();
    std::__ostream_insert<char,std::char_traits<char>>();
    result = 0;
    if ( !*(_BYTE *)(a1 + 2200) )
      return sub_18290A0(*(_QWORD *)a1);
  }
  return result;
}

