void __fastcall __noreturn CoinPresolveAction::throwCoinError(CoinPresolveAction *this, const char *a2, const char *a3)
{
  _DWORD *exception; // rbx
  std::ostream *v4; // r15
  char v5; // si
  std::ostream *v6; // rax
  __int64 (__fastcall *v7)(__int64, unsigned int); // rdx
  _BYTE *v8; // [rsp+8h] [rbp-70h]
  __int64 v9; // [rsp+20h] [rbp-58h] BYREF
  __int64 v10; // [rsp+28h] [rbp-50h] BYREF
  __int64 v11; // [rsp+30h] [rbp-48h] BYREF
  char *v12; // [rsp+38h] [rbp-40h] BYREF

  exception = __cxa_allocate_exception(0x30u);
  v12 = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
  std::string::string();
  std::string::string();
  std::string::string();
  *(_QWORD *)exception = off_4D0500;
  std::string::string((std::string *)(exception + 2), (const std::string *)&v9);
  std::string::string((std::string *)(exception + 4), (const std::string *)&v10);
  std::string::string((std::string *)(exception + 6), (const std::string *)&v11);
  std::string::string((std::string *)(exception + 8), (const std::string *)&v12);
  exception[10] = -1;
  if ( CoinError::printErrors_ )
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    std::__ostream_insert<char,std::char_traits<char>>();
    std::__ostream_insert<char,std::char_traits<char>>();
    std::__ostream_insert<char,std::char_traits<char>>();
    v4 = (std::ostream *)std::__ostream_insert<char,std::char_traits<char>>();
    v8 = *(_BYTE **)((char *)v4 + *(_QWORD *)(*(_QWORD *)v4 - 24LL) + 240);
    if ( !v8 )
      std::__throw_bad_cast();
    if ( v8[56] )
    {
      v5 = v8[67];
    }
    else
    {
      std::ctype<char>::_M_widen_init();
      v5 = 10;
      v7 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v8 + 48LL);
      if ( v7 != std::ctype<char>::do_widen )
        v5 = v7((__int64)v8, 10u);
    }
    v6 = (std::ostream *)std::ostream::put(v4, v5);
    std::ostream::flush(v6);
  }
  if ( (_UNKNOWN *)(v9 - 24) != &std::string::_Rep::_S_empty_rep_storage )
    sub_246050(v9 - 24);
  if ( (_UNKNOWN *)(v10 - 24) != &std::string::_Rep::_S_empty_rep_storage )
    sub_246050(v10 - 24);
  if ( (_UNKNOWN *)(v11 - 24) != &std::string::_Rep::_S_empty_rep_storage )
    sub_246050(v11 - 24);
  if ( v12 - 24 != (char *)&std::string::_Rep::_S_empty_rep_storage )
    sub_246050((__int64)(v12 - 24));
  __cxa_throw(exception, (struct type_info *)&`typeinfo for'CoinError, (void (*)(void *))CoinError::~CoinError);
}

