void __fastcall sub_E12740(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v3)(__int64); // rax
  std::ostream *v4; // rbx
  _BYTE *v5; // rbp
  char v6; // si
  std::ostream *v7; // rax
  __int64 (__fastcall *v8)(__int64); // rax
  std::ostream *v9; // r12
  _BYTE *v10; // r13
  char v11; // si
  std::ostream *v12; // rax
  __int64 (__fastcall *v13)(__int64); // rax
  const char *v14; // rbp
  __int64 (__fastcall *v15)(__int64, unsigned int); // rax
  __int64 (__fastcall *v16)(__int64, unsigned int); // rax

  if ( !*(_BYTE *)(a1 + 200) )
  {
    if ( !*(_BYTE *)(a2 + 258) )
      return;
    v3 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL);
    if ( v3 == sub_305010 )
      v4 = *(std::ostream **)(a2 + 408);
    else
      v4 = (std::ostream *)v3(a2);
    std::__ostream_insert<char,std::char_traits<char>>();
LABEL_6:
    v5 = *(_BYTE **)((char *)v4 + *(_QWORD *)(*(_QWORD *)v4 - 24LL) + 240);
    if ( v5 )
    {
      if ( v5[56] )
      {
        v6 = v5[67];
      }
      else
      {
        std::ctype<char>::_M_widen_init();
        v6 = 10;
        v15 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v5 + 48LL);
        if ( v15 != sub_26BE90 )
          v6 = v15((__int64)v5, 10u);
      }
      v7 = (std::ostream *)std::ostream::put(v4, v6);
      std::ostream::flush(v7);
      return;
    }
LABEL_32:
    std::__throw_bad_cast();
  }
  v8 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL);
  if ( v8 == sub_305010 )
    v9 = *(std::ostream **)(a2 + 408);
  else
    v9 = (std::ostream *)v8(a2);
  std::__ostream_insert<char,std::char_traits<char>>();
  v10 = *(_BYTE **)((char *)v9 + *(_QWORD *)(*(_QWORD *)v9 - 24LL) + 240);
  if ( !v10 )
    goto LABEL_32;
  if ( v10[56] )
  {
    v11 = v10[67];
  }
  else
  {
    std::ctype<char>::_M_widen_init();
    v11 = 10;
    v16 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v10 + 48LL);
    if ( v16 != sub_26BE90 )
      v11 = v16((__int64)v10, 10u);
  }
  v12 = (std::ostream *)std::ostream::put(v9, v11);
  std::ostream::flush(v12);
  if ( *(_QWORD *)(a1 + 208) )
  {
    v13 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 48LL);
    if ( v13 != sub_25D2E0 )
      v13(a2);
    std::__ostream_insert<char,std::char_traits<char>>();
    v14 = *(const char **)(a1 + 208);
    if ( ((unsigned __int8)v14 & 7) != 0 )
    {
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::operator<<();
    }
    else
    {
      if ( v14 )
        strlen(v14);
      std::__ostream_insert<char,std::char_traits<char>>();
    }
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::operator<<();
    std::__ostream_insert<char,std::char_traits<char>>();
    v4 = (std::ostream *)std::ostream::operator<<();
    goto LABEL_6;
  }
}

