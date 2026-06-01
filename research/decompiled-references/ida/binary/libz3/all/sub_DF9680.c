__int64 __fastcall sub_DF9680(__int64 a1)
{
  _QWORD *exception; // rbx
  void (*v2)(void); // rax
  char *v3; // rsi
  char **v4; // r13
  char **v5; // rbx
  __int64 (__fastcall *v6)(__int64); // rax
  __int64 (__fastcall *v7)(__int64); // rax
  __int64 (__fastcall *v8)(__int64); // rax
  std::ostream *v9; // rbx
  _BYTE *v10; // rbp
  char v11; // si
  std::ostream *v12; // rax
  __int64 (__fastcall *v14)(__int64, unsigned int); // rax

  if ( !*(_BYTE *)(a1 + 256) )
  {
    exception = __cxa_allocate_exception(0x30u);
    sub_305660(
      exception,
      "command is only available in interactive mode, use command (set-option :interactive-mode true)");
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
  }
  v2 = *(void (**)(void))(*(_QWORD *)a1 + 40LL);
  if ( (char *)v2 != (char *)sub_305010 )
    v2();
  v3 = "(";
  std::__ostream_insert<char,std::char_traits<char>>();
  v4 = *(char ***)(a1 + 776);
  v5 = *(char ***)(a1 + 768);
  if ( v4 != v5 )
  {
    v6 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 40LL);
    if ( v6 != sub_305010 )
      goto LABEL_10;
    while ( 1 )
    {
      v3 = *v5;
      v5 += 4;
      std::__ostream_insert<char,std::char_traits<char>>();
      if ( v4 == v5 )
        break;
      while ( 1 )
      {
        v7 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 40LL);
        if ( v7 != sub_305010 )
          ((void (__fastcall *)(__int64, char *))v7)(a1, v3);
        v3 = "\n ";
        std::__ostream_insert<char,std::char_traits<char>>();
        v6 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 40LL);
        if ( v6 == sub_305010 )
          break;
LABEL_10:
        v5 += 4;
        ((void (__fastcall *)(__int64, char *))v6)(a1, v3);
        v3 = *(v5 - 4);
        std::__ostream_insert<char,std::char_traits<char>>();
        if ( v4 == v5 )
          goto LABEL_11;
      }
    }
  }
LABEL_11:
  v8 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 40LL);
  if ( v8 == sub_305010 )
    v9 = *(std::ostream **)(a1 + 408);
  else
    v9 = (std::ostream *)((__int64 (__fastcall *)(__int64, char *))v8)(a1, v3);
  std::__ostream_insert<char,std::char_traits<char>>();
  v10 = *(_BYTE **)((char *)v9 + *(_QWORD *)(*(_QWORD *)v9 - 24LL) + 240);
  if ( !v10 )
    std::__throw_bad_cast();
  if ( v10[56] )
  {
    v11 = v10[67];
  }
  else
  {
    std::ctype<char>::_M_widen_init();
    v11 = 10;
    v14 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v10 + 48LL);
    if ( v14 != sub_26BE90 )
      v11 = v14((__int64)v10, 10u);
  }
  v12 = (std::ostream *)std::ostream::put(v9, v11);
  return std::ostream::flush(v12);
}

