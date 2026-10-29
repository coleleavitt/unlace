__int64 __fastcall sub_E12C00(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64); // rax
  char *v5; // rsi
  __int64 (__fastcall *v6)(__int64); // rcx
  __int64 v7; // rax
  unsigned int v8; // ebp
  __int64 v9; // rdx
  char *v10; // r15
  __int64 (__fastcall *v11)(__int64); // rax
  std::ostream *v12; // rbx
  _BYTE *v13; // rbp
  char v14; // si
  std::ostream *v15; // rax
  __int64 result; // rax
  _QWORD *exception; // rbx
  __int64 (__fastcall *v18)(__int64, unsigned int); // rax
  _QWORD v19[8]; // [rsp+8h] [rbp-40h] BYREF

  if ( !a2[37] || (unsigned int)sub_DF7CC0((__int64)a2) != 1 && (unsigned int)sub_DF7CC0((__int64)a2) != 2 )
  {
    exception = __cxa_allocate_exception(0x30u);
    sub_305660(exception, "labels are not available");
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
  }
  v3 = a2[109];
  v19[0] = 0;
  (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v3 + 64LL))(v3, v19);
  v4 = *(__int64 (__fastcall **)(__int64))(*a2 + 40LL);
  if ( v4 != sub_305010 )
    v4((__int64)a2);
  v5 = "(labels";
  std::__ostream_insert<char,std::char_traits<char>>();
  v7 = v19[0];
  v8 = 0;
  if ( v19[0] )
  {
    while ( 1 )
    {
      v9 = *a2;
      v6 = *(__int64 (__fastcall **)(__int64))(*a2 + 40LL);
      if ( v8 >= *(_DWORD *)(v7 - 4) )
        break;
      if ( v6 != sub_305010 )
        ((void (__fastcall *)(_QWORD *, char *))v6)(a2, v5);
      std::__ostream_insert<char,std::char_traits<char>>();
      v10 = *(char **)(v19[0] + 8LL * v8);
      if ( ((unsigned __int8)v10 & 7) != 0 )
      {
        std::__ostream_insert<char,std::char_traits<char>>();
        v5 = (char *)((unsigned __int64)v10 >> 3);
        std::ostream::operator<<();
      }
      else
      {
        if ( v10 )
        {
          strlen(*(const char **)(v19[0] + 8LL * v8));
          v5 = v10;
        }
        else
        {
          v5 = "null";
        }
        std::__ostream_insert<char,std::char_traits<char>>();
      }
      v7 = v19[0];
      ++v8;
      if ( !v19[0] )
        goto LABEL_14;
    }
  }
  else
  {
LABEL_14:
    v9 = *a2;
  }
  v11 = *(__int64 (__fastcall **)(__int64))(v9 + 40);
  if ( v11 == sub_305010 )
    v12 = (std::ostream *)a2[51];
  else
    v12 = (std::ostream *)((__int64 (__fastcall *)(_QWORD *, char *, __int64, __int64 (__fastcall *)(__int64)))v11)(
                            a2,
                            v5,
                            v9,
                            v6);
  std::__ostream_insert<char,std::char_traits<char>>();
  v13 = *(_BYTE **)((char *)v12 + *(_QWORD *)(*(_QWORD *)v12 - 24LL) + 240);
  if ( !v13 )
    std::__throw_bad_cast();
  if ( v13[56] )
  {
    v14 = v13[67];
  }
  else
  {
    std::ctype<char>::_M_widen_init();
    v14 = 10;
    v18 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v13 + 48LL);
    if ( v18 != sub_26BE90 )
      v14 = v18((__int64)v13, 10u);
  }
  v15 = (std::ostream *)std::ostream::put(v12, v14);
  result = std::ostream::flush(v15);
  if ( v19[0] )
    return sub_186B220((void *)(v19[0] - 8LL));
  return result;
}

