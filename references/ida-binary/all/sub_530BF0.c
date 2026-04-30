__int64 __fastcall ui_action_t__::vfunc_2(
        __int64 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  __int64 v9; // rbp
  char *v10; // r12
  __int64 (__fastcall *v11)(__int64, __int64); // rdx
  const char *v12; // rax
  bool v13; // al
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __m128 v18; // xmm4
  __m128 v19; // xmm5
  __int64 v20; // rax
  void *v21; // r13
  __int64 (*v22)(); // rdx
  __int64 (__fastcall *v23)(__int64, __int64, __int64); // rax
  const char *v24; // rsi
  unsigned int v25; // r14d
  _QWORD *(__fastcall *v26)(__int64, int); // rax
  void (__fastcall *v27)(void *); // rax
  void (__fastcall *v28)(__int64, char *); // rax
  const char *v30; // rsi
  char v31; // [rsp+0h] [rbp-38h]

  v9 = (*(__int64 (__fastcall **)(_QWORD *))(QT::QCoreApplication::self[2] + 80LL))(QT::QCoreApplication::self + 2);
  v10 = (char *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 40LL))(v9);
  v11 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 24LL);
  if ( v11 == sub_52EF50 )
    (*(void (__fastcall **)(__int64, char *, _QWORD))(*(_QWORD *)v9 + 104LL))(v9, v10, 0);
  else
    v11(v9, (__int64)v10);
  v12 = &s1;
  if ( *(_QWORD *)(a1 + 40) )
    v12 = *(const char **)(a1 + 32);
  *((_QWORD *)v10 + 9) = v12;
  v13 = sub_530B40(a1);
  if ( *(int *)(a1 + 120) <= 3 || v13 )
  {
    v20 = *(_QWORD *)a1;
    v21 = nullptr;
    v22 = *(__int64 (**)())(*(_QWORD *)a1 + 24LL);
    if ( v22 != ui_action_t__::vfunc_3 )
    {
      v21 = (void *)((__int64 (__fastcall *)(__int64, char *))v22)(a1, v10);
      v20 = *(_QWORD *)a1;
    }
    v23 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(v20 + 32);
    if ( v23 == ui_action_t__::vfunc_4 )
    {
      v24 = (const char *)a1;
      v25 = (*(__int64 (__fastcall **)(_QWORD *, __int64, char *, void *))(QT::QCoreApplication::self[2] + 104LL))(
              QT::QCoreApplication::self + 2,
              a1,
              v10,
              v21);
    }
    else
    {
      v24 = v10;
      v25 = v23(a1, (__int64)v10, (__int64)v21);
    }
    v26 = *(_QWORD *(__fastcall **)(__int64, int))(*(_QWORD *)a1 + 40LL);
    if ( v26 == ui_action_t__::vfunc_5 )
    {
      if ( (int)v25 > 0 )
      {
        v24 = *(const char **)(a1 + 96);
        if ( *(_OWORD *)(a1 + 96) != 0 )
        {
          if ( QT::QCoreApplication::self )
            (*(void (__fastcall **)(_QWORD *, const char *, _QWORD, __int64))(QT::QCoreApplication::self[2] + 176LL))(
              QT::QCoreApplication::self + 2,
              v24,
              *(_QWORD *)(a1 + 104),
              1);
        }
      }
    }
    else
    {
      v24 = (const char *)v25;
      ((void (__fastcall *)(__int64, _QWORD, char *, void *))v26)(a1, v25, v10, v21);
    }
    if ( v21 )
    {
      v27 = *(void (__fastcall **)(void *))(*(_QWORD *)v21 + 8LL);
      if ( v27 == ui_action_execution_data_t__::vfunc_1 )
      {
        ui_action_execution_data_t__::vfunc_0((__int64)v21);
        v24 = (const char *)&word_10;
        operator delete(v21, 0x10u);
      }
      else
      {
        v27(v21);
      }
    }
    v28 = *(void (__fastcall **)(__int64, char *))(*(_QWORD *)v9 + 56LL);
    if ( v28 == sub_52F550 )
    {
      if ( v10 )
        sub_52F4D0(v10, v24);
    }
    else
    {
      v28(v9, v10);
    }
  }
  else
  {
    v30 = &s1;
    if ( *(_QWORD *)(a1 + 40) )
      v30 = *(const char **)(a1 + 32);
    v25 = 1;
    sub_169700(
      (int)"Warning: Action \"%s\" unexpectedly disabled. Context changed?\n",
      (__int64)v30,
      v14,
      v15,
      v16,
      v17,
      a2,
      a3,
      a4,
      a5,
      v18,
      v19,
      a8,
      a9,
      v31);
  }
  return v25;
}
