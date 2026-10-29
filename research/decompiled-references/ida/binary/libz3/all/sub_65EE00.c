void __fastcall sub_65EE00(__int64 a1, int a2)
{
  char **exception; // rbp
  __int64 *v4; // rdx
  __int64 *v5; // rsi
  __int64 v6; // rcx
  __int64 *v7; // rax
  __int64 v8; // r12
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // [rsp+8h] [rbp-220h]
  void *v13[2]; // [rsp+40h] [rbp-1E8h] BYREF
  _QWORD v14[2]; // [rsp+50h] [rbp-1D8h] BYREF
  _QWORD v15[2]; // [rsp+60h] [rbp-1C8h]
  _OWORD v16[4]; // [rsp+70h] [rbp-1B8h] BYREF
  _BYTE v17[8]; // [rsp+B0h] [rbp-178h] BYREF
  int v18; // [rsp+B8h] [rbp-170h]
  char *v19; // [rsp+C0h] [rbp-168h]
  __int64 v20; // [rsp+C8h] [rbp-160h]
  char v21; // [rsp+D0h] [rbp-158h] BYREF
  _QWORD v22[28]; // [rsp+E0h] [rbp-148h] BYREF
  __int16 v23; // [rsp+1C0h] [rbp-68h]
  __int128 v24; // [rsp+1C8h] [rbp-60h]
  __int128 v25; // [rsp+1D8h] [rbp-50h]

  v4 = *(__int64 **)(a1 + 184);
  v5 = &v4[2 * *(unsigned int *)(a1 + 192)];
  if ( v4 != v5 )
  {
    while ( (unsigned __int64)*v4 <= 1 )
    {
      v4 += 2;
      if ( v5 == v4 )
        return;
    }
    if ( v5 != v4 )
    {
      v6 = *v4;
      do
      {
        if ( a2 == *(_DWORD *)(v6 + 16) )
        {
          v12 = v4[1];
          std::ios_base::ios_base((std::ios_base *)v22);
          v24 = 0;
          v8 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[2];
          v23 = 0;
          v9 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[3];
          v25 = 0;
          v22[0] = (char *)&`vtable for'std::ios + 16;
          v10 = *(_QWORD *)(v8 - 24);
          v22[27] = 0;
          v15[0] = v8;
          *(_QWORD *)((char *)v15 + v10) = v9;
          v15[1] = 0;
          std::ios::init();
          v11 = *(_QWORD *)(`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[4] - 24LL);
          *(_QWORD *)&v16[0] = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[4];
          *(_QWORD *)((char *)v16 + v11) = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[5];
          std::ios::init();
          *(_QWORD *)((char *)v15
                    + *(_QWORD *)(`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[1]
                                - 24LL)) = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[6];
          v15[0] = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 24;
          v22[0] = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
          v16[0] = _mm_unpacklo_epi64(
                     (__m128i)((unsigned __int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                             + 64),
                     (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
          memset(&v16[1], 0, 48);
          std::locale::locale((std::locale *)v17);
          v18 = 24;
          v21 = 0;
          *((_QWORD *)&v16[0] + 1) = (char *)&`vtable for'std::stringbuf + 16;
          v19 = &v21;
          v20 = 0;
          std::ios::init();
          std::__ostream_insert<char,std::char_traits<char>>();
          if ( a2 == 1 )
          {
            qmemcpy(v14, "EXISTS", 6);
            v13[0] = v14;
          }
          else if ( a2 == 2 )
          {
            qmemcpy(v14, "LAMBDA", 6);
            v13[0] = v14;
          }
          else
          {
            if ( a2 )
            {
              sub_1872CE0("");
              sub_1873130(114, 79);
            }
            qmemcpy(v14, "FORALL", 6);
            v13[0] = v14;
          }
          v13[1] = &byte_6;
          BYTE6(v14[0]) = 0;
          std::__ostream_insert<char,std::char_traits<char>>();
          std::__ostream_insert<char,std::char_traits<char>>();
          if ( v13[0] != v14 )
            operator delete(v13[0], v14[0] + 1LL);
          sub_62AAE0(v12, *(_QWORD *)(a1 + 16), v16, 0);
          exception = (char **)__cxa_allocate_exception(0x28u);
          std::stringbuf::str(v13, (char *)v16 + 8);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v13);
          sub_233E40((__int64)v13);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v7 = v4 + 2;
        if ( v5 == v4 + 2 )
          break;
        while ( 1 )
        {
          v6 = *v7;
          v4 = v7;
          if ( (unsigned __int64)*v7 > 1 )
            break;
          v7 += 2;
          if ( v5 == v7 )
            return;
        }
      }
      while ( v5 != v7 );
    }
  }
}

