void __fastcall sub_4B81F0(const char **a1, __int64 *a2, __int64 a3, __int64 a4, int a5, int a6)
{
  __int64 *v6; // rbx
  bool v7; // zf
  const char *v8; // rsi
  double v9; // xmm0_8
  __int64 v10; // rax
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // r15
  bool v13; // dl
  __int64 v14; // r13
  __int64 (__fastcall *v15)(__int64, __int64); // rax
  char v16; // al

  v6 = a2;
  v7 = a2 == nullptr;
  v8 = &s1;
  if ( v7 )
    v6 = &qword_8D1CE0;
  if ( a1[1] )
    v8 = *a1;
  v9 = callui(171, (_DWORD)v8, (_DWORD)v6, (_DWORD)callui, a5, a6);
  if ( !v10 )
  {
    v11 = xmmword_8D1D28;
    if ( (_QWORD)xmmword_8D1D28 )
    {
      v12 = 0;
      do
      {
        v14 = *(_QWORD *)(qword_8D1D20 + 8 * v12);
        v15 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 16LL);
        if ( v15 == address_bookmarks_desktop_widget_factory_t__::vfunc_2 )
          v16 = address_bookmarks_desktop_widget_factory_t__::vfunc_2(v14, (__int64)a1);
        else
          v16 = ((__int64 (__fastcall *)(__int64, const char **, __int64 *, double))v15)(v14, a1, v6, v9);
        if ( v16 )
          v13 = (*(__int64 (__fastcall **)(__int64, const char **, __int64 *))(*(_QWORD *)v14 + 24LL))(v14, a1, v6) == 0;
        else
          v13 = 1;
        ++v12;
      }
      while ( v12 < v11 && v13 );
    }
  }
}
