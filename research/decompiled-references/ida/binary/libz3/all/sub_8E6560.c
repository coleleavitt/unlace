__int64 __fastcall sub_8E6560(__int64 a1, _DWORD *a2, double a3)
{
  __int64 result; // rax
  __int64 v6; // rdi
  __int64 v7; // r12
  const char *v8; // rsi
  __int64 v9; // rdi
  std::ostream *v10; // rbp
  _BYTE *v11; // r12
  __int64 v12; // rsi
  std::ostream *v13; // rdi
  std::ostream *v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // r12
  const char *v17; // rsi
  __int64 v18; // rdi
  std::ostream *v19; // rbp
  _BYTE *v20; // r12
  __int64 v21; // rsi
  std::ostream *v22; // rdi
  std::ostream *v23; // rax
  __int64 (__fastcall *v24)(__int64, unsigned int); // rax
  __int64 (__fastcall *v25)(__int64, unsigned int); // rax
  __int64 v26; // rax
  __int64 v27; // r12
  __int64 v28; // rax
  __int64 v29; // r12

  result = sub_180B130(a1);
  if ( (unsigned int)result <= 2 )
  {
    *a2 = 0;
    return result;
  }
  if ( (unsigned __int8)sub_186A530(a3) )
  {
    sub_186A4C0(a3);
    v6 = sub_180B150(a1, a2);
    std::__ostream_insert<char,std::char_traits<char>>();
    v7 = sub_180B150(v6, "(smt.working");
    std::__ostream_insert<char,std::char_traits<char>>();
    v8 = (const char *)*(unsigned int *)(a1 + 10324);
    v9 = v7;
    std::ostream::_M_insert<unsigned long>();
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 112) + 616LL) )
    {
      v28 = sub_180B150(v7, v8);
      v8 = " :agility ";
      v29 = v28;
      std::__ostream_insert<char,std::char_traits<char>>();
      v9 = v29;
      std::ostream::_M_insert<double>();
    }
    v10 = (std::ostream *)sub_180B150(v9, v8);
    std::__ostream_insert<char,std::char_traits<char>>();
    v11 = *(_BYTE **)((char *)v10 + *(_QWORD *)(*(_QWORD *)v10 - 24LL) + 240);
    if ( v11 )
    {
      if ( v11[56] )
      {
        v12 = (unsigned int)(char)v11[67];
      }
      else
      {
        std::ctype<char>::_M_widen_init();
        v12 = 10;
        v25 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v11 + 48LL);
        if ( v25 != sub_26BE90 )
          v12 = (unsigned int)(char)v25((__int64)v11, 10u);
      }
      v13 = (std::ostream *)std::ostream::put(v10, v12);
      std::ostream::flush(v13);
      v14 = (std::ostream *)sub_180B150(v13, v12);
      std::ostream::flush(v14);
      result = sub_186A500(v14, v12);
      *a2 = 0;
      return result;
    }
LABEL_20:
    std::__throw_bad_cast();
  }
  v15 = sub_180B150(a1, a2);
  std::__ostream_insert<char,std::char_traits<char>>();
  v16 = sub_180B150(v15, "(smt.working");
  std::__ostream_insert<char,std::char_traits<char>>();
  v17 = (const char *)*(unsigned int *)(a1 + 10324);
  v18 = v16;
  std::ostream::_M_insert<unsigned long>();
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 112) + 616LL) )
  {
    v26 = sub_180B150(v16, v17);
    v17 = " :agility ";
    v27 = v26;
    std::__ostream_insert<char,std::char_traits<char>>();
    v18 = v27;
    std::ostream::_M_insert<double>();
  }
  v19 = (std::ostream *)sub_180B150(v18, v17);
  std::__ostream_insert<char,std::char_traits<char>>();
  v20 = *(_BYTE **)((char *)v19 + *(_QWORD *)(*(_QWORD *)v19 - 24LL) + 240);
  if ( !v20 )
    goto LABEL_20;
  if ( v20[56] )
  {
    v21 = (unsigned int)(char)v20[67];
  }
  else
  {
    std::ctype<char>::_M_widen_init();
    v21 = 10;
    v24 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v20 + 48LL);
    if ( v24 != sub_26BE90 )
      v21 = (unsigned int)(char)v24((__int64)v20, 10u);
  }
  v22 = (std::ostream *)std::ostream::put(v19, v21);
  std::ostream::flush(v22);
  v23 = (std::ostream *)sub_180B150(v22, v21);
  result = std::ostream::flush(v23);
  *a2 = 0;
  return result;
}

