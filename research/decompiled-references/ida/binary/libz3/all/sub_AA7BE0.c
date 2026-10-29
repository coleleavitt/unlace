__int64 __fastcall sub_AA7BE0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  char **exception; // rbx
  unsigned int v4; // eax
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // r12
  __int64 v9; // rdi
  _DWORD *v10; // rbp
  __int64 v11; // r12
  __int64 i; // r15
  unsigned int *v14; // r12
  __int64 v15; // rax
  unsigned int *v16; // r12
  unsigned int *v17; // r13
  _QWORD *v18; // rax
  unsigned int *v19; // rax
  unsigned int *v20; // rbp
  unsigned int v21; // edx
  int v22; // ecx
  __int64 v23; // rax
  unsigned int v24; // edx
  unsigned int v25; // r14d
  size_t v26; // rsi
  unsigned int *v27; // rax
  __int64 v28; // r12
  __int64 v29; // r15
  __int64 v30[11]; // [rsp+10h] [rbp-58h] BYREF

  v4 = a3 & 7;
  if ( v4 == 2 )
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    goto LABEL_18;
  }
  if ( v4 <= 2 )
  {
    if ( (a3 & 7) != 0 )
    {
      v7 = a3 >> 3;
      std::__ostream_insert<char,std::char_traits<char>>();
      std::__ostream_insert<char,std::char_traits<char>>();
      if ( (_DWORD)v7 != -2 )
        std::ostream::_M_insert<unsigned long>();
      goto LABEL_18;
    }
    std::__ostream_insert<char,std::char_traits<char>>();
    if ( a3 <= 7 )
      goto LABEL_18;
    v14 = (unsigned int *)(a3 & 0xFFFFFFFFFFFFFFF8LL);
    v15 = *v14;
    if ( !(_DWORD)v15 )
      goto LABEL_18;
    v16 = v14 + 2;
    v17 = &v16[v15];
    v18 = (_QWORD *)sub_186B270(0x10u);
    *v18 = 2;
    v19 = (unsigned int *)(v18 + 1);
    v20 = v19;
    while ( 1 )
    {
      v21 = *v16++;
      *v19 = v21;
      v22 = *(v20 - 1);
      v23 = (unsigned int)(v22 + 1);
      *(v20 - 1) = v23;
      if ( v17 == v16 )
        break;
      v24 = *(v20 - 2);
      if ( v24 == (_DWORD)v23 )
      {
        v25 = (3 * v24 + 1) >> 1;
        v26 = 4 * v25 + 8;
        if ( 4 * v22 + 12 >= (unsigned int)v26 || v24 >= v25 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v30, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v30);
          sub_233E40((__int64)v30);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v27 = (unsigned int *)sub_186B300(v20 - 2, v26);
        v20 = v27 + 2;
        *v27 = v25;
        v19 = &v27[v27[1] + 2];
      }
      else
      {
        v19 = &v20[v23];
      }
    }
    v28 = (unsigned int)v23;
    v29 = 0;
    if ( v22 == -1 )
    {
LABEL_37:
      sub_186B220(v20 - 2);
      goto LABEL_18;
    }
    while ( 1 )
    {
      if ( v29 )
      {
        std::__ostream_insert<char,std::char_traits<char>>();
        if ( v20[v29] == -2 )
        {
LABEL_36:
          std::__ostream_insert<char,std::char_traits<char>>();
          goto LABEL_33;
        }
      }
      else if ( *v20 == -2 )
      {
        goto LABEL_36;
      }
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
LABEL_33:
      if ( ++v29 == v28 )
        goto LABEL_37;
    }
  }
  if ( v4 != 3 )
  {
    sub_1872CE0("");
    sub_1873130(114, 675);
  }
  v8 = a3 & 0xFFFFFFFFFFFFFFF8LL;
  v9 = *(_QWORD *)(a1 + 9000);
  v30[0] = 0;
  sub_986050(v9, a3 & 0xFFFFFFFFFFFFFFF8LL, (__int64)v30);
  std::__ostream_insert<char,std::char_traits<char>>();
  (*(void (__fastcall **)(unsigned __int64, const char *))(*(_QWORD *)v8 + 40LL))(v8, "justification ");
  std::ostream::operator<<();
  std::__ostream_insert<char,std::char_traits<char>>();
  v10 = (_DWORD *)v30[0];
  if ( !v30[0] )
    goto LABEL_18;
  v11 = *(unsigned int *)(v30[0] - 4);
  if ( !(_DWORD)v11 )
    goto LABEL_16;
  for ( i = 0; i != v11; ++i )
  {
    while ( !i )
    {
      if ( *v10 == -2 )
        goto LABEL_14;
LABEL_11:
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      if ( v11 == ++i )
        goto LABEL_15;
    }
    std::__ostream_insert<char,std::char_traits<char>>();
    if ( v10[i] != -2 )
      goto LABEL_11;
LABEL_14:
    std::__ostream_insert<char,std::char_traits<char>>();
  }
LABEL_15:
  v10 = (_DWORD *)v30[0];
  if ( v30[0] )
LABEL_16:
    sub_186B220(v10 - 2);
LABEL_18:
  std::__ostream_insert<char,std::char_traits<char>>();
  return a2;
}

