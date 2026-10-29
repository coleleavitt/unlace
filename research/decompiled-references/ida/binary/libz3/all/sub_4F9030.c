char __fastcall sub_4F9030(__int64 a1, const void *a2, const void *a3, double a4)
{
  void *v6; // rbx
  bool (__fastcall **v7)(__int64); // rbp
  int v8; // ecx
  __int64 v9; // r9
  bool (__fastcall *v10)(__int64); // rax
  int v11; // r8d
  __int64 v12; // r12
  __int64 i; // rbp
  __int64 v14; // rsi
  void (__fastcall *v15)(void *, __int64); // r14
  __int64 v16; // r12
  void (__fastcall *v17)(void *, __int64); // r14
  __int64 v18; // r12
  void (__fastcall *v19)(void *, __int64); // r14
  __int64 v20; // r12
  void (__fastcall *v21)(void *, __int64); // r14
  __int64 v22; // r12
  void *v23; // rbp
  void *v24; // rax
  const void *v25; // rax
  int v26; // ecx
  _DWORD *v27; // rbp
  int v28; // r8d
  __int64 v29; // r9
  __int64 v30; // rax
  bool (__fastcall *v31)(__int64); // rdx
  __int64 (__fastcall *v32)(void (__fastcall ***)(_QWORD)); // rdx

  v6 = sub_4EC5D0(a2);
  v7 = (bool (__fastcall **)(__int64))sub_4EC5D0(a3);
  if ( (unsigned int)sub_180B130(a3) > 2 )
  {
    if ( (unsigned __int8)sub_186A530(a4) )
    {
      sub_186A4C0(a4);
      v17 = *(void (__fastcall **)(void *, __int64))(*(_QWORD *)v6 + 120LL);
      v18 = sub_180B150(a3, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      a2 = (const void *)v18;
      a3 = v6;
      v17(v6, v18);
      sub_186A500(v6, v18);
    }
    else
    {
      v19 = *(void (__fastcall **)(void *, __int64))(*(_QWORD *)v6 + 120LL);
      v20 = sub_180B150(a3, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      a2 = (const void *)v20;
      a3 = v6;
      v19(v6, v20);
    }
  }
  if ( (unsigned int)sub_180B130(a3) > 2 )
  {
    if ( (unsigned __int8)sub_186A530(a4) )
    {
      sub_186A4C0(a4);
      v15 = *((void (__fastcall **)(void *, __int64))*v7 + 15);
      v16 = sub_180B150(a3, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      v15(v7, v16);
      sub_186A500(v7, v16);
    }
    else
    {
      v21 = *((void (__fastcall **)(void *, __int64))*v7 + 15);
      v22 = sub_180B150(a3, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      v21(v7, v22);
    }
  }
  v10 = *(bool (__fastcall **)(__int64))(*(_QWORD *)v6 + 32LL);
  if ( v10 == sub_4F3ED0 )
  {
    v11 = *((_DWORD *)v6 + 12);
    if ( !v11 )
      return (char)v10;
    v10 = *((bool (__fastcall **)(__int64))*v7 + 4);
    if ( v10 == sub_4F3ED0 )
      goto LABEL_6;
LABEL_19:
    LOBYTE(v10) = v10((__int64)v7);
    if ( (_BYTE)v10 )
      return (char)v10;
    goto LABEL_7;
  }
  LOBYTE(v10) = v10((__int64)v6);
  if ( (_BYTE)v10 )
    return (char)v10;
  v10 = *((bool (__fastcall **)(__int64))*v7 + 4);
  if ( v10 != sub_4F3ED0 )
    goto LABEL_19;
LABEL_6:
  if ( !*((_DWORD *)v7 + 12) )
    return (char)v10;
LABEL_7:
  v10 = v7[2];
  v12 = *((_QWORD *)v6 + 4);
  if ( v10 && *((_DWORD *)v10 - 1) )
  {
    if ( *(_BYTE *)(a1 + 96) )
    {
      LOBYTE(v10) = sub_4F60C0((__int64)v6 + 40, *((_QWORD *)v6 + 4), (__int64)(v7 + 5), v8, v11, v9);
      return (char)v10;
    }
    v23 = sub_4EC5D0(v7);
    v24 = sub_4EC5D0(v6);
    v25 = (const void *)sub_4F8480(a1 + 40, v24, v23);
    v27 = __dynamic_cast(
            v25,
            (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
            (const struct __class_type_info *)&`typeinfo for'datalog::udoc_relation,
            0);
    v30 = *(_QWORD *)v27;
    v31 = *(bool (__fastcall **)(__int64))(*(_QWORD *)v27 + 32LL);
    if ( v31 == sub_4F3ED0 )
    {
      if ( !v27[12] )
        goto LABEL_27;
    }
    else if ( v31((__int64)v27) )
    {
LABEL_31:
      v30 = *(_QWORD *)v27;
LABEL_27:
      v32 = *(__int64 (__fastcall **)(void (__fastcall ***)(_QWORD)))(v30 + 16);
      if ( v32 == sub_4C9C10 )
      {
        (*(void (__fastcall **)(_DWORD *))v30)(v27);
        LOBYTE(v10) = sub_186B220(v27);
      }
      else
      {
        LOBYTE(v10) = v32((void (__fastcall ***)(_QWORD))v27);
      }
      return (char)v10;
    }
    sub_4F60C0((__int64)v6 + 40, v12, (__int64)(v27 + 10), v26, v28, v29);
    goto LABEL_31;
  }
  for ( i = 0; (unsigned int)i < *((_DWORD *)v6 + 12); LOBYTE(v10) = sub_553300(v12, v14) )
    v14 = *(_QWORD *)(*((_QWORD *)v6 + 5) + 8 * i++);
  *((_DWORD *)v6 + 12) = 0;
  return (char)v10;
}

