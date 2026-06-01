void __fastcall Z3_solver_from_file(__int64 a1, _QWORD *a2, __int64 a3)
{
  char v4; // al
  const char *v5; // rdi
  char *i; // rbx
  char *v7; // rax
  __int64 v8; // r12
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rax
  size_t v12; // rax
  __int64 v13; // rax
  char v15; // [rsp+1Fh] [rbp-289h]
  char v16[32]; // [rsp+30h] [rbp-278h] BYREF
  __int64 v17[2]; // [rsp+50h] [rbp-258h] BYREF
  __int64 v18; // [rsp+60h] [rbp-248h] BYREF
  int v19[2]; // [rsp+68h] [rbp-240h]
  char *v20; // [rsp+70h] [rbp-238h]
  _BYTE v21[48]; // [rsp+A8h] [rbp-200h] BYREF
  int v22[2]; // [rsp+160h] [rbp-148h] BYREF
  char v23; // [rsp+180h] [rbp-128h]
  __int64 v24; // [rsp+238h] [rbp-70h]
  __int16 v25; // [rsp+240h] [rbp-68h]
  __int128 v26; // [rsp+248h] [rbp-60h]
  __int128 v27; // [rsp+258h] [rbp-50h]

  v4 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  v15 = v4;
  if ( !v4 )
  {
    if ( a3 )
      goto LABEL_3;
LABEL_22:
    i = nullptr;
    goto LABEL_6;
  }
  sub_29D9B0(a1, (__int64)a2, a3);
  if ( !a3 )
    goto LABEL_22;
LABEL_3:
  v5 = (const char *)a3;
  for ( i = nullptr; ; i = v7 + 1 )
  {
    v7 = strchr(v5, 46);
    if ( !v7 )
      break;
    v5 = v7 + 1;
  }
LABEL_6:
  std::ios_base::ios_base((std::ios_base *)v22);
  v25 = 0;
  v26 = 0;
  *(_QWORD *)v22 = (char *)&`vtable for'std::ios + 16;
  v27 = 0;
  v8 = `VTT for'std::ifstream[1];
  v9 = `VTT for'std::ifstream[2];
  v24 = 0;
  v10 = *(_QWORD *)(v8 - 24);
  v18 = v8;
  *(_QWORD *)((char *)&v19[-2] + v10) = v9;
  *(_QWORD *)v19 = 0;
  std::ios::init();
  v18 = (__int64)&`vtable for'std::ifstream + 24;
  *(_QWORD *)v22 = (char *)&`vtable for'std::ifstream + 64;
  std::filebuf::basic_filebuf();
  std::ios::init();
  if ( std::filebuf::open() )
  {
    std::ios::clear();
    v11 = (__int64)a2;
    if ( a2[4] )
      goto LABEL_8;
  }
  else
  {
    std::ios::clear();
    v11 = (__int64)a2;
    if ( a2[4] )
      goto LABEL_8;
  }
  sub_2A74C0(a1, v11);
LABEL_8:
  if ( (v23 & 5) != 0 )
  {
    sub_24EA30(a1, 8u, nullptr);
  }
  else
  {
    if ( i )
    {
      strcpy(v16, "dimacs");
      v12 = strlen(i);
      if ( v12 == 6 )
      {
        if ( *(_DWORD *)i == 1634560356 && *((_WORD *)i + 2) == 29539 )
          goto LABEL_14;
      }
      else
      {
        qmemcpy(v17, "cnf", 3);
        if ( v12 == 3 && *(_WORD *)i == 28259 && i[2] == 102 )
        {
LABEL_14:
          sub_2B0B30(a1, (__int64)a2, (std::istream *)&v18);
          goto LABEL_17;
        }
      }
    }
    sub_2AE960(a1, a2, (__int64)&v18);
  }
LABEL_17:
  v18 = (__int64)&`vtable for'std::ifstream + 24;
  *(_QWORD *)v22 = (char *)&`vtable for'std::ifstream + 64;
  v20 = (char *)&`vtable for'std::filebuf + 16;
  std::filebuf::close();
  std::__basic_file<char>::~__basic_file();
  v20 = (char *)&`vtable for'std::streambuf + 16;
  std::locale::~locale((std::locale *)v21);
  v13 = *(_QWORD *)(v8 - 24);
  v18 = v8;
  *(_QWORD *)((char *)&v19[-2] + v13) = v9;
  *(_QWORD *)v19 = 0;
  *(_QWORD *)v22 = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base((std::ios_base *)v22);
  if ( v15 )
    byte_1C7EBA0 = 1;
}

