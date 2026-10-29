__int64 __fastcall sub_26BEF0(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 result; // rax
  __int64 v4; // rbx
  __int64 v5; // r14
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  char **v9; // rbp
  char **exception; // rbx
  __int64 v11; // rdx
  _QWORD v12[4]; // [rsp+50h] [rbp-1E8h] BYREF
  __int64 v13[2]; // [rsp+70h] [rbp-1C8h] BYREF
  _OWORD v14[4]; // [rsp+80h] [rbp-1B8h] BYREF
  _BYTE v15[8]; // [rsp+C0h] [rbp-178h] BYREF
  int v16; // [rsp+C8h] [rbp-170h]
  char *v17; // [rsp+D0h] [rbp-168h]
  __int64 v18; // [rsp+D8h] [rbp-160h]
  char v19; // [rsp+E0h] [rbp-158h] BYREF
  _QWORD v20[28]; // [rsp+F0h] [rbp-148h] BYREF
  __int16 v21; // [rsp+1D0h] [rbp-68h]
  __int128 v22; // [rsp+1D8h] [rbp-60h]
  __int128 v23; // [rsp+1E8h] [rbp-50h]

  result = *(_QWORD *)(a1 + 136);
  if ( !result || a2 >= *(_DWORD *)(result - 4) )
  {
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_ACE4E(v13, "invalid argument reference", v11);
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v13);
    sub_233E40((__int64)v13);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v4 = a3;
  if ( *(_DWORD *)(result + 16LL * a2) != a3 )
  {
    std::ios_base::ios_base((std::ios_base *)v20);
    v20[27] = 0;
    v5 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[2];
    v22 = 0;
    v21 = 0;
    v6 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[3];
    v23 = 0;
    v20[0] = (char *)&`vtable for'std::ios + 16;
    v7 = *(_QWORD *)(v5 - 24);
    v13[0] = v5;
    *(__int64 *)((char *)v13 + v7) = v6;
    v13[1] = 0;
    std::ios::init();
    v8 = *(_QWORD *)(`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[4] - 24LL);
    *(_QWORD *)&v14[0] = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[4];
    *(_QWORD *)((char *)v14 + v8) = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[5];
    std::ios::init();
    *(__int64 *)((char *)v13
               + *(_QWORD *)(`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[1] - 24LL)) = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[6];
    v13[0] = (__int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 24;
    v20[0] = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
    v14[0] = _mm_unpacklo_epi64(
               (__m128i)((unsigned __int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                       + 64),
               (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
    memset(&v14[1], 0, 48);
    std::locale::locale((std::locale *)v15);
    v19 = 0;
    *((_QWORD *)&v14[0] + 1) = (char *)&`vtable for'std::stringbuf + 16;
    v16 = 24;
    v17 = &v19;
    v18 = 0;
    std::ios::init();
    std::__ostream_insert<char,std::char_traits<char>>();
    switch ( v4 )
    {
      case 0LL:
      case 1LL:
      case 2LL:
      case 3LL:
      case 4LL:
      case 5LL:
      case 6LL:
      case 7LL:
      case 8LL:
      case 9LL:
      case 10LL:
        std::__ostream_insert<char,std::char_traits<char>>();
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        switch ( *(_DWORD *)(*(_QWORD *)(a1 + 136) + 16LL * a2) )
        {
          case 0:
          case 1:
          case 2:
          case 3:
          case 4:
          case 5:
          case 6:
          case 7:
          case 8:
          case 9:
          case 0xA:
            std::__ostream_insert<char,std::char_traits<char>>();
            v9 = (char **)__cxa_allocate_exception(0x28u);
            std::stringbuf::str(v12, (char *)v14 + 8);
            *v9 = (char *)off_1C63128;
            sub_2333C0(v9 + 1, v12);
            sub_233E40((__int64)v12);
            __cxa_throw(v9, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          default:
            sub_1872CE0("");
            sub_1873130(114, 68);
        }
      default:
        sub_1872CE0("");
        sub_1873130(114, 68);
    }
  }
  return result;
}

