void __fastcall sub_981FE0(__int64 a1, __int64 a2)
{
  char *v2; // rbx
  char *v3; // r15
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // rax
  char **exception; // rax
  const char *v8; // rbx
  char **v9; // rbp
  __m128i *v10; // rax
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  _QWORD v13[4]; // [rsp+10h] [rbp-2A8h] BYREF
  char *v14[4]; // [rsp+30h] [rbp-288h] BYREF
  char *v15[4]; // [rsp+50h] [rbp-268h] BYREF
  char *v16; // [rsp+70h] [rbp-248h] BYREF
  __int64 v17; // [rsp+78h] [rbp-240h]
  char *v18; // [rsp+80h] [rbp-238h]
  char v19[48]; // [rsp+B8h] [rbp-200h] BYREF
  _QWORD v20[4]; // [rsp+170h] [rbp-148h] BYREF
  int v21; // [rsp+190h] [rbp-128h]
  __int64 v22; // [rsp+248h] [rbp-70h]
  __int16 v23; // [rsp+250h] [rbp-68h]
  __int128 v24; // [rsp+258h] [rbp-60h]
  __int128 v25; // [rsp+268h] [rbp-50h]

  std::ios_base::ios_base((std::ios_base *)v20);
  v24 = 0;
  v25 = 0;
  v20[0] = (char *)&`vtable for'std::ios + 16;
  v23 = 0;
  v2 = (char *)`VTT for'std::ifstream[1];
  v3 = (char *)`VTT for'std::ifstream[2];
  v22 = 0;
  v4 = *((_QWORD *)v2 - 3);
  v16 = v2;
  *(char **)((char *)&v16 + v4) = v3;
  v17 = 0;
  std::ios::init();
  v16 = (char *)&`vtable for'std::ifstream + 24;
  v20[0] = (char *)&`vtable for'std::ifstream + 64;
  std::filebuf::basic_filebuf();
  std::ios::init();
  std::filebuf::open();
  std::ios::clear();
  if ( (v21 & 1) != 0 || (v21 & 5) != 0 )
  {
    exception = (char **)__cxa_allocate_exception(0x30u);
    v8 = *(const char **)(a1 + 24);
    v9 = exception;
    v10 = (__m128i *)operator new(0x16u);
    v13[0] = v10;
    *v10 = _mm_load_si128((const __m128i *)&xmmword_18B6700);
    strcpy(&v10->m128i_i8[13], "n file '");
    v13[2] = 21;
    v13[1] = 21;
    v11 = (_QWORD *)sub_2B3190((__int64)v13, v8);
    sub_2333C0(v14, v11);
    v12 = (_QWORD *)sub_2B3190((__int64)v14, "'");
    sub_2333C0(v15, v12);
    *v9 = (char *)off_1C63128;
    sub_2333C0(v9 + 1, v15);
    v9[5] = (char *)-1LL;
    *v9 = (char *)off_1C64218;
    sub_233E40((__int64)v15);
    sub_233E40((__int64)v14);
    sub_233E40((__int64)v13);
    __cxa_throw(v9, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
  }
  v5 = *(_QWORD *)(a1 + 24);
  v15[0] = nullptr;
  sub_DC0650(a2, &v16, 0, v15, v5);
  sub_18572D0(v15);
  if ( !std::filebuf::close() )
    std::ios::clear();
  v16 = (char *)&`vtable for'std::ifstream + 24;
  v20[0] = (char *)&`vtable for'std::ifstream + 64;
  v18 = (char *)&`vtable for'std::filebuf + 16;
  std::filebuf::close();
  std::__basic_file<char>::~__basic_file();
  v18 = (char *)&`vtable for'std::streambuf + 16;
  std::locale::~locale((std::locale *)v19);
  v6 = *((_QWORD *)v2 - 3);
  v16 = v2;
  *(char **)((char *)&v16 + v6) = v3;
  v17 = 0;
  v20[0] = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base((std::ios_base *)v20);
}

