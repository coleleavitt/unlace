void __fastcall sub_65FB80(__int64 a1)
{
  char **exception; // rbp
  __int64 v2; // rbx
  __int64 v3; // rbp
  __int64 v4; // r12
  __int64 v5; // r13
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 *v8; // rdx
  __int64 *v9; // rcx
  __int64 *v10; // rax
  __int64 v11; // r15
  __int64 *v12; // rsi
  __int64 v13; // r12
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // r12
  __int64 v19; // [rsp+8h] [rbp-220h]
  _QWORD v20[4]; // [rsp+40h] [rbp-1E8h] BYREF
  _QWORD v21[2]; // [rsp+60h] [rbp-1C8h]
  _OWORD v22[4]; // [rsp+70h] [rbp-1B8h] BYREF
  _BYTE v23[8]; // [rsp+B0h] [rbp-178h] BYREF
  int v24; // [rsp+B8h] [rbp-170h]
  char *v25; // [rsp+C0h] [rbp-168h]
  __int64 v26; // [rsp+C8h] [rbp-160h]
  char v27; // [rsp+D0h] [rbp-158h] BYREF
  _QWORD v28[28]; // [rsp+E0h] [rbp-148h] BYREF
  __int16 v29; // [rsp+1C0h] [rbp-68h]
  __int128 v30; // [rsp+1C8h] [rbp-60h]
  __int128 v31; // [rsp+1D8h] [rbp-50h]
  __int64 v32; // [rsp+1F8h] [rbp-30h]
  __int64 v33; // [rsp+200h] [rbp-28h]
  __int64 v34; // [rsp+208h] [rbp-20h]
  __int64 v35; // [rsp+210h] [rbp-18h]
  __int64 v36; // [rsp+218h] [rbp-10h]
  __int64 v37; // [rsp+220h] [rbp-8h]

  if ( *(_DWORD *)(a1 + 220) )
  {
    v37 = v7;
    v36 = v6;
    v35 = v5;
    v34 = v4;
    v33 = v3;
    v32 = v2;
    v8 = *(__int64 **)(a1 + 208);
    v9 = &v8[2 * *(unsigned int *)(a1 + 216)];
    if ( v8 == v9 )
    {
      v11 = *v9;
    }
    else
    {
      v10 = *(__int64 **)(a1 + 208);
      while ( 1 )
      {
        v11 = *v10;
        v12 = v10;
        if ( (unsigned __int64)*v10 > 1 )
          break;
        v10 += 2;
        if ( v9 == v10 )
        {
          v11 = v12[2];
          break;
        }
      }
      while ( (unsigned __int64)*v8 <= 1 )
      {
        v8 += 2;
        if ( v9 == v8 )
          goto LABEL_11;
      }
      v9 = v8;
    }
LABEL_11:
    v19 = v9[1];
    std::ios_base::ios_base((std::ios_base *)v28);
    v29 = 0;
    v13 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[2];
    v30 = 0;
    v14 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[3];
    v31 = 0;
    v28[0] = (char *)&`vtable for'std::ios + 16;
    v15 = *(_QWORD *)(v13 - 24);
    v28[27] = 0;
    v21[0] = v13;
    *(_QWORD *)((char *)v21 + v15) = v14;
    v21[1] = 0;
    std::ios::init();
    v16 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[5];
    v17 = *(_QWORD *)(`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[4] - 24LL);
    *(_QWORD *)&v22[0] = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[4];
    *(_QWORD *)((char *)v22 + v17) = v16;
    std::ios::init();
    *(_QWORD *)((char *)v21
              + *(_QWORD *)(`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[1] - 24LL)) = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[6];
    v21[0] = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 24;
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
    v18 = *(_QWORD *)(v11 + 16);
    if ( (v18 & 7) != 0 )
    {
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::operator<<();
    }
    else
    {
      if ( v18 )
        strlen(*(const char **)(v11 + 16));
      std::__ostream_insert<char,std::char_traits<char>>();
    }
    std::__ostream_insert<char,std::char_traits<char>>();
    sub_62AAE0(v19, *(_QWORD *)(a1 + 16), v22, 0);
    exception = (char **)__cxa_allocate_exception(0x28u);
    std::stringbuf::str(v20, (char *)v22 + 8);
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v20);
    sub_233E40((__int64)v20);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
}

