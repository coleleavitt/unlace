_QWORD *__fastcall sub_65F510(__int64 a1)
{
  char **exception; // rbp
  __int64 v2; // rbx
  __int64 v3; // rbp
  __int64 v4; // r12
  __int64 v5; // r13
  __int64 v6; // r14
  __int64 v7; // r15
  _QWORD *result; // rax
  __int64 v9; // rbp
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // [rsp+8h] [rbp-218h]
  _QWORD v15[4]; // [rsp+38h] [rbp-1E8h] BYREF
  _QWORD v16[2]; // [rsp+58h] [rbp-1C8h]
  _OWORD v17[4]; // [rsp+68h] [rbp-1B8h] BYREF
  _BYTE v18[8]; // [rsp+A8h] [rbp-178h] BYREF
  int v19; // [rsp+B0h] [rbp-170h]
  char *v20; // [rsp+B8h] [rbp-168h]
  __int64 v21; // [rsp+C0h] [rbp-160h]
  char v22; // [rsp+C8h] [rbp-158h] BYREF
  _QWORD v23[28]; // [rsp+D8h] [rbp-148h] BYREF
  __int16 v24; // [rsp+1B8h] [rbp-68h]
  __int128 v25; // [rsp+1C0h] [rbp-60h]
  __int128 v26; // [rsp+1D0h] [rbp-50h]
  __int64 v27; // [rsp+1F0h] [rbp-30h]
  __int64 v28; // [rsp+1F8h] [rbp-28h]
  __int64 v29; // [rsp+200h] [rbp-20h]
  __int64 v30; // [rsp+208h] [rbp-18h]
  __int64 v31; // [rsp+210h] [rbp-10h]
  __int64 v32; // [rsp+218h] [rbp-8h]

  result = *(_QWORD **)(a1 + 240);
  if ( result )
  {
    if ( *((_DWORD *)result - 1) )
    {
      v32 = v7;
      v31 = v6;
      v30 = v5;
      v29 = v4;
      v28 = v3;
      v27 = v2;
      v14 = *result;
      std::ios_base::ios_base((std::ios_base *)v23);
      v24 = 0;
      v9 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[2];
      v25 = 0;
      v10 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[3];
      v26 = 0;
      v23[0] = (char *)&`vtable for'std::ios + 16;
      v11 = *(_QWORD *)(v9 - 24);
      v23[27] = 0;
      v16[0] = v9;
      *(_QWORD *)((char *)v16 + v11) = v10;
      v16[1] = 0;
      std::ios::init();
      v12 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[5];
      v13 = *(_QWORD *)(`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[4] - 24LL);
      *(_QWORD *)&v17[0] = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[4];
      *(_QWORD *)((char *)v17 + v13) = v12;
      std::ios::init();
      *(_QWORD *)((char *)v16
                + *(_QWORD *)(`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[1]
                            - 24LL)) = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[6];
      v16[0] = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 24;
      v23[0] = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
      v17[0] = _mm_unpacklo_epi64(
                 (__m128i)((unsigned __int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                         + 64),
                 (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
      memset(&v17[1], 0, 48);
      std::locale::locale((std::locale *)v18);
      v19 = 24;
      *((_QWORD *)&v17[0] + 1) = (char *)&`vtable for'std::stringbuf + 16;
      v20 = &v22;
      v21 = 0;
      v22 = 0;
      std::ios::init();
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_62AAE0(v14, *(_QWORD *)(a1 + 16), v17, 0);
      exception = (char **)__cxa_allocate_exception(0x28u);
      std::stringbuf::str(v15, (char *)v17 + 8);
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v15);
      sub_233E40((__int64)v15);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
  }
  return result;
}

