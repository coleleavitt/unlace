__int64 __fastcall sub_7E6250(_QWORD *a1, __int64 a2, __int64 a3, unsigned __int8 a4, unsigned __int8 a5, double a6)
{
  char **exception; // r12
  const char *v7; // rax
  __int64 v8; // rax
  unsigned int v9; // r15d
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rbp
  __int64 v13; // r12
  unsigned int v14; // r13d
  __int64 v15; // rsi
  void (__fastcall **v16)(_QWORD *, __int64); // rcx
  __int64 v17; // rdx
  unsigned int v18; // eax
  __int64 result; // rax
  unsigned int v20; // eax
  __int64 v21; // rbp
  __int64 v22; // rbp
  __int64 v27[2]; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v28[88]; // [rsp+40h] [rbp-58h] BYREF

  if ( (unsigned int)sub_180B130(a1) > 0x6D )
  {
    if ( (unsigned __int8)sub_186A530(a6) )
    {
      sub_186A4C0(a6);
      v21 = sub_180B150(a1, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1606360(v27, a3, a2, 0, 0, 0);
      sub_160E8B0(v21, v27);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_18572D0(v28);
      sub_186A500(v28, "\n");
      v8 = a1[2];
      if ( v8 )
        goto LABEL_3;
      goto LABEL_24;
    }
    v22 = sub_180B150(a1, a2);
    std::__ostream_insert<char,std::char_traits<char>>();
    sub_1606360(v27, a3, a2, 0, 0, 0);
    sub_160E8B0(v22, v27);
    std::__ostream_insert<char,std::char_traits<char>>();
    sub_18572D0(v28);
  }
  v8 = a1[2];
  if ( v8 )
  {
LABEL_3:
    v9 = *(_DWORD *)(v8 - 4);
    goto LABEL_4;
  }
LABEL_24:
  v9 = 0;
LABEL_4:
  (*(void (__fastcall **)(_QWORD *, __int64))*a1)(a1, a3);
  v10 = a1[2];
  if ( !v10 )
    return 1;
  if ( v9 >= *(_DWORD *)(v10 - 4) )
  {
LABEL_17:
    result = 1;
LABEL_20:
    *(_DWORD *)(v10 - 4) = v9;
    return result;
  }
  while ( 1 )
  {
LABEL_6:
    if ( !(unsigned __int8)sub_18290A0(a2) )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      v7 = (const char *)sub_1829130(a2);
      sub_24ABB0(v27, v7);
      *exception = (char *)off_1C63670;
      sub_2333C0(exception + 1, v27);
      sub_233E40((__int64)v27);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'tactic_exception, (void (*)(void *))sub_230EA0);
    }
    v11 = a1[2];
    v12 = 0xFFFFFFFF0LL;
    if ( v11 )
      v12 = 16LL * (unsigned int)(*(_DWORD *)(v11 - 4) - 1);
    v13 = *(_QWORD *)(v11 + v12);
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*a1 + 8LL))(a1, v13) )
    {
      if ( *(_WORD *)(v13 + 4) )
      {
        v16 = (void (__fastcall **)(_QWORD *, __int64))*a1;
      }
      else
      {
        v14 = *(_DWORD *)(v13 + 24);
        while ( 1 )
        {
          v16 = (void (__fastcall **)(_QWORD *, __int64))*a1;
          v17 = v12 + a1[2];
          v18 = *(_DWORD *)(v17 + 8);
          if ( v18 >= v14 )
            break;
          v15 = *(_QWORD *)(v13 + 8LL * v18 + 32);
          *(_DWORD *)(v17 + 8) = v18 + 1;
          if ( !((unsigned __int8 (__fastcall *)(_QWORD *, __int64))*v16)(a1, v15) )
            goto LABEL_6;
        }
      }
      if ( !((unsigned __int8 (__fastcall *)(_QWORD *, __int64))v16[1])(a1, v13) )
      {
        result = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD, _QWORD))(*a1 + 16LL))(
                   a1,
                   v13,
                   a4,
                   a5 & (a3 == v13));
        if ( !(_BYTE)result )
          break;
      }
    }
    v10 = a1[2];
    v20 = *(_DWORD *)(v10 - 4) - 1;
    *(_DWORD *)(v10 - 4) = v20;
    if ( v9 >= v20 )
      goto LABEL_17;
  }
  v10 = a1[2];
  if ( v10 )
    goto LABEL_20;
  return result;
}

