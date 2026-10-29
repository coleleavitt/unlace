__int64 *__fastcall sub_4D1600(__int64 *a1, char *a2)
{
  char **v2; // rbx
  __int64 v3; // rdx
  char **v4; // rbx
  __int64 v5; // rdx
  char **v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 (__fastcall *v9)(__int64); // rax
  __int64 *result; // rax
  int v11; // edx
  __int64 v12; // rax
  __int64 v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdi
  char **exception; // rbp
  char *s; // [rsp+28h] [rbp-1F0h] BYREF
  _QWORD v20[4]; // [rsp+30h] [rbp-1E8h] BYREF
  __int64 v21[2]; // [rsp+50h] [rbp-1C8h] BYREF
  _OWORD v22[4]; // [rsp+60h] [rbp-1B8h] BYREF
  _BYTE v23[8]; // [rsp+A0h] [rbp-178h] BYREF
  int v24; // [rsp+A8h] [rbp-170h]
  char *v25; // [rsp+B0h] [rbp-168h]
  __int64 v26; // [rsp+B8h] [rbp-160h]
  char v27; // [rsp+C0h] [rbp-158h] BYREF
  _QWORD v28[28]; // [rsp+D0h] [rbp-148h] BYREF
  __int16 v29; // [rsp+1B0h] [rbp-68h]
  __int128 v30; // [rsp+1B8h] [rbp-60h]
  __int128 v31; // [rsp+1C8h] [rbp-50h]

  v8 = *a1;
  s = a2;
  v9 = *(__int64 (__fastcall **)(__int64))(v8 + 192);
  if ( v9 == sub_4D0080 )
  {
    result = sub_4C3D70((__int64)(a1 + 8), (__int64 *)&s);
    if ( result )
      goto LABEL_3;
LABEL_8:
    std::ios_base::ios_base((std::ios_base *)v28);
    v29 = 0;
    v13 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[2];
    v30 = 0;
    v31 = 0;
    v28[0] = (char *)&`vtable for'std::ios + 16;
    v14 = *(_QWORD *)(v13 - 24);
    v15 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[3];
    v21[0] = v13;
    v28[27] = 0;
    *(__int64 *)((char *)v21 + v14) = v15;
    v21[1] = 0;
    std::ios::init();
    v16 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[5];
    v17 = *(_QWORD *)(`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[4] - 24LL);
    *(_QWORD *)&v22[0] = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[4];
    *(_QWORD *)((char *)v22 + v17) = v16;
    std::ios::init();
    *(__int64 *)((char *)v21
               + *(_QWORD *)(`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[1] - 24LL)) = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[6];
    v21[0] = (__int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 24;
    v28[0] = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
    v22[0] = _mm_unpacklo_epi64(
               (__m128i)((unsigned __int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                       + 64),
               (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
    memset(&v22[1], 0, 48);
    std::locale::locale((std::locale *)v23);
    v24 = 24;
    v26 = 0;
    v27 = 0;
    *((_QWORD *)&v22[0] + 1) = (char *)&`vtable for'std::stringbuf + 16;
    v25 = &v27;
    std::ios::init();
    std::__ostream_insert<char,std::char_traits<char>>();
    if ( ((unsigned __int8)s & 7) != 0 )
    {
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::operator<<();
    }
    else
    {
      if ( s )
        strlen(s);
      std::__ostream_insert<char,std::char_traits<char>>();
    }
    std::__ostream_insert<char,std::char_traits<char>>();
    exception = (char **)__cxa_allocate_exception(0x28u);
    std::stringbuf::str(v20, (char *)v22 + 8);
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v20);
    sub_233E40((__int64)v20);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v12 = ((__int64 (*)(void))v9)();
  result = sub_4C3D70(v12, (__int64 *)&s);
  if ( !result )
    goto LABEL_8;
LABEL_3:
  v11 = *((_DWORD *)result + 8);
  switch ( v11 )
  {
    case 3:
      v6 = (char **)__cxa_allocate_exception(0x28u);
      sub_E08B0(v21, "cannot request product relation directly", v7);
      *v6 = (char *)off_1C63128;
      sub_2333C0(v6 + 1, v21);
      sub_233E40((__int64)v21);
      __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    case 4:
      v4 = (char **)__cxa_allocate_exception(0x28u);
      sub_E08B0(v21, "cannot request sieve relation directly", v5);
      *v4 = (char *)off_1C63128;
      sub_2333C0(v4 + 1, v21);
      sub_233E40((__int64)v21);
      __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    case 2:
      v2 = (char **)__cxa_allocate_exception(0x28u);
      sub_E08B0(v21, "cannot request finite product relation directly", v3);
      *v2 = (char *)off_1C63128;
      sub_2333C0(v2 + 1, v21);
      sub_233E40((__int64)v21);
      __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  return result;
}

