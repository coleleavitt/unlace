__int64 *__fastcall sub_DC0B60(__int64 **a1, __int64 a2, __int64 a3, const char *a4)
{
  __int64 v6; // rax
  void (*v7)(void); // rax
  _QWORD *v8; // rbp
  const char *v9; // rsi
  __int64 *v10; // rdi
  __int64 (__fastcall *v11)(__int64); // rax
  std::ostream *v12; // r12
  _BYTE *v13; // rbp
  char v14; // si
  std::ostream *v15; // rax
  void (*v16)(void); // rax
  const char *v17; // rsi
  __int64 (__fastcall *v18)(__int64); // rax
  __int64 (__fastcall *v19)(__int64); // rax
  std::ostream *v20; // rbp
  _BYTE *v21; // r12
  char v22; // si
  std::ostream *v23; // rax
  __int64 *result; // rax
  __int64 (__fastcall *v25)(__int64, unsigned int); // rax
  __int64 (__fastcall *v26)(__int64, unsigned int); // rax
  const char *v27; // [rsp+10h] [rbp-48h] BYREF
  char v28; // [rsp+18h] [rbp-40h]
  int v29; // [rsp+1Ch] [rbp-3Ch]

  sub_DFC050(*a1, 0);
  v6 = **a1;
  if ( *((_BYTE *)a1 + 2066) )
  {
    v7 = *(void (**)(void))(v6 + 48);
    if ( (char *)v7 != (char *)sub_25D2E0 )
      v7();
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::_M_insert<unsigned long>();
    std::__ostream_insert<char,std::char_traits<char>>();
    v8 = (_QWORD *)std::ostream::_M_insert<unsigned long>();
    std::__ostream_insert<char,std::char_traits<char>>();
    if ( a4 )
    {
      strlen(a4);
      v9 = a4;
      std::__ostream_insert<char,std::char_traits<char>>();
    }
    else
    {
      v9 = (const char *)(*(_DWORD *)((char *)v8 + *(_QWORD *)(*v8 - 24LL) + 32) | 1u);
      std::ios::clear();
    }
    if ( a4[strlen(a4) - 1] != 10 )
    {
      v10 = *a1;
      v11 = *(__int64 (__fastcall **)(__int64))(**a1 + 48);
      if ( v11 == sub_25D2E0 )
        v12 = (std::ostream *)v10[62];
      else
        v12 = (std::ostream *)((__int64 (__fastcall *)(__int64 *, const char *))v11)(v10, v9);
      v13 = *(_BYTE **)((char *)v12 + *(_QWORD *)(*(_QWORD *)v12 - 24LL) + 240);
      if ( v13 )
      {
        if ( v13[56] )
        {
          v14 = v13[67];
        }
        else
        {
          std::ctype<char>::_M_widen_init();
          v14 = 10;
          v26 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v13 + 48LL);
          if ( v26 != sub_26BE90 )
            v14 = v26((__int64)v13, 10u);
        }
        v15 = (std::ostream *)std::ostream::put(v12, v14);
        std::ostream::flush(v15);
        goto LABEL_25;
      }
LABEL_36:
      std::__throw_bad_cast();
    }
  }
  else
  {
    v16 = *(void (**)(void))(v6 + 40);
    if ( (char *)v16 != (char *)sub_305010 )
      v16();
    std::__ostream_insert<char,std::char_traits<char>>();
    v17 = (const char *)a1[263];
    if ( v17 )
    {
      v18 = *(__int64 (__fastcall **)(__int64))(**a1 + 40);
      if ( v18 == sub_305010 || (((void (*)(void))v18)(), (v17 = (const char *)a1[263]) != nullptr) )
      {
        strlen(v17);
        std::__ostream_insert<char,std::char_traits<char>>();
      }
      else
      {
        std::ios::clear();
      }
      v17 = ": ";
      std::__ostream_insert<char,std::char_traits<char>>();
    }
    v19 = *(__int64 (__fastcall **)(__int64))(**a1 + 40);
    if ( v19 != sub_305010 )
      ((void (__fastcall *)(__int64 *, const char *))v19)(*a1, v17);
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::_M_insert<unsigned long>();
    std::__ostream_insert<char,std::char_traits<char>>();
    v20 = (std::ostream *)std::ostream::_M_insert<unsigned long>();
    std::__ostream_insert<char,std::char_traits<char>>();
    v27 = a4;
    v28 = 1;
    v29 = 0;
    sub_180B300(&v27, v20);
    std::__ostream_insert<char,std::char_traits<char>>();
    v21 = *(_BYTE **)((char *)v20 + *(_QWORD *)(*(_QWORD *)v20 - 24LL) + 240);
    if ( !v21 )
      goto LABEL_36;
    if ( v21[56] )
    {
      v22 = v21[67];
    }
    else
    {
      std::ctype<char>::_M_widen_init();
      v22 = 10;
      v25 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v21 + 48LL);
      if ( v25 != sub_26BE90 )
        v22 = v25((__int64)v21, 10u);
    }
    v23 = (std::ostream *)std::ostream::put(v20, v22);
    std::ostream::flush(v23);
  }
LABEL_25:
  result = *a1;
  if ( *((_BYTE *)*a1 + 274) )
    _Exit(1);
  return result;
}

