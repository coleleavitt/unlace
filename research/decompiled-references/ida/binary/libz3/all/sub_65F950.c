__int64 __fastcall sub_65F950(__int64 a1)
{
  char **exception; // rbp
  __int64 v2; // rbx
  __int64 v3; // rbp
  __int64 v4; // r12
  __int64 v5; // r13
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 result; // rax
  __int64 v9; // rbp
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rbp
  _QWORD v17[4]; // [rsp+30h] [rbp-1E8h] BYREF
  _QWORD v18[2]; // [rsp+50h] [rbp-1C8h]
  _OWORD v19[4]; // [rsp+60h] [rbp-1B8h] BYREF
  _BYTE v20[8]; // [rsp+A0h] [rbp-178h] BYREF
  int v21; // [rsp+A8h] [rbp-170h]
  char *v22; // [rsp+B0h] [rbp-168h]
  __int64 v23; // [rsp+B8h] [rbp-160h]
  char v24; // [rsp+C0h] [rbp-158h] BYREF
  _QWORD v25[28]; // [rsp+D0h] [rbp-148h] BYREF
  __int16 v26; // [rsp+1B0h] [rbp-68h]
  __int128 v27; // [rsp+1B8h] [rbp-60h]
  __int128 v28; // [rsp+1C8h] [rbp-50h]
  __int64 v29; // [rsp+1E8h] [rbp-30h]
  __int64 v30; // [rsp+1F0h] [rbp-28h]
  __int64 v31; // [rsp+1F8h] [rbp-20h]
  __int64 v32; // [rsp+200h] [rbp-18h]
  __int64 v33; // [rsp+208h] [rbp-10h]
  __int64 v34; // [rsp+210h] [rbp-8h]

  result = *(_QWORD *)(a1 + 248);
  if ( result && *(_DWORD *)(result - 4) )
  {
    v34 = v7;
    v33 = v6;
    v32 = v5;
    v31 = v4;
    v30 = v3;
    v29 = v2;
    std::ios_base::ios_base((std::ios_base *)v25);
    v25[27] = 0;
    v9 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[2];
    v27 = 0;
    v26 = 0;
    v10 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[3];
    v28 = 0;
    v11 = *(_QWORD *)(v9 - 24);
    v25[0] = (char *)&`vtable for'std::ios + 16;
    v18[0] = v9;
    *(_QWORD *)((char *)v18 + v11) = v10;
    v18[1] = 0;
    std::ios::init();
    v12 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[5];
    v13 = *(_QWORD *)(`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[4] - 24LL);
    *(_QWORD *)&v19[0] = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[4];
    *(_QWORD *)((char *)v19 + v13) = v12;
    std::ios::init();
    *(_QWORD *)((char *)v18
              + *(_QWORD *)(`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[1] - 24LL)) = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[6];
    v18[0] = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 24;
    v25[0] = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
    v19[0] = _mm_unpacklo_epi64(
               (__m128i)((unsigned __int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                       + 64),
               (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
    memset(&v19[1], 0, 48);
    std::locale::locale((std::locale *)v20);
    v21 = 24;
    v24 = 0;
    *((_QWORD *)&v19[0] + 1) = (char *)&`vtable for'std::stringbuf + 16;
    v22 = &v24;
    v23 = 0;
    std::ios::init();
    v14 = *(_QWORD *)(a1 + 248);
    v15 = 0x7FFFFFFF8LL;
    if ( v14 )
      v15 = 8LL * (unsigned int)(*(_DWORD *)(v14 - 4) - 1);
    v16 = *(_QWORD *)(v14 + v15);
    std::__ostream_insert<char,std::char_traits<char>>();
    sub_62AAE0(v16, *(_QWORD *)(a1 + 16), v19, 0);
    exception = (char **)__cxa_allocate_exception(0x28u);
    std::stringbuf::str(v17, (char *)v19 + 8);
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v17);
    sub_233E40((__int64)v17);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  return result;
}

