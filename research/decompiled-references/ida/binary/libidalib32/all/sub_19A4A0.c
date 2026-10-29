__int64 __fastcall sub_19A4A0(__int64 a1)
{
  __int64 v1; // r12
  _QWORD *v2; // rbp
  __int64 (__fastcall *v3)(__int64, __int64); // rdx
  const char *v4; // rax
  bool v5; // al
  __int64 v6; // rax
  void *v7; // r13
  __int64 (*v8)(); // rdx
  __int64 (__fastcall *v9)(__int64, __int64, __int64); // rax
  int v10; // r14d
  __int64 (__fastcall *v11)(__int64, int); // rax
  void (__fastcall *v12)(void *); // rax
  void (__fastcall *v13)(__int64, _QWORD *); // rax
  const char *v15; // rsi

  v1 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(TProgram::application + 136LL) + 80LL))(TProgram::application + 136LL);
  v2 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 40LL))(v1);
  v3 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v1 + 24LL);
  if ( v3 == sub_198C20 )
    (*(void (__fastcall **)(__int64, _QWORD *, _QWORD))(*(_QWORD *)v1 + 104LL))(v1, v2, 0);
  else
    v3(v1, (__int64)v2);
  if ( *(_QWORD *)(a1 + 48) )
    v4 = *(const char **)(a1 + 40);
  else
    v4 = s1;
  v2[9] = v4;
  v5 = sub_19A3B0(a1);
  if ( *(int *)(a1 + 120) <= 3 || v5 )
  {
    v6 = *(_QWORD *)a1;
    v7 = nullptr;
    v8 = *(__int64 (**)())(*(_QWORD *)a1 + 24LL);
    if ( v8 != sub_198B10 )
    {
      v7 = (void *)((__int64 (__fastcall *)(__int64, _QWORD *))v8)(a1, v2);
      v6 = *(_QWORD *)a1;
    }
    v9 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(v6 + 32);
    if ( v9 == sub_198B20 )
      v10 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD *, void *))(*(_QWORD *)(TProgram::application + 136LL)
                                                                          + 104LL))(
              TProgram::application + 136LL,
              a1,
              v2,
              v7);
    else
      v10 = v9(a1, (__int64)v2, (__int64)v7);
    v11 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)a1 + 40LL);
    if ( v11 == sub_1991D0 )
    {
      if ( v10 > 0 && *(_OWORD *)(a1 + 96) != 0 && TProgram::application )
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)(TProgram::application + 136LL) + 176LL))(
          TProgram::application + 136LL,
          *(_QWORD *)(a1 + 96),
          *(_QWORD *)(a1 + 104),
          1);
    }
    else
    {
      ((void (__fastcall *)(__int64, _QWORD, _QWORD *, void *))v11)(a1, (unsigned int)v10, v2, v7);
    }
    if ( v7 )
    {
      v12 = *(void (__fastcall **)(void *))(*(_QWORD *)v7 + 8LL);
      if ( v12 == sub_199590 )
      {
        sub_199500((__int64)v7);
        operator delete(v7, 0x10u);
      }
      else
      {
        v12(v7);
      }
    }
    v13 = *(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v1 + 56LL);
    if ( (char *)v13 == (char *)&loc_198DA0 )
    {
      if ( v2 )
      {
        if ( v2[6] )
        {
          v2[7] = 0;
          qfree();
        }
        if ( v2[2] )
        {
          v2[3] = 0;
          qfree();
        }
        operator delete(v2, 0x118u);
      }
    }
    else
    {
      v13(v1, v2);
    }
  }
  else
  {
    if ( *(_QWORD *)(a1 + 48) )
      v15 = *(const char **)(a1 + 40);
    else
      v15 = s1;
    v10 = 1;
    sub_8F660((__int64)"Warning: Action \"%s\" unexpectedly disabled. Context changed?\n", v15);
  }
  return (unsigned int)v10;
}

