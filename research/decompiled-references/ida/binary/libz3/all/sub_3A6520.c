__int64 *__fastcall sub_3A6520(int a1, __int64 a2, __int64 a3)
{
  int v4; // r8d
  int v5; // r9d
  __int64 v6; // r14
  unsigned int v7; // ebp
  unsigned int *v8; // rbx
  int v9; // edx
  int v10; // eax
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // rax
  __int64 v14; // r12
  int v15; // eax
  __int64 v16; // rax
  __int64 v18; // rbp
  char *v19; // [rsp+0h] [rbp-258h]
  int v20; // [rsp+8h] [rbp-250h]
  int v21[2]; // [rsp+8h] [rbp-250h]
  __int64 v22; // [rsp+10h] [rbp-248h]
  void **v23; // [rsp+18h] [rbp-240h]
  int v24; // [rsp+20h] [rbp-238h]
  char *v25; // [rsp+28h] [rbp-230h]
  int v26; // [rsp+30h] [rbp-228h]
  __int64 *v27; // [rsp+30h] [rbp-228h]
  int v28; // [rsp+38h] [rbp-220h]
  __int64 v29; // [rsp+38h] [rbp-220h]
  int v30; // [rsp+40h] [rbp-218h]
  void *v31; // [rsp+48h] [rbp-210h] BYREF
  __int64 v32; // [rsp+50h] [rbp-208h] BYREF
  unsigned int *v33; // [rsp+58h] [rbp-200h] BYREF
  __m128i v34; // [rsp+60h] [rbp-1F8h] BYREF
  void *v35; // [rsp+70h] [rbp-1E8h] BYREF
  __int64 v36; // [rsp+80h] [rbp-1D8h] BYREF
  char v37; // [rsp+90h] [rbp-1C8h] BYREF
  char v38; // [rsp+A0h] [rbp-1B8h] BYREF
  char v39[432]; // [rsp+A8h] [rbp-1B0h] BYREF

  v26 = a1;
  v22 = a2;
  v32 = *(_QWORD *)(a2 + 8);
  sub_39B7E0(&v34, a2, a3);
  v6 = v34.m128i_i64[0];
  v7 = 0;
  v8 = nullptr;
  v28 = v34.m128i_i32[2];
  v9 = *(_DWORD *)(v34.m128i_i64[0] + 32);
  v19 = &v37;
  v25 = &v38;
  v23 = &v35;
  if ( v9 )
  {
    do
    {
      std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(v19);
      sub_39A600((__int64)v25, *(const char **)(a3 + 16));
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      std::stringbuf::str(v23, v39);
      sub_180C5A0(&v31, v35);
      if ( v35 != &v36 )
        operator delete(v35, v36 + 1);
      *(_QWORD *)v21 = *(_QWORD *)(v22 + 8);
      v10 = sub_15E3510(*(_QWORD *)v21, &v31, 0, 0, *(_QWORD *)(v6 + 8LL * v7 + 48), 0);
      v13 = sub_15DC610(
              v21[0],
              v10,
              0,
              0,
              v11,
              v12,
              (int)v19,
              v21[0],
              v22,
              (int)v23,
              v24,
              (char)v25,
              v26,
              v28,
              v30,
              v31);
      v14 = v13;
      if ( v13 )
        ++*(_DWORD *)(v13 + 8);
      if ( !v8 || (v15 = *(v8 - 1), v15 == *(v8 - 2)) )
      {
        v33 = v8;
        sub_23A6F0(&v33);
        v8 = v33;
        v15 = *(v33 - 1);
      }
      ++v7;
      *(_QWORD *)&v8[2 * v15] = v14;
      *(v8 - 1) = v15 + 1;
      std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream();
    }
    while ( v7 < *(_DWORD *)(v6 + 32) );
    v9 = *(v8 - 1);
    v18 = *(_QWORD *)(v22 + 8);
  }
  else
  {
    v18 = *(_QWORD *)(a2 + 8);
  }
  v16 = sub_15DC610(v18, v6, v9, (int)v8, v4, v5, (int)v19, v20, v22, (int)v23, v24, (char)v25, v26, v28, v30, v31);
  *v27 = v16;
  v27[1] = v18;
  if ( v16 )
    ++*(_DWORD *)(v16 + 8);
  sub_3993F0(v6, v29);
  v33 = v8;
  sub_2334C0(&v32);
  return v27;
}

