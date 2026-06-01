void __fastcall sub_65F2C0(__int64 a1)
{
  char **exception; // rbp
  __int64 v2; // rbx
  __int64 v3; // rbp
  __int64 v4; // r12
  __int64 v5; // r13
  __int64 v6; // r14
  __int64 v7; // r15
  _QWORD *v8; // rax
  _QWORD *i; // rdx
  __int64 v10; // rbp
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // [rsp+8h] [rbp-218h]
  _QWORD v16[4]; // [rsp+38h] [rbp-1E8h] BYREF
  _QWORD v17[2]; // [rsp+58h] [rbp-1C8h]
  _OWORD v18[4]; // [rsp+68h] [rbp-1B8h] BYREF
  _BYTE v19[8]; // [rsp+A8h] [rbp-178h] BYREF
  int v20; // [rsp+B0h] [rbp-170h]
  char *v21; // [rsp+B8h] [rbp-168h]
  __int64 v22; // [rsp+C0h] [rbp-160h]
  char v23; // [rsp+C8h] [rbp-158h] BYREF
  _QWORD v24[28]; // [rsp+D8h] [rbp-148h] BYREF
  __int16 v25; // [rsp+1B8h] [rbp-68h]
  __int128 v26; // [rsp+1C0h] [rbp-60h]
  __int128 v27; // [rsp+1D0h] [rbp-50h]
  __int64 v28; // [rsp+1F0h] [rbp-30h]
  __int64 v29; // [rsp+1F8h] [rbp-28h]
  __int64 v30; // [rsp+200h] [rbp-20h]
  __int64 v31; // [rsp+208h] [rbp-18h]
  __int64 v32; // [rsp+210h] [rbp-10h]
  __int64 v33; // [rsp+218h] [rbp-8h]

  if ( *(_DWORD *)(a1 + 196) )
  {
    v33 = v7;
    v32 = v6;
    v31 = v5;
    v30 = v4;
    v29 = v3;
    v28 = v2;
    v8 = *(_QWORD **)(a1 + 184);
    for ( i = &v8[2 * *(unsigned int *)(a1 + 192)]; i != v8; v8 += 2 )
    {
      if ( *v8 > 1u )
        break;
    }
    v15 = v8[1];
    std::ios_base::ios_base((std::ios_base *)v24);
    v24[27] = 0;
    v10 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[2];
    v26 = 0;
    v25 = 0;
    v11 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[3];
    v27 = 0;
    v24[0] = (char *)&`vtable for'std::ios + 16;
    v12 = *(_QWORD *)(v10 - 24);
    v17[0] = v10;
    *(_QWORD *)((char *)v17 + v12) = v11;
    v17[1] = 0;
    std::ios::init();
    v13 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[5];
    v14 = *(_QWORD *)(`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[4] - 24LL);
    *(_QWORD *)&v18[0] = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[4];
    *(_QWORD *)((char *)v18 + v14) = v13;
    std::ios::init();
    *(_QWORD *)((char *)v17
              + *(_QWORD *)(`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[1] - 24LL)) = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[6];
    v17[0] = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 24;
    v24[0] = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
    v18[0] = _mm_unpacklo_epi64(
               (__m128i)((unsigned __int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                       + 64),
               (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
    memset(&v18[1], 0, 48);
    std::locale::locale((std::locale *)v19);
    v20 = 24;
    *((_QWORD *)&v18[0] + 1) = (char *)&`vtable for'std::stringbuf + 16;
    v21 = &v23;
    v22 = 0;
    v23 = 0;
    std::ios::init();
    std::__ostream_insert<char,std::char_traits<char>>();
    sub_62AAE0(v15, *(_QWORD *)(a1 + 16), v18, 0);
    exception = (char **)__cxa_allocate_exception(0x28u);
    std::stringbuf::str(v16, (char *)v18 + 8);
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v16);
    sub_233E40((__int64)v16);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
}

