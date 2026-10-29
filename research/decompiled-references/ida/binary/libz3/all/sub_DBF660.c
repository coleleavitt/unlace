__int64 __fastcall sub_DBF660(__int64 a1, const char *a2)
{
  __int64 v3; // r15
  __int64 v4; // rdi
  const char *v5; // rbx
  char **exception; // rbp
  _QWORD v8[4]; // [rsp+10h] [rbp-1D8h] BYREF
  _OWORD v9[4]; // [rsp+30h] [rbp-1B8h] BYREF
  _BYTE v10[8]; // [rsp+70h] [rbp-178h] BYREF
  int v11; // [rsp+78h] [rbp-170h]
  char *v12; // [rsp+80h] [rbp-168h]
  __int64 v13; // [rsp+88h] [rbp-160h]
  char v14; // [rsp+90h] [rbp-158h] BYREF
  _QWORD v15[28]; // [rsp+A0h] [rbp-148h] BYREF
  __int16 v16; // [rsp+180h] [rbp-68h]
  __int128 v17; // [rsp+188h] [rbp-60h]
  __int128 v18; // [rsp+198h] [rbp-50h]

  if ( *(_DWORD *)(a1 + 1424) != 1 )
  {
    std::ios_base::ios_base((std::ios_base *)v15);
    v17 = 0;
    v18 = 0;
    v15[0] = (char *)&`vtable for'std::ios + 16;
    v16 = 0;
    v15[27] = 0;
    v3 = `VTT for'std::ostringstream[2];
    v4 = *(_QWORD *)(`VTT for'std::ostringstream[1] - 24LL);
    *(_QWORD *)&v9[0] = `VTT for'std::ostringstream[1];
    *(_QWORD *)((char *)v9 + v4) = v3;
    std::ios::init();
    v15[0] = (char *)&`vtable for'std::ostringstream + 64;
    v9[0] = _mm_unpacklo_epi64(
              (__m128i)((unsigned __int64)&`vtable for'std::ostringstream + 24),
              (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
    memset(&v9[1], 0, 48);
    std::locale::locale((std::locale *)v10);
    v11 = 16;
    v13 = 0;
    v14 = 0;
    *((_QWORD *)&v9[0] + 1) = (char *)&`vtable for'std::stringbuf + 16;
    v12 = &v14;
    std::ios::init();
    if ( a2 )
    {
      strlen(a2);
      std::__ostream_insert<char,std::char_traits<char>>();
    }
    else
    {
      std::ios::clear();
    }
    std::__ostream_insert<char,std::char_traits<char>>();
    v5 = *(const char **)(a1 + 48);
    if ( ((unsigned __int8)v5 & 7) != 0 )
    {
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::operator<<();
    }
    else
    {
      if ( v5 )
        strlen(v5);
      std::__ostream_insert<char,std::char_traits<char>>();
    }
    exception = (char **)__cxa_allocate_exception(0x30u);
    std::stringbuf::str(v8, (char *)v9 + 8);
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v8);
    exception[5] = (char *)-1LL;
    *exception = (char *)off_1C64218;
    sub_233E40((__int64)v8);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
  }
  return sub_DC0980();
}

