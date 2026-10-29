__int64 __fastcall sub_E1BA20(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  _QWORD *v7; // rdi
  __int64 (*v8)(void); // rax
  _QWORD *v9; // r13
  __int64 v10; // r14
  __int64 v11; // rsi
  _QWORD *v12; // rdi
  __int64 (__fastcall *v13)(__int64); // rax
  std::ostream *v14; // r14
  _BYTE *v15; // r13
  char v16; // si
  std::ostream *v17; // rax
  __int64 (__fastcall *v19)(__int64, unsigned int); // rax

  v7 = *(_QWORD **)(a1 + 16);
  v8 = *(__int64 (**)(void))(*v7 + 40LL);
  if ( (char *)v8 == (char *)sub_305010 )
    v9 = (_QWORD *)v7[51];
  else
    v9 = (_QWORD *)v8();
  v10 = *(_QWORD *)(a1 + 24);
  if ( v10 )
  {
    strlen(*(const char **)(a1 + 24));
    v11 = v10;
    std::__ostream_insert<char,std::char_traits<char>>();
  }
  else
  {
    v11 = *(_DWORD *)((char *)v9 + *(_QWORD *)(*v9 - 24LL) + 32) | 1u;
    std::ios::clear();
  }
  if ( *(_BYTE *)(a1 + 32) )
  {
    v12 = *(_QWORD **)(a1 + 16);
    v13 = *(__int64 (__fastcall **)(__int64))(*v12 + 40LL);
    if ( v13 == sub_305010 )
      v14 = (std::ostream *)v12[51];
    else
      v14 = (std::ostream *)((__int64 (__fastcall *)(_QWORD *, __int64))v13)(v12, v11);
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
        v16 = v19((__int64)v15, 10u);
    }
    v17 = (std::ostream *)std::ostream::put(v14, v16);
    std::ostream::flush(v17);
  }
  return sub_EE4820(a1, a2, a3, a4);
}

