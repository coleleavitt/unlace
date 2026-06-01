__int64 __fastcall sub_8FCB20(__int64 a1, double a2)
{
  __int64 v3; // rdi
  __int64 v4; // rsi
  unsigned int v5; // ebx
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned int v8; // r14d
  unsigned int v9; // r13d
  unsigned int v10; // ebp
  __int64 v11; // rax
  __int64 v12; // r12
  unsigned int v13; // eax
  int v14; // eax
  unsigned int v15; // edx
  unsigned int v16; // eax
  __int64 v18; // rsi
  _BYTE *v19; // rbp
  char v20; // si
  std::ostream *v21; // rax
  const char *v22; // rax
  __int64 (__fastcall *v23)(__int64, unsigned int); // rax
  int v24; // eax
  int v25; // eax
  const char *v26; // rax
  __int64 v27; // rax
  unsigned int v28; // edx
  __int64 v29; // [rsp+8h] [rbp-50h]
  int v30; // [rsp+14h] [rbp-44h]

  if ( *(_BYTE *)(*(_QWORD *)(a1 + 112) + 717LL) )
  {
    v18 = *(_QWORD *)(a1 + 9312);
    if ( !*(_QWORD *)(a1 + 9320) && !v18 )
    {
      if ( !(unsigned __int8)sub_8EB9C0(a1) )
      {
        v25 = *(_DWORD *)(a1 + 10308);
        if ( (unsigned int)(v25 - 2) > 2 && v25 != 6 )
          sub_8E4F40(a1);
      }
      v18 = *(_QWORD *)(a1 + 9312);
    }
    sub_135D260(&std::cout, v18);
    std::__ostream_insert<char,std::char_traits<char>>();
    v19 = *(_BYTE **)((char *)&std::cout + *(_QWORD *)(std::cout - 24LL) + 240);
    if ( !v19 )
      std::__throw_bad_cast();
    if ( v19[56] )
    {
      v20 = v19[67];
    }
    else
    {
      std::ctype<char>::_M_widen_init();
      v20 = 10;
      v23 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v19 + 48LL);
      if ( v23 != sub_26BE90 )
        v20 = v23((__int64)v19, 10u);
    }
    v21 = (std::ostream *)std::ostream::put((std::ostream *)&std::cout, v20);
    std::ostream::flush(v21);
  }
  ++*(_DWORD *)(a1 + 36);
  v3 = *(_QWORD *)(a1 + 7472);
  v4 = 0;
  v5 = sub_954EE0(v3, 0);
  if ( !v5 )
  {
    v6 = *(_QWORD *)(a1 + 10312);
    if ( v6 )
      *(_DWORD *)(v6 - 4) = 0;
    v7 = *(_QWORD *)(a1 + 8688);
    v8 = *(_DWORD *)(a1 + 8608);
    if ( v7 )
    {
      v9 = *(_DWORD *)(v7 - 4);
      v10 = v9 + 1;
    }
    else
    {
      v9 = 0;
      v10 = 1;
    }
    v11 = v8;
    v30 = 0;
    if ( v8 >= v9 )
      goto LABEL_16;
LABEL_8:
    v12 = *(_QWORD *)(*(_QWORD *)(a1 + 8688) + 8 * v11);
    if ( (unsigned int)sub_180B130(v3) > 0x63 )
    {
      if ( (unsigned __int8)sub_186A530(a2) )
      {
        sub_186A4C0(a2);
        v29 = sub_180B150(v3, v4);
        std::__ostream_insert<char,std::char_traits<char>>();
        v22 = (const char *)(*(__int64 (__fastcall **)(__int64, const char *))(*(_QWORD *)v12 + 360LL))(
                              v12,
                              "(smt.final-check \"");
        if ( v22 )
        {
          strlen(v22);
          std::__ostream_insert<char,std::char_traits<char>>();
        }
        else
        {
          std::ios::clear();
        }
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_186A500(v29, "\")\n");
      }
      else
      {
        sub_180B150(v3, v4);
        std::__ostream_insert<char,std::char_traits<char>>();
        v26 = (const char *)(*(__int64 (__fastcall **)(__int64, const char *))(*(_QWORD *)v12 + 360LL))(
                              v12,
                              "(smt.final-check \"");
        if ( v26 )
        {
          strlen(v26);
          std::__ostream_insert<char,std::char_traits<char>>();
        }
        else
        {
          std::ios::clear();
        }
        std::__ostream_insert<char,std::char_traits<char>>();
      }
    }
    v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 152LL))(v12);
    v3 = *(_QWORD *)(a1 + 104);
    v4 = v13;
    if ( *(_DWORD *)(a1 + 8632) == 1 && !*(_BYTE *)(v3 + 4) )
    {
      v24 = *(_DWORD *)(a1 + 8608);
      *(_DWORD *)(a1 + 10308) = 3;
      v5 = 2;
      v30 = 3;
      v15 = (v24 + 1) % v10;
      *(_DWORD *)(a1 + 8608) = v15;
      goto LABEL_14;
    }
    v4 = v13;
    if ( !(unsigned __int8)sub_18290A0(v3) )
    {
      v14 = *(_DWORD *)(a1 + 8608);
      *(_DWORD *)(a1 + 10308) = 3;
      v30 = 3;
      v15 = (v14 + 1) % v10;
      *(_DWORD *)(a1 + 8608) = v15;
LABEL_13:
      v5 = 2;
      goto LABEL_14;
    }
    if ( (_DWORD)v4 != 2 )
    {
      v15 = (*(_DWORD *)(a1 + 8608) + 1) % v10;
      *(_DWORD *)(a1 + 8608) = v15;
      if ( (_DWORD)v4 != 1 )
        goto LABEL_14;
      return 1;
    }
    v27 = *(_QWORD *)(a1 + 10312);
    if ( !v27 || (v28 = *(_DWORD *)(v27 - 4), v28 == *(_DWORD *)(v27 - 8)) )
    {
      v3 = a1 + 10312;
      sub_903AD0(a1 + 10312);
      v27 = *(_QWORD *)(a1 + 10312);
      v28 = *(_DWORD *)(v27 - 4);
    }
    v4 = v28;
    v30 = 5;
    v5 = 2;
    *(_QWORD *)(v27 + 8LL * v28) = v12;
    *(_DWORD *)(v27 - 4) = v28 + 1;
    v15 = (*(_DWORD *)(a1 + 8608) + 1) % v10;
    *(_DWORD *)(a1 + 8608) = v15;
LABEL_14:
    while ( v15 != v8 )
    {
      v11 = *(unsigned int *)(a1 + 8608);
      if ( (unsigned int)v11 < v9 )
        goto LABEL_8;
LABEL_16:
      v3 = *(_QWORD *)(a1 + 7472);
      v16 = sub_954EE0(v3, 1);
      v4 = v16;
      v15 = (*(_DWORD *)(a1 + 8608) + 1) % v10;
      *(_DWORD *)(a1 + 8608) = v15;
      if ( v16 == 1 )
        return 1;
      if ( v16 == 2 )
        goto LABEL_13;
    }
    if ( (unsigned __int8)sub_8E8560(a1) )
      return 1;
    if ( (v5 & 2) != 0 && v30 )
    {
      *(_DWORD *)(a1 + 10308) = v30;
    }
    else if ( !v5 )
    {
      if ( !(unsigned __int8)sub_B64280(a1) )
        return v5;
      *(_DWORD *)(a1 + 10308) = 7;
    }
    return 2;
  }
  return v5;
}

