__int64 __fastcall sub_64DEB0(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        double a6,
        double a7,
        __m128 a8)
{
  char **exception; // rbp
  char **v9; // r12
  char **v10; // r12
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // r12
  unsigned int v16; // r15d
  __int64 result; // rax
  int v18; // edx
  int v19; // ecx
  __int64 v20; // rbp
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rdi
  __int64 v27; // rsi
  unsigned __int64 i; // rcx
  __int64 v29; // rdx
  __int64 *v30; // [rsp+0h] [rbp-1F8h]
  __int64 v31; // [rsp+8h] [rbp-1F0h]
  _QWORD v32[4]; // [rsp+10h] [rbp-1E8h] BYREF
  _BYTE v33[16]; // [rsp+30h] [rbp-1C8h] BYREF
  _BYTE v34[8]; // [rsp+40h] [rbp-1B8h] BYREF
  _BYTE v35[432]; // [rsp+48h] [rbp-1B0h] BYREF

  v13 = 0;
  v30 = (__int64 *)(a1 + 656);
  if ( !*(_BYTE *)(a1 + 40) )
  {
    v14 = *(_QWORD *)(a1 + 2384);
    if ( v14 )
      goto LABEL_3;
LABEL_21:
    v15 = a1 + 2360;
    sub_631ED0(v30, a2, v13, a1 + 2360, a3, a6, a7, a8);
    result = *(_QWORD *)(a1 + 2384);
    if ( !result )
    {
LABEL_19:
      std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(v33);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_39A600((__int64)v34, (const char *)*a3);
      std::__ostream_insert<char,std::char_traits<char>>();
      exception = (char **)__cxa_allocate_exception(0x28u);
      std::stringbuf::str(v32, v35);
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v32);
      sub_233E40((__int64)v32);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v18 = 1;
    v16 = 0;
    goto LABEL_4;
  }
  v13 = sub_15DE060(*(_QWORD *)a1, a2, 0, a4, a5);
  v14 = *(_QWORD *)(a1 + 2384);
  if ( !v14 )
    goto LABEL_21;
LABEL_3:
  v15 = a1 + 2360;
  v16 = *(_DWORD *)(v14 - 4);
  sub_631ED0(v30, a2, v13, a1 + 2360, a3, a6, a7, a8);
  result = *(_QWORD *)(a1 + 2384);
  v18 = v16 + 1;
  if ( result )
  {
LABEL_4:
    v19 = *(_DWORD *)(result - 4);
    goto LABEL_5;
  }
  v19 = 0;
LABEL_5:
  if ( v19 != v18 )
    goto LABEL_19;
  v20 = *(_QWORD *)(result + 8LL * v16);
  if ( v20 )
  {
    sub_62A000((__int64)v30, *(_QWORD *)(result + 8LL * v16));
    if ( !v16 )
      return sub_62A410(v30, v20);
    result = *(_QWORD *)(a1 + 2384);
  }
  else if ( !v16 )
  {
    return result;
  }
  v21 = 8LL * v16 + result;
  v22 = 0;
  do
  {
    while ( 1 )
    {
      v23 = *(_QWORD *)result;
      if ( *(_QWORD *)(*(_QWORD *)result + 72LL) == *a3 )
        break;
      result += 8;
      if ( v21 == result )
        goto LABEL_14;
    }
    if ( v22 )
    {
      std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(v33);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_39A600((__int64)v34, (const char *)*a3);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_63B590(v15, v20);
      v10 = (char **)__cxa_allocate_exception(0x28u);
      std::stringbuf::str(v32, v35);
      *v10 = (char *)off_1C63128;
      sub_2333C0(v10 + 1, v32);
      sub_233E40((__int64)v32);
      __cxa_throw(v10, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    result += 8;
    v22 = v23;
  }
  while ( v21 != result );
LABEL_14:
  if ( v22 )
  {
    if ( *(_QWORD *)(v22 + 40) != *(_QWORD *)(v20 + 40) )
      goto LABEL_16;
    v24 = *(unsigned int *)(v22 + 56);
    if ( (_DWORD)v24 )
    {
      v25 = *(unsigned int *)(v20 + 56);
      if ( !(_DWORD)v25 )
      {
LABEL_16:
        v31 = v22;
        std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(v33);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_62AAE0(v31, a1, v34, 0);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_62AAE0(v20, a1, v34, 0);
        sub_63B590(v15, v20);
        v9 = (char **)__cxa_allocate_exception(0x28u);
        std::stringbuf::str(v32, v35);
        *v9 = (char *)off_1C63128;
        sub_2333C0(v9 + 1, v32);
        sub_233E40((__int64)v32);
        __cxa_throw(v9, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v26 = v22;
      v27 = v20 + 8 * v25;
      for ( i = *(_QWORD *)(v22 + 80) & 0xFFFFFFFFFFFFFFF8LL; ; i = *(_QWORD *)(v26 + 80) & 0xFFFFFFFFFFFFFFF8LL )
      {
        v29 = v20;
        while ( i != (*(_QWORD *)(v29 + 80) & 0xFFFFFFFFFFFFFFF8LL) )
        {
          v29 += 8;
          if ( v27 == v29 )
            goto LABEL_16;
        }
        v26 += 8;
        if ( v22 + 8 * v24 == v26 )
          break;
      }
    }
    sub_63B590(v15, v22);
    return sub_62A410(v30, v20);
  }
  if ( v20 )
    return sub_62A410(v30, v20);
  return result;
}

