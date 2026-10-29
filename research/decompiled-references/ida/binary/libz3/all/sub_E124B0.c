__int64 __fastcall sub_E124B0(__int64 a1, _QWORD *a2, __int64 a3)
{
  void (__fastcall *v4)(_QWORD *, __int64, __int64, _QWORD); // r12
  __int64 (__fastcall *v5)(__int64); // rax
  __int64 v6; // rsi
  __int64 (__fastcall *v7)(__int64); // rax
  std::ostream *v8; // rbp
  _BYTE *v9; // rbx
  char v10; // si
  std::ostream *v11; // rax
  __int64 (__fastcall *v13)(__int64, unsigned int); // rax
  __int64 v14; // rax
  __int64 v15; // [rsp+8h] [rbp-20h]

  v4 = *(void (__fastcall **)(_QWORD *, __int64, __int64, _QWORD))(*a2 + 104LL);
  v5 = *(__int64 (__fastcall **)(__int64))(*a2 + 40LL);
  if ( v5 == sub_305010 )
  {
    v6 = a2[51];
  }
  else
  {
    v15 = a3;
    v14 = v5((__int64)a2);
    a3 = v15;
    v6 = v14;
  }
  v4(a2, v6, a3, 0);
  v7 = *(__int64 (__fastcall **)(__int64))(*a2 + 40LL);
  if ( v7 == sub_305010 )
    v8 = (std::ostream *)a2[51];
  else
    v8 = (std::ostream *)v7((__int64)a2);
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

