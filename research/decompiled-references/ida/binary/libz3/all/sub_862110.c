__int64 __fastcall sub_862110(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  char **exception; // rbx
  __int64 v6; // r14
  __int64 v7; // r13
  _DWORD *v8; // rax
  __int16 v9; // r8
  __int64 v11; // r14
  __int64 v12; // rax
  _QWORD *v13; // rdx
  __int64 v14; // r13
  unsigned int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 *v18; // rcx
  unsigned int v19; // ebp
  size_t v20; // rsi
  unsigned int *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r15
  __int64 v24; // r15
  _QWORD *v25; // rdx
  __int64 v26[11]; // [rsp+10h] [rbp-58h] BYREF

  v6 = **(_QWORD **)(a3 + 8);
  v7 = **(_QWORD **)(a3 + 16);
  if ( *(_BYTE *)(sub_7E4EB0(a1) + 412)
    && *(_QWORD *)(*(_QWORD *)(a3 + 8) + 64LL) != *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 16) + 176LL) + 64LL)
    && *(_DWORD *)(a3 + 4) != 1
    && *(_BYTE *)(a1 + 456) )
  {
    if ( (unsigned int)sub_180B130(a1) > 0xA )
    {
      if ( (unsigned __int8)sub_186A530(a4) )
      {
        sub_186A4C0(a4);
        v23 = sub_180B150(a1, a2);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_1648CA0(v23, *(_QWORD *)(a1 + 72), v6, 3);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_1648CA0(v23, *(_QWORD *)(a1 + 72), v7, 3);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_186A500(v23, "\n");
      }
      else
      {
        v24 = sub_180B150(a1, a2);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_1648CA0(v24, *(_QWORD *)(a1 + 72), v6, 3);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_1648CA0(v24, *(_QWORD *)(a1 + 72), v7, 3);
        std::__ostream_insert<char,std::char_traits<char>>();
      }
    }
    v11 = *(_QWORD *)(a1 + 80);
    v12 = sub_180C100(v11 + 2144, 24);
    v13 = *(_QWORD **)(v11 + 2128);
    v14 = v12;
    *(_QWORD *)v12 = off_1C55520;
    *(_QWORD *)(v12 + 8) = a1;
    *(_DWORD *)(v12 + 16) = a2;
    if ( v13 )
    {
      v15 = *((_DWORD *)v13 - 1);
      if ( v15 == *((_DWORD *)v13 - 2) )
      {
        v19 = (3 * v15 + 1) >> 1;
        v20 = 8 * v19 + 8;
        if ( 8 * v15 + 8 >= (unsigned int)v20 || v15 >= v19 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v26, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v26);
          sub_233E40((__int64)v26);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v21 = (unsigned int *)sub_186B300(v13 - 1, v20);
        v22 = v21[1];
        v13 = v21 + 2;
        *(_QWORD *)(v11 + 2128) = v21 + 2;
        *v21 = v19;
        LODWORD(v21) = v22;
        v18 = &v13[v22];
        v17 = (_DWORD)v21 + 1;
      }
      else
      {
        v16 = v15;
        v17 = v15 + 1;
        v18 = &v13[v16];
      }
    }
    else
    {
      v25 = (_QWORD *)sub_186B270(0x18u);
      *v25 = 2;
      v17 = 1;
      v13 = v25 + 1;
      *(_QWORD *)(v11 + 2128) = v13;
      v18 = v13;
    }
    *v18 = v14;
    *((_DWORD *)v13 - 1) = v17;
    *(_DWORD *)(a3 + 4) = 1;
    return 0;
  }
  else if ( *(_WORD *)(v6 + 4) )
  {
    if ( sub_860060(a1, v6) )
      return sub_860F10(a1, v7, v6);
    if ( v9 != 2 || *(_DWORD *)(v6 + 16) != 2 )
    {
LABEL_9:
      sub_1872CE0("");
      sub_1873130(114, 123);
    }
    return sub_861CE0(a1, v7, v6);
  }
  else
  {
    v8 = *(_DWORD **)(*(_QWORD *)(v6 + 16) + 24LL);
    if ( !v8 || *(_DWORD *)(a1 + 112) != *v8 )
    {
LABEL_8:
      if ( !sub_860060(a1, v6) )
        goto LABEL_9;
      return sub_860F10(a1, v7, v6);
    }
    if ( v8[1] == 2 )
    {
      return sub_861AF0(a1, v7, v6);
    }
    else if ( v8[1] == 13 )
    {
      return sub_861EF0(a1, v7, v6);
    }
    else
    {
      if ( v8[1] )
        goto LABEL_8;
      return sub_85F540(a1, v7, v6);
    }
  }
}

