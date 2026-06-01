__int64 __fastcall Z3_fixedpoint_from_file(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // bp
  __int64 v4; // rbx
  __int64 v5; // r15
  __int64 v6; // rax
  __int64 v7; // rax
  _QWORD *v9; // rax
  __int64 v10; // [rsp+10h] [rbp-258h]
  int v11[2]; // [rsp+20h] [rbp-248h] BYREF
  int v12[2]; // [rsp+28h] [rbp-240h]
  char *v13; // [rsp+30h] [rbp-238h]
  _BYTE v14[48]; // [rsp+68h] [rbp-200h] BYREF
  _QWORD v15[4]; // [rsp+120h] [rbp-148h] BYREF
  char v16; // [rsp+140h] [rbp-128h]
  __int64 v17; // [rsp+1F8h] [rbp-70h]
  __int16 v18; // [rsp+200h] [rbp-68h]
  __int128 v19; // [rsp+208h] [rbp-60h]
  __int128 v20; // [rsp+218h] [rbp-50h]

  v3 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v3 )
    sub_2A0380(a1, a2, a3);
  std::ios_base::ios_base((std::ios_base *)v15);
  v18 = 0;
  v19 = 0;
  v15[0] = (char *)&`vtable for'std::ios + 16;
  v20 = 0;
  v4 = `VTT for'std::ifstream[1];
  v5 = `VTT for'std::ifstream[2];
  v17 = 0;
  v6 = *(_QWORD *)(v4 - 24);
  *(_QWORD *)v11 = v4;
  *(_QWORD *)((char *)v11 + v6) = v5;
  *(_QWORD *)v12 = 0;
  std::ios::init();
  *(_QWORD *)v11 = (char *)&`vtable for'std::ifstream + 24;
  v15[0] = (char *)&`vtable for'std::ifstream + 64;
  std::filebuf::basic_filebuf();
  std::ios::init();
  std::filebuf::open();
  std::ios::clear();
  if ( (v16 & 5) != 0 )
  {
    sub_24EA30(a1, 4u, nullptr);
    if ( v3 )
      sub_2BB620(0);
    v10 = 0;
  }
  else
  {
    v9 = sub_283190(a1, a2, (__int64)v11);
    v10 = (__int64)v9;
    if ( v3 )
      sub_2BB620(v9);
  }
  *(_QWORD *)v11 = (char *)&`vtable for'std::ifstream + 24;
  v15[0] = (char *)&`vtable for'std::ifstream + 64;
  v13 = (char *)&`vtable for'std::filebuf + 16;
  std::filebuf::close();
  std::__basic_file<char>::~__basic_file();
  v13 = (char *)&`vtable for'std::streambuf + 16;
  std::locale::~locale((std::locale *)v14);
  v7 = *(_QWORD *)(v4 - 24);
  *(_QWORD *)v11 = v4;
  *(_QWORD *)((char *)v11 + v7) = v5;
  *(_QWORD *)v12 = 0;
  v15[0] = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base((std::ios_base *)v15);
  if ( v3 )
    byte_1C7EBA0 = 1;
  return v10;
}

