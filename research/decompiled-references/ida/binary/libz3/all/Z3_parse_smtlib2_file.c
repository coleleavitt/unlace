_QWORD *__fastcall Z3_parse_smtlib2_file(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _QWORD *a4,
        __int64 *a5,
        unsigned int a6,
        _QWORD *a7,
        __int64 *a8)
{
  char v8; // al
  char *v9; // rbx
  char *v10; // rcx
  __int64 v11; // rax
  _QWORD *v12; // r14
  __int64 v13; // rax
  char *v15; // [rsp+8h] [rbp-278h]
  char v20; // [rsp+37h] [rbp-249h]
  char *v21; // [rsp+40h] [rbp-240h] BYREF
  __int64 v22; // [rsp+48h] [rbp-238h]
  char *v23; // [rsp+50h] [rbp-230h]
  _BYTE v24[48]; // [rsp+88h] [rbp-1F8h] BYREF
  _QWORD v25[4]; // [rsp+140h] [rbp-140h] BYREF
  char v26; // [rsp+160h] [rbp-120h]
  __int64 v27; // [rsp+218h] [rbp-68h]
  __int16 v28; // [rsp+220h] [rbp-60h]
  __int128 v29; // [rsp+228h] [rbp-58h]
  __int128 v30; // [rsp+238h] [rbp-48h]

  *(_DWORD *)(a1 + 1520) = 0;
  v8 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  v20 = v8;
  if ( v8 )
    sub_29BE40(a1, a2, a3, a4, a5, a6, a7, a8);
  std::ios_base::ios_base((std::ios_base *)v25);
  v28 = 0;
  v29 = 0;
  v30 = 0;
  v25[0] = (char *)&`vtable for'std::ios + 16;
  v27 = 0;
  v9 = (char *)`VTT for'std::ifstream[1];
  v10 = (char *)`VTT for'std::ifstream[2];
  v11 = *((_QWORD *)v9 - 3);
  v21 = v9;
  v15 = v10;
  *(char **)((char *)&v21 + v11) = v10;
  v22 = 0;
  std::ios::init();
  v21 = (char *)&`vtable for'std::ifstream + 24;
  v25[0] = (char *)&`vtable for'std::ifstream + 64;
  std::filebuf::basic_filebuf();
  std::ios::init();
  std::filebuf::open();
  std::ios::clear();
  if ( (v26 & 5) != 0 )
  {
    sub_24EA30(a1, 8u, nullptr);
    v12 = nullptr;
  }
  else
  {
    v12 = sub_25C870(a1, (__int64)&v21, a3, a4, a5, a6, a7, a8);
    if ( v20 )
      sub_2BB620(v12);
  }
  v21 = (char *)&`vtable for'std::ifstream + 24;
  v25[0] = (char *)&`vtable for'std::ifstream + 64;
  v23 = (char *)&`vtable for'std::filebuf + 16;
  std::filebuf::close();
  std::__basic_file<char>::~__basic_file();
  v23 = (char *)&`vtable for'std::streambuf + 16;
  std::locale::~locale((std::locale *)v24);
  v13 = *((_QWORD *)v9 - 3);
  v21 = v9;
  *(char **)((char *)&v21 + v13) = v15;
  v22 = 0;
  v25[0] = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base((std::ios_base *)v25);
  if ( v20 )
    byte_1C7EBA0 = 1;
  return v12;
}

