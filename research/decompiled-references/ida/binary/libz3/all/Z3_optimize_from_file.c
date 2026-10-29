void __fastcall Z3_optimize_from_file(__int64 a1, __int64 a2, const char *a3)
{
  char *v4; // rbp
  std::locale *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rbx
  char *v8; // rax
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // rdi
  char **exception; // r14
  std::locale *v13; // [rsp+8h] [rbp-400h]
  _QWORD v14[4]; // [rsp+20h] [rbp-3E8h] BYREF
  _OWORD v15[4]; // [rsp+40h] [rbp-3C8h] BYREF
  _BYTE v16[8]; // [rsp+80h] [rbp-388h] BYREF
  int v17; // [rsp+88h] [rbp-380h]
  char *v18; // [rsp+90h] [rbp-378h]
  __int64 v19; // [rsp+98h] [rbp-370h]
  char v20; // [rsp+A0h] [rbp-368h] BYREF
  _QWORD v21[28]; // [rsp+B0h] [rbp-358h] BYREF
  __int16 v22; // [rsp+190h] [rbp-278h]
  __int128 v23; // [rsp+198h] [rbp-270h]
  __int128 v24; // [rsp+1A8h] [rbp-260h]
  char *v25; // [rsp+1C0h] [rbp-248h] BYREF
  __int64 v26; // [rsp+1C8h] [rbp-240h]
  char *v27; // [rsp+1D0h] [rbp-238h]
  _BYTE v28[48]; // [rsp+208h] [rbp-200h] BYREF
  _QWORD v29[4]; // [rsp+2C0h] [rbp-148h] BYREF
  char v30; // [rsp+2E0h] [rbp-128h]
  __int64 v31; // [rsp+398h] [rbp-70h]
  __int16 v32; // [rsp+3A0h] [rbp-68h]
  __int128 v33; // [rsp+3A8h] [rbp-60h]
  __int128 v34; // [rsp+3B8h] [rbp-50h]

  std::ios_base::ios_base((std::ios_base *)v29);
  v32 = 0;
  v33 = 0;
  v29[0] = (char *)&`vtable for'std::ios + 16;
  v34 = 0;
  v4 = (char *)`VTT for'std::ifstream[1];
  v5 = (std::locale *)`VTT for'std::ifstream[2];
  v31 = 0;
  v6 = *((_QWORD *)v4 - 3);
  v25 = v4;
  v13 = v5;
  *(char **)((char *)&v25 + v6) = (char *)v5;
  v26 = 0;
  std::ios::init();
  v25 = (char *)&`vtable for'std::ifstream + 24;
  v29[0] = (char *)&`vtable for'std::ifstream + 64;
  std::filebuf::basic_filebuf();
  std::ios::init();
  std::filebuf::open();
  std::ios::clear();
  if ( (v30 & 5) != 0 )
  {
    std::ios_base::ios_base((std::ios_base *)v21);
    v23 = 0;
    v24 = 0;
    v21[0] = (char *)&`vtable for'std::ios + 16;
    v22 = 0;
    v21[27] = 0;
    v10 = `VTT for'std::ostringstream[2];
    v11 = *(_QWORD *)(`VTT for'std::ostringstream[1] - 24LL);
    *(_QWORD *)&v15[0] = `VTT for'std::ostringstream[1];
    *(_QWORD *)((char *)v15 + v11) = v10;
    std::ios::init();
    v21[0] = (char *)&`vtable for'std::ostringstream + 64;
    v15[0] = _mm_unpacklo_epi64(
               (__m128i)((unsigned __int64)&`vtable for'std::ostringstream + 24),
               (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
    memset(&v15[1], 0, 48);
    std::locale::locale((std::locale *)v16);
    v17 = 16;
    v19 = 0;
    v20 = 0;
    *((_QWORD *)&v15[0] + 1) = (char *)&`vtable for'std::stringbuf + 16;
    v18 = &v20;
    std::ios::init();
    std::__ostream_insert<char,std::char_traits<char>>();
    if ( a3 )
    {
      strlen(a3);
      std::__ostream_insert<char,std::char_traits<char>>();
    }
    else
    {
      std::ios::clear();
    }
    exception = (char **)__cxa_allocate_exception(0x28u);
    std::stringbuf::str(v14, (char *)v15 + 8);
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v14);
    sub_233E40((__int64)v14);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v7 = 0;
  if ( a3 )
  {
    while ( 1 )
    {
      v8 = strchr(a3, 46);
      if ( !v8 )
        break;
      a3 = v8 + 1;
      v7 = (__int64)(v8 + 1);
    }
  }
  sub_2A4DE0(a1, a2, (__int64)&v25, v7);
  v25 = (char *)&`vtable for'std::ifstream + 24;
  v29[0] = (char *)&`vtable for'std::ifstream + 64;
  v27 = (char *)&`vtable for'std::filebuf + 16;
  std::filebuf::close();
  std::__basic_file<char>::~__basic_file();
  v27 = (char *)&`vtable for'std::streambuf + 16;
  std::locale::~locale((std::locale *)v28);
  v9 = *((_QWORD *)v4 - 3);
  v25 = v4;
  *(char **)((char *)&v25 + v9) = (char *)v13;
  v26 = 0;
  v29[0] = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base((std::ios_base *)v29);
}

