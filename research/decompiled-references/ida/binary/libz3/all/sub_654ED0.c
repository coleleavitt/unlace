__int64 __fastcall sub_654ED0(_QWORD *a1, __int64 a2, unsigned int a3, unsigned int *a4)
{
  char **v4; // rbp
  __int64 v5; // rdx
  __int64 v6; // r14
  __int64 v9; // r13
  unsigned int *v10; // rbx
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  unsigned int *v13; // r14
  unsigned int v14; // edx
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 result; // rax
  unsigned int v18; // r15d
  size_t v19; // rsi
  unsigned int *v20; // rax
  __int64 v21; // rax
  int v22; // edx
  char **exception; // rbp
  __int64 v24[2]; // [rsp+0h] [rbp-1E8h] BYREF
  char v25[32]; // [rsp+10h] [rbp-1D8h] BYREF
  __int64 v26; // [rsp+30h] [rbp-1B8h] BYREF
  char v27[432]; // [rsp+38h] [rbp-1B0h] BYREF

  v6 = a3;
  if ( *(_DWORD *)(a2 + 32) != a3 )
  {
    std::ostringstream::basic_ostringstream(&v26);
    std::__ostream_insert<char,std::char_traits<char>>();
    sub_1606360(v24, a2, *a1, 0, 0, 0);
    sub_160E8B0(&v26, v24);
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::_M_insert<unsigned long>();
    std::__ostream_insert<char,std::char_traits<char>>();
    sub_18572D0(v25);
    exception = (char **)__cxa_allocate_exception(0x28u);
    std::stringbuf::str(v24, v27);
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v24);
    sub_233E40((__int64)v24);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v24[0] = 0;
  if ( a3 )
  {
    v9 = *a4;
    v10 = a4;
    v11 = (_QWORD *)sub_186B270(0x18u);
    *v11 = 2;
    v12 = v11 + 1;
    v13 = &v10[v6];
    v14 = 1;
    v24[0] = (__int64)v12;
    v15 = (__int64)v12;
    while ( 1 )
    {
      ++v10;
      *v12 = v9;
      *(_DWORD *)(v15 - 4) = v14;
      if ( v10 == v13 )
        break;
      while ( 1 )
      {
        v9 = *v10;
        if ( *(_DWORD *)(v15 - 8) == v14 )
          break;
        v16 = v14;
        ++v10;
        ++v14;
        *(_QWORD *)(v15 + 8 * v16) = v9;
        *(_DWORD *)(v15 - 4) = v14;
        if ( v10 == v13 )
          goto LABEL_7;
      }
      v18 = (3 * v14 + 1) >> 1;
      v19 = 8 * v18 + 8;
      if ( 8 * v14 + 8 >= (unsigned int)v19 || v14 >= v18 )
      {
        v4 = (char **)__cxa_allocate_exception(0x28u);
        sub_104888(&v26, "Overflow encountered when expanding vector", v5);
        *v4 = (char *)off_1C63128;
        sub_2333C0(v4 + 1, &v26);
        sub_233E40((__int64)&v26);
        __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v20 = (unsigned int *)sub_186B300((void *)(v15 - 8), v19);
      v15 = (__int64)(v20 + 2);
      *v20 = v18;
      v21 = v20[1];
      v24[0] = v15;
      v22 = v21;
      v12 = (_QWORD *)(v15 + 8 * v21);
      v14 = v22 + 1;
    }
  }
LABEL_7:
  result = sub_654C50((__int64)a1, a2, v24);
  if ( v24[0] )
    return sub_186B220((void *)(v24[0] - 8));
  return result;
}

