__int64 __fastcall sub_3FFBB0(__int64 a1, __int64 a2, double a3)
{
  __int64 v5; // rsi
  _QWORD *v6; // rdi
  _QWORD *v7; // rax
  __int64 v9; // rbp
  __int64 v10; // rdi
  __int64 v11; // rbp

  v5 = *(unsigned int *)(a1 + 272);
  v6 = *(_QWORD **)(a1 + 264);
  v7 = sub_3FCD00(v6, v5, a2);
  if ( v7 )
    return *(unsigned int *)(v7[1] + 208LL);
  if ( (unsigned int)sub_180B130(v6) <= 9 )
    return 0;
  if ( (unsigned __int8)sub_186A530(a3) )
  {
    sub_186A4C0(a3);
    v9 = sub_180B150(v6, v5);
    std::__ostream_insert<char,std::char_traits<char>>();
    v10 = sub_39A600(v9, *(const char **)(a2 + 16));
    std::operator<<<std::char_traits<char>>();
    sub_186A500(v10, "\n");
  }
  else
  {
    v11 = sub_180B150(v6, v5);
    std::__ostream_insert<char,std::char_traits<char>>();
    sub_39A600(v11, *(const char **)(a2 + 16));
    std::operator<<<std::char_traits<char>>();
  }
  return 0;
}

