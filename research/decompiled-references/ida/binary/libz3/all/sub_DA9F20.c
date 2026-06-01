__int64 __fastcall sub_DA9F20(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned int v5; // r13d
  __int64 v6; // rbp
  _QWORD *v7; // rax
  _QWORD *v8; // r12
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rbp
  char v12; // al
  char v13; // al
  __int64 v14; // rdx
  __int64 v15; // rax
  unsigned int *v16; // rbp
  __int64 *v17; // rax
  __int64 *v18; // rcx
  __int64 v19; // rdx
  unsigned int v21; // edx
  __int64 v22; // rax
  unsigned int v23; // eax
  unsigned int v24; // ecx
  size_t v25; // rsi
  unsigned int *v26; // rax
  unsigned int v27; // ecx
  size_t v28; // rsi
  unsigned int *v29; // rax
  char **exception; // rbp
  char **v31; // rbp
  unsigned __int64 v32; // [rsp+0h] [rbp-78h]
  unsigned int v33; // [rsp+0h] [rbp-78h]
  unsigned int v34; // [rsp+Ch] [rbp-6Ch]
  __int64 v35[11]; // [rsp+20h] [rbp-58h] BYREF

  if ( (*a3 & 1) != 0 )
    std::__ostream_insert<char,std::char_traits<char>>();
  std::__ostream_insert<char,std::char_traits<char>>();
  std::ostream::_M_insert<unsigned long>();
  v5 = 0;
  std::__ostream_insert<char,std::char_traits<char>>();
  v6 = *a3;
  v7 = (_QWORD *)sub_186B270(0x18u);
  v8 = v7 + 1;
  v7[1] = v6 & 0xFFFFFFFFFFFFFFFELL;
  *v7 = 0x100000002LL;
  do
  {
    v15 = v5++;
    v16 = (unsigned int *)v8[v15];
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::_M_insert<unsigned long>();
    std::__ostream_insert<char,std::char_traits<char>>();
    v9 = *((_QWORD *)v16 + 1);
    if ( !v9 )
    {
      sub_1648CA0(a2, *(_QWORD *)(a1 + 104), *(_QWORD *)(*(_QWORD *)(a1 + 112) + 8LL * *v16), 3);
      std::__ostream_insert<char,std::char_traits<char>>();
LABEL_11:
      v14 = *((unsigned int *)v8 - 1);
      continue;
    }
    if ( (v9 & 1) != 0 )
      std::__ostream_insert<char,std::char_traits<char>>();
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::_M_insert<unsigned long>();
    std::__ostream_insert<char,std::char_traits<char>>();
    if ( (*((_QWORD *)v16 + 2) & 1) != 0 )
      std::__ostream_insert<char,std::char_traits<char>>();
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::_M_insert<unsigned long>();
    std::__ostream_insert<char,std::char_traits<char>>();
    v10 = *((_QWORD *)v16 + 1) & 0xFFFFFFFFFFFFFFFELL;
    v11 = *((_QWORD *)v16 + 2) & 0xFFFFFFFFFFFFFFFELL;
    v12 = *(_BYTE *)(v10 + 24);
    if ( (v12 & 1) == 0 )
    {
      *(_BYTE *)(v10 + 24) = v12 | 1;
      v23 = *((_DWORD *)v8 - 1);
      if ( v23 == *((_DWORD *)v8 - 2) )
      {
        v24 = (3 * v23 + 1) >> 1;
        v25 = 8 * v24 + 8;
        if ( 8 * v23 + 8 >= (unsigned int)v25 || v23 >= v24 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v35, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v35);
          sub_233E40((__int64)v35);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v34 = (3 * v23 + 1) >> 1;
        v32 = v10;
        v26 = (unsigned int *)sub_186B300(v8 - 1, v25);
        v8 = v26 + 2;
        v10 = v32;
        *v26 = v34;
        v23 = v26[1];
      }
      v8[v23] = v10;
      *((_DWORD *)v8 - 1) = v23 + 1;
    }
    v13 = *(_BYTE *)(v11 + 24);
    if ( (v13 & 1) != 0 )
      goto LABEL_11;
    *(_BYTE *)(v11 + 24) = v13 | 1;
    v21 = *((_DWORD *)v8 - 1);
    if ( v21 == *((_DWORD *)v8 - 2) )
    {
      v27 = (3 * v21 + 1) >> 1;
      v28 = 8 * v27 + 8;
      if ( 8 * v21 + 8 >= (unsigned int)v28 || v21 >= v27 )
      {
        v31 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v35, "Overflow encountered when expanding vector");
        *v31 = (char *)off_1C63128;
        sub_2333C0(v31 + 1, v35);
        sub_233E40((__int64)v35);
        __cxa_throw(v31, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v33 = (3 * v21 + 1) >> 1;
      v29 = (unsigned int *)sub_186B300(v8 - 1, v28);
      v21 = v29[1];
      v8 = v29 + 2;
      *v29 = v33;
    }
    v22 = v21;
    v14 = v21 + 1;
    v8[v22] = v11;
    *((_DWORD *)v8 - 1) = v14;
  }
  while ( v5 < (unsigned int)v14 );
  v17 = v8;
  v18 = &v8[v14];
  if ( (_DWORD)v14 )
  {
    do
    {
      v19 = *v17++;
      *(_BYTE *)(v19 + 24) &= ~1u;
    }
    while ( v17 != v18 );
  }
  return sub_186B220(v8 - 1);
}

