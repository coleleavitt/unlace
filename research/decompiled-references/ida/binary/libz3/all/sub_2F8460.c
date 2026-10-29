void __fastcall sub_2F8460(__int64 a1, _QWORD *a2)
{
  void (***v3)(void); // r12
  char v4; // r15
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rax
  _QWORD *v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // rcx
  bool v11; // zf
  char v12; // bp
  __int64 v13; // rdx
  __int64 v14; // rcx
  void (__fastcall ***v15)(void *); // r12
  __int64 v16; // rax
  void (***v17)(void); // r12
  __int64 v18; // rcx
  _QWORD *v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // rax
  char v22; // [rsp+Fh] [rbp-419h]
  __int64 v23; // [rsp+20h] [rbp-408h]
  int v24[2]; // [rsp+38h] [rbp-3F0h] BYREF
  __int64 v25; // [rsp+40h] [rbp-3E8h]
  char v26[8]; // [rsp+48h] [rbp-3E0h] BYREF
  _QWORD v27[4]; // [rsp+50h] [rbp-3D8h] BYREF
  char v28[8]; // [rsp+70h] [rbp-3B8h] BYREF
  char v29[376]; // [rsp+78h] [rbp-3B0h] BYREF
  void (***v30)(void); // [rsp+1F0h] [rbp-238h] BYREF
  _QWORD v31[4]; // [rsp+2E8h] [rbp-140h] BYREF
  char v32; // [rsp+308h] [rbp-120h]
  __int64 v33; // [rsp+3C0h] [rbp-68h]
  __int16 v34; // [rsp+3C8h] [rbp-60h]
  __int128 v35; // [rsp+3D0h] [rbp-58h]
  __int128 v36; // [rsp+3E0h] [rbp-48h]

  if ( *a2 )
    ++*(_DWORD *)(*a2 + 16LL);
  sub_2EB6D0(*(void (****)(void))(a1 + 616));
  *(_QWORD *)(a1 + 616) = *a2;
  v25 = a1 + 288;
  sub_17F9A60(v26, "opt");
  sub_180C5A0(&v30, "");
  v3 = (void (***)(void))sub_185A820(a1 + 288, "solution_prefix", v26, &v30);
  v22 = sub_1859630(a1 + 288, "dump_models", v26, 0);
  if ( !v3 || (sub_180C5A0(&v30, ""), v4 = 1, v30 == v3) )
  {
    if ( !v22 )
      goto LABEL_12;
    v5 = *a2;
    v4 = 0;
    if ( !*a2 )
      goto LABEL_26;
  }
  else
  {
    v5 = *a2;
    if ( !*a2 )
      goto LABEL_26;
  }
  v6 = sub_1377B20(v5);
  *(_QWORD *)v24 = v6;
  if ( v6 )
    ++*(_DWORD *)(v6 + 16);
  (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)a1 + 176LL))(a1, v24);
  if ( v4 )
  {
    std::ostringstream::basic_ostringstream(v28);
    if ( ((unsigned __int8)v3 & 7) != 0 )
    {
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::operator<<();
    }
    else
    {
      if ( v3 )
        strlen((const char *)v3);
      std::__ostream_insert<char,std::char_traits<char>>();
    }
    ++*(_DWORD *)(a1 + 648);
    v16 = std::ostream::_M_insert<unsigned long>();
    sub_2EB4A0(v16, ".smt2");
    std::stringbuf::str(v27, v29);
    std::ios_base::ios_base((std::ios_base *)v31);
    v35 = 0;
    v36 = 0;
    v31[0] = (char *)&`vtable for'std::ios + 16;
    v34 = 0;
    v33 = 0;
    v17 = (void (***)(void))`VTT for'std::ofstream[1];
    v18 = (__int64)*(v17 - 3);
    v30 = v17;
    v19 = (_QWORD *)((char *)v31 + v18 + 232);
    v20 = `VTT for'std::ofstream[2];
    *v19 = v20;
    v23 = v20;
    std::ios::init();
    v30 = (void (***)(void))((char *)&`vtable for'std::ofstream + 24);
    v31[0] = (char *)&`vtable for'std::ofstream + 64;
    std::filebuf::basic_filebuf();
    std::ios::init();
    std::filebuf::open();
    std::ios::clear();
    sub_233E40((__int64)v27);
    if ( (v32 & 5) == 0 )
    {
      sub_13525A0((std::ostream *)&v30, v24[0]);
      if ( !std::filebuf::close() )
        std::ios::clear();
    }
    v30 = (void (***)(void))((char *)&`vtable for'std::ofstream + 24);
    v31[0] = (char *)&`vtable for'std::ofstream + 64;
    std::filebuf::~filebuf();
    v21 = (__int64)*(v17 - 3);
    v30 = v17;
    *(_QWORD *)((char *)v31 + v21 + 232) = v23;
    v31[0] = (char *)&`vtable for'std::ios + 16;
    std::ios_base::~ios_base((std::ios_base *)v31);
    std::ostringstream::~ostringstream();
  }
  if ( v22 )
    sub_13525A0((std::ostream *)&std::cout, v24[0]);
  sub_2EB6D0(*(void (****)(void))v24);
LABEL_12:
  if ( *(_QWORD *)(a1 + 144) && *a2 )
  {
    v7 = sub_1377B20(*a2);
    v30 = (void (***)(void))v7;
    if ( v7 )
      ++*(_DWORD *)(v7 + 16);
    v8 = *(_QWORD **)(a1 + 640);
    if ( v8 && (v9 = *((unsigned int *)v8 - 1), (_DWORD)v9) )
    {
      v10 = &v8[v9];
      while ( v7 != *v8 )
      {
        if ( v10 == ++v8 )
          goto LABEL_30;
      }
    }
    else
    {
LABEL_30:
      (*(void (__fastcall **)(__int64, void (****)(void)))(*(_QWORD *)a1 + 176LL))(a1, &v30);
    }
    v11 = *(_QWORD *)(a1 + 144) == 0;
    v12 = *(_BYTE *)(a1 + 160);
    *(_BYTE *)(a1 + 160) = 1;
    if ( v11 )
      std::__throw_bad_function_call();
    (*(void (__fastcall **)(__int64, __int64, void (****)(void), _QWORD *))(a1 + 152))(a1 + 128, a1 + 96, &v30, v10);
    v13 = *(_QWORD *)(a1 + 640);
    v14 = (unsigned int)(*(_DWORD *)(v13 - 4) - 1);
    v15 = *(void (__fastcall ****)(void *))(v13 + 8 * v14);
    *(_DWORD *)(v13 - 4) = v14;
    if ( v15 )
    {
      v11 = (*((_DWORD *)v15 + 4))-- == 1;
      if ( v11 )
      {
        (**v15)(v15);
        sub_186B220(v15);
      }
    }
    *(_BYTE *)(a1 + 160) = v12;
    sub_2EB6D0(v30);
  }
LABEL_26:
  sub_18572D0(v26);
}

