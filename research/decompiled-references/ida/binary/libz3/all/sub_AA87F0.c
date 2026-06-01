__int64 __fastcall sub_AA87F0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  char **exception; // rbx
  unsigned int v4; // eax
  unsigned __int64 v7; // r12
  unsigned __int64 v9; // r12
  __int64 v10; // rdi
  unsigned int v11; // edx
  unsigned int *v13; // r12
  __int64 v14; // rax
  unsigned int *v15; // r12
  unsigned int *v16; // r13
  _QWORD *v17; // rax
  unsigned int *v18; // rax
  unsigned int *v19; // rbp
  unsigned int v20; // edx
  int v21; // ecx
  __int64 v22; // rax
  unsigned int v23; // edx
  unsigned int v24; // r14d
  size_t v25; // rsi
  unsigned int *v26; // rax
  __int64 v27; // r12
  __int64 v28; // r15
  unsigned int *v29[11]; // [rsp+10h] [rbp-58h] BYREF

  v4 = a3 & 7;
  if ( v4 == 2 )
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    goto LABEL_12;
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
      goto LABEL_12;
    }
    std::__ostream_insert<char,std::char_traits<char>>();
    if ( a3 <= 7 )
      goto LABEL_12;
    v13 = (unsigned int *)(a3 & 0xFFFFFFFFFFFFFFF8LL);
    v14 = *v13;
    if ( !(_DWORD)v14 )
      goto LABEL_12;
    v15 = v13 + 2;
    v16 = &v15[v14];
    v17 = (_QWORD *)sub_186B270(0x10u);
    *v17 = 2;
    v18 = (unsigned int *)(v17 + 1);
    v19 = v18;
    while ( 1 )
    {
      v20 = *v15++;
      *v18 = v20;
      v21 = *(v19 - 1);
      v22 = (unsigned int)(v21 + 1);
      *(v19 - 1) = v22;
      if ( v16 == v15 )
        break;
      v23 = *(v19 - 2);
      if ( v23 == (_DWORD)v22 )
      {
        v24 = (3 * v23 + 1) >> 1;
        v25 = 4 * v24 + 8;
        if ( 4 * v21 + 12 >= (unsigned int)v25 || v23 >= v24 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)v29, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v29);
          sub_233E40((__int64)v29);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v26 = (unsigned int *)sub_186B300(v19 - 2, v25);
        v19 = v26 + 2;
        *v26 = v24;
        v18 = &v26[v26[1] + 2];
      }
      else
      {
        v18 = &v19[v22];
      }
    }
    v27 = (unsigned int)v22;
    v28 = 0;
    if ( v21 == -1 )
    {
LABEL_31:
      sub_186B220(v19 - 2);
      goto LABEL_12;
    }
    while ( 1 )
    {
      if ( v28 )
      {
        std::__ostream_insert<char,std::char_traits<char>>();
        if ( v19[v28] == -2 )
        {
LABEL_30:
          std::__ostream_insert<char,std::char_traits<char>>();
          goto LABEL_27;
        }
      }
      else if ( *v19 == -2 )
      {
        goto LABEL_30;
      }
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
LABEL_27:
      if ( ++v28 == v27 )
        goto LABEL_31;
    }
  }
  if ( v4 != 3 )
  {
    sub_1872CE0("");
    sub_1873130(114, 647);
  }
  v9 = a3 & 0xFFFFFFFFFFFFFFF8LL;
  v10 = *(_QWORD *)(a1 + 9000);
  v29[0] = nullptr;
  sub_986050(v10, a3 & 0xFFFFFFFFFFFFFFF8LL, (__int64)v29);
  std::__ostream_insert<char,std::char_traits<char>>();
  (*(void (__fastcall **)(unsigned __int64, const char *))(*(_QWORD *)v9 + 40LL))(v9, "justification ");
  std::ostream::operator<<();
  std::__ostream_insert<char,std::char_traits<char>>();
  if ( v29[0] )
    v11 = *(v29[0] - 1);
  else
    v11 = 0;
  sub_AA8380(a1, a2, v11, v29[0]);
  if ( v29[0] )
    sub_186B220(v29[0] - 2);
LABEL_12:
  std::__ostream_insert<char,std::char_traits<char>>();
  return a2;
}

