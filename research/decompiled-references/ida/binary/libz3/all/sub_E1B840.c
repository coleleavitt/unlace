__int64 __fastcall sub_E1B840(__int64 a1, char **a2, __int64 a3)
{
  char *v6; // rsi
  double v7; // xmm0_8
  const char *v8; // r15
  __int64 (__fastcall *v9)(__int64); // rax
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(__int64); // rax
  _QWORD *v12; // rdi
  __int64 (__fastcall *v13)(__int64); // rax
  std::ostream *v14; // r14
  _BYTE *v15; // r13
  char v16; // si
  std::ostream *v17; // rax
  __int64 (__fastcall *v19)(__int64, unsigned int); // rax

  v6 = *a2;
  v7 = (*(double (__fastcall **)(_QWORD, char *))(**(_QWORD **)(a1 + 32) + 16LL))(*(_QWORD *)(a1 + 32), v6);
  v8 = *(const char **)(a1 + 24);
  if ( v8 )
  {
    v9 = *(__int64 (__fastcall **)(__int64))(**(_QWORD **)(a1 + 16) + 48LL);
    if ( v9 == sub_25D2E0 || (((void (*)(void))v9)(), (v8 = *(const char **)(a1 + 24)) != nullptr) )
    {
      strlen(v8);
      std::__ostream_insert<char,std::char_traits<char>>();
    }
    else
    {
      std::ios::clear();
    }
    v6 = " ";
    std::__ostream_insert<char,std::char_traits<char>>();
  }
  v10 = *(_QWORD *)(a1 + 16);
  v11 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 48LL);
  if ( v11 != sub_25D2E0 )
    ((void (__fastcall *)(__int64, char *))v11)(v10, v6);
  std::ostream::_M_insert<double>();
  if ( *(_BYTE *)(a1 + 40) )
  {
    v12 = *(_QWORD **)(a1 + 16);
    v13 = *(__int64 (__fastcall **)(__int64))(*v12 + 48LL);
    if ( v13 == sub_25D2E0 )
      v14 = (std::ostream *)v12[62];
    else
      v14 = (std::ostream *)((__int64 (__fastcall *)(_QWORD *, char *, double))v13)(v12, v6, v7);
    v15 = *(_BYTE **)((char *)v14 + *(_QWORD *)(*(_QWORD *)v14 - 24LL) + 240);
    if ( !v15 )
      std::__throw_bad_cast();
    if ( v15[56] )
    {
      v16 = v15[67];
    }
    else
    {
      std::ctype<char>::_M_widen_init();
      v16 = 10;
      v19 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v15 + 48LL);
      if ( v19 != sub_26BE90 )
        v16 = ((__int64 (__fastcall *)(_BYTE *, __int64, double))v19)(v15, 10, v7);
    }
    v17 = (std::ostream *)std::ostream::put(v14, v16);
    std::ostream::flush(v17);
  }
  return sub_EE4820(a1, a2, a3, v7);
}

