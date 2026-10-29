__int64 __fastcall sub_305B40(__int64 a1, __int64 a2, __int64 a3)
{
  void *v4; // rdi
  __int64 result; // rax
  __int64 (__fastcall *v7)(__int64); // rax
  std::ostream *v8; // rbx
  _BYTE *v9; // rbp
  char v10; // si
  std::ostream *v11; // rax
  const void *v12; // rax
  __int64 (__fastcall *v13)(__int64, unsigned int); // rax
  __int64 v14; // r13
  _QWORD *exception; // rbx

  if ( *(_WORD *)(a3 + 4) )
  {
    exception = __cxa_allocate_exception(0x30u);
    sub_305660(exception, "malformed objective term: it cannot be a quantifier or bound variable");
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
  }
  v4 = *(void **)(a1 + 32);
  if ( !v4 )
  {
    if ( !sub_DF79D0(a2) )
    {
      v14 = sub_186B270(0x328u);
      sub_DFBCB0(a2);
      sub_2F7E40(v14, *(_QWORD *)(a2 + 296));
      sub_DF79E0(a2, v14);
    }
    v12 = (const void *)sub_DF79D0(a2);
    v4 = __dynamic_cast(
           v12,
           (const struct __class_type_info *)&`typeinfo for'opt_wrapper,
           (const struct __class_type_info *)&`typeinfo for'opt::context,
           0);
    if ( !v4 )
      __cxa_bad_cast();
  }
  result = sub_2F7D10((__int64)v4, a3, *(_BYTE *)(a1 + 24));
  if ( *(_BYTE *)(a2 + 258) )
  {
    v7 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL);
    if ( v7 == sub_305010 )
      v8 = *(std::ostream **)(a2 + 408);
    else
      v8 = (std::ostream *)v7(a2);
    std::__ostream_insert<char,std::char_traits<char>>();
    v9 = *(_BYTE **)((char *)v8 + *(_QWORD *)(*(_QWORD *)v8 - 24LL) + 240);
    if ( !v9 )
      std::__throw_bad_cast();
    if ( v9[56] )
    {
      v10 = v9[67];
    }
    else
    {
      std::ctype<char>::_M_widen_init();
      v10 = 10;
      v13 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v9 + 48LL);
      if ( v13 != sub_26BE90 )
        v10 = v13((__int64)v9, 10u);
    }
    v11 = (std::ostream *)std::ostream::put(v8, v10);
    return std::ostream::flush(v11);
  }
  return result;
}

